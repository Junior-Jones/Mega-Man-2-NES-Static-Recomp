#include "internal/mm2_direct_core_internal.h"

static const uint8_t apu_length_table[32] = {
    10,254,20,2,40,4,80,6,160,8,60,10,14,12,26,14,
    12,16,24,18,48,20,96,22,192,24,72,26,16,28,32,30
};

static const uint16_t apu_dmc_period_ntsc[16] = {
    428u, 380u, 340u, 320u, 286u, 254u, 226u, 214u,
    190u, 160u, 142u, 128u, 106u, 84u, 72u, 54u
};

static const uint16_t apu_noise_period_ntsc[16] = {
    4u, 8u, 16u, 32u, 64u, 96u, 128u, 160u,
    202u, 254u, 380u, 508u, 762u, 1016u, 2034u, 4068u
};

static const uint8_t apu_pulse_duty[4][8] = {
    {0u,0u,0u,0u,0u,0u,0u,1u},
    {0u,0u,0u,0u,0u,0u,1u,1u},
    {0u,0u,0u,0u,1u,1u,1u,1u},
    {1u,1u,1u,1u,1u,1u,0u,0u}
};

static const uint8_t apu_triangle_wave[32] = {
    15u,14u,13u,12u,11u,10u,9u,8u,7u,6u,5u,4u,3u,2u,1u,0u,
    0u,1u,2u,3u,4u,5u,6u,7u,8u,9u,10u,11u,12u,13u,14u,15u
};

static uint16_t apu_pulse_period(const MM2DirectCore *c, unsigned channel) {
    unsigned base = channel * 4u;
    return (uint16_t)(c->apu_io[base + 2u] |
        ((uint16_t)(c->apu_io[base + 3u] & 7u) << 8));
}

static void apu_set_pulse_period(MM2DirectCore *c, unsigned channel,
                                 uint16_t period) {
    unsigned base = channel * 4u;
    c->apu_io[base + 2u] = (uint8_t)period;
    c->apu_io[base + 3u] = (uint8_t)((c->apu_io[base + 3u] & 0xF8u) |
                                     ((period >> 8) & 7u));
}

static uint16_t apu_sweep_target(const MM2DirectCore *c, unsigned channel) {
    unsigned reg = channel * 4u + 1u;
    unsigned shift = c->apu_io[reg] & 7u;
    uint16_t period = apu_pulse_period(c, channel);
    uint16_t change = (uint16_t)(period >> shift);
    if ((c->apu_io[reg] & 0x08u) != 0u)
        return (uint16_t)(period - change - (channel == 0u ? 1u : 0u));
    return (uint16_t)(period + change);
}

static void apu_clock_sweep(MM2DirectCore *c, unsigned channel) {
    unsigned reg = channel * 4u + 1u;
    unsigned period = ((c->apu_io[reg] >> 4) & 7u) + 1u;
    c->apu_sweep_divider[channel]--;
    if (c->apu_sweep_divider[channel] == 0u) {
        uint16_t current = apu_pulse_period(c, channel);
        uint16_t target = apu_sweep_target(c, channel);
        if ((c->apu_io[reg] & 0x80u) != 0u &&
            (c->apu_io[reg] & 7u) != 0u && current >= 8u &&
            target <= 0x07FFu)
            apu_set_pulse_period(c, channel, target);
        c->apu_sweep_divider[channel] = (uint8_t)period;
    }
    if (c->apu_sweep_reload[channel]) {
        c->apu_sweep_divider[channel] = (uint8_t)period;
        c->apu_sweep_reload[channel] = 0u;
    }
}

static void apu_clock_envelope(MM2DirectCore *c, unsigned state,
                               unsigned reg) {
    unsigned period = c->apu_io[reg] & 15u;
    if (c->apu_envelope_start[state]) {
        c->apu_envelope_start[state] = 0u;
        c->apu_envelope_decay[state] = 15u;
        c->apu_envelope_divider[state] = (uint8_t)period;
    } else if (c->apu_envelope_divider[state] != 0u) {
        c->apu_envelope_divider[state]--;
    } else {
        c->apu_envelope_divider[state] = (uint8_t)period;
        if (c->apu_envelope_decay[state] != 0u)
            c->apu_envelope_decay[state]--;
        else if ((c->apu_io[reg] & 0x20u) != 0u)
            c->apu_envelope_decay[state] = 15u;
    }
}

