int __fastcall dhash_mining_stop_base(int a1)
{
  (*(void (**)(void))(a1 + 4))();
  *(_BYTE *)(a1 + 264) = 0;
  *(_BYTE *)(a1 + 265) = 0;
  return 0;
}
