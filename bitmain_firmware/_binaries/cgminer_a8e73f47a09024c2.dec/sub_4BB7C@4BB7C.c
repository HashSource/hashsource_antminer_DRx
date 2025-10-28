void __noreturn sub_4BB7C()
{
  unsigned int v0; // r4
  int i; // r5
  int v2; // r11
  int v3; // r9
  unsigned int v4; // r10
  int v5; // t1
  char *v6; // r4
  __int16 *v7; // r5
  int v8; // r6
  unsigned int v9; // r7
  unsigned int v10; // [sp+18h] [bp-81Ch]
  int v11; // [sp+1Ch] [bp-818h]
  char s[2052]; // [sp+30h] [bp-804h] BYREF

  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(s, "read_temp_func");
    sub_3F178(7, s, 0);
  }
  v0 = 0;
LABEL_12:
  while ( v0 <= 3 )
  {
    if ( *((_BYTE *)&unk_B3AFC + v0 + 24) == 1 && byte_7CCC8[v0 + 232] )
    {
      for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
      {
        sub_4BAB0(v0, i, 1, 26738944);
        sub_4BAB0(v0, i, 0, 26738688);
      }
    }
    v0 = (unsigned __int8)(v0 + 1);
  }
  v2 = 736019;
  v3 = 0;
  v11 = 0;
  v10 = 0;
  v4 = 100;
  while ( 1 )
  {
    v5 = *(unsigned __int8 *)++v2;
    if ( v5 == 1 )
    {
      if ( byte_7CDB0[v3] )
        break;
    }
LABEL_44:
    if ( ++v3 == 4 )
    {
      dword_B4367 = v4;
      dword_B436B = v10;
      if ( v11 )
      {
        byte_7FCB0 = 0;
      }
      else
      {
        byte_7FCB0 = 1;
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          snprintf(s, 0x800u, "%s: can't read all sensor's temperature, close PIC and need reboot!!!", "read_temp_func");
          sub_3F178(5, s, 0);
        }
      }
      sleep(2u);
      v0 = 0;
      goto LABEL_12;
    }
  }
  v6 = (char *)&unk_7FC70 + 16 * v3;
  v7 = (__int16 *)((char *)&unk_B3AFC + 32 * v3 + 306);
  v8 = 0;
  while ( 1 )
  {
    if ( *v6 )
    {
      v11 = 1;
    }
    else if ( v6[1] )
    {
      v11 = 1;
    }
    else
    {
      if ( !byte_7CC61 )
        goto LABEL_31;
      if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 6 )
        goto LABEL_28;
      snprintf(
        s,
        0x800u,
        "%s: Chain%d sensor%d local chip_temp %d local temp  %d `C remote chip_temp %d remote temp %d `C",
        "read_temp_func",
        v3,
        v8,
        0,
        *(v7 - 1),
        0,
        *v7);
      sub_3F178(7, s, 0);
    }
    if ( !byte_7CC61 )
      goto LABEL_31;
    if ( !byte_7FE78 )
    {
LABEL_28:
      if ( !byte_7CC60 && dword_7A52C <= 6 )
        goto LABEL_31;
    }
    snprintf(
      s,
      0x800u,
      "%s: Chain%d sensor%d local temp is %d `C remote temp is %d `C",
      "read_temp_func",
      v3,
      v8,
      *(v7 - 1),
      *v7);
    sub_3F178(7, s, 0);
LABEL_31:
    if ( *v6 && v4 >= *(v7 - 1) )
      v4 = *(v7 - 1);
    if ( v6[1] )
    {
      v9 = *v7;
      if ( v9 > v10 )
      {
        if ( v9 > 0x64 )
        {
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
          {
            snprintf(
              s,
              0x800u,
              "%s: Chain%d sensor%d local temp is %d `C, higher than MAX_TEMP",
              "read_temp_func",
              v3,
              v8,
              v9);
            sub_3F178(3, s, 0);
            v10 = v9;
          }
          else
          {
            v10 = *v7;
          }
        }
        else
        {
          v10 = *v7;
        }
      }
    }
    ++v8;
    v6 += 4;
    v7 += 4;
    if ( v8 == 4 )
      goto LABEL_44;
  }
}
