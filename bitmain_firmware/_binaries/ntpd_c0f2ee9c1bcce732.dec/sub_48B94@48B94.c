int __fastcall sub_48B94(_BYTE *a1, size_t a2, char *s, const char *a4)
{
  size_t v8; // r0
  size_t v9; // r7
  bool v10; // cc
  int v11; // r12
  char *v12; // r2
  _BYTE *v13; // r3
  int v14; // t1
  unsigned int v16; // r12
  char *v17; // r5
  _BYTE *v18; // r1
  const char *v19; // r8
  unsigned int v20; // t1
  char *v21; // r0
  const char *v22; // r10
  size_t v23; // r5
  const char *v24; // r0
  char *v25; // r4
  size_t v26; // r0
  int v27; // r9
  char *v28; // r10
  char *v29; // r0
  const char *v30; // r5
  int v31; // r9
  char *v32; // r0
  char *v33; // r0

  v8 = strlen(s);
  v9 = a2;
  v10 = v8 != 0;
  if ( v8 )
    v10 = a2 > v8;
  if ( !v10 )
    return 0;
  v11 = (unsigned __int8)*s;
  if ( v11 == 36 )
  {
    v16 = (unsigned __int8)s[1];
    if ( v16 == 36 )
    {
      if ( s[2] )
      {
        if ( s[2] != 47 )
          return 0;
        v27 = 3;
      }
      else
      {
        v27 = 2;
      }
      if ( strchr(a4, 47) )
      {
        v28 = (char *)a4;
      }
      else
      {
        v32 = getenv("PATH");
        v33 = sub_469C8(v32, a4, "rx");
        v28 = v33;
        if ( !v33 )
          return 0;
      }
      v29 = strrchr(v28, 47);
      if ( !v29 )
        return 0;
      v30 = &s[v27];
      v31 = v29 - v28 + 1;
      if ( a2 <= strlen(v30) + v31 )
        return 0;
      memcpy(a1, v28, v31);
      strcpy(&a1[v31], v30);
      if ( a4 != v28 )
        free(v28);
    }
    else if ( v16 == 64 )
    {
      if ( !*off_7BB78 || (int)a2 <= snprintf(a1, a2, "%s%s", off_7BB78, s + 2) )
        return 0;
    }
    else
    {
      if ( !s[1] || v16 > 0x7F || (dword_69A0C[v16] & 0xEF) == 0 )
        return 0;
      v17 = s + 2;
      v18 = a1;
      do
      {
        *v18++ = v16;
        v19 = v17;
        v20 = (unsigned __int8)*v17++;
        v16 = v20;
      }
      while ( v20 <= 0x7F && (dword_69A0C[v16] & 0xEF) != 0 );
      if ( a1 == v18 )
        return 0;
      *v18 = 0;
      v21 = getenv(a1);
      v22 = v21;
      if ( !v21 )
        return 0;
      v23 = strlen(v21);
      if ( a2 <= v23 + strlen(v19) + 1 )
        return 0;
      sprintf(a1, "%s%s", v22, v19);
    }
  }
  else
  {
    v12 = s;
    v13 = a1;
    while ( 1 )
    {
      --a2;
      *v13++ = v11;
      if ( !v11 )
        break;
      if ( (int)a2 <= 0 )
        return 0;
      v14 = (unsigned __int8)*++v12;
      v11 = v14;
    }
  }
  v24 = (const char *)canonicalize_file_name(a1);
  v25 = (char *)v24;
  if ( !v24 )
    return 0;
  v26 = strlen(v24);
  if ( v9 <= v26 )
  {
    free(v25);
    return 0;
  }
  else
  {
    memcpy(a1, v25, v26 + 1);
    free(v25);
    return 1;
  }
}
