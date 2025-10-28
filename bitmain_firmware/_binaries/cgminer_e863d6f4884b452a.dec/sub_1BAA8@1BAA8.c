int sub_1BAA8()
{
  char *v0; // r4
  bool v1; // r4
  int v2; // r5
  int v3; // r0
  FILE *v5; // r0
  char *v6; // r0
  char **v7; // r8
  int v8; // r9
  char *v9; // r0
  int v10; // r1
  int v11; // r7
  char *v12; // r12
  int v13; // r9
  char *v14; // r7
  _BOOL4 v15; // r3
  char *v16; // r8
  size_t v17; // r0
  size_t v18; // r9
  char *v19; // r7
  const char *v20; // r5
  const char *v21; // r10
  const char *v22; // r2
  char *v23; // r7
  const char *v24; // r5
  const char *v25; // r11
  const char *v26; // r2
  int v27; // r0
  char **v28; // r2
  int v29; // r1
  unsigned int v30; // t1
  char *v31; // [sp+14h] [bp-D00h] BYREF
  int v32; // [sp+18h] [bp-CFCh]
  int v33; // [sp+1Ch] [bp-CF8h]
  char *src; // [sp+20h] [bp-CF4h]
  char *v35; // [sp+24h] [bp-CF0h] BYREF
  char v36[60]; // [sp+28h] [bp-CECh] BYREF
  char v37; // [sp+64h] [bp-CB0h] BYREF
  _BYTE v38[136]; // [sp+68h] [bp-CACh] BYREF
  int v39; // [sp+F0h] [bp-C24h]
  int v40; // [sp+F4h] [bp-C20h]
  int v41; // [sp+F8h] [bp-C1Ch]
  int v42; // [sp+FCh] [bp-C18h]
  int v43; // [sp+100h] [bp-C14h]
  int v44; // [sp+104h] [bp-C10h]
  int v45; // [sp+108h] [bp-C0Ch]
  int v46; // [sp+10Ch] [bp-C08h]
  char s[1024]; // [sp+110h] [bp-C04h] BYREF
  char v48[2052]; // [sp+510h] [bp-804h] BYREF

  if ( !dword_6DC88 )
  {
    if ( !dword_6DC8C )
    {
      strcpy(v48, "BENCHFILE Invalid benchfile NULL");
      sub_343C4(3, v48, 1);
      sub_1B070(1, 1);
    }
    v5 = fopen((const char *)dword_6DC8C, "r");
    dword_6DC88 = (int)v5;
    if ( v5 )
    {
      dword_6DC90 = 0;
      if ( fgets(s, 1024, v5) )
      {
        dword_6DC94 = 0;
        while ( 1 )
        {
LABEL_3:
          v1 = s[0] != 35;
          v2 = dword_6DC90 + 1;
          if ( !s[0] )
            v1 = 0;
          ++dword_6DC90;
          v0 = (char *)(s[0] != 47 && v1);
          if ( v0 )
            break;
          if ( !fgets(s, 1024, (FILE *)dword_6DC88) )
            goto LABEL_10;
        }
        v6 = s;
        v7 = &v31;
        v8 = 0;
        v31 = s;
        while ( 1 )
        {
          v9 = strchr(v6, 44);
          v10 = v8 + 1;
          v7[1] = v9;
          if ( !v9 )
          {
            snprintf(
              v48,
              0x800u,
              "BENCHFILE Invalid input file line %d - field count is %d but should be %d",
              v2,
              v8 + 1,
              5);
            goto LABEL_33;
          }
          v11 = (int)*v7++;
          v12 = (char *)dword_4A548[2 * v8];
          v13 = 8 * v8;
          v14 = &v9[-v11];
          v15 = v14 != v12;
          if ( !v12 )
            v15 = 0;
          if ( v15 )
          {
            snprintf(
              v48,
              0x800u,
              "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be %d",
              v2,
              v10,
              *(const char **)((char *)&unk_4A320 + v13 + 556),
              v14,
              v12);
            goto LABEL_33;
          }
          *v7 = v9 + 1;
          *v9 = 0;
          if ( v10 == 4 )
            break;
          v8 = v10;
          v6 = *v7;
        }
        v16 = v35;
        v17 = strlen(v35);
        if ( v17 > 9 )
        {
          sprintf(v48, "0000000%c", (unsigned __int8)*v31);
          v18 = strlen(v48);
          v19 = &v48[v18];
          v20 = (const char *)(v33 + 56);
          v21 = (const char *)(v33 - 8);
          do
          {
            v22 = v20;
            v20 -= 8;
            sprintf(v19, "%.8s", v22);
            v19 += 8;
          }
          while ( v21 != v20 );
          v23 = &v48[v18 + 64];
          v24 = (const char *)(v32 + 56);
          v25 = (const char *)(v32 - 8);
          do
          {
            v26 = v24;
            v24 -= 8;
            sprintf(v23, "%.8s", v26);
            v23 += 8;
          }
          while ( v25 != v24 );
          v27 = strtol(v16, 0, 10);
          sprintf(&v48[v18 + 128], "%08lx", v27);
          strcpy(&v48[v18 + 136], src);
          memset(0, 0, 0x220u);
          sub_28324(0, v48);
          v28 = &v35;
          v29 = -4;
          do
          {
            v30 = *(_DWORD *)(v29 + 4);
            v29 += 4;
            v28[1] = (char *)bswap32(v30);
            ++v28;
          }
          while ( &v37 != (char *)v28 );
          sub_2E288(v38, v29);
          sub_2E2B0((int)v38, (int)v36, 0x40u);
          MEMORY[0xB4] = v39;
          MEMORY[0xB8] = v40;
          MEMORY[0xBC] = v41;
          MEMORY[0xC0] = v42;
          MEMORY[0xC4] = v43;
          MEMORY[0xC8] = v44;
          MEMORY[0xCC] = v45;
          MEMORY[0xD0] = v46;
          ++dword_6DC94;
          return (int)v0;
        }
        snprintf(
          v48,
          0x800u,
          "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be least %d",
          v2,
          5,
          "NonceTime",
          v17,
          10);
      }
      else
      {
        snprintf(v48, 0x800u, "BENCHFILE Failed to read benchfile '%s'", dword_6DC8C);
      }
    }
    else
    {
      snprintf(v48, 0x800u, "BENCHFILE Failed to open benchfile '%s'", dword_6DC8C);
    }
LABEL_33:
    sub_343C4(3, v48, 1);
    sub_1B070(1, 1);
  }
  v0 = fgets(s, 1024, (FILE *)dword_6DC88);
  if ( v0 )
    goto LABEL_3;
LABEL_10:
  if ( !dword_6DC94 )
  {
    snprintf(v48, 0x800u, "BENCHFILE No work in benchfile '%s'", dword_6DC8C);
    goto LABEL_33;
  }
  v3 = fclose((FILE *)dword_6DC88);
  dword_6DC88 = (int)v0;
  return sub_1BAA8(v3);
}
