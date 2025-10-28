int __fastcall uart_get_config(int a1, int a2, _DWORD *a3, int a4)
{
  _BOOL4 v4; // r3
  int v5; // r5
  pthread_mutex_t *v8; // r7
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v11[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a4 != 0;
  if ( a3 )
    v5 = v4;
  else
    v5 = 1;
  if ( v5 )
    return -3;
  v8 = (pthread_mutex_t *)((char *)&unk_18C1CC + 24 * a1);
  pthread_mutex_lock(v8);
  if ( !a2 )
  {
    *(_DWORD *)v11 = 0;
    fpga_read(60, v11);
    *a3 = *(_DWORD *)v11;
    MEMORY[0] = 0;
    __und(0);
  }
  snprintf(s, 0x800u, "unknown set config type = %d", a2);
  V_LOCK();
  logfmt_raw(v11, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/platform/7007/7007_uart.c",
    172,
    "uart_get_config",
    15,
    600,
    80,
    v11);
  pthread_mutex_unlock(v8);
  return -5;
}
