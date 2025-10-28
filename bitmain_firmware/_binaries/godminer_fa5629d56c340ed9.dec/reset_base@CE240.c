int __fastcall reset_base(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  int v4; // r3
  int v5; // r2

  v2 = (*(int (**)(void))(a1 + 60))();
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[14])(*(_DWORD *)(a1 + 252));
  queue_clear(*(_DWORD *)(a1 + 880));
  v4 = *(_DWORD *)(a1 + 356);
  v5 = *(_DWORD *)(a1 + 872);
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 472) = 0;
  *(_DWORD *)(a1 + 544) = 0;
  memset(*(void **)(a1 + 540), 0, v5 * v4);
  return 0;
}
