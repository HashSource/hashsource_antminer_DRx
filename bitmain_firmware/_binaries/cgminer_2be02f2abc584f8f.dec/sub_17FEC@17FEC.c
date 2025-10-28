bool __fastcall sub_17FEC(int a1, int a2)
{
  unsigned int v4; // r5
  char s[2052]; // [sp+8h] [bp-804h] BYREF

  if ( !byte_75C09 )
    goto LABEL_10;
  if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
    goto LABEL_7;
  strcpy(s, "test_nonce");
  sub_3F1C0(7, s, 0);
  if ( byte_75C09 )
  {
    if ( byte_78D98 )
    {
LABEL_9:
      snprintf(s, 0x800u, "%s: 1 *hash_32 = 0x%08x", "test_nonce", *(_DWORD *)(a1 + 272));
      sub_3F1C0(7, s, 0);
      goto LABEL_10;
    }
LABEL_7:
    if ( !byte_75C08 && dword_734EC <= 6 )
      goto LABEL_10;
    goto LABEL_9;
  }
LABEL_10:
  sub_17EC4(a1, a2);
  if ( !byte_75C09 )
    goto LABEL_19;
  if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
    goto LABEL_17;
  snprintf(s, 0x800u, "%s: 2 *hash_32 = 0x%08x", "test_nonce", *(_DWORD *)(a1 + 272));
  sub_3F1C0(7, s, 0);
  if ( !byte_75C09 )
    goto LABEL_19;
  if ( !byte_78D98 )
  {
LABEL_17:
    if ( !byte_75C08 && dword_734EC <= 6 )
      goto LABEL_19;
  }
  snprintf(s, 0x800u, "%s opt_scrypt = %d", "test_nonce", (unsigned __int8)byte_79921);
  sub_3F1C0(7, s, 0);
LABEL_19:
  if ( byte_79921 )
    v4 = 0xFFFF;
  else
    v4 = 0;
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "%s: diff1targ = 0x%08x", "test_nonce", v4);
    sub_3F1C0(7, s, 0);
  }
  return v4 >= *(_DWORD *)(a1 + 272);
}
