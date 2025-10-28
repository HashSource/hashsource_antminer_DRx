void sub_4C454()
{
  int v0; // r5
  int i; // r4
  int v2; // t1

  v0 = 736019;
  for ( i = 0; i != 4; i = (unsigned __int8)(i + 1) )
  {
    v2 = *(unsigned __int8 *)++v0;
    if ( v2 == 1 )
      sub_4C390(i);
  }
}
