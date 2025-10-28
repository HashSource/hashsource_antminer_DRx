int __fastcall dhash_mining_stop_base(int a1)
{
  (*(void (**)(void))(a1 + 4))();
  *(_BYTE *)(a1 + 266) = 0;
  *(_BYTE *)(a1 + 267) = 0;
  return 0;
}
