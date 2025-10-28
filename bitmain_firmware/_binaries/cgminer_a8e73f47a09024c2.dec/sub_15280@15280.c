int __fastcall sub_15280(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  result = sub_14764(a1, (_BYTE *)(a1 + 97));
  if ( result )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(v3, 0x800u, "Stratum connection to pool %d resumed", *(_DWORD *)a1);
      sub_3F178(7, v3, 0);
    }
    return sub_15148(a1);
  }
  return result;
}
