void __noreturn sub_48554()
{
  unsigned int i; // r4
  int v1; // r8
  int v2; // r9
  int v3; // r11
  unsigned int v4; // r10
  int v5; // t1
  char *v6; // r6
  __int16 *v7; // r7
  int j; // r5
  unsigned int v9; // r4
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    strcpy(s, "read_temp_func");
    sub_3F1C0(7, s, 0);
  }
  for ( i = 0; ; i = (unsigned __int8)(i + 1) )
  {
    while ( i > 3 )
    {
      v1 = 603403;
      v2 = 0;
      v3 = 0;
      v4 = 0;
      do
      {
        v5 = *(unsigned __int8 *)++v1;
        if ( v5 == 1 && byte_75CF8[v2] )
        {
          v6 = (char *)&unk_78BB8 + 8 * v2;
          v7 = (__int16 *)((char *)&unk_93504 + 64 * v2 + 288);
          for ( j = 0; j != 2; ++j )
          {
            if ( *v6 )
            {
              v3 = 1;
            }
            else if ( v6[1] )
            {
              v3 = 1;
            }
            if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
            {
              snprintf(
                s,
                0x800u,
                "%s: Chain%d sensor%d local temp is %d `C remote temp is %d `C",
                "read_temp_func",
                v2,
                j,
                *v7,
                v7[1]);
              sub_3F1C0(7, s, 0);
            }
            v9 = v7[1];
            if ( v9 > v4 )
            {
              if ( v9 > 0x64 )
              {
                if ( byte_75C20 )
                {
                  v4 = v7[1];
                }
                else if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
                {
                  snprintf(
                    s,
                    0x800u,
                    "%s: Chain%d sensor%d local temp is %d `C, higher than MAX_TEMP",
                    "read_temp_func",
                    v2,
                    j,
                    v9);
                  sub_3F1C0(3, s, 0);
                  v4 = v9;
                }
                else
                {
                  v4 = v7[1];
                }
              }
              else
              {
                v4 = v7[1];
              }
            }
            v6 += 4;
            v7 += 4;
          }
        }
        ++v2;
      }
      while ( v2 != 4 );
      dword_93C61 = v4;
      if ( v3 )
      {
        byte_78BD8 = 0;
      }
      else
      {
        byte_78BD8 = 1;
        if ( !byte_75C20 && byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          snprintf(s, 0x800u, "%s: can't read all sensor's temperature, close PIC and need reboot!!!", "read_temp_func");
          sub_3F1C0(7, s, 0);
        }
      }
      sleep(2u);
      i = 0;
    }
    if ( *((_BYTE *)&unk_93504 + i + 8) == 1 && byte_75C10[i + 232] )
    {
      sub_48488(i, 0, 1, 26738944);
      sub_48488(i, 0, 0, 26738688);
      sub_48488(i, 1, 1, 26738944);
      sub_48488(i, 1, 0, 26738688);
    }
  }
}
