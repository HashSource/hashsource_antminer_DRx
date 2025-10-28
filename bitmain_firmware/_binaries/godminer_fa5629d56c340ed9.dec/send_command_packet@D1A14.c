int __fastcall send_command_packet(int a1, unsigned __int8 *a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r8
  int i; // r0
  int (**v8)(); // r0
  int (**v9)(); // r0
  int v10; // r6
  char v12[4096]; // [sp+10h] [bp-1000h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 952);
  for ( i = pthread_mutex_lock((pthread_mutex_t *)(a1 + 952)); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( ((int (__fastcall *)(_DWORD))v8[21])(*(_DWORD *)(a1 + 252)) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = ((int (__fastcall *)(_DWORD, unsigned __int8 *, unsigned int))v9[17])(*(_DWORD *)(a1 + 252), a2, a3);
  pthread_mutex_unlock(v3);
  check_and_print_uart_debug_log(a1 + 1120, a3, a2, *(_DWORD *)(a1 + 260), 1);
  if ( v10 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "device %d send cmd failed, errcode %d ", *(_DWORD *)(a1 + 252), v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_interface.c",
      159,
      "send_command_packet",
      19,
      46,
      100,
      v12);
  }
  return v10;
}
