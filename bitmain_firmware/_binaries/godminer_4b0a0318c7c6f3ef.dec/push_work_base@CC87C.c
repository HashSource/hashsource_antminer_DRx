int __fastcall push_work_base(int a1, int a2)
{
  pthread_mutex_t *v4; // r7
  unsigned __int8 *v5; // r5
  unsigned int v6; // r0
  int (**v7)(); // r0
  int (**v8)(); // r0
  int v9; // r6
  _DWORD *v11; // r3
  int v12; // r1
  unsigned int v13; // [sp+14h] [bp-101Ch] BYREF
  char v14[4120]; // [sp+18h] [bp-1018h] BYREF

  if ( !*(_BYTE *)(a1 + 265) && !*(_BYTE *)(a1 + 264) )
    return 13;
  v4 = (pthread_mutex_t *)(a1 + 968);
  v5 = (unsigned __int8 *)calloc(1u, *(_DWORD *)(a1 + 856));
  v13 = 0;
  (*(void (__fastcall **)(int, int, unsigned __int8 *, unsigned int *))(a1 + 68))(a1, a2, v5, &v13);
  v6 = pthread_mutex_lock(v4);
  do
  {
    v7 = dev_ctrl(v6);
    v6 = ((int (__fastcall *)(_DWORD))v7[22])(*(_DWORD *)(a1 + 248));
  }
  while ( v6 < v13 );
  v8 = dev_ctrl(v6);
  v9 = ((int (__fastcall *)(_DWORD, unsigned __int8 *, unsigned int))v8[16])(*(_DWORD *)(a1 + 248), v5, v13);
  pthread_mutex_unlock(v4);
  check_and_print_uart_debug_log(a1 + 1112, v13, v5, *(_DWORD *)(a1 + 256), 1);
  if ( v9 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v14, 0x1000u, 0, "device %d push work failed,errcode %d", *(_DWORD *)(a1 + 248), v9);
    V_UNLOCK();
    LOWORD(v11) = 20532;
    HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v12) = 31772;
    HIWORD(v12) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
    zlog(*v11, v12, 150, "push_work_base", 14, 551, 100, v14);
  }
  else
  {
    ++*(_QWORD *)(a1 + 456);
  }
  free(v5);
  return 0;
}
