int bitmain_get_sample_voltage()
{
  int result; // r0
  const char *v1; // r2
  _DWORD *v2; // r3
  int v3; // r1
  int *v4; // r12
  _DWORD *v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int v10; // r12
  int v11; // r1
  int *v12; // r12
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r1
  int v20; // [sp+10h] [bp-1814h] BYREF
  __int16 v21; // [sp+14h] [bp-1810h]
  _DWORD v22[2]; // [sp+18h] [bp-180Ch] BYREF
  int s; // [sp+20h] [bp-1804h] BYREF
  int v24; // [sp+24h] [bp-1800h]
  int v25; // [sp+28h] [bp-17FCh]
  int v26; // [sp+2Ch] [bp-17F8h]
  int v27; // [sp+30h] [bp-17F4h]
  int v28; // [sp+34h] [bp-17F0h]
  int v29; // [sp+38h] [bp-17ECh]
  char v30[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_1B571C || sub_CA67C() >= 0 )
  {
    v22[1] = 0;
    v22[0] = 0;
    v20 = 67414613;
    v21 = 8;
    result = sub_C9CF0((void *)dword_1B5718, (unsigned __int8 *)&v20, 6u, (unsigned __int8 *)v22, 8u);
    if ( result )
    {
      LOWORD(v4) = -28384;
      HIWORD(v4) = (unsigned int)"7_uart.c" >> 16;
      LOWORD(v5) = 24916;
      v6 = *v4;
      v7 = v4[1];
      v8 = v4[2];
      v9 = v4[3];
      HIWORD(v5) = (unsigned int)&unk_1B503C >> 16;
      v10 = v4[4];
      s = v6;
      v24 = v7;
      v25 = v8;
      v26 = v9;
      v27 = v10;
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v11) = -28900;
      HIWORD(v11) = (unsigned int)"" >> 16;
      zlog(*v5, v11, 173, "_bitmain_get_sample_N", 21, 468, 100, v30);
      LOWORD(v12) = -28364;
      HIWORD(v12) = (unsigned int)"uart%d is not supported!!!" >> 16;
      v13 = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12[3];
      v12 += 4;
      s = v13;
      v24 = v14;
      v25 = v15;
      v26 = v16;
      v17 = v12[1];
      v18 = v12[2];
      v27 = *v12;
      v28 = v17;
      v29 = v18;
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v19) = -28900;
      HIWORD(v19) = (unsigned int)"" >> 16;
      return zlog(*v5, v19, 173, "bitmain_get_sample_voltage", 26, 580, 100, v30);
    }
  }
  else
  {
    LOWORD(v1) = -28548;
    HIWORD(v1) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_uart.c" >> 16;
    snprintf((char *)&s, 0x800u, v1, "bitmain_get_sample_voltage");
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v2) = 24916;
    HIWORD(v2) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v3) = -28900;
    HIWORD(v3) = (unsigned int)"" >> 16;
    return zlog(*v2, v3, 173, "bitmain_get_sample_voltage", 26, 576, 100, v30);
  }
  return result;
}
