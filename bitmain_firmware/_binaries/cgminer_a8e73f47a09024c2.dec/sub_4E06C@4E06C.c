void __noreturn sub_4E06C()
{
  int v0; // r10
  int v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r5
  char s[2048]; // [sp+10h] [bp-80Ch] BYREF
  int v7; // [sp+810h] [bp-Ch] BYREF
  _BYTE v8[5]; // [sp+817h] [bp-5h] BYREF

  while ( 1 )
  {
    LOBYTE(dword_B435F) = 0;
    *(int *)((char *)&dword_B435F + 1) &= 0xFF000000;
    LOBYTE(dword_B4363) = 0;
    *(int *)((char *)&dword_B4363 + 1) &= 0xFF000000;
    v0 = 2;
    do
    {
      v5 = 6;
      do
      {
        v7 = 0;
        v8[0] = 0;
        if ( sub_4E044(v8, &v7) != -1 )
        {
          v1 = v8[0];
          v2 = v7;
          v3 = 120 * v7;
          v4 = 120 * v7;
          dword_B432E[v8[0]] = 120 * v7;
          if ( v2 )
          {
            if ( !byte_B4310[v1] )
            {
              byte_B4310[v1] = 1;
              ++byte_B435D;
              dword_B3B20 |= 1 << v1;
            }
          }
          else if ( byte_B4310[v1] == 1 )
          {
            byte_B4310[v1] = 0;
            --byte_B435D;
            dword_B3B20 &= ~(1 << v1);
          }
          if ( v3 > dword_B435F )
            dword_B435F = v4;
          if ( v3 < dword_B4363 && v3 || !dword_B4363 )
            dword_B4363 = v4;
        }
        sub_30140();
        --v5;
      }
      while ( v5 );
      --v0;
    }
    while ( v0 );
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "fan speed  %d %d", dword_B432E[0], dword_B4332);
      sub_3F178(7, s, 0);
    }
    sleep(1u);
  }
}
