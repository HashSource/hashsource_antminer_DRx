int __fastcall sync_get_dag_base_2282(int a1, int a2, int a3, int *a4, unsigned int a5)
{
  int v5; // r7
  _DWORD *v8; // r9
  int v9; // r11
  int v10; // r8
  int v11; // r1
  unsigned int v12; // r0
  unsigned int *v14; // r8
  unsigned int v15; // r0
  int v16; // r3
  int v17; // r1
  pthread_mutex_t *mutex; // [sp+14h] [bp-10A8h]
  int v21; // [sp+1Ch] [bp-10A0h]
  int v22[2]; // [sp+24h] [bp-1098h] BYREF
  unsigned __int8 v23; // [sp+2Ch] [bp-1090h] BYREF
  unsigned __int8 v24; // [sp+2Dh] [bp-108Fh]
  unsigned __int8 v25; // [sp+2Eh] [bp-108Eh] BYREF
  unsigned __int8 v26; // [sp+2Fh] [bp-108Dh]
  unsigned int v27; // [sp+30h] [bp-108Ch]
  _BYTE v28[128]; // [sp+34h] [bp-1088h] BYREF
  unsigned __int16 v29; // [sp+B4h] [bp-1008h]
  char var1004[4104]; // [sp+B8h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  mutex = (pthread_mutex_t *)(a1 + 920);
  v5 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  LOWORD(v8) = 20532;
  v21 = a3;
  HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
  queue_clear(*(_DWORD *)(a1 + 884));
  v9 = 0;
  v22[0] = a5 / 0x3E8;
  v22[1] = (_DWORD)&loc_F4240 * (a5 % 0x3E8);
  while ( v9 < a2 )
  {
    LOWORD(v10) = 32716;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v23, 0x8Au, v22) == 110 )
      {
        v5 = 3;
        goto LABEL_12;
      }
      V_LOCK();
      HIWORD(v10) = (unsigned int)"_chain" >> 16;
      logfmt_raw(var1004, 0x1000u, 0, v10, v23, v24, v26);
      V_UNLOCK();
      LOWORD(v11) = 32756;
      HIWORD(v11) = (unsigned int)"n_to_hal" >> 16;
      zlog(*v8, v11, 154, "sync_get_dag_base_2282", 22, 433, 20, var1004);
      if ( v23 != 170 || v24 != 85 )
      {
        v5 = 1;
        *a4 = v9;
        pthread_mutex_unlock(mutex);
        return v5;
      }
      v12 = BM_CRC16(&v25, 134);
      if ( v29 == (unsigned __int16)__rev16(v12) )
        break;
      v5 = 2;
    }
    ++v9;
    v14 = (unsigned int *)v21;
    *(_BYTE *)(v21 + 5) = v26;
    v21 += 140;
    *v14 = reverse_byte_order_32(v27);
    V_LOCK();
    v15 = reverse_byte_order_32(v27);
    LOWORD(v16) = -32412;
    HIWORD(v16) = (unsigned int)"n error!" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v16, v15);
    V_UNLOCK();
    LOWORD(v17) = 32756;
    HIWORD(v17) = (unsigned int)"n_to_hal" >> 16;
    zlog(*v8, v17, 154, "sync_get_dag_base_2282", 22, 447, 40, var1004);
    memcpy((char *)v14 + 10, v28, 0x80u);
  }
LABEL_12:
  *a4 = v9;
  pthread_mutex_unlock(mutex);
  return v5;
}
