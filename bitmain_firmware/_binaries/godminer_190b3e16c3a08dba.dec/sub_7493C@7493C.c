time_t __fastcall sub_7493C(int a1, int a2, int a3)
{
  _DWORD v7[7]; // [sp+30h] [bp-1020h] BYREF
  int v8; // [sp+4Ch] [bp-1004h]
  char v9[4096]; // [sp+50h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v7, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v9,
    0x1000u,
    0,
    v8,
    v7[0],
    v7[1],
    v7[2],
    v7[3],
    v7[4],
    v7[5],
    v7[6],
    v8,
    "%s PHY core %02x %s handshake failed!",
    "phy_handshake",
    a2,
    a3);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
           174,
           "phy_handshake",
           13,
           829,
           100,
           v9);
}
