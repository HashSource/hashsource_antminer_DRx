_DWORD *__fastcall dhash_content_init(int a1)
{
  _DWORD *result; // r0
  int *v2; // r3
  int v3; // r0
  int v4; // r1
  char v6[4096]; // [sp+18h] [bp-1000h] BYREF

  switch ( a1 )
  {
    case 1:
      result = dhash_content_ckb_2042();
      break;
    case 2:
      result = dhash_content_kda_2110();
      break;
    case 3:
      result = dhash_content_hns_2130();
      break;
    case 4:
      result = dhash_content_dcr_1727();
      break;
    case 5:
      result = dhash_content_dash_1766();
      break;
    case 6:
      result = dhash_content_eth_2280();
      break;
    case 7:
      result = dhash_content_eth_2282();
      break;
    case 8:
      result = dhash_content_ltc_1489();
      break;
    case 9:
      result = dhash_content_zec_1746();
      break;
    case 10:
      result = dhash_content_rvn_2044();
      break;
    case 11:
      result = dhash_content_kas_2380();
      break;
    case 12:
      result = dhash_content_ks5_2382();
      break;
    default:
      V_LOCK();
      logfmt_raw(v6, 0x1000u, 0, "ALGO %d does not define dhash_content", a1);
      V_UNLOCK();
      LOWORD(v2) = 24916;
      HIWORD(v2) = (unsigned int)&unk_1B503C >> 16;
      v3 = *v2;
      LOWORD(v2) = -3028;
      LOWORD(v4) = -2968;
      HIWORD(v2) = (unsigned int)" may take up to 2 minutes..." >> 16;
      HIWORD(v4) = (unsigned int)"t voltage %d" >> 16;
      zlog(v3, v4, 157, v2, 18, 59, 100, v6);
      result = 0;
      break;
  }
  return result;
}
