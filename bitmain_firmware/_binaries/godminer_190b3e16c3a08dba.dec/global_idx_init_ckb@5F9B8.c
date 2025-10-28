int __fastcall global_idx_init_ckb(int a1)
{
  *(_DWORD *)(a1 + 784) = calloc(0x3E08u, 1u);
  printf("__custom_data init %p\n");
  return 0;
}
