#!/usr/bin/env python3
from __future__ import annotations
import hashlib,json,pathlib,sys

EXPECTED_SHA="21826ffea95faf5215c01bf645e65a548ec0e9421e2c8feceb5fba66ae7e7997"

def main()->int:
    if len(sys.argv)!=2: print("usage: verify_upstream_audit.py SOURCE",file=sys.stderr);return 2
    path=pathlib.Path(sys.argv[1]).resolve()/"generated"/"upstream-audit-v03"/"upstream_audit_summary.json"
    raw=path.read_bytes(); data=json.loads(raw)
    assert hashlib.sha256(raw).hexdigest()==EXPECTED_SHA
    assert data["format"]=="mega-man-2-upstream-generation-audit-v1"
    assert data["version"]=="1.1.1" and data["milestone"]==3
    assert data["rom_sha256"]=="49136b412ff61beac6e40d0bbcd8691a39a50cd2744fdcdde3401eed53d71edf"
    assert data["tool"]["commit"]=="f85051decadd3f4fab8ab0d15b4ace1b3df19764"
    assert data["metrics"]=={"functions_discovered":7157,"functions_analyzed":4363,"reachable_instructions":747805,"false_positive_suspects":836,"reachable_brk":57234,"reachable_sized_skip":95093,"reachable_halt":29583}
    assert data["production_core_accepted"] is False and data["acceptance_gate_worked"] is True
    assert data["audio_runtime_linked"] is False
    assert data["audio_test_status"]=="deferred_until_native_apu_sample_output_exists"
    print("PASS upstream audit receipt: exact pinned run rejected unsafe output and deferred audio honestly")
    return 0
if __name__=="__main__": raise SystemExit(main())
