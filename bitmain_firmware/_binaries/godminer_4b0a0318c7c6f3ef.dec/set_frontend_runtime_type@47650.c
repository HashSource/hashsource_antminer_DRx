_DWORD *__fastcall set_frontend_runtime_type(int a1, int a2)
{
  _DWORD *v4; // r4
  void **v5; // r6
  int v7; // r3
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  char v11[4100]; // [sp+10h] [bp-1004h] BYREF

  switch ( a2 )
  {
    case 0:
    case 1:
      v4 = frontend_runtime_ckb();
      goto LABEL_3;
    case 2:
      v4 = frontend_runtime_kda();
      goto LABEL_3;
    case 3:
      v4 = frontend_runtime_hns();
      goto LABEL_3;
    case 4:
      v4 = frontend_runtime_dcr();
      goto LABEL_3;
    case 5:
      v4 = frontend_runtime_dash();
      goto LABEL_3;
    case 6:
      v4 = frontend_runtime_eth();
      goto LABEL_3;
    case 7:
      v4 = frontend_runtime_eth_2282();
      goto LABEL_3;
    case 8:
      v4 = frontend_runtime_ltc();
      goto LABEL_3;
    case 9:
      v4 = frontend_runtime_zec();
      goto LABEL_3;
    case 10:
      v4 = frontend_runtime_rvn();
      goto LABEL_3;
    case 11:
      v4 = frontend_runtime_kas();
      goto LABEL_3;
    case 12:
      v4 = frontend_runtime_ks5();
LABEL_3:
      if ( v4 )
      {
        LOWORD(v5) = 26252;
        v4[18] = a1;
        HIWORD(v5) = (unsigned int)&dword_196694 >> 16;
        if ( *v5 )
          free(*v5);
        v4[19] = a2;
        *v5 = v4;
      }
      break;
    default:
      V_LOCK();
      LOWORD(v7) = -18552;
      HIWORD(v7) = (unsigned int)"da" >> 16;
      v4 = 0;
      logfmt_raw(v11, 0x1000u, 0, v7, a2);
      V_UNLOCK();
      LOWORD(v8) = 20532;
      HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
      v9 = *v8;
      LOWORD(v8) = -18608;
      LOWORD(v10) = -18512;
      HIWORD(v8) = (unsigned int)"ranonce" >> 16;
      HIWORD(v10) = (unsigned int)"/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_kda/frontend_kda.c" >> 16;
      zlog(v9, v10, 157, v8, 25, 63, 100, v11);
      break;
  }
  return v4;
}
