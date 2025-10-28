int __fastcall sub_19C7C(unsigned int *a1)
{
  bool v2; // zf
  unsigned int v3; // r0
  int v4; // r2
  unsigned int v5; // r5
  int result; // r0
  unsigned int v7[513]; // [sp+0h] [bp-804h] BYREF

  v2 = byte_630C1 == 0;
  v3 = bswap32(bswap32(a1[17]) + 1);
  v4 = dword_63A70 + 1;
  ++a1[60];
  a1[17] = v3;
  a1[62] = 0;
  dword_63A70 = v4;
  if ( !v2 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy((char *)v7, "Successfully rolled work");
    sub_38438(7, v7, 0);
  }
  v5 = a1[77];
  if ( v5 )
  {
    sub_295B8(v7, a1[77], 4);
    v7[0] = bswap32(bswap32(v7[0]) + 1);
    sub_29460(v5, v7, 4);
  }
  result = sub_19BC0();
  a1[85] = result;
  return result;
}
