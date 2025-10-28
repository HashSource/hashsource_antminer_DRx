int __fastcall reset_base(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  int v4; // r2
  int v5; // r12

  v2 = (*(int (**)(void))(a1 + 56))();
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[11])(*(_DWORD *)(a1 + 220));
  queue_clear(*(_DWORD *)(a1 + 816));
  v4 = *(_DWORD *)(a1 + 304);
  v5 = *(_DWORD *)(a1 + 808);
  *(_QWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 416) = 0;
  *(_DWORD *)(a1 + 488) = 0;
  memset(*(void **)(a1 + 484), 0, v5 * v4);
  return 0;
}
