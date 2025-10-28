int __fastcall get_fake_regio_runtime(int a1)
{
  _DWORD *v3; // r0
  int (**v4)(); // r0
  int v5; // r7
  int *v6; // r0
  int v7; // r4

  if ( dword_1B5C50[a1] )
    return dword_1B5C50[a1];
  v3 = calloc(1u, 0x4A8u);
  v3[63] = a1;
  dword_1B5C50[a1] = v3;
  v4 = dev_ctrl((int)v3);
  ((void (__fastcall *)(int))v4[1])(a1);
  v5 = dword_1B5C50[a1];
  pthread_mutex_init((pthread_mutex_t *)(v5 + 928), 0);
  pthread_mutex_init((pthread_mutex_t *)(v5 + 952), 0);
  v6 = queue_new(1, 0);
  v7 = dword_1B5C50[a1];
  *(_DWORD *)(v5 + 892) = v6;
  *(_DWORD *)(v7 + 880) = *(_DWORD *)(v7 + 892);
  *(_DWORD *)(v7 + 272) = set_chipaddr_base;
  *(_DWORD *)(v7 + 280) = set_chip_reg_base;
  *(_DWORD *)(v7 + 276) = set_inactive_base;
  *(_DWORD *)(v7 + 284) = set_core_reg_base;
  *(_DWORD *)(v7 + 300) = sync_get_chip_reg_base;
  *(_DWORD *)(v7 + 320) = sync_get_core_reg_base;
  *(_BYTE *)(v7 + 264) = 1;
  return v7;
}
