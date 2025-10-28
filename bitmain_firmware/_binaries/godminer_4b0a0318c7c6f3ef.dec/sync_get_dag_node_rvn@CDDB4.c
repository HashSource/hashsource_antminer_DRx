int __fastcall sync_get_dag_node_rvn(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r6
  pthread_mutex_t *v6; // r11
  _DWORD *v8; // r8
  int v9; // r10
  int v10; // r2
  int v11; // r7
  int v12; // r1
  unsigned int v13; // r0
  unsigned int v15; // r0
  char *v16; // r2
  int v17; // r1
  int v18; // r0
  int v19; // lr
  int v20; // r12
  int v21; // r0
  int v24; // [sp+1Ch] [bp-1120h]
  int v25[2]; // [sp+24h] [bp-1118h] BYREF
  unsigned __int8 v26; // [sp+2Ch] [bp-1110h] BYREF
  unsigned __int8 v27; // [sp+2Dh] [bp-110Fh]
  unsigned __int8 v28[2]; // [sp+2Eh] [bp-110Eh] BYREF
  unsigned __int8 v29; // [sp+30h] [bp-110Ch]
  unsigned int v30; // [sp+31h] [bp-110Bh]
  char v31; // [sp+35h] [bp-1107h] BYREF
  _WORD v32[97]; // [sp+75h] [bp-10C7h] BYREF
  char var1004[4104]; // [sp+138h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v6 = (pthread_mutex_t *)(a1 + 920);
  v24 = a3 + 8;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  v5 = 0;
  queue_clear(*(_DWORD *)(a1 + 884));
  LOWORD(v8) = 20532;
  sub_145AC4(a5, 0x3E8u);
  v9 = 0;
  v25[1] = (_DWORD)&loc_F4240 * v10;
  v25[0] = sub_145AC4(a5, 0x3E8u);
  while ( v9 < a2 )
  {
    LOWORD(v11) = 32716;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v26, 0x10Bu, v25) == 110 )
      {
        v5 = 3;
        goto LABEL_12;
      }
      V_LOCK();
      HIWORD(v11) = (unsigned int)"_chain" >> 16;
      logfmt_raw(var1004, 0x1000u, 0, v11, v26, v27, v29);
      V_UNLOCK();
      LOWORD(v12) = 32756;
      HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
      HIWORD(v12) = (unsigned int)"n_to_hal" >> 16;
      zlog(*v8, v12, 154, "sync_get_dag_node_rvn", 21, 299, 20, var1004);
      if ( v26 != 170 || v27 != 85 )
      {
        v5 = 1;
        *a4 = v9;
        pthread_mutex_unlock(v6);
        return v5;
      }
      v13 = BM_CRC16(v28, 263);
      if ( v32[96] == (unsigned __int16)__rev16(v13) )
        break;
      v5 = 2;
    }
    *(_BYTE *)(v24 - 6) = v29;
    v15 = reverse_byte_order_32(v30);
    v16 = &v31;
    v17 = v24;
    *(_DWORD *)(v24 - 4) = v15;
    do
    {
      v18 = *(_DWORD *)v16;
      v16 += 16;
      v19 = *((_DWORD *)v16 - 3);
      v17 += 16;
      v20 = *((_DWORD *)v16 - 2);
      *(_DWORD *)(v17 - 16) = v18;
      v21 = *((_DWORD *)v16 - 1);
      *(_DWORD *)(v17 - 12) = v19;
      *(_DWORD *)(v17 - 8) = v20;
      *(_DWORD *)(v17 - 4) = v21;
    }
    while ( v16 != (char *)v32 );
    ++v9;
    v24 += 268;
  }
LABEL_12:
  *a4 = v9;
  pthread_mutex_unlock(v6);
  return v5;
}
