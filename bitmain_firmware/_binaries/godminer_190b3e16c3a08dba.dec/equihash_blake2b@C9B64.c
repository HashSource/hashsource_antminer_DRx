int __fastcall equihash_blake2b(void *a1, char *a2, const void *a3, size_t a4, __int64 a5, unsigned __int8 a6)
{
  _BOOL4 v6; // r12
  int v7; // r12
  bool v8; // cc
  char v13[364]; // [sp+0h] [bp-16Ch] BYREF

  v6 = a5 != 0;
  if ( a2 )
    v6 = 0;
  if ( !a1 )
    v6 = 1;
  if ( v6 )
    return -1;
  v7 = a6;
  if ( a6 )
    v7 = 1;
  if ( a3 )
    v7 = 0;
  if ( v7 )
    return -1;
  v8 = a6 > 0x40u;
  if ( a6 <= 0x40u )
    v8 = a4 - 1 > 0x3F;
  if ( v8 )
    return -1;
  if ( a6 )
  {
    if ( blake2b_init_key(v13, a4, a3, a6) >= 0 )
      goto LABEL_16;
    return -1;
  }
  if ( equihash_blake2b_init(v13, a4) < 0 )
    return -1;
LABEL_16:
  equihash_blake2b_update((int)v13, a2, a5);
  equihash_blake2b_final((int)v13, a1, a4);
  return 0;
}
