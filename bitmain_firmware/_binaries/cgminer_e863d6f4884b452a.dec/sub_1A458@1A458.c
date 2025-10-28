void __fastcall sub_1A458(FILE *s)
{
  int v2; // r6
  const char *v3; // r10
  const char *v4; // r0
  const char *v5; // r11
  const char *v6; // r0
  const char *v7; // r0
  char *v8; // r2
  int v9; // r3
  const char *v10; // r0
  const char *v11; // r0
  const char *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r4
  const char *v15; // r10
  const char *v16; // r0
  const char *v17; // r11
  const char *v18; // r0
  char *v19; // r2
  char *v20; // r3
  char *v21; // r0
  const char *v22; // r0
  const char **v23; // r4
  char *v24; // r8
  char *v25; // r11
  const char *(__fastcall *v26)(int, _DWORD *); // r2
  bool v27; // zf
  int v28; // r3
  int v29; // r1
  int (*v30)(); // r2
  bool v31; // zf
  const char **v32; // r3
  const char *v33; // r0
  int v34; // r1
  void **v35; // r4
  __int64 v36; // kr00_8
  void **v37; // r0
  bool v38; // zf
  const char *v39; // [sp+14h] [bp-10h]
  const char *v40; // [sp+14h] [bp-10h]
  int v41; // [sp+18h] [bp-Ch]
  const char *v42; // [sp+18h] [bp-Ch]
  const char *v43; // [sp+1Ch] [bp-8h]

  fwrite("{\n\"pools\" : [", 1u, 0xDu, s);
  if ( dword_72EF0 > 0 )
  {
    v2 = 0;
    do
    {
      v13 = (_DWORD *)sub_174F4(v2);
      v9 = v13[14];
      v14 = v13;
      if ( v9 == 1 )
      {
        if ( v2 )
          v15 = ",";
        else
          v15 = &byte_57FF0;
        if ( v13[48] )
        {
          v16 = (const char *)sub_281E8(v13[47]);
          v17 = sub_16CD0(v16);
          v18 = (const char *)v14[48];
          v19 = &byte_57FF0;
          v20 = &byte_57FF0;
          if ( v18 )
          {
            v21 = sub_16CD0(v18);
            v20 = "|";
            v19 = v21;
            if ( !v14[48] )
              v20 = &byte_57FF0;
          }
        }
        else
        {
          v19 = &byte_57FF0;
          v17 = &byte_57FF0;
          v20 = &byte_57FF0;
        }
        v40 = v20;
        v42 = v19;
        v22 = sub_16CD0((const char *)v14[43]);
        fprintf(s, "%s\n\t{\n\t\t\"url\" : \"%s%s%s%s\",", v15, v17, v42, v40, v22);
      }
      else
      {
        if ( v2 )
          v3 = ",";
        else
          v3 = &byte_57FF0;
        if ( v13[48] )
        {
          v4 = (const char *)sub_281E8(v13[47]);
          v5 = sub_16CD0(v4);
          v6 = (const char *)v14[48];
          if ( v6 )
          {
            v7 = sub_16CD0(v6);
            v8 = "|";
            v9 = v14[14];
            v39 = v7;
            if ( !v14[48] )
              v8 = &byte_57FF0;
          }
          else
          {
            v9 = v14[14];
            v8 = &byte_57FF0;
            v39 = &byte_57FF0;
          }
        }
        else
        {
          v39 = &byte_57FF0;
          v5 = &byte_57FF0;
          v8 = &byte_57FF0;
        }
        v41 = v9;
        v43 = v8;
        v10 = sub_16CD0((const char *)v14[43]);
        fprintf(s, "%s\n\t{\n\t\t\"quota\" : \"%s%s%s%d;%s\",", v3, v5, v39, v43, v41, v10);
      }
      ++v2;
      v11 = sub_16CD0((const char *)v14[45]);
      fprintf(s, "\n\t\t\"user\" : \"%s\",", v11);
      v12 = sub_16CD0((const char *)v14[46]);
      fprintf(s, "\n\t\t\"pass\" : \"%s\"\n\t}", v12);
    }
    while ( dword_72EF0 > v2 );
  }
  fwrite("\n]\n", 1u, 3u, s);
  if ( dword_6C2CC != 16 )
  {
    v23 = (const char **)&unk_6C2E4;
    while ( 1 )
    {
      v24 = _strdup(*(v23 - 7));
      v25 = strtok(v24, "|");
      if ( v25 )
        break;
LABEL_67:
      v23 += 7;
      free(v24);
      if ( *(v23 - 6) == (const char *)16 )
        goto LABEL_68;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v25[1] != 45 || *(v23 - 1) == (const char *)&unk_A7200 )
          goto LABEL_53;
        v29 = (int)*(v23 - 6);
        if ( (v29 & 1) != 0 )
        {
          v30 = (int (*)())*(v23 - 5);
          v31 = v30 == sub_48AEC;
          if ( v30 != sub_48AEC )
            v31 = v30 == sub_48AF4;
          if ( v31 && **(v23 - 2) == (v30 == sub_48AEC) )
          {
            fprintf(s, ",\n\"%s\" : true", v25 + 2);
            goto LABEL_53;
          }
        }
        if ( (v29 & 2) == 0 )
          goto LABEL_63;
        v26 = (const char *(__fastcall *)(int, _DWORD *))*(v23 - 4);
        v27 = v26 == sub_17A64;
        if ( v26 != sub_17A64 )
          v27 = (char *)v26 == (char *)sub_48C1C;
        v28 = v27;
        if ( v26 == sub_17A40 )
          v28 |= 1u;
        if ( v26 == sub_17A20 )
          v28 |= 1u;
        if ( v26 == sub_17A00 )
          v28 |= 1u;
        if ( v26 == sub_179E0 )
          v28 |= 1u;
        if ( v26 == sub_179C0 )
          v28 |= 1u;
        if ( v26 == sub_179A0 )
          v28 |= 1u;
        if ( v26 == sub_17980 )
          v28 |= 1u;
        if ( v26 == sub_17960 )
          v28 |= 1u;
        if ( v26 == sub_17940 )
          v28 |= 1u;
        if ( v26 == sub_17920 )
          v28 |= 1u;
        if ( !v28 )
          break;
        fprintf(s, ",\n\"%s\" : \"%d\"", v25 + 2, *(_DWORD *)*(v23 - 2));
LABEL_53:
        v25 = strtok(0, "|");
        if ( !v25 )
          goto LABEL_67;
      }
      v38 = (char *)v26 == (char *)sub_176B8;
      if ( (char *)v26 != (char *)sub_176B8 )
        v38 = (char *)v26 == (char *)sub_17704;
      if ( v38 )
      {
        fprintf(s, ",\n\"%s\" : \"%.1f\"", v25 + 2, *(float *)*(v23 - 2));
        goto LABEL_53;
      }
LABEL_63:
      if ( (v29 & 6) == 0 )
        goto LABEL_53;
      v32 = (const char **)*(v23 - 2);
      if ( v32 == (const char **)&unk_6DBA0 || !*v32 )
        goto LABEL_53;
      v33 = sub_16CD0(*v32);
      fprintf(s, ",\n\"%s\" : \"%s\"", v25 + 2, v33);
      v25 = strtok(0, "|");
      if ( !v25 )
        goto LABEL_67;
    }
  }
LABEL_68:
  v34 = dword_6DB74;
  if ( dword_6DB74 == 4 )
  {
    fwrite(",\n\"balance\" : true", 1u, 0x12u, s);
    v34 = dword_6DB74;
  }
  if ( v34 == 3 )
  {
    fwrite(",\n\"load-balance\" : true", 1u, 0x17u, s);
    v34 = dword_6DB74;
  }
  if ( v34 == 1 )
  {
    fwrite(",\n\"round-robin\" : true", 1u, 0x16u, s);
    v34 = dword_6DB74;
  }
  if ( v34 == 2 )
    fprintf(s, ",\n\"rotate\" : \"%d\"", dword_73000);
  fwrite("\n}\n", 1u, 3u, s);
  v35 = (void **)dword_6D850;
  dword_6D850 = 0;
  if ( v35 )
  {
    do
    {
      v36 = *(_QWORD *)v35;
      free(*v35);
      v37 = v35;
      v35 = (void **)HIDWORD(v36);
      free(v37);
    }
    while ( HIDWORD(v36) );
  }
}
