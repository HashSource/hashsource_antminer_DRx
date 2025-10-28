char *__fastcall sub_47CA0(char *result, _DWORD *a2)
{
  char *v2; // r4
  int v4; // r0
  int v5; // r2
  int v6; // r6
  int v7; // [sp+4h] [bp-4h] BYREF

  if ( !*result )
    return result;
  v2 = result;
  v4 = sub_47BB0((unsigned __int8)*result);
  v6 = v4;
  if ( v4 <= 0 )
    return 0;
  if ( v4 != 1 )
  {
    if ( sub_47BF0(v2, v4, &v7) )
      goto LABEL_6;
    return 0;
  }
  v7 = v5;
LABEL_6:
  if ( a2 )
    *a2 = v7;
  return &v2[v6];
}
