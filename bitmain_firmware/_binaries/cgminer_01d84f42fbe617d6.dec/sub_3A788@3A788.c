void __noreturn sub_3A788()
{
  char v0; // r9
  char v1; // r8
  unsigned int v2; // r7
  unsigned int v3; // r4
  FILE *v4; // r6
  unsigned int v5; // r0
  unsigned int v6; // r4
  unsigned int v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r7
  unsigned int v10; // r3
  _DWORD v11[65]; // [sp+0h] [bp-104h] BYREF

  v0 = 0;
  v1 = 0;
  v2 = 0;
  v3 = 0;
  v4 = fopen("/proc/interrupts", "r");
  while ( 1 )
  {
    fseek(v4, 0, 0);
    memset(v11, 0, 256);
    while ( fgets((char *)v11, 256, v4) )
    {
      if ( strstr((const char *)v11, "256:") && strstr((const char *)v11, "gpiolib") )
      {
        v5 = sub_3A73C((const char *)v11);
        if ( v3 > v5 )
          v6 = v5 + ~v3;
        else
          v6 = v5 - v3;
        v7 = (60 * v6) >> 1;
        if ( v7 )
        {
          v1 = 1;
          if ( v7 > 0x19C8 )
            v7 = 6600;
        }
        else
        {
          v1 = 0;
        }
        dword_C544A = v7;
        v3 = v5;
        dword_C546B = v7;
      }
      else if ( strstr((const char *)v11, "254:") && strstr((const char *)v11, "gpiolib") )
      {
        v8 = sub_3A73C((const char *)v11);
        if ( v2 > v8 )
          v9 = v8 + ~v2;
        else
          v9 = v8 - v2;
        v10 = (60 * v9) >> 1;
        if ( v10 )
        {
          v0 = 1;
          if ( v10 > 0x19C8 )
            v10 = 6600;
        }
        else
        {
          v0 = 0;
        }
        v2 = v8;
        dword_C544E = v10;
        dword_C546F = v10;
      }
    }
    byte_C5469 = v1 + v0;
    sleep(1u);
  }
}
