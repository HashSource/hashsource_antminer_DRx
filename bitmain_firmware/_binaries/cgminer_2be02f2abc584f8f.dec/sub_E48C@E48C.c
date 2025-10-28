int __fastcall sub_E48C(int a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r4
  int result; // r0
  char s[2040]; // [sp+8h] [bp-C00h] BYREF
  char v6[1024]; // [sp+808h] [bp-400h] BYREF

  v2 = 4;
  v3 = 0;
  do
  {
    v3 = (unsigned __int8)a2 + (v3 << 8);
    a2 >>= 8;
    --v2;
  }
  while ( v2 );
  result = sub_2CD88(v6, a1, 180);
  if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
  {
    snprintf(s, 0x800u, "BENCHFILE nonce %u=0x%08x for work=%s", v3, v3, v6);
    return sub_3F1C0(3, s, 0);
  }
  return result;
}
