int __fastcall sub_150A0(int a1)
{
  int result; // r0
  char v3[2048]; // [sp+0h] [bp-800h] BYREF

  result = sub_14584(a1, (_BYTE *)(a1 + 97));
  if ( result )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(v3, 0x800u, "Stratum connection to pool %d resumed", *(_DWORD *)a1);
      sub_3F1C0(7, v3, 0);
    }
    return sub_14F68(a1);
  }
  return result;
}
