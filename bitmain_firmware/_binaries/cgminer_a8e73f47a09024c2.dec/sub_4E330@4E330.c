void sub_4E330()
{
  int i; // r3
  int v1; // r1
  int v2; // r2
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r5
  char s[2040]; // [sp+8h] [bp-808h] BYREF
  int v7; // [sp+808h] [bp-8h] BYREF
  unsigned __int8 v8; // [sp+80Fh] [bp-1h] BYREF

  v8 = 0;
  sub_4E244(100);
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "Begain %s", "check_fan_speed");
    sub_3F178(5, s, 0);
  }
  write(dword_9A5C4, word_661D0, 2u);
  write(dword_9A550, word_661D0, 2u);
  LOBYTE(dword_B435F) = 0;
  *(int *)((char *)&dword_B435F + 1) &= 0xFF000000;
  LOBYTE(dword_B4363) = 0;
  *(int *)((char *)&dword_B4363 + 1) &= 0xFF000000;
  for ( i = (unsigned __int8)byte_B435D; (unsigned __int8)byte_B435D <= 1u; i = (unsigned __int8)byte_B435D )
  {
    v5 = 6;
    do
    {
      v7 = 0;
      v8 = 0;
      if ( sub_4E044(&v8, &v7) != -1 )
      {
        v1 = v8;
        v2 = v7;
        v3 = 120 * v7;
        v4 = 120 * v7;
        dword_B432E[v8] = 120 * v7;
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
    sub_30140();
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "%s, check_fan_speed ok, dev.fan_num = %d", "check_fan_speed", i);
    sub_3F178(5, s, 0);
  }
  sub_4E244(70);
}
