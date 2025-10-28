int __fastcall main(int a1, char **a2, char **a3)
{
  int v3; // r4
  int v6; // r9
  int v7; // r10
  int v8; // r8
  int v9; // r0
  int v10; // r3
  int v11; // r0
  _BOOL4 v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r5
  char *v16; // r5
  char *v17; // r6
  bool v18; // zf
  int v19; // r0
  unsigned int v20; // r6
  unsigned int v21; // r0
  int v22; // r0
  int v24; // r3
  char *v25; // r0
  int v26; // [sp+10h] [bp-7Ch]
  int v27; // [sp+14h] [bp-78h]
  int v28; // [sp+18h] [bp-74h] BYREF
  int v29; // [sp+1Ch] [bp-70h] BYREF
  _BYTE v30[16]; // [sp+20h] [bp-6Ch] BYREF
  struct stat stat_buf; // [sp+30h] [bp-5Ch] BYREF

  v3 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v27 = 0;
  dword_12228 = 0;
  v26 = 0;
  while ( 1 )
  {
    v9 = getopt(a1, a2, "1:8fr:qhw:xd");
    v10 = v9;
    if ( v9 == -1 )
      break;
    if ( v9 == 102 )
    {
      ++v6;
    }
    else if ( v9 > 102 )
    {
      switch ( v9 )
      {
        case 'q':
          ++dword_12228;
          break;
        case 'x':
          ++v26;
          break;
        case 'h':
          sub_8828(205);
        default:
LABEL_9:
          v11 = v8;
          v18 = v8 == 0;
          v8 = v10;
          if ( !v18 )
            v11 = 1;
          sub_8DBC(v11, "Both read and write requested", 208);
          v27 = optarg;
          break;
      }
    }
    else
    {
      switch ( v9 )
      {
        case '8':
          v13 = v3;
          v3 = 1;
          sub_8DBC(v13, "EEPROM type switch (-8 or -16) used twice", 195);
          break;
        case 'd':
          ++v7;
          break;
        case '1':
          v12 = *(_BYTE *)optarg != 54 || strlen((const char *)optarg) != 1;
          sub_8DA8(v12, 184);
          sub_8DBC(v3, "EEPROM type switch (-8 or -16) used twice", 185);
          v3 = 2;
          break;
        default:
          goto LABEL_9;
      }
    }
  }
  if ( !v3 )
    v3 = 1;
  sub_8DA8(v8 == 0, 216);
  v14 = optind;
  v15 = a1 - optind;
  if ( v15 == 1 )
  {
    if ( _xstat(3, a2[optind], &stat_buf) == -1 )
    {
      v25 = getenv("EEPROG_DEV");
      v17 = a2[optind];
      v16 = v25;
    }
    else
    {
      v16 = a2[optind];
      v17 = getenv("EEPROG_I2C_ADDR");
    }
  }
  else if ( v15 == 2 )
  {
    v16 = a2[optind++];
    v17 = a2[v14 + 1];
  }
  else
  {
    if ( v15 )
      sub_8828(240);
    v16 = getenv("EEPROG_DEV");
    v17 = getenv("EEPROG_I2C_ADDR");
  }
  v18 = v16 == 0;
  if ( v16 )
    v18 = v17 == 0;
  v19 = v18;
  sub_8DA8(v19, 242);
  v20 = strtoul(v17, 0, 0);
  if ( !dword_12228 )
  {
    fprintf((FILE *)stderr, "eeprog %s, a 24Cxx EEPROM reader/writer\n", "0.7.5");
    if ( !dword_12228 )
    {
      fwrite("Copyright (c) 2003 by Stefano Barbato - All rights reserved.\n", 1u, 0x3Du, (FILE *)stderr);
      if ( !dword_12228 )
      {
        if ( v3 == 1 )
          v24 = 8;
        else
          v24 = 16;
        fprintf((FILE *)stderr, "  Bus: %s, Address: 0x%x, Mode: %dbit\n", v16, v20, v24);
      }
    }
  }
  if ( v7 )
  {
    fwrite("Dummy mode selected, nothing done.\n", 1u, 0x23u, (FILE *)stderr);
  }
  else
  {
    v21 = sub_90EC(v16, v20, v3, v30);
    v22 = sub_8DBC(
            v21 >> 31,
            "unable to open eeprom device file (check that the file exists and that it's readable)",
            256);
    if ( v8 == 114 )
    {
      if ( !v6 )
        sub_8E40(v22);
      v29 = 1;
      sub_8DEC(v27, &v28, &v29);
      if ( !dword_12228 )
        fprintf((FILE *)stderr, "  Reading %d bytes from 0x%x\n", v29, v28);
      sub_8E7C(v30, v28, v29, v26);
    }
    else
    {
      if ( v8 != 119 )
        sub_8828(276);
      if ( !v6 )
        sub_8E40(v22);
      sub_8DEC(v27, &v28, &v29);
      if ( !dword_12228 )
        fprintf((FILE *)stderr, "  Writing stdin starting at address 0x%x\n", v28);
      sub_8FA4(v30, v28);
    }
    sub_926C(v30);
  }
  return 0;
}
