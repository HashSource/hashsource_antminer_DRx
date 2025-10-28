int get_temperature_8_11()
{
  int *v0; // r3
  int v1; // r4
  int *v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r12
  _DWORD *v9; // r3
  int v10; // r1
  int v11; // [sp+14h] [bp-1804h] BYREF
  _DWORD v12[510]; // [sp+18h] [bp-1800h] BYREF
  char v13[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v0) = -16388;
  HIWORD(v0) = (unsigned int)&unk_18B744 >> 16;
  v1 = *v0;
  v11 = 0;
  if ( v1 )
  {
    fpga_read(40, &v11);
    return v11;
  }
  else
  {
    LOWORD(v3) = -19700;
    HIWORD(v3) = (unsigned int)"s" >> 16;
    v4 = *v3;
    v5 = v3[1];
    v6 = v3[2];
    v7 = v3[3];
    v8 = v3[4];
    v12[0] = v4;
    v12[1] = v5;
    v12[2] = v6;
    v12[3] = v7;
    v12[4] = v8;
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, v12);
    V_UNLOCK();
    LOWORD(v9) = -12376;
    HIWORD(v9) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v10) = -19980;
    HIWORD(v10) = (unsigned int)"a488470d9828029106e28686b0cb8b56745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
    zlog(*v9, v10, 174, "get_temperature_8_11", 20, 971, 100, v13);
    return 0;
  }
}
