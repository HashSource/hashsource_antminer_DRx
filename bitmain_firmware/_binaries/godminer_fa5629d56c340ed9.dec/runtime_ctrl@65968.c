_DWORD *__fastcall runtime_ctrl(int a1)
{
  _DWORD *v1; // r5
  int v2; // r3
  char *v3; // r2
  char v6[4100]; // [sp+18h] [bp-1004h] BYREF

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
        pthread_mutex_lock(&stru_1A4DA8);
        v2 = dword_1A4DC0;
        v3 = &stru_1A4DA8.__size[4 * dword_1A4DC0++];
        *((_DWORD *)v3 + 7) = v1;
        v1[63] = v2;
        pthread_mutex_unlock(&stru_1A4DA8);
      }
      break;
    default:
      V_LOCK();
      v1 = 0;
      logfmt_raw(v6, 0x1000u, 0, "ALGO %d does not define backend_runtime", a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_interface.c",
        155,
        "runtime_ctrl",
        12,
        65,
        100,
        v6);
      break;
  }
  return v1;
}
