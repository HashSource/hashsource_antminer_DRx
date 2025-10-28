void __noreturn sub_3D3B8()
{
  unsigned __int8 *v0; // r5
  int v1; // r4
  unsigned __int8 *v2; // r6
  int v3; // t1
  int v4; // r4
  unsigned int v5; // r9
  int v6; // r11
  unsigned int v7; // r10
  int v8; // t1
  int i; // r7
  int v10; // r9
  int v11; // r1
  int v12; // r5
  char *v13; // r7
  _BYTE *v14; // r6
  int v15; // r3
  int v16; // r3
  unsigned int v17; // r12
  int v18; // [sp+20h] [bp-834h]
  unsigned __int8 *v19; // [sp+38h] [bp-81Ch]
  char v20[2052]; // [sp+50h] [bp-804h] BYREF

  if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
  {
    strcpy(v20, "read_temp_func");
    sub_343C4(7, v20, 0);
  }
LABEL_2:
  v0 = (unsigned __int8 *)&unk_73EF0;
  v1 = 0;
  v2 = (unsigned __int8 *)&unk_73EF0;
  do
  {
    v3 = *v2++;
    if ( v3 == 1 && byte_6FC24[v1] )
    {
      for ( i = 0; i != 4; ++i )
      {
        v10 = (unsigned __int8)i;
        v11 = (unsigned __int8)i;
        sub_3CE70((unsigned __int8)v1, v11, 1, 26738944);
        sub_3CE70((unsigned __int8)v1, v10, 0, 26738688);
      }
    }
    ++v1;
  }
  while ( v1 != 4 );
  v4 = 0;
  v5 = 100;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = *v0++;
    if ( v8 == 1 )
    {
      v18 = (unsigned __int8)byte_6FC24[v4];
      if ( byte_6FC24[v4] )
        break;
    }
LABEL_7:
    if ( ++v4 == 4 )
    {
      dword_74743 = v5;
      dword_74747[0] = v7;
      if ( v6 )
      {
        byte_72AF0 = 0;
      }
      else
      {
        byte_72AF0 = 1;
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
        {
          snprintf(
            v20,
            0x800u,
            "%s: can't read all sensor's temperature, close PIC and need reboot!!!",
            "read_temp_func");
          sub_343C4(5, v20, 0);
        }
      }
      sleep(2u);
      goto LABEL_2;
    }
  }
  v19 = v0;
  v12 = 0;
  v13 = (char *)&unk_73ED8 + 32 * v4;
  v14 = (_BYTE *)(16 * v4 + 457533);
  while ( *(v14 - 1) )
  {
    if ( byte_6FA71 )
      goto LABEL_39;
    v6 = (unsigned __int8)*(v14 - 1);
    v16 = (unsigned __int8)*v14;
LABEL_33:
    if ( v5 >= *((__int16 *)v13 + 152) )
      v5 = *((__int16 *)v13 + 152);
LABEL_35:
    if ( v16 )
      goto LABEL_42;
LABEL_36:
    ++v12;
    v13 += 8;
    v14 += 4;
    if ( v12 == 4 )
    {
      v0 = v19;
      goto LABEL_7;
    }
  }
  if ( *v14 )
  {
    if ( !byte_6FA71 )
    {
      v6 = (unsigned __int8)*v14;
LABEL_42:
      v17 = *((__int16 *)v13 + 153);
      if ( v17 > v7 )
      {
        if ( v17 > 0x64 && (byte_73320 || byte_6FA70 || dword_6D35C > 2) )
        {
          v7 = *((__int16 *)v13 + 153);
          snprintf(
            v20,
            0x800u,
            "%s: Chain%d sensor%d local temp is %d `C, higher than MAX_TEMP",
            "read_temp_func",
            v4,
            v12,
            v7);
          sub_343C4(3, v20, 0);
        }
        else
        {
          v7 = *((__int16 *)v13 + 153);
        }
      }
      goto LABEL_36;
    }
LABEL_39:
    v6 = v18;
    v15 = (unsigned __int8)byte_73320;
  }
  else
  {
    if ( !byte_6FA71 )
      goto LABEL_36;
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
    {
LABEL_29:
      if ( !byte_6FA70 && dword_6D35C <= 6 )
      {
LABEL_32:
        v16 = (unsigned __int8)*v14;
        if ( !*(v14 - 1) )
          goto LABEL_35;
        goto LABEL_33;
      }
LABEL_31:
      snprintf(
        v20,
        0x800u,
        "%s: Chain%d sensor%d local temp is %d `C remote temp is %d `C",
        "read_temp_func",
        v4,
        v12,
        *((__int16 *)v13 + 152),
        *((__int16 *)v13 + 153));
      sub_343C4(7, v20, 0);
      goto LABEL_32;
    }
    snprintf(
      v20,
      0x800u,
      "%s: Chain%d sensor%d local chip_temp %d local temp  %d `C remote chip_temp %d remote temp %d `C",
      "read_temp_func",
      v4,
      v12,
      0,
      *((__int16 *)v13 + 152),
      0,
      *((__int16 *)v13 + 153));
    sub_343C4(7, v20, 0);
    if ( !byte_6FA71 )
      goto LABEL_32;
    v15 = (unsigned __int8)byte_73320;
  }
  if ( v15 )
    goto LABEL_31;
  goto LABEL_29;
}
