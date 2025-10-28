int bitmain_power_fw_version()
{
  int v0; // r5
  int v1; // r3
  const char *v3; // r2
  _DWORD *v4; // r3
  int v5; // r1
  int *v6; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // r1
  int v15; // [sp+10h] [bp-1810h] BYREF
  __int16 v16; // [sp+14h] [bp-180Ch]
  int v17; // [sp+18h] [bp-1808h] BYREF
  int v18; // [sp+1Ch] [bp-1804h]
  _DWORD s[6]; // [sp+20h] [bp-1800h] BYREF
  char v20; // [sp+38h] [bp-17E8h]
  char v21[4096]; // [sp+820h] [bp-1000h] BYREF

  if ( dword_1B45FC || (v0 = sub_C91DC(), v0 >= 0) )
  {
    v18 = 0;
    v17 = 0;
    v15 = 17082965;
    v16 = 5;
    if ( sub_C8850((void *)dword_1B45F8, (unsigned __int8 *)&v15, 6u, (unsigned __int8 *)&v17, 8u) )
    {
      LOWORD(v6) = 30604;
      HIWORD(v6) = (unsigned int)"in: %d, slave: %d, addr: %d" >> 16;
      v7 = *v6;
      v8 = v6[1];
      v9 = v6[2];
      v10 = v6[3];
      v6 += 4;
      s[0] = v7;
      s[1] = v8;
      s[2] = v9;
      s[3] = v10;
      v11 = v6[1];
      v12 = v6[2];
      s[4] = *v6;
      s[5] = v11;
      v20 = v12;
      V_LOCK();
      logfmt_raw(v21, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v13) = 20532;
      HIWORD(v13) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v14) = 30196;
      HIWORD(v14) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
      zlog(*v13, v14, 173, "_bitmain_get_power_fw_version", 29, 264, 100, v21);
      v1 = -2147482880;
      v0 = -2147482880;
    }
    else
    {
      v0 = (unsigned __int16)v18;
      v1 = (unsigned __int16)v18;
    }
    dword_1B4604 = v1;
  }
  else
  {
    LOWORD(v3) = 30548;
    HIWORD(v3) = (unsigned int)"%d, slave: %d, addr: %d" >> 16;
    snprintf((char *)s, 0x800u, v3, "bitmain_power_fw_version");
    V_LOCK();
    logfmt_raw(v21, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v4) = 20532;
    HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v5) = 30196;
    HIWORD(v5) = (unsigned int)"ns/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c" >> 16;
    zlog(*v4, v5, 173, "bitmain_power_fw_version", 24, 679, 100, v21);
  }
  return v0;
}
