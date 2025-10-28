int fan_init()
{
  _DWORD *v0; // r3
  int *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int *v10; // r3
  int v11; // r0
  int v12; // r1
  _DWORD v13[7]; // [sp+10h] [bp-1804h] BYREF
  char v14; // [sp+2Ch] [bp-17E8h]
  char v15[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v0) = -16388;
  HIWORD(v0) = (unsigned int)&unk_18B744 >> 16;
  if ( *v0 )
    return 0;
  LOWORD(v2) = -19552;
  HIWORD(v2) = (unsigned int)"m_kas" >> 16;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  v2 += 4;
  v13[0] = v3;
  v13[1] = v4;
  v13[2] = v5;
  v13[3] = v6;
  v7 = v2[1];
  v8 = v2[2];
  v9 = v2[3];
  v13[4] = *v2;
  v13[5] = v7;
  v13[6] = v8;
  v14 = v9;
  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, v13);
  V_UNLOCK();
  LOWORD(v10) = -12376;
  HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
  v11 = *v10;
  LOWORD(v10) = -19588;
  LOWORD(v12) = -19520;
  HIWORD(v10) = (unsigned int)"" >> 16;
  HIWORD(v12) = (unsigned int)"set_work_timeout_kas" >> 16;
  zlog(v11, v12, 171, v10, 8, 25, 100, v15);
  return -1;
}
