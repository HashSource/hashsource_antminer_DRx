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
  int v21; // r2
  char v22; // r11
  unsigned __int8 v24; // r2
  unsigned __int8 v25; // r1
  int v26; // r3
  int v27; // [sp+14h] [bp-1038h]
  int v28; // [sp+1Ch] [bp-1030h]
  unsigned int v29; // [sp+24h] [bp-1028h]
  __int16 v30; // [sp+26h] [bp-1026h]
  int v31[2]; // [sp+28h] [bp-1024h] BYREF
  char v32[2]; // [sp+30h] [bp-101Ch] BYREF
  _BYTE v33[4]; // [sp+32h] [bp-101Ah] BYREF
  unsigned __int8 v34; // [sp+36h] [bp-1016h]
  unsigned __int8 v35; // [sp+37h] [bp-1015h]
  char v36; // [sp+38h] [bp-1014h]
  _BYTE v37[2]; // [sp+3Ch] [bp-1010h] BYREF
  int v38; // [sp+3Eh] [bp-100Eh] BYREF
  unsigned int v39; // [sp+42h] [bp-100Ah]
  char v40; // [sp+46h] [bp-1006h]
  char v41[4088]; // [sp+48h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v8 = *(_WORD *)(a2 + 10);
  v38 = 0;
  LOBYTE(v30) = v30 & 0xF0 | v8 & 0xF;
  LOWORD(v29) = 0;
  v12 = v30 & 0xF00F | (16 * *(unsigned __int8 *)(a2 + 12));
  v13 = *(_BYTE *)(a2 + 14);
  v14 = *(_BYTE *)(a2 + 8);
  BYTE2(v29) = v30 & 0xF | (16 * *(_BYTE *)(a2 + 12));
  v39 = 0;
  v15 = (16 * (v14 & 1)) | 1;
  v16 = *(_BYTE *)(a2 + 9);
  HIBYTE(v29) = HIBYTE(v12) & 0xF | ((v13 & 1) << 7);
  v37[0] = 85;
  LOBYTE(v38) = v15 & 0x1F | 0x40;
  v37[1] = -86;
  BYTE1(v38) = 9;
  BYTE2(v38) = v16;
  HIBYTE(v38) = 60;
  v40 = 0;
  v17 = reverse_byte_order_32(v29);
  v18 = *(_BYTE *)(a2 + 15);
  v39 = v17;
  v40 = 32 * (v18 & 3);
  v19 = BM_CRC5(&v38, 64);
  v20 = *(unsigned __int8 *)(a2 + 8);
  v40 = v40 & 0xE0 | v19 & 0x1F;
  if ( !v20 && !*(_BYTE *)(a2 + 14) )
    a3 = 1;
  v28 = a4;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  queue_clear(*(_DWORD *)(a1 + 824));
  v7 = 0;
  send_command_packet(a1, (int)v37, 0xBu);
  sub_12E424(a6, 0x3E8u);
  v31[1] = 1000000 * v21;
  v27 = 0;
  v31[0] = sub_12E424(a6, 0x3E8u);
  while ( a3 > v27 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v32, 9u, v31) == 110 )
      {
        v7 = 3;
        goto LABEL_16;
      }
      if ( (unsigned __int8)v32[0] != 170 || v32[1] != 85 || (v36 & 0xE0) != 0xC0 )
      {
        v7 = 1;
        goto LABEL_16;
      }
      if ( (v35 & 0x10) != 0 )
      {
        V_LOCK();
        logfmt_raw(v41, 0x1000u, 0, "core %d get parity", v34);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ltc_1489/chip_reg_io_ltc_1489.c",
          175,
          "sync_get_core_reg_ltc",
          21,
          370,
          100,
          v41);
      }
      v22 = v36;
      if ( (v22 & 0x1F) == BM_CRC5(v33, 51) )
        break;
      v7 = 2;
    }
    ++v27;
    v24 = v35;
    v25 = v34;
    v26 = (v33[0] << 16) | (((v35 >> 5) & 1) << 24) | v33[2] | (v33[1] << 8);
    *(_BYTE *)(v28 + 4) = v33[3];
    *(_DWORD *)v28 = v26;
    *(_WORD *)(v28 + 6) = v24 & 0xF;
    *(_BYTE *)(v28 + 9) = v24 >> 6;
    *(_BYTE *)(v28 + 8) = v25;
    v28 += 12;
  }
LABEL_16:
  *a5 = v27;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 848));
  return v7;
}
