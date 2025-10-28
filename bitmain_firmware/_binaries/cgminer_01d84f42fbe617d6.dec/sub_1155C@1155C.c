int __fastcall sub_1155C(int a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r4
  int result; // r0
  char v5[1016]; // [sp+8h] [bp-C00h] BYREF
  char v6[2048]; // [sp+408h] [bp-800h] BYREF

  v2 = 4;
  v3 = 0;
  do
  {
    --v2;
    v3 = (unsigned __int8)a2 + (v3 << 8);
    a2 >>= 8;
  }
  while ( v2 );
  result = sub_29460(v5, a1, 128);
  if ( byte_632F0 || byte_630C0 || dword_60964 > 2 )
  {
    snprintf(v6, 0x800u, "BENCHFILE nonce %u=0x%08x for work=%s", v3, v3, v5);
    return sub_38438(3, v6, 0);
  }
  return result;
}
