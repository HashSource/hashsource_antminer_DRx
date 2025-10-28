int __fastcall sub_16CD0(void *a1)
{
  char *v2; // r0
  bool v3; // zf
  _DWORD *v5; // r7
  int v6; // r8
  int v7; // r11
  char *v8; // r0
  char *v9; // r12
  char *v10; // r8
  signed int v11; // r2
  size_t v12; // r0
  const char *v13; // r7
  size_t v14; // r11
  size_t v15; // r9
  size_t v16; // r5
  char *v17; // r0
  const char *v18; // r7
  char *v19; // r0
  int v20; // r0
  _DWORD v21[4]; // [sp+14h] [bp-C18h] BYREF
  char *v22; // [sp+24h] [bp-C08h]
  char s[1016]; // [sp+28h] [bp-C04h] BYREF
  char v24[2052]; // [sp+428h] [bp-804h] BYREF

  if ( dword_612A8 )
  {
    if ( fgets(s, 1024, (FILE *)dword_612A8) )
      goto LABEL_3;
    if ( !dword_612B4 )
      goto LABEL_22;
LABEL_9:
    fclose((FILE *)dword_612A8);
    dword_612A8 = 0;
    return sub_16CD0(a1);
  }
  else
  {
    if ( !dword_612AC )
    {
      strcpy(v24, "BENCHFILE Invalid benchfile NULL");
      sub_38438(3, v24, 1);
      sub_16724(1);
    }
    dword_612A8 = (int)fopen((const char *)dword_612AC, "r");
    if ( !dword_612A8 )
    {
      snprintf(v24, 0x800u, "BENCHFILE Failed to open benchfile '%s'", (const char *)dword_612AC);
      sub_38438(3, v24, 1);
      sub_16724(1);
    }
    dword_612B0 = 0;
    if ( !fgets(s, 1024, (FILE *)dword_612A8) )
    {
      snprintf(v24, 0x800u, "BENCHFILE Failed to read benchfile '%s'", (const char *)dword_612AC);
      sub_38438(3, v24, 1);
      sub_16724(1);
    }
    dword_612B4 = 0;
    while ( 1 )
    {
LABEL_3:
      v2 = s;
      v3 = s[0] == 35;
      if ( s[0] != 35 )
        v3 = s[0] == 0;
      ++dword_612B0;
      if ( !v3 && s[0] != 47 )
        break;
      if ( !fgets(s, 1024, (FILE *)dword_612A8) )
      {
        if ( dword_612B4 )
          goto LABEL_9;
LABEL_22:
        snprintf(v24, 0x800u, "BENCHFILE No work in benchfile '%s'", dword_612AC);
        sub_38438(3, v24, 1);
        sub_16724(1);
      }
    }
    v5 = v21;
    v6 = 0;
    v7 = 1;
    v21[0] = s;
    do
    {
      v8 = strchr(v2, 44);
      v5[1] = v8;
      if ( !v8 )
      {
        snprintf(
          v24,
          0x800u,
          "BENCHFILE Invalid input file line %d - field count is %d but should be %d",
          dword_612B0,
          v7,
          5);
        sub_38438(3, v24, 1);
        sub_16724(1);
      }
      v9 = *(char **)((char *)&unk_49F24 + v6);
      if ( v9 && &v8[-*v5] != v9 )
      {
        snprintf(
          v24,
          0x800u,
          "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be %d",
          dword_612B0,
          v7,
          *(const char **)((char *)&unk_49F24 + v6 + 4),
          &v8[-*v5],
          v9);
        sub_38438(3, v24, 1);
        sub_16724(1);
      }
      ++v7;
      *v8 = 0;
      v6 += 8;
      v5[1] = v8 + 1;
      v2 = v8 + 1;
      ++v5;
    }
    while ( v7 != 5 );
    v10 = v22;
    v11 = strlen(v22);
    if ( v11 <= 9 )
    {
      snprintf(
        v24,
        0x800u,
        "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be least %d",
        dword_612B0,
        5,
        "NonceTime",
        v11,
        10);
      sub_38438(3, v24, 1);
      sub_16724(1);
    }
    sprintf(v24, "0000000%c", *(unsigned __int8 *)v21[0]);
    v12 = strlen(v24);
    v13 = (const char *)(v21[2] + 56);
    v14 = v12 + 64;
    v15 = v12;
    v16 = v12;
    do
    {
      v17 = &v24[v16];
      v16 += 8;
      sprintf(v17, "%.8s", v13);
      v13 -= 8;
    }
    while ( v16 != v14 );
    v18 = (const char *)(v21[1] + 56);
    do
    {
      v19 = &v24[v16];
      v16 += 8;
      sprintf(v19, "%.8s", v18);
      v18 -= 8;
    }
    while ( v16 != v15 + 128 );
    v20 = strtol(v10, 0, 10);
    sprintf(&v24[v16], "%08lx", v20);
    strcpy(&v24[v15 + 136], (const char *)v21[3]);
    memset(a1, 0, 0x1E0u);
    sub_295B8(a1, v24, (int)(v15 + 144) >> 1);
    sub_117F4((int)a1);
    ++dword_612B4;
    return 1;
  }
}