static void apu_clock_quarter(MM2DirectCore *c) {
    apu_clock_envelope(c, 0u, 0x00u);
    apu_clock_envelope(c, 1u, 0x04u);
    apu_clock_envelope(c, 2u, 0x0Cu);
    if (c->apu_triangle_reload)
        c->apu_triangle_linear = c->apu_io[0x08u] & 0x7Fu;
    else if (c->apu_triangle_linear != 0u)
        c->apu_triangle_linear--;
    if ((c->apu_io[0x08u] & 0x80u) == 0u) c->apu_triangle_reload = 0u;
}

static void apu_clock_half(MM2DirectCore *c) {
    static const uint8_t halt_reg[4] = {0x00u, 0x04u, 0x08u, 0x0Cu};
    unsigned channel;
    for (channel = 0u; channel < 4u; ++channel) {
        if (c->apu_length[channel] != 0u &&
            (c->apu_io[halt_reg[channel]] & 0x20u) == 0u)
            c->apu_length[channel]--;
    }
    apu_clock_sweep(c, 0u);
    apu_clock_sweep(c, 1u);
}

static unsigned apu_volume(const MM2DirectCore *c, unsigned state,
                           unsigned reg) {
    return (c->apu_io[reg] & 0x10u) != 0u
        ? c->apu_io[reg] & 15u : c->apu_envelope_decay[state];
}

static unsigned apu_pulse_output(const MM2DirectCore *c, unsigned channel) {
    unsigned base = channel * 4u;
    unsigned period = apu_pulse_period(c, channel);
    uint16_t target = apu_sweep_target(c, channel);
    if ((c->apu_io[0x15u] & (1u << channel)) == 0u ||
        c->apu_length[channel] == 0u || period < 8u ||
        ((c->apu_io[base + 1u] & 0x08u) == 0u && target > 0x07FFu) ||
        !apu_pulse_duty[c->apu_io[base] >> 6]
                       [c->apu_pulse_sequence[channel]])
        return 0u;
    return apu_volume(c, channel, base);
}

int16_t apu_current_mixed_sample(MM2DirectCore *c) {
    unsigned pulse1 = apu_pulse_output(c, 0u);
    unsigned pulse2 = apu_pulse_output(c, 1u);
    unsigned triangle = c->apu_triangle_output;
    unsigned noise = 0u;
    unsigned square_volume = 0u;
    unsigned tnd_volume = 0u;
    double square_output = (double)(pulse1 + pulse2);
    double tnd_output;
    unsigned sample;
    if ((c->apu_io[0x15] & 8u) != 0u && c->apu_length[3] != 0u) {
        if ((c->apu_noise_lfsr & 1u) == 0u)
            noise = apu_volume(c, 2u, 0x0Cu);
    }
    if (square_output != 0.0)
        square_volume = (unsigned)((95.88 * 5000.0) /
                                   (8128.0 / square_output + 100.0));
    tnd_output = (double)c->apu_dmc_output +
                 2.7516713261 * (double)triangle +
                 1.8493587125 * (double)noise;
    if (tnd_output != 0.0)
        tnd_volume = (unsigned)((159.79 * 5000.0) /
                                (22638.0 / tnd_output + 100.0));
    sample = (square_volume + tnd_volume) * 4u;
    if (sample > 32767u) sample = 32767u;
    return (int16_t)sample;
}

