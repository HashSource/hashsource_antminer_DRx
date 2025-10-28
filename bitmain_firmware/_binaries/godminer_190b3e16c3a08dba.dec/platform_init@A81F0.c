int platform_init()
{
  int v0; // r5
  int *v2; // r3
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  _DWORD *v7; // r8
  int v8; // r1
  int v9; // r1
  int *v10; // r12
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r12
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int *v19; // r12
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r12
  int v25; // [sp+14h] [bp-1804h] BYREF
  int s; // [sp+18h] [bp-1800h] BYREF
  int v27; // [sp+1Ch] [bp-17FCh]
  int v28; // [sp+20h] [bp-17F8h]
  int v29; // [sp+24h] [bp-17F4h]
  char v30; // [sp+28h] [bp-17F0h]
  char v31[4096]; // [sp+818h] [bp-1000h] BYREF

  if ( platform_inited )
    return 0;
  LOWORD(v2) = -19780;
  HIWORD(v2) = (unsigned int)"854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  LOWORD(v7) = -12376;
  HIWORD(v7) = (unsigned int)&unk_18C750 >> 16;
  s = v3;
  v27 = v4;
  v28 = v5;
  LOWORD(v29) = v6;
  V_LOCK();
  logfmt_raw(v31, 0x1000u, 0, &s);
  V_UNLOCK();
  LOWORD(v8) = -19980;
  HIWORD(v8) = (unsigned int)"a488470d9828029106e28686b0cb8b56745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
  zlog(*v7, v8, 174, "platform_init", 13, 63, 60, v31);
  if ( fpga_init() )
  {
    LOWORD(v10) = -19764;
    HIWORD(v10) = (unsigned int)"434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
    v0 = -1;
    v11 = *v10;
    v12 = v10[1];
    v13 = v10[2];
    v14 = v10[3];
    v15 = v10[4];
    s = v11;
    v27 = v12;
    v28 = v13;
    v29 = v14;
    v30 = v15;
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, &s);
    V_UNLOCK();
    v16 = *v7;
    v17 = 67;
LABEL_9:
    LOWORD(v18) = -19980;
    HIWORD(v18) = (unsigned int)"a488470d9828029106e28686b0cb8b56745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
    zlog(v16, v18, 174, "platform_init", 13, v17, 100, v31);
    return v0;
  }
  if ( gpio_init() )
  {
    LOWORD(v19) = -19744;
    HIWORD(v19) = (unsigned int)"018127e3disable_cores_kas" >> 16;
    v0 = -2;
    v20 = *v19;
    v21 = v19[1];
    v22 = v19[2];
    v23 = v19[3];
    v24 = v19[4];
    s = v20;
    v27 = v21;
    v28 = v22;
    v29 = v23;
    v30 = v24;
    V_LOCK();
    logfmt_raw(v31, 0x1000u, 0, &s);
    V_UNLOCK();
    v16 = *v7;
    v17 = 73;
    goto LABEL_9;
  }
  memset(&unk_18C000, 0, 0x124u);
  v25 = 0;
  fpga_read(0, &v25);
  v25 |= 0x20000000u;
  snprintf((char *)&s, 0x800u, "HARDWARE_VERSION = 0x%x", v25);
  V_LOCK();
  logfmt_raw(v31, 0x1000u, 0, &s);
  V_UNLOCK();
  LOWORD(v9) = -19980;
  HIWORD(v9) = (unsigned int)"a488470d9828029106e28686b0cb8b56745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
  zlog(*v7, v9, 174, "platform_init", 13, 86, 40, v31);
  fpga_write(0, v25);
  platform_inited = 1;
  fan_init();
  uart_init();
  return 0;
}
