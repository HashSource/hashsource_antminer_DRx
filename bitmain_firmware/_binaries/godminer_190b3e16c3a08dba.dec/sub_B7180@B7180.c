int __fastcall sub_B7180(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  pthread_mutex_t *v5; // r11
  int v8; // r8
  int v9; // r10
  int v10; // r2
  unsigned int v11; // r0
  int *v13; // r5
  int v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v21; // [sp+1Ch] [bp-1060h]
  int v22[2]; // [sp+24h] [bp-1058h] BYREF
  unsigned __int8 v23; // [sp+2Ch] [bp-1050h] BYREF
  unsigned __int8 v24; // [sp+2Dh] [bp-104Fh]
  unsigned __int8 v25; // [sp+2Eh] [bp-104Eh] BYREF
  unsigned __int8 v26; // [sp+2Fh] [bp-104Dh]
  unsigned int v27; // [sp+30h] [bp-104Ch]
  int v28; // [sp+34h] [bp-1048h] BYREF
  unsigned __int16 v29; // [sp+74h] [bp-1008h] BYREF
  char var1004[4104]; // [sp+78h] [bp-1004h] BYREF

  v5 = (pthread_mutex_t *)(a1 + 848);
  v8 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  v21 = a3;
  queue_clear(*(_DWORD *)(a1 + 824));
  sub_12E424(a5, 0x3E8u);
  v9 = 0;
  v22[1] = (_DWORD)&loc_F4240 * v10;
  v22[0] = sub_12E424(a5, 0x3E8u);
  while ( a2 > v9 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), (char *)&v23, 0x4Au, v22) == 110 )
      {
        v8 = 3;
        goto LABEL_10;
      }
      V_LOCK();
      logfmt_raw(var1004, 0x1000u, 0, "[DAG] header:%02x%02x chip_addr:%02x", v23, v24, v26);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_dag_base",
        17,
        241,
        20,
        var1004);
      if ( v23 != 170 || v24 != 85 )
      {
        v8 = 1;
        goto LABEL_10;
      }
      v11 = BM_CRC16(&v25, 70);
      if ( v29 == (unsigned __int16)__rev16(v11) )
        break;
      v8 = 2;
    }
    v13 = &v28;
    *(_BYTE *)(v21 + 4) = v26;
    *(_DWORD *)v21 = reverse_byte_order_32(v27);
    v14 = v21 + 10;
    do
    {
      v14 += 16;
      v15 = *v13;
      v16 = v13[1];
      v17 = v13[2];
      v18 = v13[3];
      v13 += 4;
      *(_DWORD *)(v14 - 16) = v15;
      *(_DWORD *)(v14 - 12) = v16;
      *(_DWORD *)(v14 - 8) = v17;
      *(_DWORD *)(v14 - 4) = v18;
    }
    while ( v13 != (int *)&v29 );
    ++v9;
    v21 += 76;
  }
LABEL_10:
  *a4 = v9;
  pthread_mutex_unlock(v5);
  return v8;
}
