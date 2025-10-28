int __fastcall sub_ACA54(int a1, _DWORD *a2, int *a3, int *a4, int *a5)
{
  int v5; // r0
  int v6; // r12
  int v7; // r1
  int result; // r0
  char s[2048]; // [sp+10h] [bp-1800h] BYREF
  char v10[4080]; // [sp+810h] [bp-1000h] BYREF

  switch ( a1 )
  {
    case 0:
      v5 = 384;
      *a2 = 24;
      v6 = 400;
      v7 = 404;
      goto LABEL_3;
    case 1:
      v5 = 384;
      *a2 = 16;
      v6 = 408;
      v7 = 412;
      goto LABEL_3;
    case 2:
      v5 = 384;
      *a2 = 8;
      v6 = 416;
      v7 = 420;
      goto LABEL_3;
    case 3:
      result = 0;
      *a2 = 0;
      v6 = 424;
      v7 = 428;
      *a3 = 384;
      goto LABEL_4;
    case 4:
      v5 = 388;
      *a2 = 24;
      v6 = 432;
      v7 = 436;
      goto LABEL_3;
    case 5:
      v5 = 388;
      *a2 = 16;
      v6 = 440;
      v7 = 444;
      goto LABEL_3;
    case 6:
      v5 = 388;
      *a2 = 8;
      v6 = 448;
      v7 = 452;
      goto LABEL_3;
    case 7:
      result = 0;
      *a2 = 0;
      v6 = 456;
      v7 = 460;
      *a3 = 388;
      goto LABEL_4;
    case 8:
      v5 = 392;
      *a2 = 24;
      v6 = 464;
      v7 = 468;
      goto LABEL_3;
    case 9:
      v5 = 392;
      *a2 = 16;
      v6 = 472;
      v7 = 476;
      goto LABEL_3;
    case 10:
      v5 = 392;
      *a2 = 8;
      v6 = 608;
      v7 = 612;
      goto LABEL_3;
    case 11:
      result = 0;
      *a2 = 0;
      v6 = 616;
      v7 = 620;
      *a3 = 392;
      goto LABEL_4;
    case 12:
      v5 = 396;
      *a2 = 24;
      v6 = 624;
      v7 = 628;
      goto LABEL_3;
    case 13:
      v5 = 396;
      *a2 = 16;
      v6 = 632;
      v7 = 636;
LABEL_3:
      *a3 = v5;
      result = 0;
LABEL_4:
      *a4 = v6;
      *a5 = v7;
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart %d is not supported!!!", "get_send_address_info", a1);
      V_LOCK();
      logfmt_raw(v10, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_uart.c",
        172,
        "get_send_address_info",
        21,
        121,
        100,
        v10);
      result = -1;
      break;
  }
  return result;
}
