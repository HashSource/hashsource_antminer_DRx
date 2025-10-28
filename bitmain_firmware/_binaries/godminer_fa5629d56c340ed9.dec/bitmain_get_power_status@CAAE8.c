int bitmain_get_power_status()
{
  int v0; // r5
  int *v1; // r12
  _DWORD *v2; // r6
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r1
  int *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r1
  const char *v18; // r2
  _DWORD *v19; // r3
  int v20; // r1
  int v21; // [sp+10h] [bp-1814h] BYREF
  __int16 v22; // [sp+14h] [bp-1810h]
  int v23; // [sp+18h] [bp-180Ch] BYREF
  int v24; // [sp+1Ch] [bp-1808h]
  int s; // [sp+20h] [bp-1804h] BYREF
  int v26; // [sp+24h] [bp-1800h]
  int v27; // [sp+28h] [bp-17FCh]
  int v28; // [sp+2Ch] [bp-17F8h]
  int v29; // [sp+30h] [bp-17F4h]
  int v30; // [sp+34h] [bp-17F0h]
  __int16 v31; // [sp+38h] [bp-17ECh]
  char v32[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( dword_1B571C || (v0 = sub_CA67C(), v0 >= 0) )
  {
    v24 = 0;
    v23 = 0;
    v21 = 168077909;
    v22 = 14;
    if ( sub_C9CF0((void *)dword_1B5718, (unsigned __int8 *)&v21, 6u, (unsigned __int8 *)&v23, 8u) )
    {
      LOWORD(v1) = -28336;
      HIWORD(v1) = (unsigned int)"get_send_address_info error, chain_id = %d" >> 16;
      LOWORD(v2) = 24916;
      v3 = *v1;
      v4 = v1[1];
      v5 = v1[2];
      v6 = v1[3];
      v1 += 4;
      HIWORD(v2) = (unsigned int)&unk_1B503C >> 16;
      s = v3;
      v26 = v4;
      v27 = v5;
      v28 = v6;
      v7 = v1[1];
      v29 = *v1;
      v30 = v7;
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v8) = -28900;
      HIWORD(v8) = (unsigned int)"" >> 16;
      zlog(*v2, v8, 173, "_bitmain_get_power_status", 25, 540, 100, v32);
      LOWORD(v9) = -28312;
      HIWORD(v9) = (unsigned int)"ror, chain_id = %d" >> 16;
      v10 = *v9;
      v11 = v9[1];
      v12 = v9[2];
      v13 = v9[3];
      v9 += 4;
      s = v10;
      v26 = v11;
      v27 = v12;
      v28 = v13;
      v14 = v9[1];
      v15 = v9[2];
      v29 = *v9;
      v30 = v14;
      v31 = v15;
      V_LOCK();
      logfmt_raw(v32, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v16) = -28900;
      HIWORD(v16) = (unsigned int)"" >> 16;
      zlog(*v2, v16, 173, "bitmain_get_power_status", 24, 594, 100, v32);
      return -2147482880;
    }
    return (unsigned __int16)v24;
  }
  else
  {
    LOWORD(v18) = -28548;
    HIWORD(v18) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_uart.c" >> 16;
    snprintf((char *)&s, 0x800u, v18, "bitmain_get_power_status");
    V_LOCK();
    logfmt_raw(v32, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v19) = 24916;
    HIWORD(v19) = (unsigned int)&unk_1B503C >> 16;
    LOWORD(v20) = -28900;
    HIWORD(v20) = (unsigned int)"" >> 16;
    zlog(*v19, v20, 173, "bitmain_get_power_status", 24, 590, 100, v32);
  }
  return v0;
}
