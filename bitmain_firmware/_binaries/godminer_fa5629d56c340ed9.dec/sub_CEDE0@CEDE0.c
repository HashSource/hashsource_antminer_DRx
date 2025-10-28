int __fastcall sub_CEDE0(int a1, int a2, int *a3, int *a4, unsigned __int64 a5)
{
  pthread_mutex_t *v5; // r8
  int v8; // r5
  int v9; // r6
  int v10; // r2
  char v11; // r10
  int v13; // t1
  int v16[2]; // [sp+24h] [bp-1018h] BYREF
  unsigned __int8 v17; // [sp+2Ch] [bp-1010h] BYREF
  unsigned __int8 v18; // [sp+2Dh] [bp-100Fh]
  unsigned __int8 v19; // [sp+2Eh] [bp-100Eh] BYREF
  int v20; // [sp+2Fh] [bp-100Dh]
  unsigned __int8 v21; // [sp+33h] [bp-1009h]
  unsigned __int8 v22; // [sp+34h] [bp-1008h]
  char v23; // [sp+35h] [bp-1007h]
  char var1004[4104]; // [sp+38h] [bp-1004h] BYREF

  v5 = (pthread_mutex_t *)(a1 + 928);
  v8 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 928));
  queue_clear(*(_DWORD *)(a1 + 892));
  sub_146F74(a5, 0x3E8u);
  v9 = 0;
  v16[1] = (_DWORD)&loc_F4240 * v10;
  v16[0] = sub_146F74(a5, 0x3E8u);
  while ( a2 > v9 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 892), (char *)&v17, 0xAu, v16) == 110 )
      {
        V_LOCK();
        v8 = 3;
        logfmt_raw(var1004, 0x1000u, 0, "queue_dequeue end for timeout");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_reg_io_base.c",
          154,
          "sync_get_status_base5",
          21,
          1781,
          40,
          var1004);
        goto LABEL_10;
      }
      if ( v17 != 170 || v18 != 85 )
      {
        v8 = 1;
        goto LABEL_10;
      }
      v11 = v23;
      if ( (v11 & 0x1F) == BM_CRC5(&v19, 59) )
        break;
      v8 = 2;
    }
    V_LOCK();
    logfmt_raw(
      var1004,
      0x1000u,
      0,
      "header[0] %02x, header[1] %02x, length %02x, reg_value %08x, chip_addr %02x, reg_addr %02x",
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_status_base5",
      21,
      1770,
      20,
      var1004);
    *((_BYTE *)a3 + 4) = v21;
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "ret_array[%d].chip_addr %02x", v9, *((unsigned __int8 *)a3 + 4));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_status_base5",
      21,
      1772,
      20,
      var1004);
    *((_WORD *)a3 + 3) = v22;
    V_LOCK();
    logfmt_raw(var1004, 0x1000u, 0, "ret_array[%d].reg_addr %04x", v9, *((unsigned __int16 *)a3 + 3));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_status_base5",
      21,
      1774,
      20,
      var1004);
    *a3 = v20;
    V_LOCK();
    v13 = *a3;
    a3 += 3;
    logfmt_raw(var1004, 0x1000u, 0, "ret_array[%d].reg_data %08x", v9, v13);
    V_UNLOCK();
    ++v9;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_status_base5",
      21,
      1776,
      20,
      var1004);
  }
LABEL_10:
  *a4 = v9;
  pthread_mutex_unlock(v5);
  return v8;
}
