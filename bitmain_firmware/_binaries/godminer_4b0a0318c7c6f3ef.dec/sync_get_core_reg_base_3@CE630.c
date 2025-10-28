int __fastcall sync_get_core_reg_base_3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r6
  char v11; // r0
  __int16 v12; // lr
  char v13; // r12
  char v14; // r0
  int v15; // r2
  _DWORD *v16; // r8
  int v17; // r2
  int v18; // r7
  int v19; // r1
  int v20; // r11
  __int16 v22; // r1
  int v23; // r3
  char v24; // r2
  int v25; // [sp+24h] [bp-1030h]
  int v26; // [sp+2Ch] [bp-1028h]
  unsigned __int8 v27[2]; // [sp+34h] [bp-1020h] BYREF
  int v28; // [sp+36h] [bp-101Eh] BYREF
  char v29; // [sp+3Ah] [bp-101Ah]
  char v30; // [sp+3Bh] [bp-1019h]
  int v31[2]; // [sp+3Ch] [bp-1018h] BYREF
  unsigned __int8 v32; // [sp+44h] [bp-1010h] BYREF
  unsigned __int8 v33; // [sp+45h] [bp-100Fh]
  char v34; // [sp+46h] [bp-100Eh] BYREF
  unsigned __int8 v35; // [sp+47h] [bp-100Dh]
  unsigned __int8 v36; // [sp+48h] [bp-100Ch]
  unsigned __int8 v37; // [sp+49h] [bp-100Bh]
  unsigned __int8 v38; // [sp+4Ah] [bp-100Ah]
  unsigned __int8 v39; // [sp+4Bh] [bp-1009h]
  char v40; // [sp+4Ch] [bp-1008h]
  char v41[4080]; // [sp+50h] [bp-1004h] BYREF

  if ( !*(_BYTE *)(a1 + 260) )
    return 4;
  v28 = 0;
  v11 = *(_BYTE *)(a2 + 8);
  v27[0] = 85;
  v27[1] = -86;
  v12 = *(_WORD *)(a2 + 10);
  v13 = *(_BYTE *)(a2 + 12);
  v30 = 0;
  v28 = (16 * (v11 & 1)) & 0x1A | 0x45;
  BYTE1(v28) = 6;
  HIBYTE(v28) = v12;
  v29 = v13;
  v14 = BM_CRC5(&v28, 40);
  v15 = *(unsigned __int8 *)(a2 + 8);
  v30 = v30 & 0xE0 | v14 & 0x1F;
  if ( !v15 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v26 = a4;
  LOWORD(v16) = 20532;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  queue_clear(*(_DWORD *)(a1 + 884));
  v7 = 0;
  send_command_packet(a1, v27, 8u);
  sub_145AC4(a6, 0x3E8u);
  v31[1] = 1000000 * v17;
  v25 = 0;
  v31[0] = sub_145AC4(a6, 0x3E8u);
  while ( v25 < a3 )
  {
    LOWORD(v18) = -32392;
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), (char *)&v32, 9u, v31) == 110 )
      {
        v7 = 3;
        goto LABEL_14;
      }
      V_LOCK();
      HIWORD(v18) = (unsigned int)"fset %d, chain %d, pic firmware verion = 0x%02x" >> 16;
      logfmt_raw(v41, 0x1000u, 0, v18, v32, v33, v38, v39, v35, v36, v37);
      V_UNLOCK();
      LOWORD(v19) = 32756;
      HIWORD(v16) = (unsigned int)&g_fan_zc >> 16;
      HIWORD(v19) = (unsigned int)"n_to_hal" >> 16;
      zlog(*v16, v19, 154, "sync_get_core_reg_base_3", 24, 785, 20, v41);
      if ( v32 != 170 || v33 != 85 || (v40 & 0x40) == 0 )
      {
        v7 = 1;
        goto LABEL_14;
      }
      v20 = v40 & 0x1F;
      if ( v20 == BM_CRC5(&v34, 51) )
        break;
      v7 = 2;
    }
    ++v25;
    v22 = v39;
    v23 = (v36 << 16) | (v37 << 24) | v35;
    v24 = v34;
    *(_BYTE *)(v26 + 4) = v38;
    *(_WORD *)(v26 + 6) = v22;
    *(_BYTE *)(v26 + 8) = v24;
    *(_DWORD *)v26 = v23;
    v26 += 12;
  }
LABEL_14:
  *a5 = v25;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 920));
  return v7;
}
