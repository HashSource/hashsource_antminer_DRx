void *__fastcall diff_to_target_dcr(char *a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d0
  char *v5; // r8
  int v6; // r4
  unsigned __int64 v7; // r6
  void *result; // r0
  int v9; // r4

  if ( v1 <= 1.0 )
  {
    v7 = (unsigned __int64)(4294901760.0 / v1);
    if ( !v7 )
      return memset(a1, 255, 0x20u);
    v3 = 6;
  }
  else
  {
    v3 = 5;
    v4 = v1 * 2.32830644e-10;
    while ( v4 > 1.0 )
    {
      --v3;
      v4 = v4 * 2.32830644e-10;
      if ( !v3 )
      {
        v5 = a1;
        v6 = 4;
        v7 = (unsigned __int64)(4294901760.0 / v4);
        goto LABEL_6;
      }
    }
    v7 = (unsigned __int64)(4294901760.0 / v4);
  }
  v9 = 4 * v3;
  v5 = &a1[v9];
  v6 = v9 + 4;
LABEL_6:
  result = memset(a1, 0, 0x20u);
  *(_DWORD *)v5 = v7;
  *(_DWORD *)&a1[v6] = HIDWORD(v7);
  return result;
}
