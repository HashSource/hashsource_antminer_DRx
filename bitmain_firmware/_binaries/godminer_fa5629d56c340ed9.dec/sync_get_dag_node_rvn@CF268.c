int __fastcall sync_get_dag_node_rvn(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r6
  pthread_mutex_t *v6; // r11
  int v8; // r10
  int v9; // r2
  unsigned int v10; // r0
  unsigned int v12; // r0
  char *v13; // r2
  int v14; // r1
  int v15; // r0
  int v16; // lr
  int v17; // r12
  int v18; // r0
  int v21; // [sp+1Ch] [bp-1120h]
  int v22[2]; // [sp+24h] [bp-1118h] BYREF
  unsigned __int8 v23; // [sp+2Ch] [bp-1110h] BYREF
  unsigned __int8 v24; // [sp+2Dh] [bp-110Fh]
  unsigned __int8 v25[2]; // [sp+2Eh] [bp-110Eh] BYREF
  unsigned __int8 v26; // [sp+30h] [bp-110Ch]
  unsigned int v27; // [sp+31h] [bp-110Bh]
  char v28; // [sp+35h] [bp-1107h] BYREF
  _WORD v29[97]; // [sp+75h] [bp-10C7h] BYREF
  char var1004[4104]; // [sp+138h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 264) )
    return 4;
  v6 = (pthread_mutex_t *)(a1 + 928);
  v21 = a3 + 8;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 928));
  v5 = 0;
  queue_clear(*(_DWORD *)(a1 + 892));
  sub_146F74(a5, 0x3E8u);
  v8 = 0;
  v22[1] = (_DWORD)&loc_F4240 * v9;
  v22[0] = sub_146F74(a5, 0x3E8u);
  while ( v8 < a2 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 892), (char *)&v23, 0x10Bu, v22) == 110 )
      {
        v5 = 3;
        goto LABEL_12;
      }
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, "[DAG] header:%02x%02x chip_addr:%02x", v23, v24, v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_dag_node_rvn",
        21,
        302,
        20,
        var1004);
      if ( v23 != 170 || v24 != 85 )
      {
        v5 = 1;
        *a4 = v8;
        pthread_mutex_unlock(v6);
        return v5;
      }
      v10 = BM_CRC16(v25, 263);
      if ( v29[96] == (unsigned __int16)__rev16(v10) )
        break;
      v5 = 2;
    }
    *(_BYTE *)(v21 - 6) = v26;
    v12 = reverse_byte_order_32(v27);
    v13 = &v28;
    v14 = v21;
    *(_DWORD *)(v21 - 4) = v12;
    do
    {
      v15 = *(_DWORD *)v13;
      v13 += 16;
      v16 = *((_DWORD *)v13 - 3);
      v14 += 16;
      v17 = *((_DWORD *)v13 - 2);
      *(_DWORD *)(v14 - 16) = v15;
      v18 = *((_DWORD *)v13 - 1);
      *(_DWORD *)(v14 - 12) = v16;
      *(_DWORD *)(v14 - 8) = v17;
      *(_DWORD *)(v14 - 4) = v18;
    }
    while ( v13 != (char *)v29 );
    ++v8;
    v21 += 268;
  }
LABEL_12:
  *a4 = v8;
  pthread_mutex_unlock(v6);
  return v5;
}
