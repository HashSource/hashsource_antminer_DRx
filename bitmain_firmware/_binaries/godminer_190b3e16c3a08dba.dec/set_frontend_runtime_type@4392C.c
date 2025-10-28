_DWORD *__fastcall set_frontend_runtime_type(int a1, int a2)
{
  _DWORD *v4; // r4
  int v6; // r3
  int *v7; // r3
  int v8; // r0
  int v9; // r1
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

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
    case 7:
      v4 = frontend_runtime_eth();
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
LABEL_3:
      if ( v4 )
      {
        v4[18] = a1;
        if ( dword_17AC68 )
          free((void *)dword_17AC68);
        v4[19] = a2;
        dword_17AC68 = (int)v4;
      }
      break;
    default:
      V_LOCK();
      LOWORD(v6) = 15644;
      HIWORD(v6) = (unsigned int)&unk_136634 >> 16;
      v4 = 0;
      logfmt_raw(v10, 0x1000u, 0, v6, a2);
      V_UNLOCK();
      LOWORD(v7) = -12376;
      HIWORD(v7) = (unsigned int)&unk_18C750 >> 16;
      v8 = *v7;
      LOWORD(v7) = 15588;
      LOWORD(v9) = 15684;
      HIWORD(v7) = (unsigned int)&unk_1365FC >> 16;
      HIWORD(v9) = (unsigned int)&unk_13665C >> 16;
      zlog(v8, v9, 157, v7, 25, 58, 100, v10);
      break;
  }
  return v4;
}
