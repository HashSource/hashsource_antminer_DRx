unsigned int __fastcall sub_AD0AC(int a1, int a2, unsigned int a3)
{
  unsigned int v6; // r5
  int v8; // r6
  int v9; // r0
  unsigned int v10; // r9
  int v11; // r4
  unsigned int v12; // r3
  unsigned int v13; // r4
  int v14; // r3
  unsigned int v15; // r1
  unsigned int v16; // r2
  unsigned int v17; // r2
  unsigned int v18; // [sp+14h] [bp-1808h] BYREF
  char s[2040]; // [sp+18h] [bp-1804h] BYREF
  char v20[4100]; // [sp+818h] [bp-1004h] BYREF

  v18 = 0;
  switch ( a1 )
  {
    case 0:
      v8 = 532;
      v9 = 528;
      goto LABEL_5;
    case 1:
      v8 = 540;
      v9 = 536;
      goto LABEL_5;
    case 2:
      v8 = 548;
      v9 = 544;
      goto LABEL_5;
    case 3:
      v8 = 556;
      v9 = 552;
      goto LABEL_5;
    case 4:
      v8 = 564;
      v9 = 560;
      goto LABEL_5;
    case 5:
      v8 = 572;
      v9 = 568;
      goto LABEL_5;
    case 6:
      v8 = 580;
      v9 = 576;
      goto LABEL_5;
    case 7:
      v8 = 588;
      v9 = 584;
      goto LABEL_5;
    case 8:
      v8 = 596;
      v9 = 592;
      goto LABEL_5;
    case 9:
      v8 = 604;
      v9 = 600;
      goto LABEL_5;
    case 10:
      v8 = 660;
      v9 = 656;
      goto LABEL_5;
    case 11:
      v8 = 668;
      v9 = 664;
      goto LABEL_5;
    case 12:
      v8 = 676;
      v9 = 672;
      goto LABEL_5;
    case 13:
      v8 = 684;
      v9 = 680;
LABEL_5:
      fpga_write(v9, a3 & 0x3FF | 0x80000000);
      v10 = a3 >> 2;
      if ( a3 >> 2 )
      {
        v11 = a2;
        do
        {
          v11 += 4;
          fpga_read(v8, &v18);
          v12 = v18;
          *(_BYTE *)(v11 - 1) = v18;
          *(_BYTE *)(v11 - 4) = HIBYTE(v12);
          *(_BYTE *)(v11 - 3) = BYTE2(v12);
          *(_BYTE *)(v11 - 2) = BYTE1(v12);
        }
        while ( a2 + 4 * v10 != v11 );
      }
      v13 = a3 & 3;
      v6 = a3 & 0xFFFFFFFC;
      if ( v13 )
      {
        fpga_read(v8, &v18);
        v14 = a2 + 4 * v10;
        if ( v13 == 2 )
        {
          v6 += 2;
          v17 = HIWORD(v18);
          *(_BYTE *)(a2 + 4 * v10) = HIBYTE(v18);
          *(_BYTE *)(v14 + 1) = v17;
        }
        else if ( v13 == 3 )
        {
          v6 += 3;
          v15 = HIWORD(v18);
          v16 = v18 >> 8;
          *(_BYTE *)(a2 + 4 * v10) = HIBYTE(v18);
          *(_BYTE *)(v14 + 1) = v15;
          *(_BYTE *)(v14 + 2) = v16;
        }
        else
        {
          ++v6;
          *(_BYTE *)(a2 + 4 * v10) = HIBYTE(v18);
        }
      }
      break;
    default:
      snprintf(s, 0x800u, "%s: The uart%d is not supported!!!", "get_read_address_info", a1);
      V_LOCK();
      v6 = 0;
      logfmt_raw(v20, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_uart.c",
        172,
        "get_read_address_info",
        21,
        207,
        100,
        v20);
      snprintf(s, 0x800u, "get_read_address_info error, chain_id = %d", a1);
      V_LOCK();
      logfmt_raw(v20, 0x1000u, 0, s);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_uart.c",
        172,
        "read_uart_data_in_fpga",
        22,
        285,
        100,
        v20);
      break;
  }
  return v6;
}
