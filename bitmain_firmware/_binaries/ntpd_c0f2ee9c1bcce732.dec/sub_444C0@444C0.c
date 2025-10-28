_DWORD *__fastcall sub_444C0(_DWORD *result, int a2)
{
  _DWORD *v2; // r5
  int *v3; // r4
  int v5; // r3
  int v6; // r2
  int v7; // r2
  void *v8; // r0
  size_t v9; // r7

  v2 = result;
  v3 = (int *)*result;
  if ( *result )
  {
    v5 = *v3;
    v6 = v3[1];
    if ( *v3 >= v6 )
    {
      v8 = (void *)*result;
      v9 = 4 * v6 + 40;
      v3[1] = v6 + 8;
      result = realloc(v8, v9);
      if ( !result )
      {
        fprintf((FILE *)stderr, off_7B864[0], v9, v3);
        exit(1);
      }
      v5 = *result;
      v3 = result;
      *v2 = result;
    }
    v7 = v5 + 1;
    goto LABEL_4;
  }
  result = sub_44484(0x20u);
  v3 = result;
  if ( result )
  {
    v5 = 0;
    result[1] = 6;
    v7 = 1;
    *result = 0;
    *v2 = result;
LABEL_4:
    *v3 = v7;
    v3[v5 + 2] = a2;
  }
  return result;
}
