int __fastcall global_idx_init_zec_1746(int a1)
{
  void *v2; // r0

  v2 = calloc(0xADF0u, 1u);
  *(_DWORD *)(a1 + 848) = v2;
  printf("__custom_data init %p\n", v2);
  return 0;
}
