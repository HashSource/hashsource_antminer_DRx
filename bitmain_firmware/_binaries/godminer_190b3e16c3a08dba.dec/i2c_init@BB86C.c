int i2c_init()
{
  int *v0; // r3
  int v1; // r4
  int v2; // r4
  int *v3; // r6
  int v5; // r0
  int *v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r3
  int v15; // r1
  int v16; // [sp+14h] [bp-1804h] BYREF
  _DWORD v17[7]; // [sp+18h] [bp-1800h] BYREF
  char v18; // [sp+34h] [bp-17E4h]
  _DWORD v19[1024]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v0) = -16388;
  HIWORD(v0) = (unsigned int)&unk_18B744 >> 16;
  v1 = *v0;
  v16 = -1;
  if ( v1 )
  {
    v2 = dword_18CEA8;
    if ( dword_18CEA8 )
    {
      v3 = (int *)dword_18CEAC;
    }
    else
    {
      LOWORD(v5) = -18672;
      HIWORD(v5) = (unsigned int)&loc_BDDC4 >> 16;
      v3 = new_c_map(v5, 0, 0);
      dword_18CEAC = (int)v3;
      pthread_mutex_init(&stru_18CEB0, 0);
      v2 = dword_18CEA8;
    }
    dword_18CEA8 = v2 + 1;
    v16 = v2 + 1;
    v19[0] = 0;
    v19[1] = 0;
    insert_c_map(v3, &v16, 4u, v19, 8u);
    return v16;
  }
  else
  {
    LOWORD(v6) = -19552;
    HIWORD(v6) = (unsigned int)"m_kas" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v6 += 4;
    v17[0] = v7;
    v17[1] = v8;
    v17[2] = v9;
    v17[3] = v10;
    v11 = v6[1];
    v12 = v6[2];
    v13 = v6[3];
    v17[4] = *v6;
    v17[5] = v11;
    v17[6] = v12;
    v18 = v13;
    V_LOCK();
    logfmt_raw((char *)v19, 0x1000u, 0, v17);
    V_UNLOCK();
    LOWORD(v14) = -12376;
    HIWORD(v14) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v15) = -6796;
    HIWORD(v15) = (unsigned int)&unk_1596A4 >> 16;
    zlog(*v14, v15, 171, "i2c_init", 8, 40, 100, v19);
    return -2;
  }
}
