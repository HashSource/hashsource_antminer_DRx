int __fastcall target_to_diff(int a1, int a2)
{
  int v2; // r12
  int result; // r0
  int v4; // r1
  int v5; // r2
  int v6; // t1
  int v7; // r3

  if ( a2 <= 0 )
    return 0;
  v2 = a1 - 1;
  result = 0;
  v4 = v2 + a2;
LABEL_3:
  v6 = *(unsigned __int8 *)++v2;
  v5 = v6;
  v7 = 7;
  while ( v5 >> v7-- == 0 )
  {
    ++result;
    if ( v7 == -1 )
    {
      if ( v2 != v4 )
        goto LABEL_3;
      return result;
    }
  }
  return result;
}
