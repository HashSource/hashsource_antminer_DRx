int __fastcall serdes_internal_loop_ate_init_rvn(int a1, unsigned int a2, int a3, int a4)
{
  unsigned __int8 *v8; // r8
  char *v9; // r3
  int v10; // r3
  int v12; // [sp+40h] [bp-E8h]
  _DWORD v13[7]; // [sp+48h] [bp-E0h] BYREF
  int v14; // [sp+64h] [bp-C4h]
  _DWORD v15[7]; // [sp+68h] [bp-C0h] BYREF
  int v16; // [sp+84h] [bp-A4h]
  _DWORD v17[7]; // [sp+88h] [bp-A0h] BYREF
  int v18; // [sp+A4h] [bp-84h]
  _DWORD v19[7]; // [sp+A8h] [bp-80h] BYREF
  int v20; // [sp+C4h] [bp-64h]
  _DWORD v21[7]; // [sp+C8h] [bp-60h] BYREF
  int v22; // [sp+E4h] [bp-44h]
  _DWORD v23[7]; // [sp+E8h] [bp-40h] BYREF
  int v24; // [sp+104h] [bp-24h]
  _DWORD v25[7]; // [sp+108h] [bp-20h] BYREF
  int v26; // [sp+124h] [bp-4h]
  char v27[4100]; // [sp+128h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v13, "chain", *(int *)(a1 + 260));
  v12 = a4;
  a4 <<= 7;
  logfmt_raw(
    v27,
    0x1000u,
    0,
    v14,
    v13[0],
    v13[1],
    v13[2],
    v13[3],
    v13[4],
    v13[5],
    v13[6],
    v14,
    "%s ...",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    151,
    60,
    v27);
  v8 = (unsigned __int8 *)malloc(0x1800u);
  sub_AFB94(a1, a3, 240, 0x80000000);
  sub_AFBE4(a1, (unsigned __int16)a3, 240, v8);
  V_LOCK();
  V_INT((int)v15, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v27,
    0x1000u,
    0,
    v16,
    v15[0],
    v15[1],
    v15[2],
    v15[3],
    v15[4],
    v15[5],
    v15[6],
    v16,
    "%s core %d reg %04x rdata %08x",
    "serdes_internal_loop_ate_init_rvn",
    v8[8],
    240,
    *(_DWORD *)v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    158,
    60,
    v27);
  sub_AFB94(a1, a3, 86, 67634184);
  sub_AFBE4(a1, (unsigned __int16)a3, 86, v8);
  V_LOCK();
  V_INT((int)v17, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v27,
    0x1000u,
    0,
    v18,
    v17[0],
    v17[1],
    v17[2],
    v17[3],
    v17[4],
    v17[5],
    v17[6],
    v18,
    "%s core %d reg %04x rdata %08x",
    "serdes_internal_loop_ate_init_rvn",
    v8[8],
    86,
    *(_DWORD *)v8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    162,
    60,
    v27);
  sub_AFB94(a1, a3, 64, 256);
  sub_AFB94(a1, a3, 80, 33423870);
  sub_AFB94(a1, a3, 81, 832516511);
  sub_AFB94(a1, a3, 88, -1);
  sub_AFB94(a1, a3, 86, 201853960);
  V_LOCK();
  V_INT((int)v19, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v27,
    0x1000u,
    0,
    v20,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    v19[6],
    v20,
    "%s PHY core %02x sram ext load done",
    "serdes_internal_loop_ate_init_rvn",
    a3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    172,
    60,
    v27);
  sub_AFB94(a1, a3, 77, (int)&loc_30000 + 3);
  sub_AFB94(a1, a3, 78, -2144272046);
  serdes_apb_read_rvn(a1, a2, a3, 338);
  sub_AFB94(a1, a3, 77, 33554944);
  sub_AFB94(a1, a3, 78, -2144247742);
  serdes_apb_read_rvn(a1, a2, a3, 24642);
  sub_AFB94(a1, a3, 77, 100664832);
  sub_AFB94(a1, a3, 78, -2144247742);
  sub_AFB94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AFB94(a1, a3, 78, -2144272003);
  sub_B0138(a1, a3, 24642, v12 | 0x600);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144247741);
  sub_B0138(a1, a3, 24644, a4);
  sub_B0138(a1, a3, 24642, v12 | 7);
  sub_AFB94(a1, a3, 77, 16777472);
  sub_AFB94(a1, a3, 78, -2144247741);
  sub_B0138(a1, a3, 24644, a4 | 0x8000);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144251892);
  sub_AFB94(a1, a3, 77, 268439552);
  sub_AFB94(a1, a3, 78, -2144251892);
  sub_AFB94(a1, a3, 77, 33489407);
  sub_AFB94(a1, a3, 78, -2144272086);
  sub_AFB94(a1, a3, 77, 268374015);
  sub_AFB94(a1, a3, 78, -2144272085);
  sub_B0138(a1, a3, 24644, a4 | 0x8020);
  sub_B0138(a1, a3, 24644, a4 | 0x8060);
  sub_AFB94(a1, a3, 77, -1);
  sub_AFB94(a1, a3, 78, -2144247719);
  sub_AFB94(a1, a3, 77, -8388737);
  sub_AFB94(a1, a3, 78, -2144247718);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144247776);
  sub_AFB94(a1, a3, 77, -2136964960);
  sub_AFB94(a1, a3, 78, -2144247776);
  if ( v12 == 2 )
  {
    sub_AFB94(a1, a3, 77, 272633920);
    sub_AFB94(a1, a3, 78, -2144247722);
    sub_AFB94(a1, a3, 77, -1);
    sub_AFB94(a1, a3, 78, -2144247718);
    sub_AFB94(a1, a3, 77, 0);
    sub_AFB94(a1, a3, 78, -2144247771);
    sub_AFB94(a1, a3, 77, (int)&loc_140014);
    sub_AFB94(a1, a3, 78, -2144247771);
    sub_AFB94(a1, a3, 77, 33554944);
    sub_AFB94(a1, a3, 78, -2144247760);
    sub_AFB94(a1, a3, 77, 122947412);
    sub_AFB94(a1, a3, 78, -2144247760);
    sub_AFB94(a1, a3, 77, 1073758208);
    sub_AFB94(a1, a3, 78, -2144247770);
    sub_AFB94(a1, a3, 77, -1072381932);
    sub_AFB94(a1, a3, 78, -2144247770);
    v9 = (char *)&loc_40004;
  }
  else
  {
    sub_AFB94(a1, a3, 77, 271585328);
    sub_AFB94(a1, a3, 78, -2144247722);
    sub_AFB94(a1, a3, 77, -1);
    sub_AFB94(a1, a3, 78, -2144247718);
    sub_AFB94(a1, a3, 77, 0);
    sub_AFB94(a1, a3, 78, -2144247771);
    sub_AFB94(a1, a3, 77, (int)&loc_140014);
    sub_AFB94(a1, a3, 78, -2144247771);
    sub_AFB94(a1, a3, 77, 33554944);
    sub_AFB94(a1, a3, 78, -2144247760);
    sub_AFB94(a1, a3, 77, 122947412);
    sub_AFB94(a1, a3, 78, -2144247760);
    sub_AFB94(a1, a3, 77, 1073758208);
    sub_AFB94(a1, a3, 78, -2144247770);
    sub_AFB94(a1, a3, 77, -1072381932);
    sub_AFB94(a1, a3, 78, -2144247770);
    v9 = (char *)&loc_30000 + 3;
  }
  sub_AFB94(a1, a3, 77, (int)v9);
  sub_AFB94(a1, a3, 78, -2144247739);
  sub_AFB94(a1, a3, 77, -1);
  sub_AFB94(a1, a3, 78, -2144247732);
  sub_AFB94(a1, a3, 77, 268439552);
  sub_AFB94(a1, a3, 78, -2144247769);
  sub_AFB94(a1, a3, 77, 805318656);
  sub_AFB94(a1, a3, 78, -2144247769);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144247751);
  sub_AFB94(a1, a3, 77, 5505108);
  sub_AFB94(a1, a3, 78, -2144247751);
  sub_AFB94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AFB94(a1, a3, 78, -2144251903);
  sub_AFB94(a1, a3, 77, 2293795);
  sub_AFB94(a1, a3, 78, -2144251903);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144251872);
  sub_AFB94(a1, a3, 77, (int)&loc_80008);
  sub_AFB94(a1, a3, 78, -2144251872);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144272111);
  sub_AFB94(a1, a3, 77, 1073692671);
  sub_AFB94(a1, a3, 78, -2144272088);
  sub_AFB94(a1, a3, 77, 234884608);
  sub_AFB94(a1, a3, 78, -2144272382);
  sub_AFB94(a1, a3, 77, 235408904);
  sub_AFB94(a1, a3, 78, -2144272382);
  sub_AFB94(a1, a3, 77, 234884608);
  sub_AFB94(a1, a3, 78, -2144272381);
  sub_AFB94(a1, a3, 77, 235408904);
  sub_AFB94(a1, a3, 78, -2144272381);
  sub_AFB94(a1, a3, 77, (int)&unk_180018);
  sub_AFB94(a1, a3, 78, -2144272353);
  sub_AFB94(a1, a3, 77, 22348117);
  sub_AFB94(a1, a3, 78, -2144272044);
  sub_AFB94(a1, a3, 77, 67044351);
  sub_AFB94(a1, a3, 78, -2144272044);
  sub_AFB94(a1, a3, 77, 61277095);
  sub_AFB94(a1, a3, 78, -2144272380);
  sub_AFB94(a1, a3, 77, 65471463);
  sub_AFB94(a1, a3, 78, -2144272380);
  sub_AFB94(a1, a3, 77, 235408904);
  sub_AFB94(a1, a3, 78, -2144272382);
  sub_AFB94(a1, a3, 77, 252186376);
  sub_AFB94(a1, a3, 78, -2144272382);
  sub_AFB94(a1, a3, 77, 235408904);
  sub_AFB94(a1, a3, 78, -2144272381);
  sub_AFB94(a1, a3, 77, 252186376);
  sub_AFB94(a1, a3, 78, -2144272381);
  sub_AFB94(a1, a3, 77, (int)&loc_40004);
  sub_AFB94(a1, a3, 78, -2144272379);
  sub_AFB94(a1, a3, 77, (int)&loc_C000C);
  sub_AFB94(a1, a3, 78, -2144272379);
  sub_AFB94(a1, a3, 77, (int)&loc_40004);
  sub_AFB94(a1, a3, 78, -2144272378);
  sub_AFB94(a1, a3, 77, (int)&loc_C000C);
  sub_AFB94(a1, a3, 78, -2144272378);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144272372);
  sub_AFB94(a1, a3, 77, (int)&loc_100010);
  sub_AFB94(a1, a3, 78, -2144272372);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144272360);
  sub_AFB94(a1, a3, 77, (int)&loc_100010);
  sub_AFB94(a1, a3, 78, -2144272360);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144272114);
  sub_AFB94(a1, a3, 77, 710158932);
  sub_AFB94(a1, a3, 78, -2144272114);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144272124);
  sub_AFB94(a1, a3, 77, (int)"tput");
  sub_AFB94(a1, a3, 78, -2144272124);
  if ( v12 == 2 )
    LOWORD(v10) = 498;
  else
    LOWORD(v10) = 501;
  if ( v12 == 2 )
    HIWORD(v10) = 498;
  else
    HIWORD(v10) = 501;
  sub_AFB94(a1, a3, 77, v10);
  sub_AFB94(a1, a3, 78, -2144247559);
  sub_AFB94(a1, a3, 77, 25166208);
  sub_AFB94(a1, a3, 78, -2144251901);
  sub_AFB94(a1, a3, 77, 92800392);
  sub_AFB94(a1, a3, 78, -2144251901);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144251900);
  sub_AFB94(a1, a3, 77, 541073472);
  sub_AFB94(a1, a3, 78, -2144251900);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144247761);
  sub_AFB94(a1, a3, 77, (int)"tput");
  sub_AFB94(a1, a3, 78, -2144247761);
  sub_AFB94(a1, a3, 77, 537010178);
  sub_AFB94(a1, a3, 78, -2144247750);
  sub_AFB94(a1, a3, 77, 872428544);
  sub_AFB94(a1, a3, 78, -2144247769);
  sub_AFB94(a1, a3, 77, 1006648320);
  sub_AFB94(a1, a3, 78, -2144247769);
  sub_AFB94(a1, a3, 77, (int)&loc_80008);
  sub_AFB94(a1, a3, 78, -2144247745);
  sub_AFB94(a1, a3, 77, (int)&unk_180018);
  sub_AFB94(a1, a3, 78, -2144247745);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144247798);
  sub_AFB94(a1, a3, 77, (int)"tput");
  sub_AFB94(a1, a3, 78, -2144247798);
  sub_AFB94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AFB94(a1, a3, 78, -2144247604);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144247796);
  sub_AFB94(a1, a3, 77, 268439552);
  sub_AFB94(a1, a3, 78, -2144247796);
  sub_AFB94(a1, a3, 77, 0);
  sub_AFB94(a1, a3, 78, -2144243666);
  sub_AFB94(a1, a3, 77, (int)"tput");
  sub_AFB94(a1, a3, 78, -2144243666);
  sub_AFB94(a1, a3, 77, 4259905);
  sub_AFB94(a1, a3, 78, -2144251869);
  sub_AFB94(a1, a3, 77, 13304011);
  sub_AFB94(a1, a3, 78, -2144251869);
  sub_AFB94(a1, a3, 77, (int)&loc_40004);
  sub_AFB94(a1, a3, 78, -2144243609);
  sub_AFB94(a1, a3, 77, (int)&loc_A0008 + 2);
  sub_AFB94(a1, a3, 78, -2144247768);
  sub_AFB94(a1, a3, 77, (int)&loc_70004 + 3);
  sub_AFB94(a1, a3, 78, -2144272078);
  serdes_apb_read_rvn(a1, a2, a3, 306);
  sub_AFB94(a1, a3, 77, -2136964960);
  sub_AFB94(a1, a3, 78, -2144247776);
  serdes_apb_read_rvn(a1, a2, a3, 24608);
  sub_AFB94(a1, a3, 77, -2136309590);
  sub_AFB94(a1, a3, 78, -2144247776);
  serdes_apb_read_rvn(a1, a2, a3, 24608);
  V_LOCK();
  V_INT((int)v21, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v27,
    0x1000u,
    0,
    v22,
    v21[0],
    v21[1],
    v21[2],
    v21[3],
    v21[4],
    v21[5],
    v21[6],
    v22,
    "%s Waiting for PHY power up...",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    291,
    60,
    v27);
  serdes_wait_status_rvn(a1, a2, a3, 12308, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 12820, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 13332, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 13844, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
  serdes_wait_status_rvn(a1, a2, a3, 4156, 80);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 80);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 80);
  serdes_wait_status_rvn(a1, a2, a3, 8217, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8729, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9241, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9753, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4114, 0);
  serdes_wait_status_rvn(a1, a2, a3, 4626, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5138, 0);
  serdes_wait_status_rvn(a1, a2, a3, 5650, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8196, 0);
  serdes_wait_status_rvn(a1, a2, a3, 8708, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9220, 0);
  serdes_wait_status_rvn(a1, a2, a3, 9732, 0);
  sub_AFB94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AFB94(a1, a3, 78, -2144251791);
  sub_AFB94(a1, a3, 77, (int)&loc_E000C + 2);
  sub_AFB94(a1, a3, 78, -2144247768);
  sub_AFB94(a1, a3, 77, (int)&loc_E000C + 2);
  sub_AFB94(a1, a3, 78, -2144247768);
  sub_AFB94(a1, a3, 77, (int)&loc_30000 + 3);
  sub_AFB94(a1, a3, 78, -2144243377);
  sub_AFB94(a1, a3, 77, (int)&loc_30000 + 3);
  sub_AFB94(a1, a3, 78, -2144243377);
  sub_AFB94(a1, a3, 77, (int)&loc_70004 + 3);
  sub_AFB94(a1, a3, 78, -2144243377);
  sub_AFB94(a1, a3, 77, -2136244053);
  sub_AFB94(a1, a3, 78, -2144247776);
  sub_AFB94(a1, a3, 77, -2136244053);
  sub_AFB94(a1, a3, 78, -2144247776);
  usleep(0x2710u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 93);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 93);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 93);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 93);
  sub_AFB94(a1, a3, 77, -2136309590);
  sub_AFB94(a1, a3, 78, -2144247776);
  sub_AFB94(a1, a3, 77, -2136309590);
  sub_AFB94(a1, a3, 78, -2144247776);
  usleep((__useconds_t)&stru_18698.st_size);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 92);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 92);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 92);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 92);
  usleep(0xEA60u);
  sub_AFB94(a1, a3, 77, -1062551382);
  sub_AFB94(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 94);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 94);
  if ( v12 == 2 )
  {
    sub_AFB94(a1, a3, 77, (int)&loc_30000 + 3);
    sub_AFB94(a1, a3, 78, -2144247798);
    sub_AFB94(a1, a3, 77, (int)&loc_30000 + 3);
    sub_AFB94(a1, a3, 78, -2144247798);
    usleep(0x3E8u);
    serdes_wait_status_rvn(a1, a2, a3, 8218, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 8730, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 9242, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    serdes_wait_status_rvn(a1, a2, a3, 9754, (unsigned __int16)((unsigned __int16)&dword_10000 + 1));
    sub_AFB94(a1, a3, 77, (int)"tput");
    sub_AFB94(a1, a3, 78, -2144247798);
    sub_AFB94(a1, a3, 77, (int)"tput");
    sub_AFB94(a1, a3, 78, -2144247798);
    usleep((__useconds_t)&stru_18698.st_size);
    serdes_wait_status_rvn(a1, a2, a3, 8218, 0);
    serdes_wait_status_rvn(a1, a2, a3, 8730, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9242, 0);
    serdes_wait_status_rvn(a1, a2, a3, 9754, 0);
  }
  sub_AFB94(a1, a3, 77, -2136309590);
  sub_AFB94(a1, a3, 78, -2144247776);
  sub_AFB94(a1, a3, 77, -1062551382);
  sub_AFB94(a1, a3, 78, -2144247776);
  usleep(0xC350u);
  V_LOCK();
  V_INT((int)v23, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v27,
    0x1000u,
    0,
    v24,
    v23[0],
    v23[1],
    v23[2],
    v23[3],
    v23[4],
    v23[5],
    v23[6],
    v24,
    "%s Reading RX ACK and RX VALID at PMA level",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    375,
    60,
    v27);
  serdes_wait_status_rvn(a1, a2, a3, 4156, 94);
  serdes_wait_status_rvn(a1, a2, a3, 4668, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5180, 94);
  serdes_wait_status_rvn(a1, a2, a3, 5692, 94);
  V_LOCK();
  V_INT((int)v25, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v27,
    0x1000u,
    0,
    v26,
    v25[0],
    v25[1],
    v25[2],
    v25[3],
    v25[4],
    v25[5],
    v25[6],
    v26,
    "%s Enabling RX LBERT in LFSR31 and setting RX LBERT SYNC to 1",
    "serdes_internal_loop_ate_init_rvn");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_rvn_2044/backend_rvn_phy_set.c",
    174,
    "serdes_internal_loop_ate_init_rvn",
    33,
    380,
    60,
    v27);
  sub_AFB94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AFB94(a1, a3, 78, -2144251757);
  sub_AFB94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AFB94(a1, a3, 78, -2144251757);
  sub_AFB94(a1, a3, 77, (int)&loc_110010 + 1);
  sub_AFB94(a1, a3, 78, -2144251757);
  sub_AFB94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AFB94(a1, a3, 78, -2144251757);
  sub_AFB94(a1, a3, 77, (int)&loc_110010 + 1);
  sub_AFB94(a1, a3, 78, -2144251757);
  sub_AFB94(a1, a3, 77, (int)&dword_10000 + 1);
  sub_AFB94(a1, a3, 78, -2144251757);
  usleep(0x2710u);
  return 0;
}
