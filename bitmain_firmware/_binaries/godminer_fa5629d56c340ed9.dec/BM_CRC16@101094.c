unsigned int __fastcall BM_CRC16(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r2
  unsigned __int8 *v3; // r1
  int v4; // t1

  if ( !a2 )
    return 0xFFFF;
  v3 = &a1[a2];
  v2 = 0xFFFF;
  do
  {
    v4 = *a1++;
    v2 = (unsigned __int16)(crc_itu_t_table[v4 ^ (v2 >> 8)] ^ ((_WORD)v2 << 8));
  }
  while ( a1 != v3 );
  return v2;
}
