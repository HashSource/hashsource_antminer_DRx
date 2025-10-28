int __fastcall sub_16D28(int a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r4
  int v4; // r3
  int result; // r0
  char v6[1024]; // [sp+8h] [bp-C00h] BYREF
  char s[2048]; // [sp+408h] [bp-800h] BYREF

  v2 = 4;
  v3 = 0;
  do
  {
    v4 = (unsigned __int8)a2;
    --v2;
    a2 >>= 8;
    v3 = v4 + (v3 << 8);
  }
  while ( v2 );
  result = sub_2821C(v6, a1, 180);
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 2 )
  {
    snprintf(s, 0x800u, "BENCHFILE nonce %u=0x%08x for work=%s", v3, v3, v6);
    return sub_343C4(3, s, 0);
  }
  return result;
}
