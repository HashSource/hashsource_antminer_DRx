int __fastcall send_fake_work_kas(int a1)
{
  pthread_mutex_t *v1; // r5
  unsigned int v3; // r0
  int (**v4)(); // r0
  int (**v5)(); // r0
  _DWORD v7[13]; // [sp+8h] [bp-3Ch] BYREF
  __int16 v8; // [sp+3Ch] [bp-8h]

  v1 = (pthread_mutex_t *)(a1 + 968);
  v7[0] = 53520981;
  v7[1] = -1996423168;
  v7[2] = 1568885659;
  v7[3] = -2022340884;
  v7[4] = 739994112;
  v7[5] = 2023104256;
  v7[6] = 504402544;
  v7[7] = 232286627;
  v7[8] = 1496646687;
  v7[9] = 295890251;
  v7[10] = 1890778236;
  v7[11] = 60442;
  v7[12] = 0;
  v8 = 13171;
  v3 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 968));
  do
  {
    v4 = dev_ctrl(v3);
    v3 = ((int (__fastcall *)(_DWORD))v4[22])(*(_DWORD *)(a1 + 248));
  }
  while ( v3 <= 0x35 );
  v5 = dev_ctrl(v3);
  ((void (__fastcall *)(_DWORD, _DWORD *, int))v5[16])(*(_DWORD *)(a1 + 248), v7, 54);
  check_and_print_uart_debug_log(a1 + 1112, 54, (unsigned __int8 *)v7, *(_DWORD *)(a1 + 256), 1);
  return pthread_mutex_unlock(v1);
}
