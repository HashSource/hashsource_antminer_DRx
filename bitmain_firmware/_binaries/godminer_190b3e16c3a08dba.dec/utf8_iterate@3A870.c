char *__fastcall utf8_iterate(char *result, int a2, _DWORD *a3)
{
  char *v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r1
  int v7; // r2
  unsigned int v8; // r6
  int v9; // [sp+4h] [bp-14h] BYREF

  if ( a2 )
  {
    v4 = result;
    v5 = utf8_check_first((unsigned __int8)*result);
    v8 = v5;
    if ( v5 )
    {
      if ( v5 == 1 )
      {
        v9 = v7;
LABEL_7:
        result = &v4[v8];
        if ( a3 )
          *a3 = v9;
        return result;
      }
      if ( v6 >= v5 && utf8_check_full(v4, v5, &v9) )
        goto LABEL_7;
    }
    return 0;
  }
  return result;
}
