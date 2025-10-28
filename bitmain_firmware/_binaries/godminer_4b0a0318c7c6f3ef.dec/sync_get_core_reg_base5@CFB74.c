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
  int v19; // r11
  int v20; // r7
  int v21; // r2
  char v22; // r10
  int v24; // r3
  _DWORD *v25; // r3
  int v26; // r1
  _DWORD *v27; // r9
  int v28; // r1
  int v29; // r1
  int v30; // r1
  int v31; // r1
  int v32; // r0
  int v33; // r1
  int v34; // [sp+0h] [bp-104Ch]
  int *v35; // [sp+1Ch] [bp-1030h]
  int v36[2]; // [sp+28h] [bp-1024h] BYREF
  unsigned __int8 v37[2]; // [sp+30h] [bp-101Ch] BYREF
  __int64 v38; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v39; // [sp+3Ch] [bp-1010h] BYREF
  unsigned __int8 v40; // [sp+3Dh] [bp-100Fh]
  _BYTE v41[2]; // [sp+3Eh] [bp-100Eh] BYREF
  int v42; // [sp+40h] [bp-100Ch]
  unsigned int v43; // [sp+44h] [bp-1008h]
  char v44[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  LODWORD(v38) = 0;
  v10 = *(_BYTE *)(a2 + 8);
  v37[0] = 85;
  v37[1] = -86;
  v12 = *(_BYTE *)(a2 + 9);
  v13 = *(unsigned __int16 *)(a2 + 10);
  BYTE1(v38) = 8;
  LOBYTE(v38) = (16 * (v10 & 1)) & 0x1A | 0x45;
  HIDWORD(v38) = 0;
  BYTE2(v38) = v12;
  v14 = reverse_byte_order_16(v13);
  v15 = *(_BYTE *)(a2 + 13);
  v16 = *(_BYTE *)(a2 + 12);
  *(_WORD *)((char *)&v38 + 3) = v14;
  BYTE6(v38) = v15;
  BYTE5(v38) = v16;
  v17 = calloc(7u, 1u);
  memcpy(v17, &v38, 7u);
  v18 = BM_CRC5(v17, 56);
  HIBYTE(v38) = HIBYTE(v38) & 0xE0 | v18 & 0x1F;
  free(v17);
  if ( !*(_BYTE *)(a2 + 8) && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v35 = a4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  v7 = 0;
  queue_clear(*(_DWORD *)(a1 + 884));
  LOWORD(v19) = -32624;
  send_command_packet(a1, v37, 0xAu);
  v20 = 0;
  sub_145AC4(a6, 0x3E8u);
  v36[1] = (_DWORD)&loc_F4240 * v21;
  v36[0] = sub_145AC4(a6, 0x3E8u);
  while ( v20 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v39, 0xCu, v36) == 110 )
      {
        v7 = 3;
        goto LABEL_13;
      }
      if ( v39 != 170 || v40 != 85 )
      {
        V_LOCK();
        LOWORD(v24) = -32624;
        HIWORD(v24) = (unsigned int)"fs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
        v7 = 1;
        logfmt_raw(
          v44,
          0x1000u,
          0,
          v24,
          v39,
          v40,
          v41[0],
          v42,
          (unsigned __int8)v43,
          *(unsigned __int16 *)((char *)&v43 + 1));
        V_UNLOCK();
        LOWORD(v25) = 20532;
        HIWORD(v25) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v26) = 32756;
        HIWORD(v26) = (unsigned int)"n_to_hal" >> 16;
        zlog(*v25, v26, 154, "sync_get_core_reg_base5", 23, 1907, 20, v44);
        goto LABEL_13;
      }
      v22 = HIBYTE(v43);
      if ( (v22 & 0x1F) == BM_CRC5(v41, 75) )
        break;
      v7 = 2;
    }
    V_LOCK();
    LOWORD(v27) = 20532;
    HIWORD(v27) = (unsigned int)&g_fan_zc >> 16;
    HIWORD(v19) = (unsigned int)"fs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/platform_device_hal.c" >> 16;
    logfmt_raw(
      v44,
      0x1000u,
      0,
      v19,
      v39,
      v40,
      v41[0],
      v42,
      (unsigned __int8)v43,
      *(unsigned __int16 *)((char *)&v43 + 1));
    V_UNLOCK();
    LOWORD(v28) = 32756;
    HIWORD(v28) = (unsigned int)"n_to_hal" >> 16;
    zlog(*v27, v28, 154, "sync_get_core_reg_base5", 23, 1914, 20, v44);
    *((_BYTE *)v35 + 4) = v43;
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, "ret_array[%d].chip_addr %02x", v20, *((unsigned __int8 *)v35 + 4));
    V_UNLOCK();
    LOWORD(v29) = 32756;
    HIWORD(v29) = (unsigned int)"n_to_hal" >> 16;
    zlog(*v27, v29, 154, "sync_get_core_reg_base5", 23, 1916, 20, v44);
    *((_WORD *)v35 + 3) = v43 >> 8;
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, "ret_array[%d].reg_addr %02x", v20, *((unsigned __int16 *)v35 + 3));
    V_UNLOCK();
    LOWORD(v30) = 32756;
    HIWORD(v30) = (unsigned int)"n_to_hal" >> 16;
    zlog(*v27, v30, 154, "sync_get_core_reg_base5", 23, 1918, 20, v44);
    *((_BYTE *)v35 + 8) = v41[1];
    V_LOCK();
    logfmt_raw(v44, 0x1000u, 0, "ret_array[%d].core_id %02x", v20, *((unsigned __int8 *)v35 + 8));
    V_UNLOCK();
    LOWORD(v31) = 32756;
    HIWORD(v31) = (unsigned int)"n_to_hal" >> 16;
    zlog(*v27, v31, 154, "sync_get_core_reg_base5", 23, 1920, 20, v44);
    *v35 = v42;
    V_LOCK();
    v32 = *v35;
    v34 = v20++;
    v35 += 3;
    logfmt_raw(v44, 0x1000u, 0, "ret_array[%d].reg_data %08x", v34, v32);
    V_UNLOCK();
    LOWORD(v33) = 32756;
    HIWORD(v33) = (unsigned int)"n_to_hal" >> 16;
    zlog(*v27, v33, 154, "sync_get_core_reg_base5", 23, 1922, 20, v44);
  }
LABEL_13:
  *a5 = v20;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 920));
  return v7;
}
