int __fastcall phy_internal_bist(int a1, int a2, unsigned int a3, int a4)
{
  __int16 v8; // r2
  _DWORD *v9; // r4
  int v10; // r0
  _DWORD *v11; // r7
  __int16 v12; // r2
  _DWORD *v13; // r4
  int v14; // r0
  _DWORD *v15; // r7
  _DWORD *v18; // [sp+60h] [bp-1184h]
  int v19; // [sp+64h] [bp-1180h]
  _DWORD *i; // [sp+6Ch] [bp-1178h]
  _DWORD *j; // [sp+6Ch] [bp-1178h]
  int v22; // [sp+78h] [bp-116Ch] BYREF
  int v23; // [sp+7Ch] [bp-1168h] BYREF
  _DWORD v24[7]; // [sp+80h] [bp-1164h] BYREF
  int v25; // [sp+9Ch] [bp-1148h]
  _DWORD v26[7]; // [sp+A0h] [bp-1144h] BYREF
  int v27; // [sp+BCh] [bp-1128h]
  _DWORD v28[7]; // [sp+C0h] [bp-1124h] BYREF
  int v29; // [sp+DCh] [bp-1108h]
  _DWORD v30[7]; // [sp+E0h] [bp-1104h] BYREF
  int v31; // [sp+FCh] [bp-10E8h]
  _DWORD v32[7]; // [sp+100h] [bp-10E4h] BYREF
  int v33; // [sp+11Ch] [bp-10C8h]
  _DWORD v34[7]; // [sp+120h] [bp-10C4h] BYREF
  int v35; // [sp+13Ch] [bp-10A8h]
  _DWORD v36[7]; // [sp+140h] [bp-10A4h] BYREF
  int v37; // [sp+15Ch] [bp-1088h]
  _DWORD v38[8]; // [sp+160h] [bp-1084h] BYREF
  _DWORD v39[7]; // [sp+180h] [bp-1064h] BYREF
  int v40; // [sp+19Ch] [bp-1048h]
  _DWORD v41[8]; // [sp+1A0h] [bp-1044h] BYREF
  _DWORD v42[7]; // [sp+1C0h] [bp-1024h] BYREF
  int v43; // [sp+1DCh] [bp-1008h]
  char v44[4100]; // [sp+1E0h] [bp-1004h] BYREF

  V_LOCK();
  V_INT((int)v24, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v44,
    0x1000u,
    0,
    v25,
    v24[0],
    v24[1],
    v24[2],
    v24[3],
    v24[4],
    v24[5],
    v24[6],
    v25,
    "%s start",
    "phy_internal_bist");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_internal_bist",
    17,
    1787,
    0x14u,
    v44);
  v18 = malloc(0x600u);
  sub_80904(a1, a3, 86, 3670024);
  usleep(0x12Cu);
  sub_80904(a1, a3, 85, 109905420);
  usleep(0x12Cu);
  sub_80904(a1, a3, 101, -268374016);
  usleep(0x12Cu);
  sub_80904(a1, a3, 64, 256);
  usleep(0x12Cu);
  sub_80904(a1, a3, 80, 33423870);
  usleep(0x12Cu);
  sub_80904(a1, a3, 81, 832516511);
  usleep(0x12Cu);
  sub_80904(a1, a3, 88, -1);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 125, 0x70007000u) )
  {
    V_LOCK();
    V_INT((int)v26, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v44,
      0x1000u,
      0,
      v27,
      v26[0],
      v26[1],
      v26[2],
      v26[3],
      v26[4],
      v26[5],
      v26[6],
      v27,
      "%s PHY core %02x sram boot failed!",
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1819,
      100,
      v44);
  }
  sub_80904(a1, a3, 86, 137889800);
  usleep(0x12Cu);
  sub_80904(a1, a3, 80, 0);
  usleep(0x12Cu);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 119, 0) )
  {
    V_LOCK();
    V_INT((int)v28, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v44,
      0x1000u,
      0,
      v29,
      v28[0],
      v28[1],
      v28[2],
      v28[3],
      v28[4],
      v28[5],
      v28[6],
      v29,
      "%s PHY core %02x wait ack failed!",
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1832,
      100,
      v44);
  }
  sub_80904(a1, a3, 82, 0);
  usleep(0x64u);
  V_LOCK();
  V_INT((int)v30, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v44,
    0x1000u,
    0,
    v31,
    v30[0],
    v30[1],
    v30[2],
    v30[3],
    v30[4],
    v30[5],
    v30[6],
    v31,
    "%s PHY core %02x sram boot success!",
    "phy_internal_bist",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
    174,
    "phy_internal_bist",
    17,
    1838,
    20,
    v44);
  sub_80904(a1, a3, 83, 16711935);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 83, 0) )
  {
    V_LOCK();
    V_INT((int)v42, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v44,
      0x1000u,
      0,
      v43,
      v42[0],
      v42[1],
      v42[2],
      v42[3],
      v42[4],
      v42[5],
      v42[6],
      v43,
      "%s PHY core %02x %s handshake failed!",
      "phy_handshake",
      a3,
      "sram boot");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_handshake",
      13,
      1744,
      100,
      v44);
  }
  phy_pll_switch(a1, a2, a3, a4);
  sub_80904(a1, a3, 98, -1426085121);
  usleep(0x64u);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 64, 0xFF000100) )
  {
    V_LOCK();
    V_INT((int)v32, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v44,
      0x1000u,
      0,
      v33,
      v32[0],
      v32[1],
      v32[2],
      v32[3],
      v32[4],
      v32[5],
      v32[6],
      v33,
      "%s PHY core %02x pcs lock failed!",
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1851,
      100,
      v44);
  }
  sub_80904(a1, a3, 133, 255);
  usleep(0x64u);
  sub_80904(a1, a3, 134, 255);
  usleep(0x64u);
  sub_80904(a1, a3, 132, -2147483647);
  sleep(6u);
  if ( check_core_reg_with_expect_data(a1, a2, a3, 139, 0xFF0000FF) )
  {
    V_LOCK();
    V_INT((int)v34, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v44,
      0x1000u,
      0,
      v35,
      v34[0],
      v34[1],
      v34[2],
      v34[3],
      v34[4],
      v34[5],
      v34[6],
      v35,
      "%s PHY core %02x mac bist failed!",
      "phy_internal_bist",
      a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "phy_internal_bist",
      17,
      1867,
      100,
      v44);
  }
  v19 = (unsigned __int16)a3;
  v22 = -1970698105;
  v8 = 135;
  for ( i = (int *)((char *)&v22 + 1); ; i = (_DWORD *)((char *)i + 1) )
  {
    v9 = v18;
    v10 = sub_80954(a1, v19, v8, v18);
    if ( v10 )
    {
      v11 = &v18[3 * v10];
      do
      {
        while ( !*v9 )
        {
          v9 += 3;
          if ( v9 == v11 )
            goto LABEL_17;
        }
        V_LOCK();
        v9 += 3;
        V_INT((int)v36, "chain", *(int *)(a1 + 260));
        V_INT((int)v38, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v37,
          v36[0],
          v36[1],
          v36[2],
          v36[3],
          v36[4],
          v36[5],
          v36[6],
          v37,
          v38[0],
          v38[1],
          v38[2],
          v38[3],
          v38[4],
          v38[5],
          v38[6],
          v38[7],
          "[PHY BIST ERR NUM] chip %02x core %02x reg %04x rdata %08x",
          a2,
          *((unsigned __int8 *)v9 - 4),
          *((unsigned __int16 *)v9 - 3),
          bswap32(*(v9 - 3)));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          174,
          "phy_internal_bist",
          17,
          1880,
          20,
          v44);
      }
      while ( v9 != v11 );
    }