static void apu_clock_channel_timers(MM2DirectCore *c) {
    unsigned channel;
    for (channel = 0u; channel < 2u; ++channel) {
        if (c->apu_pulse_timer[channel] == 0u) {
            c->apu_pulse_timer[channel] =
                (uint16_t)(apu_pulse_period(c, channel) * 2u + 1u);
            c->apu_pulse_sequence[channel] =
                (uint8_t)((c->apu_pulse_sequence[channel] - 1u) & 7u);
            c->apu_pulse_phase[channel]++;
        } else {
            c->apu_pulse_timer[channel]--;
        }
    }
    if (c->apu_triangle_timer == 0u) {
        c->apu_triangle_timer = (uint16_t)(c->apu_io[0x0Au] |
            ((uint16_t)(c->apu_io[0x0Bu] & 7u) << 8));
        if ((c->apu_io[0x15u] & 4u) != 0u && c->apu_length[2] != 0u &&
            c->apu_triangle_linear != 0u) {
            c->apu_triangle_sequence =
                (uint8_t)((c->apu_triangle_sequence + 1u) & 31u);
            c->apu_triangle_output =
                apu_triangle_wave[c->apu_triangle_sequence];
            c->apu_triangle_phase++;
        }
    } else {
        c->apu_triangle_timer--;
    }
    if (c->apu_noise_timer == 0u) {
        unsigned tap = (c->apu_io[0x0Eu] & 0x80u) != 0u ? 6u : 1u;
        unsigned feedback = (c->apu_noise_lfsr ^
                             (c->apu_noise_lfsr >> tap)) & 1u;
        c->apu_noise_timer =
            (uint16_t)(apu_noise_period_ntsc[c->apu_io[0x0Eu] & 15u] - 1u);
        c->apu_noise_lfsr =
            (uint16_t)((c->apu_noise_lfsr >> 1) | (feedback << 14));
    } else {
        c->apu_noise_timer--;
    }
}

static void pcm_output_push(MM2DirectCore *c, int16_t sample) {
    const size_t capacity = sizeof(c->pcm_output) / sizeof(c->pcm_output[0]);
    if (c->pcm_output_count == capacity) {
        c->pcm_output_read = (c->pcm_output_read + 1u) % capacity;
        c->pcm_output_count--;
        c->pcm_output_dropped++;
        c->pcm_output_overflowed = 1u;
    }
    c->pcm_output[c->pcm_output_write] = sample;
    c->pcm_output_write = (c->pcm_output_write + 1u) % capacity;
    c->pcm_output_count++;
}

static void apu_record_sample(MM2DirectCore *c, int16_t sample) {
    uint16_t bits = (uint16_t)sample;
    c->pcm_samples[c->pcm_total_samples %
        (sizeof(c->pcm_samples) / sizeof(c->pcm_samples[0]))] = sample;
    pcm_output_push(c, sample);
    if (c->pcm_sample_count <
        sizeof(c->pcm_samples) / sizeof(c->pcm_samples[0]))
        c->pcm_sample_count++;
    c->pcm_total_samples++;
    c->pcm_dc_sum += sample;
    c->pcm_abs_sum +=
        (uint64_t)(sample < 0 ? -(int32_t)sample : sample);
    c->pcm_delta_abs_sum += (uint64_t)(sample >= c->pcm_previous_sample
        ? (int32_t)sample - c->pcm_previous_sample
        : (int32_t)c->pcm_previous_sample - sample);
    if ((sample < 0 && c->pcm_previous_sample >= 0) ||
        (sample >= 0 && c->pcm_previous_sample < 0))
        c->pcm_zero_crossings++;
    c->pcm_previous_sample = sample;
    if (sample > c->pcm_peak) c->pcm_peak = sample;
    if (-sample > c->pcm_peak && sample != (int16_t)-32768)
        c->pcm_peak = (int16_t)-sample;
    c->pcm_hash ^= (uint8_t)bits;
    c->pcm_hash *= 1099511628211ull;
    c->pcm_hash ^= (uint8_t)(bits >> 8);
    c->pcm_hash *= 1099511628211ull;
}

static void apu_resample_cycle(MM2DirectCore *c) {
    c->apu_mix_accumulator += apu_current_mixed_sample(c);
    c->apu_mix_accumulator_cycles++;
    c->apu_sample_cycle_remainder += 44100u;
    if (c->apu_sample_cycle_remainder >= 1789773u) {
        int16_t sample = (int16_t)(c->apu_mix_accumulator /
                                  c->apu_mix_accumulator_cycles);
        c->apu_sample_cycle_remainder -= 1789773u;
        c->apu_mix_accumulator = 0;
        c->apu_mix_accumulator_cycles = 0u;
        apu_record_sample(c, sample);
    }
}

