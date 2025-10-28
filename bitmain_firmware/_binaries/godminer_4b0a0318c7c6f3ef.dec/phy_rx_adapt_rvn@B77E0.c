unsigned int __fastcall phy_rx_adapt_rvn(int a1, unsigned int a2, unsigned int a3)
{
  void *v6; // r7
  int v7; // r0
  unsigned int *v8; // r3
  int v9; // r2
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r2
  char v21[4100]; // [sp+10h] [bp-1004h] BYREF

  v6 = malloc(0xCu);
  V_LOCK();
  logfmt_raw(v21, 0x1000u, 0, 1492868, "phy_rx_adapt_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "phy_rx_adapt_rvn",
    16,
    1490,
    60,
    v21);
  sub_AEAEC(a1, a3, 84, -1);
  v7 = sub_AED8C(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v7 )
  {
    v8 = (unsigned int *)v6;
    v9 = 0;
    do
    {
      ++v9;
      if ( *((unsigned __int8 *)v8 + 4) == a2 && *((unsigned __int8 *)v8 + 8) == a3 )
        goto LABEL_6;
      v8 += 3;
    }
    while ( v7 != v9 );
  }
  if ( check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 126, 0xF0000000, 4) )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, 1499848, "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1510,
      100,
      v21);
  }
  if ( check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 127, 0xF0000000, 4) )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, 1499900, "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1516,
      100,
      v21);
  }
  sub_AEAEC(a1, a3, 84, -16711936);
  v11 = sub_AED8C(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v11 )
  {
    v8 = (unsigned int *)v6;
    v12 = 0;
    do
    {
      while ( 1 )
      {
        ++v12;
        if ( *((unsigned __int8 *)v8 + 4) == a2 )
          break;
        v8 += 3;
        if ( v11 == v12 )
          goto LABEL_18;
      }
      if ( *((unsigned __int8 *)v8 + 8) == a3 )
        goto LABEL_6;
      v8 += 3;
    }
    while ( v11 != v12 );
  }
LABEL_18:
  sub_AEAEC(a1, a3, 100, (int)&loc_F000C + 3);
  v13 = sub_AED8C(a1, a2, (unsigned __int16)a3, 100, v6);
  if ( v13 )
  {
    v8 = (unsigned int *)v6;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        ++v14;
        if ( *((unsigned __int8 *)v8 + 4) == a2 )
          break;
        v8 += 3;
        if ( v13 == v14 )
          goto LABEL_24;
      }
      if ( *((unsigned __int8 *)v8 + 8) == a3 )
        goto LABEL_6;
      v8 += 3;
    }
    while ( v13 != v14 );
  }
LABEL_24:
  sub_AEAEC(a1, a3, 80, 1966110);
  v15 = sub_AED8C(a1, a2, (unsigned __int16)a3, 80, v6);
  if ( v15 )
  {
    v8 = (unsigned int *)v6;
    v16 = 0;
    do
    {
      while ( 1 )
      {
        ++v16;
        if ( *((unsigned __int8 *)v8 + 4) == a2 )
          break;
        v8 += 3;
        if ( v15 == v16 )
          goto LABEL_30;
      }
      if ( *((unsigned __int8 *)v8 + 8) == a3 )
        goto LABEL_6;
      v8 += 3;
    }
    while ( v15 != v16 );
  }
LABEL_30:
  sub_AEAEC(a1, a3, 80, 0);
  v17 = sub_AED8C(a1, a2, (unsigned __int16)a3, 80, v6);
  if ( v17 )
  {
    v8 = (unsigned int *)v6;
    v18 = 0;
    do
    {
      while ( 1 )
      {
        ++v18;
        if ( *((unsigned __int8 *)v8 + 4) == a2 )
          break;
        v8 += 3;
        if ( v17 == v18 )
          goto LABEL_36;
      }
      if ( *((unsigned __int8 *)v8 + 8) == a3 )
        goto LABEL_6;
      v8 += 3;
    }
    while ( v17 != v18 );
  }
LABEL_36:
  if ( check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 119, 0, 4) )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, 1499952, "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1589,
      100,
      v21);
  }
  sub_AEAEC(a1, a3, 84, -1);
  v19 = sub_AED8C(a1, a2, (unsigned __int16)a3, 84, v6);
  if ( v19 )
  {
    v8 = (unsigned int *)v6;
    v20 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        ++v20;
        if ( *((unsigned __int8 *)v8 + 4) == a2 )
          break;
        v8 += 3;
        if ( v19 == v20 )
          goto LABEL_44;
      }
      if ( *((unsigned __int8 *)v8 + 8) == a3 )
        break;
      v8 += 3;
      if ( v19 == v20 )
        goto LABEL_44;
    }
LABEL_6:
    a2 = bswap32(*v8);
    free(v6);
    return a2;
  }
LABEL_44:
  if ( check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 126, 0xF0000000, 4) )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, 1499988, "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1612,
      100,
      v21);
  }
  if ( check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 127, 0xF0000000, 4) )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, 1500040, "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1617,
      100,
      v21);
  }
  sub_AEAEC(a1, a3, 83, 251662080);
  if ( check_core_reg_with_expect_data_2_rvn(a1, a2, a3, 83, 0, 4) )
  {
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, 1499952, "phy_rx_adapt_rvn", a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
      174,
      "phy_rx_adapt_rvn",
      16,
      1624,
      100,
      v21);
  }
  return a2;
}
