int __fastcall check_hw(int a1, int a2, char a3, char a4)
{
  _BYTE v10[32]; // [sp+14h] [bp+14h] BYREF
  _DWORD s[45]; // [sp+34h] [bp+34h] BYREF
  unsigned __int8 v12; // [sp+EBh] [bp+EBh]
  unsigned int i; // [sp+ECh] [bp+ECh]

  i = 0;
  memset(s, 0, sizeof(s));
  memcpy(s, (const void *)(a1 + 8), sizeof(s));
  s[35] = a2;
  if ( dword_336850 == 1725 )
    LOBYTE(s[36]) = a3;
  decred_hash_simple((int)v10, (char *)s);
  v12 = target_to_dcrdiff((int)v10);
  if ( v12 > 0x25u )
    return 0;
  if ( a4 )
  {
    printf("\n%s: Got a HW!\n", "check_hw");
    printf("\tdata=");
    for ( i = 0; i <= 0xB3; ++i )
      printf("%02x", *(unsigned __int8 *)(a1 + i + 8));
    printf("\treturn nonce=0x%08x, but it should be nonce=0x%08x\n", a2, *(_DWORD *)(a1 + 4));
  }
  return 1;
}
