int __fastcall sub_E2CBC(void *src, int a2, void *a3, unsigned __int8 a4)
{
  int srca; // [sp+4h] [bp-170h] BYREF
  _BYTE dest[364]; // [sp+8h] [bp-16Ch] BYREF

  srca = a2;
  memcpy(dest, src, 0x168u);
  equihash_blake2b_update((int)dest, (char *)&srca, 4);
  return equihash_blake2b_final((int)dest, a3, a4);
}
