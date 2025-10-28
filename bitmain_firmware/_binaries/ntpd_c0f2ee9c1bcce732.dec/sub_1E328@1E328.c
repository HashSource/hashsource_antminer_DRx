const char *__fastcall sub_1E328(int a1, const char *a2, _DWORD *a3)
{
  int v6; // r0
  int v7; // r4
  const char *result; // r0
  int *i; // r6
  int v10; // r0
  const char **v11; // r4
  bool v12; // cc

  if ( dword_7CF4C > 3 )
    printf("filegen_register(%s, %p)\n", a2, a3);
  a3[1] = a1;
  *a3 = 0;
  v6 = sub_4F4E8(a2);
  a3[3] = 0;
  *((_BYTE *)a3 + 16) = 2;
  v7 = dword_7D3B8;
  *((_BYTE *)a3 + 17) = 1;
  a3[2] = v6;
  if ( v7 )
  {
    result = *(const char **)v7;
    for ( i = &dword_7D3B8; *(const char **)v7 != a2; result = *(const char **)v7 )
    {
      result = (const char *)strcmp(result, a2);
      if ( !result )
        break;
      i = (int *)(v7 + 8);
      v7 = *(_DWORD *)(v7 + 8);
      if ( !v7 )
        goto LABEL_13;
    }
    if ( dword_7CF4C > 4 )
      result = (const char *)printf("replacing filegen %p\n", *(const void **)(v7 + 4));
    *(_DWORD *)(*i + 4) = a3;
  }
  else
  {
    i = &dword_7D3B8;
LABEL_13:
    v10 = sub_4F524(12);
    *i = v10;
    *(_DWORD *)(v10 + 8) = 0;
    v11 = (const char **)*i;
    result = (const char *)sub_4F4E8(a2);
    v12 = dword_7CF4C <= 5;
    *v11 = result;
    *(_DWORD *)(*i + 4) = a3;
    if ( !v12 )
      return (const char *)puts("adding new filegen");
  }
  return result;
}
