int __fastcall hs_blake2b(void *a1, unsigned int a2, unsigned __int64 *a3, size_t a4, const void *a5, size_t a6)
{
  size_t v6; // r12
  size_t v7; // lr
  bool v9; // cc
  _DWORD v14[61]; // [sp+0h] [bp-F4h] BYREF

  v6 = a4;
  if ( a4 )
    v6 = 1;
  if ( a3 )
    v6 = 0;
  if ( !a1 )
    v6 = 1;
  if ( v6 )
    return -1;
  v7 = a6;
  if ( a6 )
    v7 = 1;
  if ( a5 )
    v7 = 0;
  if ( v7 )
    return -1;
  v9 = a6 > 0x40;
  if ( a6 <= 0x40 )
    v9 = a2 - 1 > 0x3F;
  if ( v9 )
    return -1;
  if ( a6 )
  {
    if ( hs_blake2b_init_key(v14, a2, a5, a6) >= 0 )
      goto LABEL_18;
    return -1;
  }
  if ( hs_blake2b_init(v14, a2) < 0 )
    return -1;
LABEL_18:
  if ( a4 )
    sub_D0C38((int)v14, a3, a4);
  hs_blake2b_final((int)v14, a1, a2);
  return 0;
}
