int __fastcall target_to_diff_dash(int a1)
{
  int v1; // r1
  int v2; // r4
  int v3; // r3
  int v4; // lr
  int v5; // t1
  int v6; // r2

  v1 = 0;
  v2 = a1 + 32;
LABEL_2:
  v3 = 7;
  v5 = *(unsigned __int8 *)--v2;
  v4 = v5;
  while ( 1 )
  {
    v6 = v4 >> v3--;
    if ( (v6 & 1) != 0 )
      return v1;
    v1 = (unsigned __int8)(v1 + 1);
    if ( v3 == -1 )
    {
      if ( v2 != a1 )
        goto LABEL_2;
      return v1;
    }
  }
}
