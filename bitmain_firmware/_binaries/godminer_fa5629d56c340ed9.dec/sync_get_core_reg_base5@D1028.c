int __fastcall sync_get_core_reg_base5(int a1, int a2, int a3, int *a4, int *a5, unsigned __int64 a6)
{
  int v7; // r6
  char v10; // r12
  char v12; // r1
  unsigned int v13; // r0
  __int16 v14; // r0
  char v15; // r3
  char v16; // r2
  _BYTE *v17; // r11
  char v18; // r0
  int v19; // r7
  int v20; // r2
  char v21; // r10
  int v23; // r0
  int v24; // [sp+0h] [bp-104Ch]
  int *v25; // [sp+1Ch] [bp-1030h]
  int v26[2]; // [sp+28h] [bp-1024h] BYREF
  unsigned __int8 v27[2]; // [sp+30h] [bp-101Ch] BYREF
  __int64 v28; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v29; // [sp+3Ch] [bp-1010h] BYREF
  unsigned __int8 v30; // [sp+3Dh] [bp-100Fh]
  _BYTE v31[2]; // [sp+3Eh] [bp-100Eh] BYREF
  int v32; // [sp+40h] [bp-100Ch]
  unsigned int v33; // [sp+44h] [bp-1008h]
  char v34[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 264) )
    return 4;
  LODWORD(v28) = 0;
  v10 = *(_BYTE *)(a2 + 8);
  v27[0] = 85;
  v27[1] = -86;
  v12 = *(_BYTE *)(a2 + 9);
  v13 = *(unsigned __int16 *)(a2 + 10);
  BYTE1(v28) = 8;
  LOBYTE(v28) = (16 * (v10 & 1)) & 0x1A | 0x45;
  HIDWORD(v28) = 0;
  BYTE2(v28) = v12;
  v14 = reverse_byte_order_16(v13);
  v15 = *(_BYTE *)(a2 + 13);
  v16 = *(_BYTE *)(a2 + 12);
  *(_WORD *)((char *)&v28 + 3) = v14;
  BYTE6(v28) = v15;
  BYTE5(v28) = v16;
  v17 = calloc(7u, 1u);
  memcpy(v17, &v28, 7u);
  v18 = BM_CRC5(v17, 56);
  HIBYTE(v28) = HIBYTE(v28) & 0xE0 | v18 & 0x1F;
  free(v17);
  if ( !*(_BYTE *)(a2 + 8) && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v25 = a4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 928));
  v7 = 0;
  queue_clear(*(_DWORD *)(a1 + 892));
  send_command_packet(a1, v27, 0xAu);
  v19 = 0;
  sub_146F74(a6, 0x3E8u);
  v26[1] = (_DWORD)&loc_F4240 * v20;
  v26[0] = sub_146F74(a6, 0x3E8u);
  while ( v19 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 892), (char *)&v29, 0xCu, v26) == 110 )
      {
        v7 = 3;
        goto LABEL_13;
      }
      if ( v29 != 170 || v30 != 85 )
      {
        V_LOCK();
        v7 = 1;
        logfmt_raw(
          v34,
          0x1000u,
          0,
          "header[0] %02x, header[1] %02x, length %02x, reg_value %08x, chip_addr %02x, reg_addr %02x",
          v29,
          v30,
          v31[0],
          v32,
          (unsigned __int8)v33,
          *(unsigned __int16 *)((char *)&v33 + 1));
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_reg_io_base.c",
          154,
          "sync_get_core_reg_base5",
          23,
          1910,
          20,
          v34);
        goto LABEL_13;
      }
      v21 = HIBYTE(v33);
      if ( (v21 & 0x1F) == BM_CRC5(v31, 75) )
        break;
      v7 = 2;
    }
    V_LOCK();
    logfmt_raw(
      v34,
      0x1000u,
      0,
      "header[0] %02x, header[1] %02x, length %02x, reg_value %08x, chip_addr %02x, reg_addr %02x",
      v29,
      v30,
      v31[0],
      v32,
      (unsigned __int8)v33,
      *(unsigned __int16 *)((char *)&v33 + 1));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_core_reg_base5",
      23,
      1917,
      20,
      v34);
    *((_BYTE *)v25 + 4) = v33;
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "ret_array[%d].chip_addr %02x", v19, *((unsigned __int8 *)v25 + 4));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_core_reg_base5",
      23,
      1919,
      20,
      v34);
    *((_WORD *)v25 + 3) = v33 >> 8;
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "ret_array[%d].reg_addr %02x", v19, *((unsigned __int16 *)v25 + 3));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_core_reg_base5",
      23,
      1921,
      20,
      v34);
    *((_BYTE *)v25 + 8) = v31[1];
    V_LOCK();
    logfmt_raw(v34, 0x1000u, 0, "ret_array[%d].core_id %02x", v19, *((unsigned __int8 *)v25 + 8));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_core_reg_base5",
      23,
      1923,
      20,
      v34);
    *v25 = v32;
    V_LOCK();
    v23 = *v25;
    v24 = v19++;
    v25 += 3;
    logfmt_raw(v34, 0x1000u, 0, "ret_array[%d].reg_data %08x", v24, v23);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_reg_io_base.c",
      154,
      "sync_get_core_reg_base5",
      23,
      1925,
      20,
      v34);
  }
LABEL_13:
  *a5 = v19;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 928));
  return v7;
}
