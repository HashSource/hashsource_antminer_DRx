int sub_41F18()
{
  int result; // r0
  _DWORD *v1; // r3
  int v2; // r1
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    strcpy(v3, "reset_patten_stats");
    sub_38438(5, v3, 0);
  }
  memset(dword_66EB0, 0, 0x3600u);
  byte_60DE8 = 1;
  result = 0;
  dword_630F4 = 0;
  do
  {
    v1 = &dword_6A4B8[1248 * result];
    v2 = 48;
    do
    {
      --v2;
      v1[22] = 0;
      v1[23] = 0;
      v1[24] = 0;
      v1[25] = 0;
      v1 += 26;
    }
    while ( v2 );
    ++result;
  }
  while ( result != 72 );
  return result;
}
