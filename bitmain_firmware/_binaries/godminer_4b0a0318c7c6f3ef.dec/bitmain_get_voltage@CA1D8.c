void bitmain_get_voltage()
{
  const char *v0; // r2
  _DWORD *v1; // r3
  int v2; // r1
  int *v3; // lr
  _DWORD *v4; // r5
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int *v12; // r12
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r1
  int v19; // [sp+10h] [bp-1810h] BYREF
  __int16 v20; // [sp+14h] [bp-180Ch]
  _DWORD v21[2]; // [sp+18h] [bp-1808h] BYREF
  int s; // [sp+20h] [bp-1800h] BYREF
  int v23; // [sp+24h] [bp-17FCh]
  int v24; // [sp+28h] [bp-17F8h]
  int v25; // [sp+2Ch] [bp-17F4h]
  int v26; // [sp+30h] [bp-17F0h]
  int v27; // [sp+34h] [bp-17ECh]
  __int16 v28; // [sp+38h] [bp-17E8h]
  char v29; // [sp+3Ah] [bp-17E6h]
  char v30[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_1B45FC || sub_C91DC() >= 0 )
  {
    v21[1] = 0;
    v21[0] = 0;
    v19 = 50637397;
    v20 = 7;
    if ( sub_C8850((void *)dword_1B45F8, (unsigned __int8 *)&v19, 6u, (unsigned __int8 *)v21, 8u) )
    {
      LOWORD(v3) = 30840;
      HIWORD(v3) = (unsigned int)"orkspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_base.c" >> 16;
      LOWORD(v4) = 20532;
      v5 = *v3;
      v6 = v3[1];
      v7 = v3[2];
      v8 = v3[3];
      v3 += 4;
      HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
      s = v5;
      v23 = v6;
      v24 = v7;
      v25 = v8;
      v9 = v3[1];
      v10 = v3[2];
      v26 = *v3;
      v27 = v9;
      v28 = v10;
      v29 = BYTE2(v10);
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v11) = 30196;
      HIWORD(v11) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      zlog(*v4, v11, 173, "_bitmain_get_AD_conversion_N", 28, 369, 100, v30);
      LOWORD(v12) = 30868;
      HIWORD(v12) = (unsigned int)"e/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/backend_base.c" >> 16;
      v13 = *v12;
      v14 = v12[1];
      v15 = v12[2];
      v16 = v12[3];
      v12 += 4;
      s = v13;
      v23 = v14;
      v24 = v15;
      v25 = v16;
      v17 = v12[1];
      v26 = *v12;
      LOBYTE(v27) = v17;
      V_LOCK();
      logfmt_raw(v30, 0x1000u, 0, &s);
      V_UNLOCK();
      LOWORD(v18) = 30196;
      HIWORD(v18) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      zlog(*v4, v18, 173, "bitmain_get_voltage", 19, 705, 100, v30);
    }
    else
    {
      bitmain_convert_N_to_V();
    }
  }
  else
  {
    LOWORD(v0) = 30548;
    HIWORD(v0) = (unsigned int)"%d, slave: %d, addr: %d" >> 16;
    snprintf((char *)&s, 0x800u, v0, "bitmain_get_voltage");
    V_LOCK();
    logfmt_raw(v30, 0x1000u, 0, &s);
    V_UNLOCK();
    LOWORD(v1) = 20532;
    HIWORD(v1) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v2) = 30196;
    HIWORD(v2) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
    zlog(*v1, v2, 173, "bitmain_get_voltage", 19, 701, 100, v30);
  }
}
