int __fastcall global_idx_init_hns(int a1)
{
  *(_DWORD *)(a1 + 784) = calloc(0xA608u, 1u);
  printf("__custom_data init %p\n");
  return 0;
}
