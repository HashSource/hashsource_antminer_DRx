char *__fastcall godminer_chip_status_monitor(int a1)
{
  char *result; // r0
  int v3; // r1
  char *v4; // r6
  _DWORD v5[7]; // [sp+28h] [bp-1044h] BYREF
  int v6; // [sp+44h] [bp-1028h]
  _DWORD v7[7]; // [sp+48h] [bp-1024h] BYREF
  int v8; // [sp+64h] [bp-1008h]
  char v9[4100]; // [sp+68h] [bp-1004h] BYREF

  result = get_flag_from_monitor(a1);
  v3 = *((_DWORD *)result + 12);
  if ( (v3 & 2) != 0 )
  {
    v4 = result;
    V_LOCK();
    V_INT((int)v5, "chain", *(int *)(a1 + 224));
    logfmt_raw(v9, 0x1000u, 0, v6, v5[0], v5[1], v5[2], v5[3], v5[4], v5[5], v5[6], v6, "some chip not working");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "godminer_chip_status_monitor",
      28,
      701,
      20,
      v9);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "Sweep error string = J%d:1.", *(_DWORD *)(a1 + 224));
    V_UNLOCK();
    result = (char *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/god-miner.c",
                       139,
                       "godminer_chip_status_monitor",
                       28,
                       702,
                       100,
                       v9);
    v3 = *((_DWORD *)v4 + 12);
  }
  if ( (v3 & 4) != 0 )
  {
    V_LOCK();
    V_INT((int)v7, "chain", *(int *)(a1 + 224));
    logfmt_raw(v9, 0x1000u, 0, v8, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v8, "some chip working slow");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "godminer_chip_status_monitor",
      28,
      709,
      20,
      v9);
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "Sweep error string = J%d:1.", *(_DWORD *)(a1 + 224));
    V_UNLOCK();
    return (char *)zlog(
                     g_zc,
                     "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/"
                     "godminer-origin_godminer-new/god-miner.c",
                     139,
                     "godminer_chip_status_monitor",
                     28,
                     710,
                     100,
                     v9);
  }
  return result;
}
