void __fastcall sub_1569C(FILE *s)
{
  const char *v1; // r11
  int v3; // r5
  const char *v4; // r10
  const char *v5; // r0
  const char *v6; // r9
  const char *v7; // r0
  const char *v8; // r0
  int v9; // r7
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r4
  const char *v15; // r7
  const char *v16; // r0
  const char *v17; // r9
  const char *v18; // r0
  const char *v19; // r0
  int v20; // r3
  const char *v21; // r10
  const char *v22; // r0
  const char **v23; // r5
  char *v24; // r8
  char *v25; // r4
  int v26; // r2
  int (*v27)(); // r3
  const char *(__fastcall *v28)(int, float *); // r3
  const char **v29; // r3
  const char *v30; // r0
  int v31; // r1
  int v32; // r4
  int v33; // r5
  const char *v34; // [sp+14h] [bp-8h]

  fwrite("{\n\"pools\" : [", 1u, 0xDu, s);
  if ( dword_63740 > 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      v13 = (_DWORD *)sub_11B90(v3);
      v9 = v13[14];
      v14 = v13;
      if ( v9 == 1 )
      {
        v15 = ",";
        if ( !v3 )
          v15 = "";
        if ( v13[46] )
        {
          v16 = (const char *)sub_29418(v13[45]);
          v17 = sub_F46C(v16);
          v18 = (const char *)v14[46];
          if ( v18 )
          {
            v19 = sub_F46C(v18);
            v20 = v14[46];
            if ( v20 )
              v1 = delim;
            v21 = v19;
            if ( v20 )
              goto LABEL_20;
            goto LABEL_69;
          }
        }
        else
        {
          v17 = "";
        }
        v21 = "";
LABEL_69:
        v1 = "";
LABEL_20:
        v22 = sub_F46C((const char *)v14[41]);
        fprintf(s, "%s\n\t{\n\t\t\"url\" : \"%s%s%s%s\",", v15, v17, v21, v1, v22);
        goto LABEL_11;
      }
      v4 = ",";
      if ( !v3 )
        v4 = "";
      if ( !v13[46] )
        break;
      v5 = (const char *)sub_29418(v13[45]);
      v6 = sub_F46C(v5);
      v7 = (const char *)v14[46];
      if ( !v7 )
      {
        v9 = v14[14];
        goto LABEL_22;
      }
      v8 = sub_F46C(v7);
      v9 = v14[14];
      v1 = v8;
      if ( !v14[46] )
        goto LABEL_23;
      v34 = delim;
LABEL_10:
      v10 = sub_F46C((const char *)v14[41]);
      fprintf(s, "%s\n\t{\n\t\t\"quota\" : \"%s%s%s%d;%s\",", v4, v6, v1, v34, v9, v10);
LABEL_11:
      ++v3;
      v11 = sub_F46C((const char *)v14[43]);
      fprintf(s, "\n\t\t\"user\" : \"%s\",", v11);
      v12 = sub_F46C((const char *)v14[44]);
      fprintf(s, "\n\t\t\"pass\" : \"%s\"\n\t}", v12);
      if ( dword_63740 <= v3 )
        goto LABEL_24;
    }
    v6 = "";
LABEL_22:
    v1 = "";
LABEL_23:
    v34 = "";
    goto LABEL_10;
  }
LABEL_24:
  fwrite("\n]\n", 1u, 3u, s);
  if ( dword_5F8A4 != 16 )
  {
    v23 = (const char **)&unk_5F8BC;
    while ( 1 )
    {
      v24 = _strdup(*(v23 - 7));
      v25 = strtok(v24, delim);
      if ( v25 )
        break;
LABEL_53:
      v23 += 7;
      free(v24);
      if ( *(v23 - 6) == (const char *)16 )
        goto LABEL_54;
    }
    while ( 1 )
    {
      if ( v25[1] == 45 && *(v23 - 1) != (const char *)&unk_C54D8 )
      {
        v26 = (int)*(v23 - 6);
        if ( (v26 & 1) != 0
          && ((v27 = (int (*)())*(v23 - 5), v27 == sub_47974) || v27 == sub_47984)
          && **(v23 - 2) == (v27 == sub_47974) )
        {
          fprintf(s, ",\n\"%s\" : true", v25 + 2);
        }
        else
        {
          if ( (v26 & 2) == 0 )
            goto LABEL_49;
          v28 = (const char *(__fastcall *)(int, float *))*(v23 - 4);
          if ( (char *)v28 == (char *)sub_47B60
            || (char *)v28 == (char *)sub_15000
            || (char *)v28 == (char *)sub_15018
            || (char *)v28 == (char *)sub_15078
            || (char *)v28 == (char *)sub_1506C
            || (char *)v28 == (char *)sub_1500C
            || (char *)v28 == (char *)sub_15060
            || (char *)v28 == (char *)sub_15054
            || (char *)v28 == (char *)sub_15048
            || (char *)v28 == (char *)sub_1503C
            || (char *)v28 == (char *)sub_15030
            || (char *)v28 == (char *)sub_15024 )
          {
            fprintf(s, ",\n\"%s\" : \"%d\"", v25 + 2, *(_DWORD *)*(v23 - 2));
          }
          else
          {
            if ( v28 != sub_11D58 && v28 != sub_11D08 )
            {
LABEL_49:
              if ( (v26 & 6) != 0 )
              {
                v29 = (const char **)*(v23 - 2);
                if ( v29 != (const char **)&unk_611C4 )
                {
                  if ( *v29 )
                  {
                    v30 = sub_F46C(*v29);
                    fprintf(s, ",\n\"%s\" : \"%s\"", v25 + 2, v30);
                  }
                }
              }
              goto LABEL_28;
            }
            fprintf(s, ",\n\"%s\" : \"%.1f\"", v25 + 2, *(float *)*(v23 - 2));
          }
        }
      }
LABEL_28:
      v25 = strtok(0, delim);
      if ( !v25 )
        goto LABEL_53;
    }
  }
LABEL_54:
  v31 = dword_611AC;
  if ( dword_611AC == 4 )
  {
    fwrite(",\n\"balance\" : true", 1u, 0x12u, s);
    v31 = dword_611AC;
    if ( dword_611AC != 3 )
      goto LABEL_56;
  }
  else if ( dword_611AC != 3 )
  {
    goto LABEL_56;
  }
  fwrite(",\n\"load-balance\" : true", 1u, 0x17u, s);
  v31 = dword_611AC;
LABEL_56:
  if ( v31 == 1 )
  {
    fwrite(",\n\"round-robin\" : true", 1u, 0x16u, s);
    v31 = dword_611AC;
  }
  if ( v31 == 2 )
    fprintf(s, ",\n\"rotate\" : \"%d\"", dword_63AF8);
  fwrite("\n}\n", 1u, 3u, s);
  v32 = dword_60E88;
  dword_60E88 = 0;
  if ( v32 )
  {
    do
    {
      v33 = *(_DWORD *)(v32 + 4);
      free(*(void **)v32);
      free((void *)v32);
      v32 = v33;
    }
    while ( v33 );
  }
}
