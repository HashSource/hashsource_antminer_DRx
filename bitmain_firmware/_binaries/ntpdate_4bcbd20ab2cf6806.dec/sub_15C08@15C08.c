unsigned int __fastcall sub_15C08(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r4
  int v4; // r0
  int v5; // r1

  v2 = a1;
  if ( a2 >= a1 )
    off_21DCC("./../lib/isc/random.c", 95, 0, "jitter < max");
  if ( a2 )
  {
    v4 = rand();
    sub_15D10(v4, a2);
    v2 -= v5;
  }
  return v2;
}
