int __fastcall sync_get_status_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r6
  int v7; // r10
  int v8; // r2
  int v9; // r11
  __int16 v11; // r2
  int v12; // r3
  pthread_mutex_t *mutex; // [sp+1Ch] [bp-1028h]
  int v17[2]; // [sp+2Ch] [bp-1018h] BYREF
  unsigned __int8 v18; // [sp+34h] [bp-1010h] BYREF
  unsigned __int8 v19; // [sp+35h] [bp-100Fh]
  char v20; // [sp+36h] [bp-100Eh] BYREF
  int v21; // [sp+37h] [bp-100Dh]
  unsigned __int8 v22; // [sp+3Bh] [bp-1009h]
  unsigned __int8 v23; // [sp+3Ch] [bp-1008h]
  char v24; // [sp+3Dh] [bp-1007h]
  char v25[4096]; // [sp+40h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  mutex = (pthread_mutex_t *)(a1 + 848);
  v5 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  queue_clear(*(_DWORD *)(a1 + 824));
  v7 = 0;
  sub_12E424(a5, 0x3E8u);
  v17[1] = 1000000 * v8;
  v17[0] = sub_12E424(a5, 0x3E8u);
  while ( v7 < a2 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), (char *)&v18, 0xAu, v17) == 110 )
      {
        v5 = 3;
        goto LABEL_14;
      }
      V_LOCK();
      logfmt_raw(
        v25,
        0x1000u,
        0,
        "header:%02x%02x chip_addr:%02x, reg value:%08x, reg addr:%02x",
        v18,
        v19,
        v22,
        v21,
        v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_reg_io_base.c",
        154,
        "sync_get_status_base",
        20,
        1149,
        20,
        v25);
      if ( v18 != 170 || v19 != 85 || v20 != 8 || (v24 & 0x40) != 0 )
      {
        v5 = 1;
        *a4 = v7;
        pthread_mutex_unlock(mutex);
        return v5;
      }
      v9 = v24 & 0x1F;
      if ( v9 == BM_CRC5(&v20, 59) )
        break;
      v5 = 2;
    }
    ++v7;
    v11 = v23;
    v12 = v21;
    *(_BYTE *)(a3 + 4) = v22;
    *(_WORD *)(a3 + 6) = v11;
    *(_DWORD *)a3 = v12;
    a3 += 12;
  }
LABEL_14:
  *a4 = v7;
  pthread_mutex_unlock(mutex);
  return v5;
}
