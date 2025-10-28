void sub_3DF80()
{
  int v0; // r4
  unsigned __int8 *v1; // r5
  int v2; // t1

  v0 = 0;
  v1 = (unsigned __int8 *)&unk_73EF0;
  do
  {
    v2 = *v1++;
    if ( v2 == 1 )
      sub_3DE4C(v0);
    ++v0;
  }
  while ( v0 != 4 );
}
