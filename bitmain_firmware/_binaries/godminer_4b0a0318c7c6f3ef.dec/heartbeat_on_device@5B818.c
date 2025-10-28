void __noreturn heartbeat_on_device()
{
  _DWORD *v0; // r8
  int v1; // r3
  int v2; // r11
  char *v3; // r12
  int v4; // r3
  int v5; // r1
  const char *v6; // r10
  char *all_created_runtime; // r0
  char *v8; // r5
  int i; // r4
  int v10; // r0
  int v11; // t1
  int v12; // r1
  char *s; // [sp+28h] [bp-1034h]
  int v14; // [sp+34h] [bp-1028h] BYREF
  _DWORD v15[7]; // [sp+38h] [bp-1024h] BYREF
  int v16; // [sp+54h] [bp-1008h]
  char v17[4100]; // [sp+58h] [bp-1004h] BYREF

  LOWORD(v0) = 20532;
  v14 = 0;
  HIWORD(v0) = (unsigned int)&g_fan_zc >> 16;
  V_LOCK();
  LOWORD(v1) = 27588;
  HIWORD(v1) = (unsigned int)"api thread create failed" >> 16;
  LOWORD(v2) = 27780;
  logfmt_raw(v17, 0x1000u, 0, v1);
  V_UNLOCK();
  LOWORD(v3) = 31204;
  LOWORD(v4) = 27512;
  LOWORD(v5) = 27608;
  HIWORD(v3) = (unsigned int)"iner is forbidden to start again as it is already started, will exit immediately." >> 16;
  HIWORD(v4) = (unsigned int)"r_util/check_pool.c" >> 16;
  LOWORD(v6) = 27768;
  HIWORD(v5) = (unsigned int)"iled" >> 16;
  s = v3;
  zlog(*v0, v5, 156, v4, 19, 54, 60, v17);
  while ( 1 )
  {
    do
      all_created_runtime = (char *)get_all_created_runtime(&v14);
    while ( v14 <= 0 );
    v8 = all_created_runtime - 4;
    for ( i = 0; i < v14; ++i )
    {
      v10 = dev_ctrl(all_created_runtime);
      v11 = *((_DWORD *)v8 + 1);
      v8 += 4;
      if ( !(*(int (__fastcall **)(_DWORD))(v10 + 100))(*(_DWORD *)(v11 + 248)) )
      {
        V_LOCK();
        HIWORD(v6) = (unsigned int)"ould be used to get work from." >> 16;
        V_STR(v15, s, v6);
        HIWORD(v2) = (unsigned int)" to get work from." >> 16;
        logfmt_raw(v17, 0x1000u, 0, v16, v15[0], v15[1], v15[2], v15[3], v15[4], v15[5], v15[6], v16, v2);
        V_UNLOCK();
        LOWORD(v12) = 27608;
        HIWORD(v12) = (unsigned int)"iled" >> 16;
        zlog(*v0, v12, 156, "heartbeat_on_device", 19, 62, 100, v17);
      }
      all_created_runtime = (char *)sleep(5u);
    }
  }
}