LABEL_17:
    if ( i == (int *)((char *)&v23 + 1) )
      break;
    v8 = *(unsigned __int8 *)i;
  }
  v23 = -2088599168;
  v12 = 128;
  for ( j = (int *)((char *)&v23 + 1); ; j = (_DWORD *)((char *)j + 1) )
  {
    v13 = v18;
    v14 = sub_80954(a1, v19, v12, v18);
    if ( v14 )
    {
      v15 = &v18[3 * v14];
      do
      {
        while ( !*v13 )
        {
          v13 += 3;
          if ( v13 == v15 )
            goto LABEL_25;
        }
        V_LOCK();
        v13 += 3;
        V_INT((int)v39, "chain", *(int *)(a1 + 260));
        V_INT((int)v41, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v40,
          v39[0],
          v39[1],
          v39[2],
          v39[3],
          v39[4],
          v39[5],
          v39[6],
          v40,
          v41[0],
          v41[1],
          v41[2],
          v41[3],
          v41[4],
          v41[5],
          v41[6],
          v41[7],
          "[PHY BIST LOST NUM] chip %02x core %02x reg %04x rdata %08x",
          a2,
          *((unsigned __int8 *)v13 - 4),
          *((unsigned __int16 *)v13 - 3),
          bswap32(*(v13 - 3)));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
          174,
          "phy_internal_bist",
          17,
          1895,
          20,
          v44);
      }
      while ( v13 != v15 );
    }
LABEL_25:
    if ( (_DWORD *)((char *)v24 + 1) == j )
      break;
    v12 = *(unsigned __int8 *)j;
  }
  return 0;
}
