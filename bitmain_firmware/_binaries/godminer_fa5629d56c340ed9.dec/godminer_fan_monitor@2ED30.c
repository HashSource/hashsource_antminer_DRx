char *__fastcall godminer_fan_monitor(int a1)
{
  char *result; // r0
  int v2; // r1
  char *v3; // r5
  _DWORD v4[7]; // [sp+28h] [bp-1040h] BYREF
  int v5; // [sp+44h] [bp-1024h]
  _DWORD v6[7]; // [sp+48h] [bp-1020h] BYREF
  int v7; // [sp+64h] [bp-1004h]
  char v8[4096]; // [sp+68h] [bp-1000h] BYREF

  ++dword_1968A8[*(_DWORD *)(a1 + 252)];
  result = get_flag_from_monitor(a1);
  v2 = *((_DWORD *)result + 8);
  v3 = result;
  if ( (v2 & 2) != 0 )
  {
    V_LOCK();
    V_STR(v4, "error", "fan lost");
    logfmt_raw(v8, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "fan lost happend");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "godminer_fan_monitor",
      20,
      548,
      20,
      v8);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Sweep error string = %s.", "F:1");
    V_UNLOCK();
    result = (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/god-miner.c",
                       139,
                       "godminer_fan_monitor",
                       20,
                       549,
                       100,
                       v8);
    v2 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 10) |= 2u;
  }
  if ( (v2 & 1) != 0 )
  {
    V_LOCK();
    V_STR(v6, "error", "fan slow");
    logfmt_raw(v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "fan slow happend");
    V_UNLOCK();
    result = (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/god-miner.c",
                       139,
                       "godminer_fan_monitor",
                       20,
                       557,
                       20,
                       v8);
    *((_DWORD *)v3 + 10) |= 1u;
  }
  return result;
}
