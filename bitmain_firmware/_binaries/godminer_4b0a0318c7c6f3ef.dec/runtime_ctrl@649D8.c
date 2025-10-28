_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v1; // r5
  int v2; // r3
  char *v3; // r2
  int v5; // r3
  int *v6; // r3
  int v7; // r0
  int v8; // r1
  char v10[4100]; // [sp+18h] [bp-1004h] BYREF

  switch ( a1 )
  {
    case 1:
      v1 = runtime_ctrl_ckb_2042();
      goto LABEL_3;
    case 2:
      v1 = runtime_ctrl_kda_2110();
      goto LABEL_3;
    case 3:
      v1 = runtime_ctrl_hns_2130();
      goto LABEL_3;
    case 4:
      v1 = runtime_ctrl_dcr_1727();
      goto LABEL_3;
    case 5:
      v1 = runtime_ctrl_dash_1766();
      goto LABEL_3;
    case 6:
      v1 = runtime_ctrl_eth_2280();
      goto LABEL_3;
    case 8:
      v1 = runtime_ctrl_ltc_1489();
      goto LABEL_3;
    case 9:
      v1 = runtime_ctrl_zec_1746();
      goto LABEL_3;
    case 10:
      v1 = runtime_ctrl_rvn_2044();
      goto LABEL_3;
    case 11:
      v1 = runtime_ctrl_kas_2380();
      goto LABEL_3;
    case 12:
      v1 = runtime_ctrl_ks5_2382();
LABEL_3:
      if ( v1 )
      {
        pthread_mutex_lock((pthread_mutex_t *)&unk_1A3C90);
        v2 = dword_1A3CA8;
        v3 = (char *)&unk_1A3C90 + 4 * dword_1A3CA8++;
        *((_DWORD *)v3 + 7) = v1;
        v1[62] = v2;
        pthread_mutex_unlock((pthread_mutex_t *)&unk_1A3C90);
      }
      break;
    default:
      V_LOCK();
      LOWORD(v5) = -30288;
      HIWORD(v5) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/topol/topol.c" >> 16;
      v1 = 0;
      logfmt_raw(v10, 0x1000u, 0, v5, a1);
      V_UNLOCK();
      LOWORD(v6) = 20532;
      HIWORD(v6) = (unsigned int)&g_fan_zc >> 16;
      v7 = *v6;
      LOWORD(v6) = -30340;
      LOWORD(v8) = -30248;
      HIWORD(v6) = (unsigned int)&unk_168D3C >> 16;
      HIWORD(v8) = (unsigned int)"rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/topol/topol.c" >> 16;
      zlog(v7, v8, 155, v6, 12, 65, 100, v10);
      break;
  }
  return v1;
}