static void apu_dmc_restart(MM2DirectCore *c) {
    c->apu_dmc_address =
        (uint16_t)(0xC000u | ((uint16_t)c->apu_io[0x12u] << 6));
    c->apu_dmc_bytes_remaining =
        (uint16_t)(((uint16_t)c->apu_io[0x13u] << 4) | 1u);
}

static uint64_t apu_dmc_fetch(MM2DirectCore *c) {
    if (!c->apu_dmc_buffer_empty || c->apu_dmc_bytes_remaining == 0u)
        return 0u;
    c->apu_dmc_sample_buffer = read8(c, c->apu_dmc_address);
    c->apu_dmc_buffer_empty = 0u;
    c->apu_dmc_address++;
    if (c->apu_dmc_address == 0u) c->apu_dmc_address = 0x8000u;
    c->apu_dmc_bytes_remaining--;
    c->apu_dmc_fetches++;
    c->apu_dmc_stall_cycles += 4u;
    if (c->apu_dmc_bytes_remaining == 0u) {
        if ((c->apu_io[0x10u] & 0x40u) != 0u)
            apu_dmc_restart(c);
        else if ((c->apu_io[0x10u] & 0x80u) != 0u)
            c->apu_dmc_irq = 1u;
    }
    return 4u;
}

static void apu_dmc_clock_output(MM2DirectCore *c) {
    if (!c->apu_dmc_silence) {
        if ((c->apu_dmc_shift & 1u) != 0u) {
            if (c->apu_dmc_output <= 125u) c->apu_dmc_output += 2u;
        } else if (c->apu_dmc_output >= 2u) {
            c->apu_dmc_output -= 2u;
        }
    }
    c->apu_dmc_shift >>= 1;
    if (c->apu_dmc_bits_remaining != 0u)
        c->apu_dmc_bits_remaining--;
    if (c->apu_dmc_bits_remaining == 0u) {
        c->apu_dmc_bits_remaining = 8u;
        if (c->apu_dmc_buffer_empty) {
            c->apu_dmc_silence = 1u;
        } else {
            c->apu_dmc_silence = 0u;
            c->apu_dmc_shift = c->apu_dmc_sample_buffer;
            c->apu_dmc_buffer_empty = 1u;
        }
    }
}

static void apu_frame_quarter_half(MM2DirectCore *c) {
    apu_clock_quarter(c);
    apu_clock_half(c);
}

static void apu_frame_assert_irq(MM2DirectCore *c) {
    if (!c->apu_frame_irq_inhibit) c->apu_frame_irq = 1u;
}

static void apu_frame_apply_pending_write(MM2DirectCore *c) {
    if (!c->apu_frame_write_pending) return;
    if (c->apu_frame_write_delay != 0u) c->apu_frame_write_delay--;
    if (c->apu_frame_write_delay != 0u) return;
    c->apu_frame_write_pending = 0u;
    c->apu_frame_mode = (uint8_t)((c->apu_frame_write_value >> 7) & 1u);
    c->apu_frame_cycle = 0u;
    if (c->apu_frame_mode && c->apu_frame_tick_block == 0u) {
        apu_frame_quarter_half(c);
        c->apu_frame_tick_block = 2u;
    }
}

static void apu_frame_clock(MM2DirectCore *c) {
    uint8_t quarter = 0u;
    uint8_t half = 0u;
    c->apu_frame_cycle++;
    if (!c->apu_frame_mode) {
        if (c->apu_frame_cycle == 7457u || c->apu_frame_cycle == 22371u)
            quarter = 1u;
        else if (c->apu_frame_cycle == 14913u ||
                 c->apu_frame_cycle == 29829u)
            quarter = half = 1u;
        if (c->apu_frame_cycle >= 29828u) apu_frame_assert_irq(c);
        if (c->apu_frame_cycle >= 29830u) c->apu_frame_cycle = 0u;
    } else {
        if (c->apu_frame_cycle == 7457u || c->apu_frame_cycle == 22371u)
            quarter = 1u;
        else if (c->apu_frame_cycle == 14913u ||
                 c->apu_frame_cycle == 37281u)
            quarter = half = 1u;
        if (c->apu_frame_cycle >= 37282u) c->apu_frame_cycle = 0u;
    }
    if (quarter && c->apu_frame_tick_block == 0u) {
        apu_clock_quarter(c);
        if (half) apu_clock_half(c);
        c->apu_frame_tick_block = 2u;
    }
    apu_frame_apply_pending_write(c);
    if (c->apu_frame_tick_block != 0u) c->apu_frame_tick_block--;
}

