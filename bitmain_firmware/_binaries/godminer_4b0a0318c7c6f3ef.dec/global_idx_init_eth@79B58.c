int __fastcall global_idx_init_eth(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0x8901u, 1u);
  LOWORD(v3) = -23992;
  *(_DWORD *)(a1 + 840) = v2;
  HIWORD(v3) = (unsigned int)"/backend_ckb_2042.c" >> 16;
  return printf(v3);
}
