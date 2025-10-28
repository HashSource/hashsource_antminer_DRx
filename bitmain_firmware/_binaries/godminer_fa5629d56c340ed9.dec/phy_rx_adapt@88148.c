unsigned int __fastcall phy_rx_adapt(int a1, unsigned int a2, unsigned int a3)
{
  void *v6; // r7
  _DWORD *v7; // r8
  int v8; // r3
  int v9; // r1
  int v10; // r0
  unsigned int *v11; // r3
  int v12; // r2
  int v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r2
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r2
  int v22; // r0
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r1
  int v30; // r3
  int v31; // r1
  int v32; // r3
  int v33; // r1
  int v34; // r3
  int v35; // r1
  char v36[4100]; // [sp+10h] [bp-1004h] BYREF

  LOWORD(v7) = 24916;
  v6 = malloc(0xCu);
  HIWORD(v7) = (unsigned int)&unk_1B503C >> 16;
  V_LOCK();
  LOWORD(v8) = -8364;
  HIWORD(v8) = (unsigned int)"info lost" >> 16;
  logfmt_raw(v36, 0x1000u, 0, v8, "phy_rx_adapt");
  V_UNLOCK();
  LOWORD(v9) = -5276;
  HIWORD(v9) = (unsigned int)"clear_dag_mode" >> 16;
  zlog(*v7, v9, 174, "phy_rx_adapt", 12, 2559, 60, v36);
  sub_80904(a1, a3, 84, -1);
  v10 = sub_80BA4(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v10 )
  {
    v11 = (unsigned int *)v6;
    v12 = 0;
    do
    {
      ++v12;
      if ( *((unsigned __int8 *)v11 + 4) == a2 && *((unsigned __int8 *)v11 + 8) == a3 )
        goto LABEL_6;
      v11 += 3;
    }
    while ( v10 != v12 );
  }
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 126, 0xF0000000, 4) )
  {
    V_LOCK();
    LOWORD(v28) = -1324;
    HIWORD(v28) = (unsigned int)"ORMAL CNT-%d" >> 16;
    logfmt_raw(v36, 0x1000u, 0, v28, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v29) = -5276;
    HIWORD(v29) = (unsigned int)"clear_dag_mode" >> 16;
    zlog(*v7, v29, 174, "phy_rx_adapt", 12, 2579, 100, v36);
  }
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 127, 0xF0000000, 4) )
  {
    V_LOCK();
    LOWORD(v26) = -1272;
    HIWORD(v26) = (unsigned int)"chip[%d] received dag size: 0x%llx, crc error: %s" >> 16;
    logfmt_raw(v36, 0x1000u, 0, v26, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v27) = -5276;
    HIWORD(v27) = (unsigned int)"clear_dag_mode" >> 16;
    zlog(*v7, v27, 174, "phy_rx_adapt", 12, 2585, 100, v36);
  }
  sub_80904(a1, a3, 84, -16711936);
  v14 = sub_80BA4(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v14 )
  {
    v11 = (unsigned int *)v6;
    v15 = 0;
    do
    {
      while ( 1 )
      {
        ++v15;
        if ( *((unsigned __int8 *)v11 + 4) == a2 )
          break;
        v11 += 3;
        if ( v14 == v15 )
          goto LABEL_18;
      }
      if ( *((unsigned __int8 *)v11 + 8) == a3 )
        goto LABEL_6;
      v11 += 3;
    }
    while ( v14 != v15 );
  }
LABEL_18:
  sub_80904(a1, a3, 100, (int)&loc_F000C + 3);
  v16 = sub_80BA4(a1, a2, (unsigned __int16)a3, 100, v6);
  if ( v16 )
  {
    v11 = (unsigned int *)v6;
    v17 = 0;
    do
    {
      while ( 1 )
      {
        ++v17;
        if ( *((unsigned __int8 *)v11 + 4) == a2 )
          break;
        v11 += 3;
        if ( v16 == v17 )
          goto LABEL_24;
      }
      if ( *((unsigned __int8 *)v11 + 8) == a3 )
        goto LABEL_6;
      v11 += 3;
    }
    while ( v16 != v17 );
  }
