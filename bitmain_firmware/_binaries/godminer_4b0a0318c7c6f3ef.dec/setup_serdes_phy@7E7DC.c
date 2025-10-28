int __fastcall setup_serdes_phy(int a1, int a2)
{
  char *v4; // r1
  _DWORD *v5; // r10
  int v6; // r4
  _DWORD *v7; // r4
  int v8; // r1
  int v9; // r3
  int v10; // r1
  unsigned __int8 v11; // t1
  int v13; // [sp+20h] [bp-1034h]
  _DWORD v14[7]; // [sp+30h] [bp-1024h] BYREF
  int v15; // [sp+4Ch] [bp-1008h] BYREF
  _DWORD v16[3]; // [sp+50h] [bp-1004h] BYREF
  int v17; // [sp+5Ch] [bp-FF8h] BYREF

  V_LOCK();
  LOWORD(v4) = 27372;
  HIWORD(v4) = (unsigned int)":" >> 16;
  LOWORD(v5) = 20532;
  HIWORD(v5) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v14, v4, *(int *)(a1 + 256));
  LOWORD(v6) = -12948;
  HIWORD(v6) = (unsigned int)"expect_data_eth" >> 16;
  v13 = v6;
  v7 = (int *)((char *)&v15 + 3);
  logfmt_raw(
    (char *)v16,
    0x1000u,
    0,
    v15,
    v14[0],
    v14[1],
    v14[2],
    v14[3],
    v14[4],
    v14[5],
    v14[6],
    v15,
    v13,
    "setup_serdes_phy",
    a2);
  V_UNLOCK();
  LOWORD(v8) = -14448;
  HIWORD(v8) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v5, v8, 171, "setup_serdes_phy", 16, 1119, 60, v16);
  V_LOCK();
  LOWORD(v9) = -12908;
  HIWORD(v9) = (unsigned int)"_init" >> 16;
  logfmt_raw((char *)v16, 0x1000u, 0, v9, "setup_serdes_phy", 1);
  V_UNLOCK();
  LOWORD(v10) = -14448;
  HIWORD(v10) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v5, v10, 171, "setup_serdes_phy", 16, 1126, 60, v16);
  v16[0] = 50462976;
  v16[1] = 117835012;
  v16[2] = 185207048;
  v17 = 252579084;
  do
  {
    v11 = *((_BYTE *)v7 + 1);
    v7 = (_DWORD *)((char *)v7 + 1);
    phy_external_bist_init(a1, 0, v11, 2, a2);
  }
  while ( v7 != (int *)((char *)&v17 + 3) );
  phy_external_bist(a1, 0, (int)v16, 16);
  return set_phy_external_bist_result();
}
