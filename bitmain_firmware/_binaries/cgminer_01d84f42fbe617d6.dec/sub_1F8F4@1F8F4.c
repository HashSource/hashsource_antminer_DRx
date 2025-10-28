int __fastcall sub_1F8F4(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  result = sub_1822C(a1, (_BYTE *)(a1 + 97));
  if ( result )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      snprintf(v3, 0x800u, "Stratum connection to pool %d resumed", *(_DWORD *)a1);
      sub_38438(7, v3, 0);
    }
    return sub_1F7C4(a1);
  }
  return result;
}
