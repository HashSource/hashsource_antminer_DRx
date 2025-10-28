int __fastcall check_and_print_uart_debug_log(int result, int a2, unsigned __int8 *a3, int a4, char a5)
{
  int v7; // r5
  pthread_mutex_t *v8; // r11
  struct timespec *v9; // r7
  struct timespec *v11; // r1
  __int64 v12; // r6
  __int64 v13; // r2
  __int64 v14; // r2
  __int64 v15; // r6
  unsigned __int8 *v16; // r8
  int v17; // r5
  int v18; // t1
  int v19; // r12
  int v20; // r0
  int v21; // r3
  int v22; // r1
  __int64 v23; // [sp+28h] [bp-1454h]
  _DWORD v24[7]; // [sp+38h] [bp-1444h] BYREF
  int v25; // [sp+54h] [bp-1428h]
  _DWORD v26[7]; // [sp+58h] [bp-1424h] BYREF
  int v27; // [sp+74h] [bp-1408h]
  char v28[1016]; // [sp+78h] [bp-1404h] BYREF
  char _478[4104]; // [sp+478h] [bp-1004h] BYREF

  if ( !a2 )
    return result;
  v7 = result;
  if ( !*(_BYTE *)(result + 40) )
    return result;
  v8 = (pthread_mutex_t *)(result + 44);
  v9 = (struct timespec *)(result + 16);
  pthread_mutex_lock((pthread_mutex_t *)(result + 44));
  clock_gettime(1, (struct timespec *)(v7 + 24));
  v11 = v9;
  v12 = 1000LL * (*(_DWORD *)(v7 + 24) - *(_DWORD *)(v7 + 16)) + (*(_DWORD *)(v7 + 28) - *(_DWORD *)(v7 + 20)) / 1000000;
  clock_gettime(1, v11);
  if ( v12 < 0 )
    v12 = 0;
  v23 = *(_QWORD *)(v7 + 8) - v12;
  v13 = v23;
  if ( v23 < 0 )
    v13 = 0;
  *(_QWORD *)(v7 + 8) = v13;
  pthread_mutex_unlock(v8);
  pthread_mutex_lock(v8);
  if ( *(_BYTE *)v7 )
  {
    v14 = *(_QWORD *)(v7 + 32);
  }
  else
  {
    v14 = *(_QWORD *)(v7 + 32);
    if ( *(__int64 *)(v7 + 8) < 1 && v14 < 1 )
    {
      *(_BYTE *)(v7 + 40) = 0;
      goto LABEL_11;
    }
  }
  *(_BYTE *)(v7 + 40) = 1;
LABEL_11:
  v15 = v14;
  if ( v14 < 1 )
    v15 = 1;
  *(_QWORD *)(v7 + 32) = v15 - 1;
  result = pthread_mutex_unlock(v8);
  if ( *(_BYTE *)(v7 + 40) )
  {
    if ( a2 > 0 )
    {
      v16 = &a3[a2];
      v17 = 0;
      do
      {
        v18 = *a3++;
        snprintf(&v28[v17], 1024 - v17, "%02x ", v18);
        v17 += 3;
      }
      while ( a3 != v16 );
    }
    V_LOCK();
    if ( a5 )
    {
      V_INT((int)v24, "chain", a4);
      logfmt_raw(
        _478,
        0x1000u,
        0,
        v25,
        v24[0],
        v24[1],
        v24[2],
        v24[3],
        v24[4],
        v24[5],
        v24[6],
        v25,
        "Tx: %s",
        v28,
        (_DWORD)v23);
      V_UNLOCK();
      v19 = 83;
      v20 = g_zc;
      LOWORD(v21) = (unsigned __int16)"check_and_print_uart_debug_log";
      LOWORD(v22) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/backend/uart_debug_logger.c";
    }
    else
    {
      V_INT((int)v26, "chain", a4);
      logfmt_raw(
        _478,
        0x1000u,
        0,
        v27,
        v26[0],
        v26[1],
        v26[2],
        v26[3],
        v26[4],
        v26[5],
        v26[6],
        v27,
        "Rx: %s",
        v28,
        (_DWORD)v23);
      V_UNLOCK();
      v19 = 85;
      v20 = g_zc;
      LOWORD(v21) = -23956;
      LOWORD(v22) = -23908;
    }
    HIWORD(v21) = (unsigned int)"check_and_print_uart_debug_log" >> 16;
    HIWORD(v22) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/backend/uart_debug_logger.c" >> 16;
    return zlog(v20, v22, 155, v21, 30, v19, 40, _478);
  }
  return result;
}
