int __fastcall send_command_packet(int a1, int a2, unsigned int a3)
{
  pthread_mutex_t *v3; // r6
  int i; // r0
  int (**v8)(); // r0
  int (**v9)(); // r0
  int v10; // r5
  char v12[4100]; // [sp+10h] [bp-1004h] BYREF

  v3 = (pthread_mutex_t *)(a1 + 872);
  for ( i = pthread_mutex_lock((pthread_mutex_t *)(a1 + 872)); ; i = usleep(0x2710u) )
  {
    v8 = dev_ctrl(i);
    if ( ((int (__fastcall *)(_DWORD))v8[16])(*(_DWORD *)(a1 + 220)) >= a3 )
      break;
  }
  v9 = dev_ctrl(10000);
  v10 = ((int (__fastcall *)(_DWORD, int, unsigned int))v9[14])(*(_DWORD *)(a1 + 220), a2, a3);
  pthread_mutex_unlock(v3);
  if ( v10 <= 0 )
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "device %d send cmd failed, errcode %d ", *(_DWORD *)(a1 + 220), v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_interface.c",
      159,
      "send_command_packet",
      19,
      44,
      100,
      v12);
  }
  return v10;
}
