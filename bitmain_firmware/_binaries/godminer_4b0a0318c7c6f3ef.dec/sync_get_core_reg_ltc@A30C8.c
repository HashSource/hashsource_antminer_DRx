int __fastcall sync_get_core_reg_ltc(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r6
  __int16 v8; // r1
  __int16 v12; // r1
  char v13; // r0
  char v14; // r12
  char v15; // r2
  char v16; // r12
  unsigned int v17; // r0
  char v18; // r2
  char v19; // r0
  int v20; // r2
  _DWORD *v21; // r9
  int v22; // r2
  int v23; // r8
  int v24; // r7
  char v25; // r11
  int v26; // r1
  unsigned __int8 v28; // r2
  unsigned __int8 v29; // r1
  int v30; // r3
  int v31; // [sp+14h] [bp-1038h]
  int v32; // [sp+1Ch] [bp-1030h]
  unsigned int v33; // [sp+24h] [bp-1028h]
  __int16 v34; // [sp+26h] [bp-1026h]
  int v35[2]; // [sp+28h] [bp-1024h] BYREF
  char v36[2]; // [sp+30h] [bp-101Ch] BYREF
  _BYTE v37[4]; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v38; // [sp+36h] [bp-1016h]
  unsigned __int8 v39; // [sp+37h] [bp-1015h]
  char v40; // [sp+38h] [bp-1014h]
  unsigned __int8 v41[2]; // [sp+3Ch] [bp-1010h] BYREF
  int v42; // [sp+3Eh] [bp-100Eh] BYREF
  unsigned int v43; // [sp+42h] [bp-100Ah]
  char v44; // [sp+46h] [bp-1006h]
  char v45[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v8 = *(_WORD *)(a2 + 10);
  v42 = 0;
  LOBYTE(v34) = v34 & 0xF0 | v8 & 0xF;
  LOWORD(v33) = 0;
  v12 = v34 & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  v13 = *(_BYTE *)(a2 + 14);
  v14 = *(_BYTE *)(a2 + 8);
  BYTE2(v33) = v34 & 0xF | (16 * *(_BYTE *)(a2 + 12));
  v43 = 0;
  v15 = (16 * (v14 & 1)) | 1;
  v16 = *(_BYTE *)(a2 + 9);
  HIBYTE(v33) = HIBYTE(v12) & 0xF | ((v13 & 1) << 7);
  v41[0] = 85;
  LOBYTE(v42) = v15 & 0x1F | 0x40;
  v41[1] = -86;
  BYTE1(v42) = 9;
  BYTE2(v42) = v16;
  HIBYTE(v42) = 60;
  v44 = 0;
  v17 = reverse_byte_order_32(v33);
  v18 = *(_BYTE *)(a2 + 15);
  v43 = v17;
  v44 = 32 * (v18 & 3);
  v19 = BM_CRC5(&v42, 64);
  v20 = *(unsigned __int8 *)(a2 + 8);
  v44 = v44 & 0xE0 | v19 & 0x1F;
  if ( !v20 && !*(_BYTE *)(a2 + 14) )
    a3 = 1;
  v32 = a4;
  LOWORD(v21) = 20532;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  queue_clear(*(_DWORD *)(a1 + 884));
  v7 = 0;
  send_command_packet(a1, v41, 0xBu);
  sub_145AC4(a6, 0x3E8u);
  v35[1] = 1000000 * v22;
  v31 = 0;
  v35[0] = sub_145AC4(a6, 0x3E8u);
  while ( a3 > v31 )
  {
    LOWORD(v23) = 3520;
    LOWORD(v24) = 3476;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), v36, 9u, v35) == 110 )
      {
        v7 = 3;
        goto LABEL_16;
      }
      if ( (unsigned __int8)v36[0] != 170 || v36[1] != 85 || (v40 & 0xE0) != 0xC0 )
      {
        v7 = 1;
        goto LABEL_16;
      }
      if ( (v39 & 0x10) != 0 )
      {
        V_LOCK();
        HIWORD(v23) = (unsigned int)"%s failed, chip_all %d chip_addr %02x reg:%02x, all core" >> 16;
        logfmt_raw(v45, 0x1000u, 0, v23, v38);
        V_UNLOCK();
        LOWORD(v26) = 3540;
        HIWORD(v26) = (unsigned int)"%d chip_addr %02x reg:%02x, all core" >> 16;
        HIWORD(v21) = (unsigned int)&g_fan_zc >> 16;
        HIWORD(v24) = (unsigned int)"< %d)" >> 16;
        zlog(*v21, v26, 175, v24, 21, 370, 100, v45);
      }
      v25 = v40;
      if ( (v25 & 0x1F) == BM_CRC5(v37, 51) )
        break;
      v7 = 2;
    }
    ++v31;
    v28 = v39;
    v29 = v38;
    v30 = (v37[0] << 16) | (((v39 >> 5) & 1) << 24) | v37[2] | (v37[1] << 8);
    *(_BYTE *)(v32 + 4) = v37[3];
    *(_DWORD *)v32 = v30;
    *(_WORD *)(v32 + 6) = v28 & 0xF;
    *(_BYTE *)(v32 + 9) = v28 >> 6;
    *(_BYTE *)(v32 + 8) = v29;
    v32 += 12;
  }
LABEL_16:
  *a5 = v31;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 920));
  return v7;
}
