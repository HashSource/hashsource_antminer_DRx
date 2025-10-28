int __fastcall sub_164B4(_DWORD *a1)
{
  bool v3; // zf
  _DWORD *v4; // r4
  int v5; // r7
  int i; // r6
  char *v7; // r0
  char *v8; // r2
  char *v9; // r1
  char *v10; // r7
  signed int v11; // r0
  size_t v12; // r6
  size_t v13; // r5
  int j; // r4
  size_t v15; // r5
  int k; // r4
  int v17; // r0
  int m; // r3
  _DWORD *v19; // r8
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r2
  int v25; // r3
  _DWORD v26[4]; // [sp+1Ch] [bp-1058h] BYREF
  char *v27; // [sp+2Ch] [bp-1048h]
  _BYTE v28[64]; // [sp+30h] [bp-1044h] BYREF
  char s[136]; // [sp+70h] [bp-1004h] BYREF
  int v30; // [sp+F8h] [bp-F7Ch]
  int v31; // [sp+FCh] [bp-F78h]
  int v32; // [sp+100h] [bp-F74h]
  int v33; // [sp+104h] [bp-F70h]
  int v34; // [sp+108h] [bp-F6Ch]
  int v35; // [sp+10Ch] [bp-F68h]
  int v36; // [sp+110h] [bp-F64h]
  int v37; // [sp+114h] [bp-F60h]
  char v38[1024]; // [sp+870h] [bp-804h] BYREF
  char v39[976]; // [sp+C70h] [bp-404h] BYREF

  if ( dword_7AEF8 )
  {
    if ( fgets(v39, 1024, (FILE *)dword_7AEF8) )
      goto LABEL_13;
    if ( !dword_7AF00 )
    {
      snprintf(s, 0x800u, "BENCHFILE No work in benchfile '%s'", (const char *)dword_7AED4);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
  }
  else
  {
    if ( !dword_7AED4 )
    {
      strcpy(s, "BENCHFILE Invalid benchfile NULL");
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    dword_7AEF8 = (int)fopen((const char *)dword_7AED4, "r");
    if ( !dword_7AEF8 )
    {
      snprintf(s, 0x800u, "BENCHFILE Failed to open benchfile '%s'", (const char *)dword_7AED4);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    dword_7AEFC = 0;
    if ( !fgets(v39, 1024, (FILE *)dword_7AEF8) )
    {
      snprintf(s, 0x800u, "BENCHFILE Failed to read benchfile '%s'", (const char *)dword_7AED4);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    dword_7AF00 = 0;
    do
    {
LABEL_13:
      ++dword_7AEFC;
      v3 = v39[0] == 35;
      if ( v39[0] != 35 )
        v3 = v39[0] == 0;
      if ( !v3 && v39[0] != 47 )
      {
        v26[0] = v39;
        v4 = v26;
        v5 = 0;
        for ( i = 1; i != 5; ++i )
        {
          v7 = strchr((const char *)*v4, 44);
          v4[1] = v7;
          if ( !v7 )
          {
            snprintf(
              s,
              0x800u,
              "BENCHFILE Invalid input file line %d - field count is %d but should be %d",
              dword_7AEFC,
              i,
              5);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          v8 = *(char **)((char *)&unk_5FAF0 + v5);
          if ( v8 )
          {
            v9 = &v7[-*v4];
            if ( v9 != v8 )
            {
              snprintf(
                s,
                0x800u,
                "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be %d",
                dword_7AEFC,
                i,
                *(const char **)((char *)&unk_5F788 + v5 + 876),
                v9,
                v8);
              sub_3F178(3, s, 1);
              sub_134A4(1);
            }
          }
          *v7 = 0;
          v4[1] = v7 + 1;
          ++v4;
          v5 += 8;
        }
        v10 = v27;
        v11 = strlen(v27);
        if ( v11 <= 9 )
        {
          snprintf(
            s,
            0x800u,
            "BENCHFILE Invalid input file line %d field %d (%s) length is %d but should be least %d",
            dword_7AEFC,
            5,
            "NonceTime",
            v11,
            10);
          sub_3F178(3, s, 1);
          sub_134A4(1);
        }
        sprintf(v38, "0000000%c", *(unsigned __int8 *)v26[0]);
        v12 = strlen(v38);
        v13 = v12;
        for ( j = 56; j != -8; j -= 8 )
        {
          sprintf(&v38[v13], "%.8s", (const char *)(v26[2] + j));
          v13 += 8;
        }
        v15 = v12 + 64;
        for ( k = 56; k != -8; k -= 8 )
        {
          sprintf(&v38[v15], "%.8s", (const char *)(v26[1] + k));
          v15 += 8;
        }
        v17 = strtol(v10, 0, 10);
        sprintf(&v38[v12 + 128], "%08lx", v17);
        strcpy(&v38[v12 + 136], (const char *)v26[3]);
        memset(a1, 0, 0x220u);
        sub_2D164(a1, v38, (int)(v12 + 144) >> 1);
        for ( m = 0; m != 16; ++m )
          *(_DWORD *)&v28[m * 4] = bswap32(a1[m]);
        sub_362E4(s, v28);
        sub_3631C((int)s, (int)v28, 0x40u);
        v19 = a1 + 45;
        v20 = v31;
        v21 = v32;
        v22 = v33;
        *v19 = v30;
        v19[1] = v20;
        v19[2] = v21;
        v19[3] = v22;
        v19 += 4;
        v23 = v35;
        v24 = v36;
        v25 = v37;
        *v19 = v34;
        v19[1] = v23;
        v19[2] = v24;
        v19[3] = v25;
        ++dword_7AF00;
        return 1;
      }
    }
    while ( fgets(v39, 1024, (FILE *)dword_7AEF8) );
    if ( !dword_7AF00 )
    {
      snprintf(s, 0x800u, "BENCHFILE No work in benchfile '%s'", (const char *)dword_7AED4);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
  }
  fclose((FILE *)dword_7AEF8);
  dword_7AEF8 = 0;
  return sub_164B4(a1);
}
