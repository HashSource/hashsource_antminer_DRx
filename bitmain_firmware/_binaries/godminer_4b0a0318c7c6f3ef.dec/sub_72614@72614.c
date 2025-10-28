int __fastcall sub_72614(int *a1)
{
  int v2; // r6
  int v3; // r4

  v2 = a1[88];
  v3 = 3;
  while ( 1 )
  {
    sub_720F8(a1, v2);
    if ( a1[110] == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
