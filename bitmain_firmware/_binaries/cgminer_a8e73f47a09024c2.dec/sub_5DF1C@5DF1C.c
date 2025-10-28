int __fastcall sub_5DF1C(_DWORD *a1, int a2, int *a3, void (*a4)(const char *, ...))
{
  _BYTE *v7; // r3
  int v8; // r2
  int v9; // r4
  _BYTE *v10; // r3
  _BYTE *v11; // t1
  const char **v13; // r6
  const char *v14; // r3
  const char *v15; // r8
  const char *v16; // r11
  size_t v17; // r10
  char *v18; // r11
  size_t v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r3
  _BYTE *v22; // r0
  int i; // r3
  char *v24; // r8
  unsigned int v25; // r1
  size_t v26; // r0
  const char *v28; // [sp+Ch] [bp-10h]
  size_t n; // [sp+10h] [bp-Ch] BYREF
  unsigned int v30[2]; // [sp+14h] [bp-8h] BYREF

  if ( getenv("POSIXLY_CORRECT") )
  {
    v13 = (const char **)(a2 + 4);
    v14 = *(const char **)(a2 + 4);
    if ( !v14 )
      return 0;
    v9 = 1;
  }
  else
  {
    v7 = *(_BYTE **)(a2 + 4);
    if ( !v7 )
      return 0;
    if ( *v7 != 45 )
    {
      v8 = a2 + 4;
      v9 = 1;
      while ( 1 )
      {
        ++v9;
        v11 = *(_BYTE **)(v8 + 4);
        v8 += 4;
        v10 = v11;
        if ( !v11 )
          return 0;
        if ( *v10 == 45 )
          goto LABEL_61;
      }
    }
    v9 = 1;
LABEL_61:
    v13 = (const char **)(a2 + 4 * v9);
    v14 = *v13;
  }
  if ( *v14 != 45 )
    return 0;
  if ( v14[1] == 45 && !v14[2] )
  {
    sub_5DEE8(a1, a2, v9);
    return 0;
  }
  if ( v14[1] == 45 )
  {
    if ( *a3 )
      _assert_fail("*offset == 0", "opt/parse.c", 0x3Bu, "parse_one");
    v15 = sub_5DAF4(v30, &n);
    if ( !v15 )
    {
LABEL_26:
      v19 = strlen(*v13);
      return sub_5DEB0(a4, *(const char **)a2, *v13, v19, "unrecognized option");
    }
    while ( 1 )
    {
      v16 = *v13;
      v17 = n;
      if ( !strncmp(*v13 + 2, v15, n) )
      {
        if ( v16[v17 + 2] == 61 )
        {
          v18 = (char *)&v16[v17 + 3];
          goto LABEL_27;
        }
        if ( !v16[v17 + 2] )
          break;
      }
      v15 = sub_5DB54((int)v15, v30, &n);
      if ( !v15 )
        goto LABEL_26;
    }
    v18 = 0;
LABEL_27:
    v28 = v15 - 2;
    n = v17 + 2;
    v20 = 28 * v30[0];
    v21 = dword_B43BC + 28 * v30[0];
    if ( *(_DWORD *)(v21 + 4) == 1 )
    {
      if ( v18 )
        return sub_5DEB0(a4, *(const char **)a2, v28, n, "doesn't allow an argument");
      goto LABEL_38;
    }
    if ( v18 )
    {
LABEL_46:
      v25 = dword_B43BC + v20;
      if ( *(_DWORD *)(v25 + 4) == 4 )
        sub_5D37C((int)v18, *(_DWORD **)(v25 + 20));
      v24 = (char *)(*(int (__fastcall **)(char *, _DWORD))(dword_B43BC + 28 * v30[0] + 12))(
                      v18,
                      *(_DWORD *)(dword_B43BC + 28 * v30[0] + 20));
      goto LABEL_49;
    }
LABEL_40:
    if ( *a3 && (v18 = (char *)&(*v13)[*a3 + 1], *v18) )
      *a3 = 0;
    else
      v18 = *(char **)(a2 + 4 * (v9 + 1));
    if ( !v18 )
      return sub_5DEB0(a4, *(const char **)a2, v28, n, "requires an argument");
    goto LABEL_46;
  }
  v22 = sub_5DBB4(v30);
  if ( !v22 )
  {
LABEL_62:
    v26 = strlen(*v13);
    return sub_5DEB0(a4, *(const char **)a2, *v13, v26, "unrecognized option");
  }
  for ( i = *a3 + 1; (*v13)[i] != *v22; i = *a3 + 1 )
  {
    v22 = sub_5DC10((int)v22, v30);
    if ( !v22 )
      goto LABEL_62;
  }
  *a3 = i;
  v28 = v22 - 1;
  n = 2;
  v20 = 28 * v30[0];
  v21 = dword_B43BC + 28 * v30[0];
  if ( *(_DWORD *)(v21 + 4) != 1 )
    goto LABEL_40;
LABEL_38:
  v24 = (char *)(*(int (__fastcall **)(_DWORD))(v21 + 8))(*(_DWORD *)(v21 + 20));
  v18 = 0;
LABEL_49:
  if ( v24 )
  {
    sub_5DEB0(a4, *(const char **)a2, v28, n, v24);
    free(v24);
    return -1;
  }
  if ( *a3 )
  {
    if ( (*v13)[*a3 + 1] )
      return 1;
    *a3 = 0;
  }
  sub_5DEE8(a1, a2, v9);
  if ( !v18 )
    return 1;
  if ( *v13 == v18 )
    sub_5DEE8(a1, a2, v9);
  return 1;
}
