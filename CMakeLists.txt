cmake_minimum_required(VERSION 3.20)
project(MegaMan2NESStaticRecomp111 C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
if(MSVC)
    # Keep the Windows package portable: no Visual C++ runtime DLL is required
    # beside Launcher.exe on Windows 10 or Windows 11.
    set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
endif()
if(WIN32)
    include(FetchContent)
    set(SDL_SHARED OFF CACHE BOOL "" FORCE)
    set(SDL_STATIC ON CACHE BOOL "" FORCE)
    set(SDL_TEST_LIBRARY OFF CACHE BOOL "" FORCE)
    set(SDL_TESTS OFF CACHE BOOL "" FORCE)
    set(SDL_EXAMPLES OFF CACHE BOOL "" FORCE)
    set(SDL_INSTALL OFF CACHE BOOL "" FORCE)
    FetchContent_Declare(mm2_sdl
        URL "https://github.com/libsdl-org/SDL/archive/refs/tags/release-3.4.10.zip"
        URL_HASH "SHA256=30DCE54890B17544A35E4521274762016AF6ED59C2183B896EF5E6693E97FB6C"
        DOWNLOAD_EXTRACT_TIMESTAMP TRUE)
    FetchContent_MakeAvailable(mm2_sdl)
endif()
include(CTest)
find_package(Python3 COMPONENTS Interpreter REQUIRED)
set(MM2_TEST_ROM "" CACHE FILEPATH "Exact Mega Man 2 (USA) ROM used only for local tests")
set(MM2_NESRECOMP_EXE "" CACHE FILEPATH "Exact pinned NESRecomp executable used only for regeneration tests")
set(MM2_PROJECT_TEMP "" CACHE PATH "Project-local Temp directory for upstream regeneration")

add_library(mm2-foundation STATIC
    src/common/mm2_hash.c
    src/common/mm2_rom.c
    src/common/mm2_foundation_checks.c
    src/mapper/mm2_mmc1.c
    generated/proof-v02/mm2_static_seed.c)
target_include_directories(mm2-foundation PUBLIC src/common src/mapper generated/proof-v02)

add_library(mm2-direct-core STATIC
    src/runtime/mm2_direct_core.c
    src/runtime/mm2_cpu.c
    src/runtime/mm2_bus.c
    src/runtime/mm2_ppu.c
    src/runtime/mm2_apu.c
    src/runtime/mm2_scheduler.c
    src/runtime/mm2_snapshot.c
    generated/core-v01/mm2_direct_core_dispatch.c
    generated/core-v01/mm2_direct_core_bank_09.c
    generated/core-v01/mm2_direct_core_bank_0b.c
    generated/core-v01/mm2_direct_core_bank_0c.c
    generated/core-v01/mm2_direct_core_bank_0d.c
    generated/core-v01/mm2_direct_core_bank_0e.c
    generated/core-v01/mm2_direct_core_bank_0f.c)
target_include_directories(mm2-direct-core PUBLIC src/runtime src/common src/mapper generated/core-v01)
target_link_libraries(mm2-direct-core PUBLIC mm2-foundation)

add_library(mm2-route-support STATIC src/tools/mm2_route_support.c)
target_include_directories(mm2-route-support PUBLIC src/tools)
target_link_libraries(mm2-route-support PUBLIC mm2-direct-core)

add_executable(mm2-rom-audit src/tools/mm2_rom_audit.c)
target_link_libraries(mm2-rom-audit PRIVATE mm2-foundation)
add_executable(mm2-mmc1-selftest src/tools/mm2_mmc1_selftest.c)
target_link_libraries(mm2-mmc1-selftest PRIVATE mm2-foundation)
add_executable(mm2-static-link-probe src/tools/mm2_static_link_probe.c)
target_link_libraries(mm2-static-link-probe PRIVATE mm2-foundation)
add_executable(mm2-headless src/tools/mm2_headless.c)
target_link_libraries(mm2-headless PRIVATE mm2-route-support)
add_executable(mm2-direct-core-selftest src/tools/mm2_direct_core_selftest.c)
target_link_libraries(mm2-direct-core-selftest PRIVATE mm2-direct-core)
add_executable(mm2-snapshot-selftest src/tools/mm2_snapshot_selftest.c)
target_link_libraries(mm2-snapshot-selftest PRIVATE mm2-direct-core)
add_executable(mm2-runtime-hook-selftest src/tools/mm2_runtime_hook_selftest.c)
target_link_libraries(mm2-runtime-hook-selftest PRIVATE mm2-direct-core)
add_executable(mm2-shared-frame-selftest src/tools/mm2_shared_frame_selftest.c)
target_link_libraries(mm2-shared-frame-selftest PRIVATE mm2-route-support)
add_executable(mm2-native-route src/tools/mm2_native_route.c)
target_link_libraries(mm2-native-route PRIVATE mm2-route-support)
add_executable(mm2-milestone09-route src/tools/mm2_milestone09_route.c)
target_link_libraries(mm2-milestone09-route PRIVATE mm2-route-support)
add_executable(mm2-milestone10-route src/tools/mm2_milestone10_route.c)
target_link_libraries(mm2-milestone10-route PRIVATE mm2-route-support)
add_executable(mm2-milestone12-route src/tools/mm2_milestone12_route.c)
target_link_libraries(mm2-milestone12-route PRIVATE mm2-route-support)
add_executable(mm2-stage-matrix-route src/tools/mm2_stage_matrix_route.c)
target_link_libraries(mm2-stage-matrix-route PRIVATE mm2-route-support)
add_executable(mm2-apu-accuracy-selftest src/tools/mm2_apu_accuracy_selftest.c)
target_link_libraries(mm2-apu-accuracy-selftest PRIVATE mm2-direct-core)
add_executable(mm2-ppu-accuracy-selftest src/tools/mm2_ppu_accuracy_selftest.c)
target_link_libraries(mm2-ppu-accuracy-selftest PRIVATE mm2-direct-core)
add_executable(mm2-mesen-trace src/tools/mm2_mesen_trace.c)
target_link_libraries(mm2-mesen-trace PRIVATE mm2-direct-core)
add_executable(mm2-metal-multipart-route src/tools/mm2_metal_multipart_route.c)
target_link_libraries(mm2-metal-multipart-route PRIVATE mm2-direct-core)

# Certification and state-search executables deliberately inspect or clone the
# private machine layout. Production frontends receive only the opaque public
# API propagated by mm2-direct-core.
set(MM2_INTERNAL_CORE_TOOLS
    mm2-direct-core-selftest
    mm2-runtime-hook-selftest
    mm2-apu-accuracy-selftest
    mm2-ppu-accuracy-selftest
    mm2-mesen-trace
    mm2-metal-multipart-route)
foreach(mm2_internal_tool IN LISTS MM2_INTERNAL_CORE_TOOLS)
    target_include_directories(${mm2_internal_tool} PRIVATE
        "${CMAKE_CURRENT_SOURCE_DIR}/src/runtime/internal")
endforeach()

if(WIN32)
    add_executable(mega-man-2-launcher WIN32
        src/gui/launcher_version.rc
        src/gui/mm2_windows_launcher.cpp
        src/gui/mm2_windows_live.cpp
        src/gui/mm2_audio_output_sdl3.cpp
        src/gui/mm2_video_output_sdl3.cpp
        third_party/mm2-gamepad/mm2_gamepad_input_win32.c)
    target_include_directories(mega-man-2-launcher PRIVATE
        third_party/mm2-gamepad)
    target_compile_definitions(mega-man-2-launcher PRIVATE
        WIN32_LEAN_AND_MEAN NOMINMAX)
    target_link_libraries(mega-man-2-launcher PRIVATE
        mm2-direct-core SDL3::SDL3-static comdlg32 user32 gdi32 ole32)
    set_target_properties(mega-man-2-launcher PROPERTIES
        OUTPUT_NAME "Launcher"
        RUNTIME_OUTPUT_DIRECTORY_RELEASE "${CMAKE_BINARY_DIR}/release")
    add_custom_command(TARGET mega-man-2-launcher POST_BUILD
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
            "${CMAKE_SOURCE_DIR}/README.txt"
            "$<TARGET_FILE_DIR:mega-man-2-launcher>/README.txt"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
            "${CMAKE_SOURCE_DIR}/VERSION.txt"
            "$<TARGET_FILE_DIR:mega-man-2-launcher>/VERSION.txt"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
            "${CMAKE_SOURCE_DIR}/third_party/SDL-LICENSE.txt"
            "$<TARGET_FILE_DIR:mega-man-2-launcher>/SDL-LICENSE.txt"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
            "${CMAKE_SOURCE_DIR}/third_party/gamecontrollerdb.txt"
            "$<TARGET_FILE_DIR:mega-man-2-launcher>/gamecontrollerdb.txt"
        COMMAND "${CMAKE_COMMAND}" -E make_directory
            "$<TARGET_FILE_DIR:mega-man-2-launcher>/Rom"
        COMMAND "${CMAKE_COMMAND}" -E copy_if_different
            "${CMAKE_SOURCE_DIR}/Rom/Readme.txt"
            "$<TARGET_FILE_DIR:mega-man-2-launcher>/Rom/Readme.txt")
endif()

if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    foreach(t mm2-foundation mm2-direct-core mm2-route-support mm2-rom-audit mm2-mmc1-selftest mm2-static-link-probe mm2-headless mm2-direct-core-selftest mm2-snapshot-selftest mm2-runtime-hook-selftest mm2-shared-frame-selftest mm2-native-route mm2-milestone09-route mm2-milestone10-route mm2-milestone12-route mm2-stage-matrix-route mm2-apu-accuracy-selftest mm2-ppu-accuracy-selftest mm2-mesen-trace mm2-metal-multipart-route)
        target_compile_options(${t} PRIVATE -Wall -Wextra -Werror -Wpedantic)
    endforeach()
endif()
if(TARGET mega-man-2-launcher AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(mega-man-2-launcher PRIVATE -Wall -Wextra -Werror -Wpedantic)
endif()
if(MSVC)
    add_compile_definitions(_CRT_SECURE_NO_WARNINGS)
    foreach(t mm2-foundation mm2-direct-core mm2-route-support mm2-rom-audit mm2-mmc1-selftest mm2-static-link-probe mm2-headless mm2-direct-core-selftest mm2-snapshot-selftest mm2-runtime-hook-selftest mm2-shared-frame-selftest mm2-native-route mm2-milestone09-route mm2-milestone10-route mm2-milestone12-route mm2-stage-matrix-route mm2-apu-accuracy-selftest mm2-ppu-accuracy-selftest mm2-mesen-trace mm2-metal-multipart-route mega-man-2-launcher)
        if(TARGET ${t})
            target_compile_options(${t} PRIVATE /W4 /WX /permissive-)
        endif()
    endforeach()
endif()

if(BUILD_TESTING)
    add_test(NAME mmc1-hardware-model COMMAND mm2-mmc1-selftest)
    add_test(NAME generated-static-seed-link COMMAND mm2-static-link-probe --self-test)
    add_test(NAME headless-self-test COMMAND mm2-headless --self-test)
    add_test(NAME direct-core-self-test COMMAND mm2-direct-core-selftest)
    add_test(NAME core-owned-snapshot-self-test COMMAND mm2-snapshot-selftest)
    add_test(NAME current-runtime-hook-self-test COMMAND mm2-runtime-hook-selftest)
    add_test(NAME shared-headed-headless-frame-self-test COMMAND mm2-shared-frame-selftest)
    add_test(NAME apu-timers-mixer-resampler-irq-self-test COMMAND mm2-apu-accuracy-selftest)
    add_test(NAME ppu-dot-timed-sprite-self-test COMMAND mm2-ppu-accuracy-selftest)
    add_test(NAME pinned-mesen-differential-trace
        COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_mesen_differential.py
        $<TARGET_FILE:mm2-mesen-trace>
        ${CMAKE_SOURCE_DIR}/generated/mesen-differential-v11/reference.json
        ${CMAKE_BINARY_DIR}/mesen-differential-actual.json)
    add_test(NAME direct-core-v07-structure COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_direct_core_v07.py ${CMAKE_SOURCE_DIR})
    add_test(NAME direct-core-v07-clean-regeneration COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/regenerate_direct_core_v07.py ${CMAKE_SOURCE_DIR})
    add_test(NAME proof-summary-binding COMMAND mm2-headless foundation ${CMAKE_SOURCE_DIR}/generated/proof-v02/static_proof_summary.json ${CMAKE_BINARY_DIR}/foundation-result.json)
    add_test(NAME upstream-audit-binding COMMAND mm2-headless upstream-audit ${CMAKE_SOURCE_DIR}/generated/upstream-audit-v03/upstream_audit_summary.json ${CMAKE_BINARY_DIR}/upstream-audit-result.json)
    add_test(NAME program-map-v06-binding COMMAND mm2-headless program-map ${CMAKE_SOURCE_DIR}/generated/program-map-v06/program_map_summary.json ${CMAKE_BINARY_DIR}/program-map-v06-result.json)
    add_test(NAME reviewed-generation-v06-binding COMMAND mm2-headless reviewed-generation ${CMAKE_SOURCE_DIR}/generated/reviewed-generation-v06/reviewed_generation_summary.json ${CMAKE_BINARY_DIR}/reviewed-generation-v06-result.json)
    add_test(NAME generated-proof-audit COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_static_seed.py ${CMAKE_SOURCE_DIR})
    add_test(NAME upstream-audit-structure COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_upstream_audit.py ${CMAKE_SOURCE_DIR})
    add_test(NAME program-map-v06-structure COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_program_map_v06.py ${CMAKE_SOURCE_DIR})
    add_test(NAME reviewed-generation-v06-structure COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_reviewed_generation_v06.py ${CMAKE_SOURCE_DIR})
    add_test(NAME strict-static-source-scan COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/scan_strict_static.py ${CMAKE_SOURCE_DIR})
    add_test(NAME opaque-core-boundary COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_opaque_core_boundary.py ${CMAKE_SOURCE_DIR})
    add_test(NAME unified-frame-output-api COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_frame_output_api.py ${CMAKE_SOURCE_DIR})
    add_test(NAME core-owned-snapshot-api COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_snapshot_api.py ${CMAKE_SOURCE_DIR})
    add_test(NAME current-runtime-hook-api COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_runtime_hook_api.py ${CMAKE_SOURCE_DIR})
    add_test(NAME shared-headed-headless-frame-api COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_shared_frame_path.py ${CMAKE_SOURCE_DIR})
    add_test(NAME direct-core-subsystem-boundaries COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_subsystem_modules.py ${CMAKE_SOURCE_DIR})
    add_test(NAME whole-rom-certification COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_certification_v16.py ${CMAKE_SOURCE_DIR})
    if(MM2_TEST_ROM)
        add_test(NAME static-seed-clean-regeneration COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/regenerate_static_seed.py ${CMAKE_SOURCE_DIR} ${MM2_TEST_ROM})
        add_test(NAME exact-rom-audit COMMAND mm2-rom-audit ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/rom-audit.json)
        add_test(NAME exact-rom-direct-core-smoke COMMAND mm2-direct-core-selftest ${MM2_TEST_ROM} 100000)
        add_test(NAME first-native-frame-and-apu-route COMMAND mm2-native-route ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-08-route 1000000)
        add_test(NAME title-input-sprite-pcm-route COMMAND mm2-milestone09-route ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-09-route 4000000)
        add_test(NAME controlled-gameplay-route COMMAND mm2-milestone10-route ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-10-route 60000000)
        add_test(NAME controlled-gameplay-oracle COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_milestone10_oracle.py $<TARGET_FILE:mm2-milestone10-route> ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-10-oracle ${CMAKE_SOURCE_DIR}/generated/oracle-v10/controlled_gameplay_oracle.json)
        add_test(NAME headed-screenshot-visual-oracle COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_screenshot_v11.py $<TARGET_FILE:mm2-milestone10-route> ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-11-screenshot-oracle)
        add_test(NAME visual-audio-state-oracle-matrix COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_oracle_matrix_v12.py $<TARGET_FILE:mm2-milestone12-route> ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-12-oracle-matrix ${CMAKE_SOURCE_DIR}/generated/oracle-v12/route_matrix.json)
        add_test(NAME eight-stage-load-matrix COMMAND mm2-stage-matrix-route ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-13-stage-matrix 40000000)
        add_test(NAME eight-stage-visual-oracle COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/verify_stage_matrix_v13.py $<TARGET_FILE:mm2-stage-matrix-route> ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-13-stage-oracle ${CMAKE_SOURCE_DIR}/generated/oracle-v13/eight_stage_oracle.json)
        add_test(NAME exact-apu-audio-identity COMMAND mm2-apu-accuracy-selftest ${MM2_TEST_ROM})
        add_test(NAME metal-man-multipart-route COMMAND mm2-metal-multipart-route ${MM2_TEST_ROM} ${CMAKE_BINARY_DIR}/milestone-14-metal-multipart 80000000)
        if(MM2_PROJECT_TEMP)
            add_test(NAME program-map-v06-clean-regeneration COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/regenerate_program_map_v06.py ${CMAKE_SOURCE_DIR} ${MM2_TEST_ROM} ${MM2_PROJECT_TEMP})
        endif()
        add_test(NAME milestone-09-headless COMMAND mm2-headless milestone-09 ${MM2_TEST_ROM} ${CMAKE_SOURCE_DIR}/generated/proof-v02/static_proof_summary.json ${CMAKE_SOURCE_DIR}/generated/upstream-audit-v03/upstream_audit_summary.json ${CMAKE_SOURCE_DIR}/generated/program-map-v06/program_map_summary.json ${CMAKE_SOURCE_DIR}/generated/reviewed-generation-v06/reviewed_generation_summary.json ${CMAKE_BINARY_DIR}/milestone-09-evidence ${CMAKE_BINARY_DIR}/milestone-09-result.json)
        if(MM2_NESRECOMP_EXE AND MM2_PROJECT_TEMP)
            add_test(NAME upstream-audit-clean-regeneration COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/regenerate_upstream_audit.py ${CMAKE_SOURCE_DIR} ${MM2_NESRECOMP_EXE} ${MM2_TEST_ROM} ${MM2_PROJECT_TEMP})
            add_test(NAME reviewed-generation-v06-clean-regeneration COMMAND ${Python3_EXECUTABLE} ${CMAKE_SOURCE_DIR}/tests/regenerate_reviewed_generation_v06.py ${CMAKE_SOURCE_DIR} ${MM2_NESRECOMP_EXE} ${MM2_TEST_ROM} ${MM2_PROJECT_TEMP})
        endif()
    endif()
endif()

install(TARGETS mm2-rom-audit mm2-mmc1-selftest mm2-static-link-probe mm2-headless mm2-direct-core-selftest mm2-native-route mm2-milestone09-route mm2-milestone10-route mm2-milestone12-route mm2-stage-matrix-route mm2-apu-accuracy-selftest mm2-ppu-accuracy-selftest mm2-mesen-trace mm2-metal-multipart-route
    RUNTIME DESTINATION .)
if(TARGET mega-man-2-launcher)
    install(TARGETS mega-man-2-launcher RUNTIME DESTINATION .)
endif()
install(FILES START-HERE.md config/expected_rom.txt DESTINATION .)
install(FILES generated/proof-v02/static_proof_summary.json DESTINATION .)
install(FILES generated/upstream-audit-v03/upstream_audit_summary.json DESTINATION .)
install(FILES generated/program-map-v06/program_map_summary.json DESTINATION .)
install(FILES generated/reviewed-generation-v06/reviewed_generation_summary.json DESTINATION .)
install(FILES config/game-v06-reviewed.toml DESTINATION .)
install(FILES generated/core-v01/direct_core_summary.json DESTINATION .)
install(FILES generated/oracle-v10/controlled_gameplay_oracle.json DESTINATION .)
install(FILES generated/oracle-v12/route_matrix.json DESTINATION .)
install(FILES generated/oracle-v13/eight_stage_oracle.json DESTINATION .)
install(FILES docs/NES-STATIC-RECOMP-COMPLIANCE-CHECKLIST.md DESTINATION docs)
install(DIRECTORY docs DESTINATION .)
