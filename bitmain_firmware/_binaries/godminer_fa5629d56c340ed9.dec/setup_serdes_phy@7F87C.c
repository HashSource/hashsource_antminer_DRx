int __fastcall setup_serdes_phy(int a1, int a2)
{
  _DWORD *v4; // r4
  unsigned __int8 v5; // t1
  _DWORD v7[7]; // [sp+30h] [bp-1024h] BYREF
  int v8; // [sp+4Ch] [bp-1008h] BYREF
  _DWORD v9[3]; // [sp+50h] [bp-1004h] BYREF
  int v10; // [sp+5Ch] [bp-FF8h] BYREF

  V_LOCK();
  V_INT((int)v7, "chain", *(int *)(a1 + 260));
  v4 = (int *)((char *)&v8 + 3);
  logfmt_raw(
    (char *)v9,
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
    "%s using eth phy seq level = P%d ...",
    "setup_serdes_phy",
    a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "setup_serdes_phy",
    16,
    1180,
    60,
    v9);
  V_LOCK();
  logfmt_raw((char *)v9, 0x1000u, 0, "%s try phy lock times %d", "setup_serdes_phy", 1);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "setup_serdes_phy",
    16,
    1187,
    60,
    v9);
  v9[0] = 50462976;
  v9[1] = 117835012;
  v9[2] = 185207048;
  v10 = 252579084;
  do
  {
    v5 = *((_BYTE *)v4 + 1);
    v4 = (_DWORD *)((char *)v4 + 1);
    phy_external_bist_init(a1, 0, v5, 2, a2);
  }
  while ( v4 != (int *)((char *)&v10 + 3) );
  phy_external_bist(a1, 0, (int)v9, 16);
  return set_phy_external_bist_result();
}
