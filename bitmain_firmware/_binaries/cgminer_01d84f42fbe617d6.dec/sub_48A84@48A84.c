char *__fastcall sub_48A84(const char *a1, char *a2)
{
  size_t v2; // r4
  unsigned int v3; // r11
  size_t v4; // r8
  int v5; // r4
  unsigned int v6; // r5
  const char *v7; // r7
  size_t v8; // r8
  size_t v9; // r0
  size_t v10; // r8
  size_t v11; // r9
  size_t v12; // r0
  char *v13; // r0
  char *v14; // r4
  char *v15; // r5
  unsigned __int8 *v16; // r2
  int v17; // r9
  int v18; // r0
  char *v19; // r5
  int v20; // r4
  unsigned int v21; // r7
  unsigned int v22; // r9
  int v23; // r2
  unsigned int v24; // r9
  unsigned int v25; // r9
  int v26; // r3
  const char *v27; // r2
  char *v29; // r2
  int v30; // r2
  int v31; // r3
  size_t v32; // r5
  char *v33; // [sp+0h] [bp-6Ch]
  char *v34; // [sp+4h] [bp-68h]
  char *s; // [sp+8h] [bp-64h]
  unsigned int v37; // [sp+10h] [bp-5Ch] BYREF
  char v38[80]; // [sp+14h] [bp-58h] BYREF
  int v39; // [sp+64h] [bp-8h]

  s = a2;
  if ( a2 )
  {
    v2 = strlen(a1);
    v3 = dword_C54C8;
    v4 = dword_C54C4 + 20 + v2 + strlen(s);
    if ( !dword_C54C8 )
      goto LABEL_12;
    v5 = dword_C54D0;
  }
  else
  {
    v3 = dword_C54C8;
    if ( !dword_C54C8 )
    {
      s = (char *)"";
      v4 = dword_C54C4 + 20 + strlen(a1);
      goto LABEL_12;
    }
    v30 = 0;
    v5 = dword_C54D0;
    v31 = dword_C54D0;
    do
    {
      ++v30;
      if ( *(void (__fastcall __noreturn **)(int))(v31 + 8) == sub_47C58 && *(_DWORD *)(v31 + 20) )
      {
        s = *(char **)(v31 + 20);
        v32 = strlen(s);
        goto LABEL_45;
      }
      v31 += 28;
    }
    while ( v30 != dword_C54C8 );
    v32 = 0;
    s = (char *)"";
LABEL_45:
    v4 = dword_C54C4 + 20 + strlen(a1) + v32;
  }
  v6 = 0;
  do
  {
    while ( 1 )
    {
      v11 = v4 + 6;
      if ( *(_DWORD *)(v5 + 4) != 8 )
        break;
      ++v6;
      v12 = strlen(*(const char **)(v5 + 24));
      v5 += 28;
      v4 += 3 + v12;
      if ( v3 <= v6 )
        goto LABEL_12;
    }
    v7 = *(const char **)(v5 + 24);
    if ( v7 != (const char *)&unk_C54D8 )
    {
      v8 = strlen(*(const char **)v5);
      v9 = v11 + v8 + strlen(v7);
      v10 = v9 + 21;
      if ( *(_DWORD *)(v5 + 16) )
        v10 = v9 + 118;
      v4 = v10 + 1;
    }
    ++v6;
    v5 += 28;
  }
  while ( v3 > v6 );
LABEL_12:
  v13 = (char *)malloc(v4);
  v34 = v13;
  if ( v13 )
  {
    v14 = &v13[sprintf(v13, "Usage: %s", a1)];
    v15 = v14 + 3;
    strcpy(v14, " [-");
    v16 = sub_48330(&v37);
    if ( v16 )
    {
      v17 = 0;
      do
      {
        if ( *(_UNKNOWN **)(dword_C54D0 + 28 * v37 + 24) != &unk_C54D8 )
          v15[v17++] = *v16;
        v16 = sub_4838C(v16, &v37);
      }
      while ( v16 );
      if ( v17 )
      {
        v14 = &v15[v17 + 1];
        *(_WORD *)&v15[v17] = 93;
      }
    }
    v18 = sprintf(v14, " %s", s);
    *(_WORD *)&v14[v18] = 10;
    v19 = &v14[v18 + 1];
    if ( dword_C54C8 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        v26 = dword_C54D0 + v20;
        v27 = *(const char **)(dword_C54D0 + v20 + 24);
        if ( v27 != (const char *)&unk_C54D8 )
        {
          if ( *(_DWORD *)(v26 + 4) == 8 )
          {
            v19 += sprintf(v19, "%s:\n", v27);
          }
          else
          {
            v22 = sprintf(v19, "%s", *(const char **)v26);
            if ( *(_DWORD *)(dword_C54D0 + v20 + 4) == 2 )
            {
              v33 = *(char **)(dword_C54D0 + v20);
              if ( !strchr(v33, 32) && !strchr(v33, 61) )
              {
                v29 = &v19[v22];
                *(_DWORD *)&v19[v22] = *(_DWORD *)" <arg>";
                v22 += 6;
                strcpy(v29 + 4, "g>");
              }
            }
            if ( v22 > 0x13 )
              v23 = 1;
            else
              v23 = 20 - v22;
            v24 = sprintf(&v19[v22], "%.*s", v23, "                    ", v33) + v22;
            v25 = v24 + sprintf(&v19[v24], "%s", *(const char **)(dword_C54D0 + v20 + 24));
            if ( *(_DWORD *)(dword_C54D0 + v20 + 16) )
            {
              v39 = 3026478;
              (*(void (__fastcall **)(char *, _DWORD))(dword_C54D0 + v20 + 16))(
                v38,
                *(_DWORD *)(dword_C54D0 + v20 + 20));
              v25 += sprintf(&v19[v25], " (default: %s)", v38);
            }
            *(_WORD *)&v19[v25] = 10;
            v19 += v25 + 1;
          }
        }
        ++v21;
        v20 += 28;
      }
      while ( dword_C54C8 > v21 );
    }
    *v19 = 0;
  }
  return v34;
}
