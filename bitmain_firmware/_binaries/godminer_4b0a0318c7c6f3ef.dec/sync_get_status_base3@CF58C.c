int __fastcall sync_get_status_base3(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r6
  _DWORD *v7; // r8
  int v8; // r10
  int v9; // r2
  int v10; // r7
  int v11; // r1
  char v12; // r11
  __int16 v14; // r2
  int v15; // r3
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-1028h]
  int v20[2]; // [sp+2Ch] [bp-1018h] BYREF
  unsigned __int8 v21; // [sp+34h] [bp-1010h] BYREF
  unsigned __int8 v22; // [sp+35h] [bp-100Fh]
  unsigned __int8 v23; // [sp+36h] [bp-100Eh] BYREF
  int v24; // [sp+37h] [bp-100Dh]
  unsigned __int8 v25; // [sp+3Bh] [bp-1009h]
  char v26; // [sp+3Ch] [bp-1008h]
  char v27[4096]; // [sp+40h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  mutex = (pthread_mutex_t *)(a1 + 920);
  v5 = 0;
  LOWORD(v7) = 20532;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  queue_clear(*(_DWORD *)(a1 + 884));
  v8 = 0;
  sub_145AC4(a5, 0x3E8u);
  v20[1] = 1000000 * v9;
  v20[0] = sub_145AC4(a5, 0x3E8u);
  while ( v8 < a2 )
  {
    LOWORD(v10) = -32320;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v21, 9u, v20) == 110 )
      {
        v5 = 3;
        goto LABEL_12;
      }
      V_LOCK();
      HIWORD(v10) = (unsigned int)" total chain num = %d" >> 16;
      logfmt_raw(v27, 0x1000u, 0, v10, v21, v22, v25, v24, v23);
      V_UNLOCK();
      LOWORD(v11) = 32756;
      HIWORD(v7) = (unsigned int)&g_fan_zc >> 16;
      HIWORD(v11) = (unsigned int)"n_to_hal" >> 16;
      zlog(*v7, v11, 154, "sync_get_status_base3", 21, 1553, 20, v27);
      if ( v21 != 170 || v22 != 85 )
      {
        v5 = 1;
        *a4 = v8;
        pthread_mutex_unlock(mutex);
        return v5;
      }
      v12 = v26;
      if ( (v12 & 0x1F) == BM_CRC5(&v23, 51) )
        break;
      v5 = 2;
    }
    ++v8;
    v14 = v23;
    v15 = v24;
    *(_BYTE *)(a3 + 4) = v25;
    *(_WORD *)(a3 + 6) = v14;
    *(_DWORD *)a3 = v15;
    a3 += 12;
  }
LABEL_12:
  *a4 = v8;
  pthread_mutex_unlock(mutex);
  return v5;
}
