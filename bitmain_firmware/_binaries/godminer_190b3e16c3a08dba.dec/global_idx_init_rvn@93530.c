int __fastcall global_idx_init_rvn(int a1)
{
  void *v2; // r0

  v2 = calloc(0x8901u, 1u);
  *(_DWORD *)(a1 + 784) = v2;
  return printf("__custom_data init %p\n", v2);
}
