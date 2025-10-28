void __fastcall sub_12418(FILE *s)
{
  int v2; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  const char *v5; // r7
  const char *v6; // r0
  const char *v7; // r10
  const char *v8; // r0
  const char *v9; // r8
  const char *v10; // r11
  int v11; // r9
  const char *v12; // r0
  char *v13; // r7
  const char *v14; // r0
  char *v15; // r10
  const char *v16; // r0
  char *v17; // r8
  __int16 *v18; // r9
  _BYTE *v19; // r0
  const char *v20; // r0
  const char *v21; // r0
  char **v22; // r8
  char *v23; // r9
  char *v24; // r4
  int v25; // r2
  int v26; // r1
  int (*v27)(void); // r3
  const char *(__fastcall *v28)(int, float *); // r1
  const char **v29; // r3
  const char *v30; // r0
  int v31; // r4
  int v32; // r5

  fwrite("{\n\"pools\" : [", 1u, 0xDu, s);
  if ( dword_802C8 > 0 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = (_DWORD *)sub_C1EC(v2);
      v4 = v3;
      if ( v3[14] == 1 )
      {
        if ( v2 <= 0 )
          v13 = &byte_6DF60;
        else
          v13 = ",";
        if ( v3[48] )
        {
          v14 = (const char *)sub_2D008(v3[47]);
          v15 = sub_C380(v14);
          v16 = (const char *)v4[48];
          if ( v16 )
          {
            v17 = sub_C380(v16);
            if ( v4[48] )
            {
              v18 = &word_62AA0;
LABEL_21:
              v19 = sub_C380((const char *)v4[43]);
              fprintf(s, "%s\n\t{\n\t\t\"url\" : \"%s%s%s%s\",", v13, v15, v17, v18, v19);
              goto LABEL_22;
            }
LABEL_20:
            v18 = (__int16 *)&byte_6DF60;
            goto LABEL_21;
          }
        }
        else
        {
          v15 = &byte_6DF60;
        }
        v17 = &byte_6DF60;
        goto LABEL_20;
      }
      v5 = v2 <= 0 ? &byte_6DF60 : ",";
      if ( !v3[48] )
        break;
      v6 = (const char *)sub_2D008(v3[47]);
      v7 = sub_C380(v6);
      v8 = (const char *)v4[48];
      if ( !v8 )
        goto LABEL_68;
      v9 = sub_C380(v8);
      if ( !v4[48] )
        goto LABEL_11;
      v10 = (const char *)&word_62AA0;
LABEL_12:
      v11 = v4[14];
      v12 = sub_C380((const char *)v4[43]);
      fprintf(s, "%s\n\t{\n\t\t\"quota\" : \"%s%s%s%d;%s\",", v5, v7, v9, v10, v11, v12);
LABEL_22:
      v20 = sub_C380((const char *)v4[45]);
      fprintf(s, "\n\t\t\"user\" : \"%s\",", v20);
      v21 = sub_C380((const char *)v4[46]);
      fprintf(s, "\n\t\t\"pass\" : \"%s\"\n\t}", v21);
      if ( dword_802C8 <= ++v2 )
        goto LABEL_23;
    }
    v7 = &byte_6DF60;
LABEL_68:
    v9 = &byte_6DF60;
LABEL_11:
    v10 = &byte_6DF60;
    goto LABEL_12;
  }
LABEL_23:
  fwrite("\n]\n", 1u, 3u, s);
  if ( dword_79464 != 16 )
  {
    v22 = &off_7947C;
    while ( 1 )
    {
      v23 = _strdup(*(v22 - 7));
      v24 = strtok(v23, (const char *)&word_62AA0);
      if ( v24 )
        break;
LABEL_55:
      free(v23);
      v22 += 7;
      if ( *(v22 - 6) == (char *)16 )
        goto LABEL_56;
    }
    while ( 1 )
    {
      if ( v24[1] == 45 && *(v22 - 1) != (char *)&unk_B43C4 )
      {
        v25 = (int)*(v22 - 6);
        if ( (v25 & 1) != 0
          && ((v26 = (int)*(v22 - 5), v26 == 381616) || v26 == 381632)
          && **(v22 - 2) == (v26 == 381616) )
        {
          fprintf(s, ",\n\"%s\" : true", v24 + 2);
        }
        else
        {
          if ( (v25 & 2) == 0 )
            goto LABEL_50;
          v27 = (int (*)(void))*(v22 - 4);
          if ( v27 == sub_5D4A0
            || v27 == (int (*)(void))sub_11B20
            || v27 == (int (*)(void))sub_11B48
            || v27 == (int (*)(void))sub_11BE8
            || v27 == (int (*)(void))sub_11BD4
            || v27 == (int (*)(void))sub_11B34
            || v27 == (int (*)(void))sub_11BC0
            || v27 == (int (*)(void))sub_11BAC
            || v27 == (int (*)(void))sub_11B98
            || v27 == (int (*)(void))sub_11B84
            || v27 == (int (*)(void))sub_11B70
            || v27 == (int (*)(void))sub_11B5C )
          {
            fprintf(s, ",\n\"%s\" : \"%d\"", v24 + 2, *(_DWORD *)*(v22 - 2));
          }
          else
          {
            v28 = (const char *(__fastcall *)(int, float *))*(v22 - 4);
            if ( v28 != sub_EBA4 && v28 != sub_EB50 )
            {
LABEL_50:
              if ( (v25 & 6) != 0 )
              {
                v29 = (const char **)*(v22 - 2);
                if ( v29 != (const char **)&unk_7AD60 )
                {
                  if ( *v29 )
                  {
                    v30 = sub_C380(*v29);
                    fprintf(s, ",\n\"%s\" : \"%s\"", v24 + 2, v30);
                  }
                }
              }
              goto LABEL_54;
            }
            fprintf(s, ",\n\"%s\" : \"%.1f\"", v24 + 2, *(float *)*(v22 - 2));
          }
        }
      }
LABEL_54:
      v24 = strtok(0, (const char *)&word_62AA0);
      if ( !v24 )
        goto LABEL_55;
    }
  }
LABEL_56:
  if ( dword_7AA24 == 4 )
    fwrite(",\n\"balance\" : true", 1u, 0x12u, s);
  if ( dword_7AA24 == 3 )
    fwrite(",\n\"load-balance\" : true", 1u, 0x17u, s);
  if ( dword_7AA24 == 1 )
    fwrite(",\n\"round-robin\" : true", 1u, 0x16u, s);
  if ( dword_7AA24 == 2 )
    fprintf(s, ",\n\"rotate\" : \"%d\"", dword_80700);
  fwrite("\n}\n", 1u, 3u, s);
  v31 = dword_7AA28;
  dword_7AA28 = 0;
  if ( v31 )
  {
    do
    {
      v32 = *(_DWORD *)(v31 + 4);
      free(*(void **)v31);
      free((void *)v31);
      v31 = v32;
    }
    while ( v32 );
  }
}