uint64_t apu_advance(MM2DirectCore *c, uint64_t cpu_cycles) {
    uint64_t remaining = cpu_cycles;
    uint64_t advanced = cpu_cycles;
    while (remaining-- != 0u) {
        uint64_t stalls = apu_dmc_fetch(c);
        if (stalls != 0u) {
            c->cpu_cycles += stalls;
            remaining += stalls;
            advanced += stalls;
        }
        if (c->apu_dmc_timer == 0u) {
            c->apu_dmc_timer =
                (uint16_t)(apu_dmc_period_ntsc[c->apu_io[0x10u] & 0x0Fu] - 1u);
            apu_dmc_clock_output(c);
        } else {
            c->apu_dmc_timer--;
        }
        apu_clock_channel_timers(c);
        apu_frame_clock(c);
        apu_resample_cycle(c);
    }
    return advanced;
}

uint8_t mm2_apu_read_status(MM2DirectCore *c) {
    uint8_t status = 0u;
    unsigned channel;
    for (channel = 0u; channel < 4u; ++channel) {
        if (c->apu_length[channel] != 0u)
            status |= (uint8_t)(1u << channel);
    }
    if (c->apu_dmc_bytes_remaining != 0u) status |= 0x10u;
    if (c->apu_frame_irq) status |= 0x40u;
    if (c->apu_dmc_irq) status |= 0x80u;
    c->apu_frame_irq = 0u;
    return status;
}

void mm2_apu_write_register(MM2DirectCore *c, uint16_t a, uint8_t v) {
    c->apu_io[a - 0x4000u] = v;
    if (a == 0x4001u || a == 0x4005u) {
        c->apu_sweep_reload[(a - 0x4001u) / 4u] = 1u;
    } else if (a == 0x4003u || a == 0x4007u ||
               a == 0x400Bu || a == 0x400Fu) {
        unsigned channel = (unsigned)((a - 0x4003u) / 4u);
        if ((c->apu_io[0x15u] & (1u << channel)) != 0u)
            c->apu_length[channel] = apu_length_table[v >> 3];
        if (channel < 2u) {
            c->apu_envelope_start[channel] = 1u;
            c->apu_pulse_sequence[channel] = 0u;
        }
        else if (channel == 2u) c->apu_triangle_reload = 1u;
        else c->apu_envelope_start[2] = 1u;
    } else if (a == 0x4015u) {
        unsigned channel;
        for (channel = 0u; channel < 4u; ++channel) {
            if ((v & (1u << channel)) == 0u) c->apu_length[channel] = 0u;
        }
        if ((v & 0x10u) == 0u) c->apu_dmc_bytes_remaining = 0u;
        else if (c->apu_dmc_bytes_remaining == 0u) apu_dmc_restart(c);
        c->apu_dmc_irq = 0u;
    } else if (a == 0x4017u) {
        c->apu_frame_write_pending = 1u;
        c->apu_frame_write_value = v;
        c->apu_frame_write_delay =
            (uint8_t)((c->cpu_cycles & 1u) != 0u ? 4u : 3u);
        c->apu_frame_irq_inhibit = (uint8_t)((v >> 6) & 1u);
        if (c->apu_frame_irq_inhibit) c->apu_frame_irq = 0u;
    } else if (a == 0x4010u) {
        if ((v & 0x80u) == 0u) c->apu_dmc_irq = 0u;
    } else if (a == 0x4011u) {
        c->apu_dmc_output = v & 0x7Fu;
    }
    if (c->apu_write_count <
        sizeof(c->apu_writes) / sizeof(c->apu_writes[0])) {
        MM2ApuWriteEvent *event = &c->apu_writes[c->apu_write_count++];
        event->cpu_cycle = c->cpu_cycles;
        event->address = a;
        event->value = v;
    } else {
        c->apu_write_overflow++;
    }
}
