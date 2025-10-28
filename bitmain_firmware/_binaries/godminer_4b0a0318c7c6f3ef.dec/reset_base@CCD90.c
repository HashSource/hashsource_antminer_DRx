int __fastcall reset_base(int a1)
{
  int v2; // r0
  int (**v3)(); // r0
  int v4; // r2
  int v5; // r12

  v2 = (*(int (**)(void))(a1 + 60))();
  v3 = dev_ctrl(v2);
  ((void (__fastcall *)(_DWORD))v3[14])(*(_DWORD *)(a1 + 248));
  queue_clear(*(_DWORD *)(a1 + 872));
  v4 = *(_DWORD *)(a1 + 352);
  v5 = *(_DWORD *)(a1 + 864);
  *(_QWORD *)(a1 + 456) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_DWORD *)(a1 + 536) = 0;
  memset(*(void **)(a1 + 532), 0, v5 * v4);
  return 0;
}
