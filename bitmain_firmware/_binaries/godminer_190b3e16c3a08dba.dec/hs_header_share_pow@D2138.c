int __fastcall hs_header_share_pow(unsigned __int64 *a1, char *a2, void *a3)
{
  unsigned __int64 v7[4]; // [sp+0h] [bp-3D0h] BYREF
  unsigned __int64 v8[8]; // [sp+20h] [bp-3B0h] BYREF
  _DWORD v9[60]; // [sp+60h] [bp-370h] BYREF
  int v10[60]; // [sp+150h] [bp-280h] BYREF
  int v11[100]; // [sp+240h] [bp-190h] BYREF

  hs_blake2b_init(v9, 64);
  hs_blake2b_update((int)v9, a1, 0x80u);
  hs_blake2b_final((int)v9, v8, 0x40u);
  hs_sha3_256_init(v11);
  hs_sha3_update(v11, (char *)a1, 0x80u);
  hs_sha3_update(v11, a2, 8u);
  hs_sha3_final(v11, v7);
  hs_blake2b_init(v10, 32);
  hs_blake2b_update((int)v10, v8, 0x40u);
  hs_blake2b_update((int)v10, (unsigned __int64 *)a2, 0x20u);
  hs_blake2b_update((int)v10, v7, 0x20u);
  return hs_blake2b_final((int)v10, a3, 0x20u);
}
