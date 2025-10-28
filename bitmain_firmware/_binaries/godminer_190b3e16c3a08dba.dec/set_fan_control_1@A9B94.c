int __fastcall set_fan_control_1(int a1)
{
  int *v1; // r3
  int v2; // r4
  int *v4; // r12
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r3
  int v9; // r12
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // [sp+14h] [bp-1804h] BYREF
  _DWORD v13[510]; // [sp+18h] [bp-1800h] BYREF
  char v14[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v1) = -16388;
  HIWORD(v1) = (unsigned int)&unk_18B744 >> 16;
  v2 = *v1;
  v12 = 0;
  if ( v2 )
  {
    fpga_write(160, a1);
    return fpga_read(160, &v12);
  }
  else
  {
    LOWORD(v4) = -19700;
    HIWORD(v4) = (unsigned int)"s" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v8 = v4[3];
    v9 = v4[4];
    v13[0] = v5;
    v13[1] = v6;
    v13[2] = v7;
    v13[3] = v8;
    v13[4] = v9;
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, v13);
    V_UNLOCK();
    LOWORD(v10) = -12376;
    HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v11) = -19980;
    HIWORD(v11) = (unsigned int)"a488470d9828029106e28686b0cb8b56745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
    return zlog(*v10, v11, 174, "set_fan_control_1", 17, 1015, 100, v14);
  }
}
