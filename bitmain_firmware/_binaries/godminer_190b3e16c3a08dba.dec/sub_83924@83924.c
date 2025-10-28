int __fastcall sub_83924(int *a1)
{
  int v2; // r6
  int v3; // r5

  v2 = a1[76];
  v3 = 3;
  while ( 1 )
  {
    sub_833B8(a1, v2);
    if ( a1[98] == v2 )
      break;
    chain_reset(a1[55]);
    if ( a1[98] == v2 )
      break;
    if ( !--v3 )
      return 12;
  }
  return 0;
}
