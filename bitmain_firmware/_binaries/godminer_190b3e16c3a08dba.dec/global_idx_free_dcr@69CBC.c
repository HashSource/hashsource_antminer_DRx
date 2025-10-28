int __fastcall global_idx_free_dcr(int a1)
{
  free(*(void **)(a1 + 784));
  return 0;
}
