int __fastcall phy_eq_main_set(int a1, int a2)
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
  char *v12; // r1
  _DWORD *v13; // r3
  int v14; // r1
  int v15; // r0
  unsigned __int8 *v16; // r3
  int v17; // r2
  int v18; // r0
  unsigned __int8 *v19; // r5
  int v20; // r3
  int v21; // r7
  char *v22; // r1
  _DWORD *v23; // r3
  int v24; // r1
  _DWORD v26[7]; // [sp+28h] [bp-1044h] BYREF
  int v27; // [sp+44h] [bp-1028h]
  _DWORD v28[7]; // [sp+48h] [bp-1024h] BYREF
  int v29; // [sp+64h] [bp-1008h]
  char v30[4100]; // [sp+68h] [bp-1004h] BYREF

  v3 = (a2 << 12) | (a2 << 18) | a2 | (a2 << 6);
  v4 = (unsigned __int8 *)malloc(0x600u);
  v5 = sub_7F8BC(a1, 0, 111, v4);
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
    sub_7F828(a1, 111, bswap32(*v6) | v3);
  }
LABEL_7:
  v8 = sub_7F8BC(a1, 0, 111, v4);
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
    LOWORD(v12) = 27372;
    HIWORD(v12) = (unsigned int)":" >> 16;
    V_INT((int)v26, v12, *(int *)(a1 + 256));
    logfmt_raw(
      v30,
      0x1000u,
      v11,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "[PHY EQ MAIN SET] chip 0x0 core 0x0 reg 0x6f rdata %08x",
      bswap32(*(_DWORD *)v9));
    V_UNLOCK();
    LOWORD(v13) = 20532;
    HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v14) = -11432;
    HIWORD(v14) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(*v13, v14, 174, "phy_eq_main_set", 15, 2443, 60, v30);
  }
LABEL_13:
  v15 = sub_7F8BC(a1, 0, 112, v4);
  if ( v15 )
  {
    v16 = v4;
    v17 = 0;
    while ( 1 )
    {
      ++v17;
      if ( (unsigned __int16)__rev16(*((unsigned __int16 *)v16 + 3)) == 112 && !v16[8] )
        break;
      v16 += 12;
      if ( v15 == v17 )
        goto LABEL_19;
    }
    sub_7F828(a1, 112, bswap32(*v16) | v3);
  }
LABEL_19:
  v18 = sub_7F8BC(a1, 0, 112, v4);
  if ( v18 )
  {
    v19 = v4;
    v20 = 0;
    while ( 1 )
    {
      ++v20;
      if ( *((_WORD *)v19 + 3) == 28672 )
      {
        v21 = v19[8];
        if ( !v19[8] )
          break;
      }
      v19 += 12;
      if ( v18 == v20 )
        goto LABEL_25;
    }
    V_LOCK();
    LOWORD(v22) = 27372;
    HIWORD(v22) = (unsigned int)":" >> 16;
    V_INT((int)v28, v22, *(int *)(a1 + 256));
    logfmt_raw(
      v30,
      0x1000u,
      v21,
      v29,
      v28[0],
      v28[1],
      v28[2],
      v28[3],
      v28[4],
      v28[5],
      v28[6],
      v29,
      "[PHY EQ MAIN SET] chip 0x0 core 0x0 reg 0x70 rdata %08x",
      bswap32(*(_DWORD *)v19));
    V_UNLOCK();
    LOWORD(v23) = 20532;
    HIWORD(v23) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v24) = -11432;
    HIWORD(v24) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    zlog(*v23, v24, 174, "phy_eq_main_set", 15, 2463, 60, v30);
  }
LABEL_25:
  free(v4);
  return 0;
}
