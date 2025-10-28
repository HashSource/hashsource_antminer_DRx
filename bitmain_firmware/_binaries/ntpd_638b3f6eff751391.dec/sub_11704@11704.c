int __fastcall sub_11704(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r6
  unsigned __int8 *v2; // r5
  int v3; // r4
  int v4; // t1

  v1 = a1 + 28;
  v2 = a1 + 1;
  v3 = 1;
  printf("%02x", *a1);
  while ( 1 )
  {
    ++v3;
    if ( v2 == v1 )
      break;
    while ( 1 )
    {
      v4 = *v2++;
      printf("%02x", v4);
      if ( (v3 & 3) != 0 )
        break;
      ++v3;
      putchar(32);
      if ( v2 == v1 )
        return putchar(10);
    }
  }
  return putchar(10);
}
