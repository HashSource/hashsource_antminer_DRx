int __fastcall hs_header_sub_hash(_DWORD *a1, void *a2)
{
  unsigned __int64 *v4; // [sp+4h] [bp-178h] BYREF
  unsigned __int64 v5[16]; // [sp+8h] [bp-174h] BYREF
  _DWORD v6[60]; // [sp+88h] [bp-F4h] BYREF

  v4 = v5;
  hs_header_sub_write(a1, (int *)&v4);
  hs_blake2b_init(v6, 32);
  hs_blake2b_update((int)v6, v5, 0x80u);
  return hs_blake2b_final((int)v6, a2, 0x20u);
}
