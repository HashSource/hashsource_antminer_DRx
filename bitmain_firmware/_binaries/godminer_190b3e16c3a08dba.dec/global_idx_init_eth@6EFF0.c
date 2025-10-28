int __fastcall global_idx_init_eth(int a1)
{
  *(_DWORD *)(a1 + 784) = calloc(0x8901u, 1u);
  return printf("__custom_data init %p\n");
}
