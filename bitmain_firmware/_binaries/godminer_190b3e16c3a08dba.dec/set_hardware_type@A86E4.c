int __fastcall set_hardware_type(int a1)
{
  int *v1; // r3
  int v2; // r5
  int v4; // r1
  int *v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r12
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // [sp+14h] [bp-1808h] BYREF
  _DWORD v15[510]; // [sp+18h] [bp-1804h] BYREF
  char v16[4100]; // [sp+818h] [bp-1004h] BYREF

  LOWORD(v1) = -16388;
  HIWORD(v1) = (unsigned int)&unk_18B744 >> 16;
  v2 = *v1;
  v14 = 0;
  if ( v2 )
  {
    fpga_read(0, &v14);
    v4 = v14;
    if ( a1 )
    {
      if ( a1 == 1 )
      {
        v4 = v14 | 0x80000000;
        v14 |= 0x80000000;
      }
    }
    else
    {
      v4 = v14 & 0x7FFFFFFF;
      v14 &= ~0x80000000;
    }
    fpga_write(0, v4);
    return 0;
  }
  else
  {
    LOWORD(v6) = -19700;
    HIWORD(v6) = (unsigned int)"s" >> 16;
    v7 = *v6;
    v8 = v6[1];
    v9 = v6[2];
    v10 = v6[3];
    v11 = v6[4];
    v15[0] = v7;
    v15[1] = v8;
    v15[2] = v9;
    v15[3] = v10;
    v15[4] = v11;
    V_LOCK();
    logfmt_raw(v16, 0x1000u, 0, v15);
    V_UNLOCK();
    LOWORD(v12) = -12376;
    HIWORD(v12) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v13) = -19980;
    HIWORD(v13) = (unsigned int)"a488470d9828029106e28686b0cb8b56745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores_kas" >> 16;
    zlog(*v12, v13, 174, "set_hardware_type", 17, 257, 100, v16);
    return -2;
  }
}