LABEL_24:
  sub_80904(a1, a3, 80, 1966110);
  v18 = sub_80BA4(a1, a2, (unsigned __int16)a3, 80, v6);
  if ( v18 )
  {
    v11 = (unsigned int *)v6;
    v19 = 0;
    do
    {
      while ( 1 )
      {
        ++v19;
        if ( *((unsigned __int8 *)v11 + 4) == a2 )
          break;
        v11 += 3;
        if ( v18 == v19 )
          goto LABEL_30;
      }
      if ( *((unsigned __int8 *)v11 + 8) == a3 )
        goto LABEL_6;
      v11 += 3;
    }
    while ( v18 != v19 );
  }
LABEL_30:
  sub_80904(a1, a3, 80, 0);
  v20 = sub_80BA4(a1, a2, (unsigned __int16)a3, 80, v6);
  if ( v20 )
  {
    v11 = (unsigned int *)v6;
    v21 = 0;
    do
    {
      while ( 1 )
      {
        ++v21;
        if ( *((unsigned __int8 *)v11 + 4) == a2 )
          break;
        v11 += 3;
        if ( v20 == v21 )
          goto LABEL_36;
      }
      if ( *((unsigned __int8 *)v11 + 8) == a3 )
        goto LABEL_6;
      v11 += 3;
    }
    while ( v20 != v21 );
  }
LABEL_36:
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 119, 0, 4) )
  {
    V_LOCK();
    LOWORD(v30) = -1220;
    HIWORD(v30) = (unsigned int)"%s: error! wrong PHY sequence parameter\n" >> 16;
    logfmt_raw(v36, 0x1000u, 0, v30, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v31) = -5276;
    HIWORD(v31) = (unsigned int)"clear_dag_mode" >> 16;
    zlog(*v7, v31, 174, "phy_rx_adapt", 12, 2658, 100, v36);
  }
  sub_80904(a1, a3, 84, -1);
  v22 = sub_80BA4(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v22 )
  {
    v11 = (unsigned int *)v6;
    v23 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v23;
        if ( *((unsigned __int8 *)v11 + 4) == a2 )
          break;
        v11 += 3;
        if ( v22 == v23 )
          goto LABEL_44;
      }
      if ( *((unsigned __int8 *)v11 + 8) == a3 )
        break;
      v11 += 3;
      if ( v22 == v23 )
        goto LABEL_44;
    }
LABEL_6:
    a2 = bswap32(*v11);
    free(v6);
    return a2;
  }
LABEL_44:
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 126, 0xF0000000, 4) )
  {
    V_LOCK();
    LOWORD(v32) = -1184;
    HIWORD(v32) = (unsigned int)"ter\n" >> 16;
    logfmt_raw(v36, 0x1000u, 0, v32, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v33) = -5276;
    HIWORD(v33) = (unsigned int)"clear_dag_mode" >> 16;
    zlog(*v7, v33, 174, "phy_rx_adapt", 12, 2681, 100, v36);
  }
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 127, 0xF0000000, 4) )
  {
    V_LOCK();
    LOWORD(v34) = -1132;
    HIWORD(v34) = (unsigned int)"do prepare finished\n" >> 16;
    logfmt_raw(v36, 0x1000u, 0, v34, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v35) = -5276;
    HIWORD(v35) = (unsigned int)"clear_dag_mode" >> 16;
    zlog(*v7, v35, 174, "phy_rx_adapt", 12, 2686, 100, v36);
  }
  sub_80904(a1, a3, 83, 251662080);
  if ( check_core_reg_with_expect_data_2(a1, a2, a3, 83, 0, 4) )
  {
    V_LOCK();
    LOWORD(v24) = -1220;
    HIWORD(v24) = (unsigned int)"%s: error! wrong PHY sequence parameter\n" >> 16;
    logfmt_raw(v36, 0x1000u, 0, v24, "phy_rx_adapt", a3);
    V_UNLOCK();
    LOWORD(v25) = -5276;
    HIWORD(v25) = (unsigned int)"clear_dag_mode" >> 16;
    zlog(*v7, v25, 174, "phy_rx_adapt", 12, 2693, 100, v36);
  }
  return a2;
}
