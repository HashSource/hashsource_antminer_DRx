int __fastcall format_hashrate_double(int a1, double *a2, char *a3)
{
  double v3; // d0
  int v7; // r3
  _DWORD *v8; // r3
  int v9; // r1
  const char *v10; // r1
  int v12; // r2
  double v13; // d9
  const char *v14; // r1
  char v15[4100]; // [sp+10h] [bp-1004h] BYREF

  V_LOCK();
  LOWORD(v7) = -21120;
  HIWORD(v7) = (unsigned int)"no=%d work generator switched to new job %s" >> 16;
  logfmt_raw(v15, 0x1000u, 0, v7, v3, a1);
  V_UNLOCK();
  LOWORD(v8) = 24916;
  HIWORD(v8) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v9) = -21456;
  HIWORD(v9) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner.c" >> 16;
  zlog(*v8, v9, 134, "format_hashrate_double", 22, 86, 20, v15);
  if ( v3 >= 10000.0 )
  {
    if ( v3 < 10000000.0 )
    {
      v12 = 75;
      *a2 = v3 * 0.001;
    }
    else
    {
      if ( v3 < 1.0e10 )
        v12 = 77;
      else
        v12 = 71;
      if ( v3 < 1.0e10 )
        v13 = 0.000001;
      else
        v13 = 0.000000001;
      *a2 = v3 * v13;
    }
    LOWORD(v14) = -21080;
    HIWORD(v14) = (unsigned int)" %s" >> 16;
    return sprintf(a3, v14, v12, a1);
  }
  else
  {
    LOWORD(v10) = -21088;
    *a2 = v3;
    HIWORD(v10) = (unsigned int)" new job %s" >> 16;
    return sprintf(a3, v10, a1);
  }
}
