int __fastcall phy_eq_main_set_rvn(int a1, int a2)
{
  int v3; // r5
  unsigned __int8 *v4; // r4
  int v5; // r0
  unsigned __int8 *v6; // r3
  int v7; // r2
  int v8; // r0
  unsigned __int8 *v9; // r7
  int v10; // r3
  int v11; // r8
  int v12; // r0
  unsigned __int8 *v13; // r3
  int v14; // r2
  int v15; // r0
  unsigned __int8 *v16; // r5
  int v17; // r3
  int v18; // r7
  _DWORD v20[7]; // [sp+28h] [bp-1044h] BYREF
  int v21; // [sp+44h] [bp-1028h]
  _DWORD v22[7]; // [sp+48h] [bp-1024h] BYREF
  int v23; // [sp+64h] [bp-1008h]
  char v24[4100]; // [sp+68h] [bp-1004h] BYREF

  v3 = (a2 << 12) | (a2 << 18) | a2 | (a2 << 6);
  v4 = (unsigned __int8 *)malloc(0x1800u);
  v5 = sub_AFBE4(a1, 0, 111, v4);
  if ( v5 )
  {
    v6 = v4;
    v7 = 0;
    while ( 1 )
    {
      ++v7;
      if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v6 + 3)) == 111 && !v6[8] )
        break;
      v6 += 12;
      if ( v5 == v7 )
        goto LABEL_7;
    }
    sub_AFB50(a1, 111, bswap32(*v6) | v3);
  }
LABEL_7:
  v8 = sub_AFBE4(a1, 0, 111, v4);
  if ( v8 )
  {
    v9 = v4;
    v10 = 0;
    while ( 1 )
    {
      ++v10;
      if ( *((_WORD *)v9 + 3) == 28416 )
      {
        v11 = v9[8];
        if ( !v9[8] )
          break;
      }
      v9 += 12;
      if ( v8 == v10 )
        goto LABEL_13;
    }
    V_LOCK();
    V_INT((int)v20, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v24,
      0x1000u,
      v11,
      v21,
      v20[0],
      v20[1],
      v20[2],
      v20[3],
      v20[4],
      v20[5],
      v20[6],
      v21,
      "[PHY EQ MAIN SET] chip 0x0 core 0x0 reg 0x6f rdata %08x",
      bswap32(*(_DWORD *)v9));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_eq_main_set_rvn",
      19,
      1374,
      60,
      v24);
  }
LABEL_13:
  v12 = sub_AFBE4(a1, 0, 112, v4);
  if ( v12 )
  {
    v13 = v4;
    v14 = 0;
    while ( 1 )
    {
      ++v14;
      if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v13 + 3)) == 112 && !v13[8] )
        break;
      v13 += 12;
      if ( v12 == v14 )
        goto LABEL_19;
    }
    sub_AFB50(a1, 112, bswap32(*v13) | v3);
  }
LABEL_19:
  v15 = sub_AFBE4(a1, 0, 112, v4);
  if ( v15 )
  {
    v16 = v4;
    v17 = 0;
    while ( 1 )
    {
      ++v17;
      if ( *((_WORD *)v16 + 3) == 28672 )
      {
        v18 = v16[8];
        if ( !v16[8] )
          break;
      }
      v16 += 12;
      if ( v15 == v17 )
        goto LABEL_25;
    }
    V_LOCK();
    V_INT((int)v22, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v24,
      0x1000u,
      v18,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "[PHY EQ MAIN SET] chip 0x0 core 0x0 reg 0x70 rdata %08x",
      bswap32(*(_DWORD *)v16));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_eq_main_set_rvn",
      19,
      1394,
      60,
      v24);
  }
LABEL_25:
  free(v4);
  return 0;
}
