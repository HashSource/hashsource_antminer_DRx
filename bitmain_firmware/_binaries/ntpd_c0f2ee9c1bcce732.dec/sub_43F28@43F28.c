unsigned int __fastcall sub_43F28(const char *a1, unsigned int a2, _DWORD *a3, const char **a4, unsigned int a5)
{
  size_t v7; // r0
  unsigned int v8; // r3
  size_t v9; // r6
  const char **v10; // r9
  unsigned int v11; // r8
  unsigned int i; // r4
  const char *v13; // r11
  const char *v14; // t1
  char *v15; // r6
  unsigned int v17; // r0
  char *v20; // [sp+Ch] [bp-8h] BYREF

  v7 = strlen(a1);
  v8 = *(unsigned __int8 *)a1;
  v9 = v7;
  if ( v8 > 0x7F || (dword_69A0C[v8] & 0xC) == 0 )
  {
    if ( !a5 )
      goto LABEL_21;
    v10 = a4 - 1;
    v11 = a5;
    for ( i = 0; i != a5; ++i )
    {
      v14 = v10[1];
      ++v10;
      v13 = v14;
      if ( !strncmp(v14, a1, v9) )
      {
        if ( !v13[v9] )
          return i;
        if ( v11 == a5 )
          v11 = i;
        else
          v11 = -1;
      }
    }
    if ( a5 > v11 )
      return v11;
    if ( v11 == a5 )
LABEL_21:
      v15 = off_7B964[0];
    else
      v15 = off_7B884[0];
    i = a5;
    dword_C9A9C = (int)v15;
    dword_C9A98 = stderr;
    sub_426A4(a2, a3, a4, a5);
    return i;
  }
  v20 = (char *)a1;
  v17 = strtoul(a1, &v20, 0);
  i = v17;
  if ( *v20 || a5 <= v17 )
  {
    i = a5;
    sub_426A4(a2, a3, a4, a5);
  }
  return i;
}
