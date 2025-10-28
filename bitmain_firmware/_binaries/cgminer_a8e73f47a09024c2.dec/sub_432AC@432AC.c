unsigned int __fastcall sub_432AC(unsigned int result, unsigned __int8 *a2, int a3)
{
  unsigned __int8 *v3; // r12
  int v4; // t1

  if ( a3 )
  {
    v3 = &a2[a3];
    do
    {
      v4 = *a2++;
      result = (unsigned __int16)(*(_WORD *)&aBitmainDcrRein[2 * (v4 ^ (result >> 8)) + 116] ^ ((_WORD)result << 8));
    }
    while ( a2 != v3 );
  }
  return result;
}
