ssize_t __fastcall sub_3E744(int a1)
{
  int v1; // r0
  __int16 *v2; // r1
  int *v3; // r3

  byte_6D7EF ^= 1u;
  if ( a1 )
  {
    write(dword_73E84, &word_513BC, 2u);
    v1 = (unsigned __int8)byte_6D7EF;
    v2 = (__int16 *)"1";
    v3 = &dword_73ED0;
  }
  else
  {
    write(dword_73ED0, &word_513BC, 2u);
    v2 = (__int16 *)"1";
    v3 = &dword_73E84;
    v1 = (unsigned __int8)byte_6D7EF;
  }
  if ( !v1 )
    v2 = &word_513BC;
  return j_write(*v3, v2, 2u);
}
