int __fastcall sub_470F4(_DWORD *a1, int a2)
{
  int *v2; // r2
  int *v3; // r2
  int v4; // r3
  int v5; // t1
  int v6; // t1
  int v7; // r4

  if ( a1 && *a1 == 6 )
  {
    v2 = (int *)a1[2];
    v5 = *v2;
    v3 = v2 + 2;
    v4 = v5;
    do
    {
      if ( v4-- <= 0 )
      {
        v7 = 22;
        goto LABEL_8;
      }
      v6 = *v3++;
    }
    while ( v6 != a2 );
    if ( !v4 )
    {
      v7 = 2;
LABEL_8:
      *_errno_location() = v7;
      return 0;
    }
    return *v3;
  }
  else
  {
    *_errno_location() = 22;
    return 0;
  }
}
