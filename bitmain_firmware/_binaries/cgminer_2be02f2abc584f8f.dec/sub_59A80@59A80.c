char *__fastcall sub_59A80(const char *a1, char *a2)
{
  unsigned int v2; // r10
  int v3; // r3
  int v4; // r2
  size_t v5; // r4
  size_t v6; // r8
  const char *v7; // r7
  size_t v8; // r9
  size_t v9; // r0
  size_t v10; // r8
  unsigned int v11; // r5
  int v12; // r4
  char *v13; // r0
  char *v14; // r4
  char *v15; // r8
  char *v16; // r0
  int v17; // r5
  char *v18; // r4
  int v19; // r5
  unsigned int v20; // r7
  int v21; // r3
  const char *v22; // r2
  unsigned int v23; // r6
  int v24; // r2
  unsigned int v25; // r6
  unsigned int v26; // r6
  size_t v27; // r4
  char *v29; // [sp+4h] [bp-68h]
  char *sa; // [sp+8h] [bp-64h]
  char *v32; // [sp+Ch] [bp-60h]
  unsigned int v33; // [sp+10h] [bp-5Ch] BYREF
  char v34[80]; // [sp+14h] [bp-58h] BYREF
  int v35; // [sp+64h] [bp-8h]

  v29 = a2;
  if ( a2 )
  {
    v5 = strlen(a1);
    v6 = dword_93CA4 + 20 + v5 + strlen(v29);
    v2 = dword_93CA8;
    if ( !dword_93CA8 )
      goto LABEL_18;
  }
  else
  {
    v2 = dword_93CA8;
    if ( !dword_93CA8 )
    {
      v6 = dword_93CA4 + 20 + strlen(a1);
      v29 = &byte_67C50;
      goto LABEL_18;
    }
    v3 = dword_93CB0;
    v4 = 0;
    while ( *(_DWORD *)(v3 + 8) != 363616 || !*(_DWORD *)(v3 + 20) )
    {
      ++v4;
      v3 += 28;
      if ( v4 == dword_93CA8 )
      {
        v29 = &byte_67C50;
        goto LABEL_46;
      }
    }
    v29 = *(char **)(v3 + 20);
LABEL_46:
    v27 = strlen(a1);
    v6 = dword_93CA4 + 20 + v27 + strlen(v29);
  }
  v12 = dword_93CB0;
  v11 = 0;
  do
  {
    if ( *(_DWORD *)(v12 + 4) == 8 )
    {
      v6 += 3 + strlen(*(const char **)(v12 + 24));
    }
    else
    {
      v7 = *(const char **)(v12 + 24);
      if ( v7 != (const char *)&unk_93CB8 )
      {
        v8 = strlen(*(const char **)v12);
        v9 = v6 + 6 + v8 + strlen(v7);
        if ( *(_DWORD *)(v12 + 16) )
          v10 = v9 + 118;
        else
          v10 = v9 + 21;
        v6 = v10 + 1;
      }
    }
    ++v11;
    v12 += 28;
  }
  while ( v2 > v11 );
LABEL_18:
  v13 = (char *)malloc(v6);
  v32 = v13;
  if ( v13 )
  {
    v14 = &v13[sprintf(v13, "Usage: %s", a1)];
    strcpy(v14, " [-");
    v15 = v14 + 3;
    v16 = sub_59284(&v33);
    if ( v16 )
    {
      v17 = 0;
      do
      {
        if ( *(_UNKNOWN **)(dword_93CB0 + 28 * v33 + 24) != &unk_93CB8 )
          v15[v17++] = *v16;
        v16 = sub_592E0((int)v16, &v33);
      }
      while ( v16 );
      if ( v17 )
      {
        *(_WORD *)&v15[v17] = 93;
        v14 = &v15[v17 + 1];
      }
    }
    if ( v29 )
      v14 += sprintf(v14, " %s", v29);
    *(_WORD *)v14 = 10;
    v18 = v14 + 1;
    if ( dword_93CA8 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = dword_93CB0 + v19;
        v22 = *(const char **)(dword_93CB0 + v19 + 24);
        if ( v22 != (const char *)&unk_93CB8 )
        {
          if ( *(_DWORD *)(v21 + 4) == 8 )
          {
            v18 += sprintf(v18, "%s:\n", v22);
          }
          else
          {
            v23 = sprintf(v18, "%s", *(const char **)v21);
            if ( *(_DWORD *)(dword_93CB0 + v19 + 4) == 2 )
            {
              sa = *(char **)(dword_93CB0 + v19);
              if ( !strchr(sa, 32) && !strchr(sa, 61) )
              {
                strcpy(&v18[v23], " <arg>");
                v23 += 6;
              }
            }
            if ( v23 > 0x13 )
              v24 = 1;
            else
              v24 = 20 - v23;
            v25 = sprintf(&v18[v23], "%.*s", v24, "                    ") + v23;
            v26 = v25 + sprintf(&v18[v25], "%s", *(const char **)(dword_93CB0 + v19 + 24));
            if ( *(_DWORD *)(dword_93CB0 + v19 + 16) )
            {
              v35 = 3026478;
              (*(void (__fastcall **)(char *, _DWORD))(dword_93CB0 + v19 + 16))(
                v34,
                *(_DWORD *)(dword_93CB0 + v19 + 20));
              v26 += sprintf(&v18[v26], " (default: %s)", v34);
            }
            *(_WORD *)&v18[v26] = 10;
            v18 += v26 + 1;
          }
        }
        ++v20;
        v19 += 28;
      }
      while ( dword_93CA8 > v20 );
    }
    *v18 = 0;
  }
  return v32;
}
