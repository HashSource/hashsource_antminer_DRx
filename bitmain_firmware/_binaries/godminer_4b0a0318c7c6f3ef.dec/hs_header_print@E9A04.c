int __fastcall hs_header_print(_DWORD *a1, const char *a2)
{
  _BYTE v5[44]; // [sp+0h] [bp-1FCh] BYREF
  _BYTE v6[52]; // [sp+2Ch] [bp-1D0h] BYREF
  _BYTE v7[68]; // [sp+60h] [bp-19Ch] BYREF
  _BYTE v8[68]; // [sp+A4h] [bp-158h] BYREF
  _BYTE v9[68]; // [sp+E8h] [bp-114h] BYREF
  _BYTE v10[68]; // [sp+12Ch] [bp-D0h] BYREF
  _BYTE v11[68]; // [sp+170h] [bp-8Ch] BYREF
  _BYTE v12[72]; // [sp+1B4h] [bp-48h] BYREF

  hs_hex_encode((int)(a1 + 4), 20, v5);
  hs_hex_encode((int)(a1 + 9), 32, v7);
  hs_hex_encode((int)(a1 + 17), 32, v8);
  hs_hex_encode((int)(a1 + 25), 32, v9);
  hs_hex_encode((int)(a1 + 33), 24, v6);
  hs_hex_encode((int)(a1 + 39), 32, v10);
  hs_hex_encode((int)(a1 + 47), 32, v11);
  hs_hex_encode((int)(a1 + 55), 32, v12);
  printf("%sheader\n", a2);
  printf("%s  nonce=%u\n", a2, *a1);
  printf("%s  time=%u\n", a2, a1[2]);
  printf("%s  mask_hash=%s\n", a2, v9);
  printf("%s  prev_block=%s\n", a2, v7);
  printf("%s  name_root=%s\n", a2, v8);
  printf("%s  extra_nonce=%s\n", a2, v6);
  printf("%s  reserved_root=%s\n", a2, v10);
  printf("%s  witness_root=%s\n", a2, v11);
  printf("%s  merkle_root=%s\n", a2, v12);
  printf("%s  version=%u\n", a2, a1[63]);
  return printf("%s  bits=%u\n", a2, a1[64]);
}
