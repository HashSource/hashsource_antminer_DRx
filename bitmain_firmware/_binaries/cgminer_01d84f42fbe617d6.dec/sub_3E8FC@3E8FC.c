void sub_3E8FC()
{
  unsigned int v0; // r6
  FILE *v1; // r0
  FILE *v2; // r8
  unsigned int v3; // r7
  unsigned int v4; // r9
  unsigned int v5; // r0
  unsigned int v6; // r12
  unsigned int v7; // r7
  int v8; // r7
  unsigned int v9; // s15
  unsigned int v10; // r0
  unsigned int v11; // r12
  unsigned int v12; // r6
  int v13; // r6
  unsigned int v14; // s15
  bool v15; // cc
  unsigned int v16; // [sp+0h] [bp-90Ch]
  unsigned int v17; // [sp+0h] [bp-90Ch]
  unsigned int v18; // [sp+4h] [bp-908h]
  char haystack[4]; // [sp+8h] [bp-904h] BYREF
  _BYTE s[252]; // [sp+Ch] [bp-900h] BYREF
  char v21[2052]; // [sp+108h] [bp-804h] BYREF

  v0 = 0;
  *(_DWORD *)haystack = 0;
  memset(s, 0, sizeof(s));
  v1 = fopen("/proc/interrupts", "r");
  v2 = v1;
  if ( !v1 )
  {
    while ( 1 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
      {
        strcpy(v21, "open /proc/interrupt error");
        sub_38438(3, v21, 0);
      }
      sleep(3u);
    }
  }
  fseek(v1, 0, 0);
  v3 = 0;
  while ( fgets(haystack, 256, v2) )
  {
    if ( strstr(haystack, "256:") && strstr(haystack, "gpiolib") )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        strcpy(v21, "find fan1.");
        sub_38438(7, v21, 0);
      }
      v3 = sub_3A73C(haystack);
    }
    if ( strstr(haystack, "254:") && strstr(haystack, "gpiolib") )
    {
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        strcpy(v21, "find fan2.");
        sub_38438(7, v21, 0);
      }
      v0 = sub_3A73C(haystack);
    }
  }
  sub_2B21C();
  v4 = 0;
  v18 = 0;
  while ( 1 )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(v21, 0x800u, "test_loop = %d", 0);
      sub_38438(7, v21, 0);
    }
    fseek(v2, 0, 0);
    while ( fgets(haystack, 256, v2) )
    {
      if ( strstr(haystack, "256:") && strstr(haystack, "gpiolib") )
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          strcpy(v21, "find fan1");
          sub_38438(7, v21, 0);
        }
        v5 = sub_3A73C(haystack);
        v6 = v5;
        if ( v3 > v5 )
          v7 = v5 + ~v3;
        else
          v7 = v5 - v3;
        v8 = 60 * v7;
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          v16 = v5;
          snprintf(v21, 0x800u, "fan1Speed = %d", v8);
          sub_38438(7, v21, 0);
          v6 = v16;
        }
        v9 = v8;
        v3 = v6;
        if ( (double)v9 > 3655.0 )
          ++v18;
      }
      if ( strstr(haystack, "254:") && strstr(haystack, "gpiolib") )
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          strcpy(v21, "find fan2");
          sub_38438(7, v21, 0);
        }
        v10 = sub_3A73C(haystack);
        v11 = v10;
        if ( v0 > v10 )
          v12 = v10 + ~v0;
        else
          v12 = v10 - v0;
        v13 = 60 * v12;
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          v17 = v10;
          snprintf(v21, 0x800u, "fan2Speed = %d", v13);
          sub_38438(7, v21, 0);
          v11 = v17;
        }
        v14 = v13;
        v0 = v11;
        if ( (double)v14 > 3060.0 )
          ++v4;
      }
    }
    v15 = v4 > 2;
    if ( v4 > 2 )
      v15 = v18 > 2;
    if ( v15 )
      break;
    sub_2B21C();
  }
  if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
  {
    snprintf(v21, 0x800u, "%s OK", "check_fan_speed");
    sub_38438(4, v21, 0);
  }
}
