int __fastcall sync_get_core_reg_base3(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r5
  char v10; // r1
  __int16 v12; // r3
  char v13; // r2
  char v14; // r1
  char v15; // lr
  char v16; // r0
  int v17; // r3
  int v18; // r9
  int v19; // r2
  int v20; // r11
  int v22; // r2
  int v23; // r3
  __int16 v24; // r1
  int v25; // r3
  _BYTE v26[2]; // [sp+4h] [bp-20h] BYREF
  int v27; // [sp+6h] [bp-1Eh] BYREF
  __int16 v28; // [sp+Ah] [bp-1Ah]
  int v29[2]; // [sp+Ch] [bp-18h] BYREF
  char v30[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v31[7]; // [sp+16h] [bp-Eh] BYREF
  char v32; // [sp+1Dh] [bp-7h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v27 = 0;
  v10 = *(_BYTE *)(a2 + 8);
  v28 = 0;
  v12 = *(_WORD *)(a2 + 10);
  v13 = (16 * (v10 & 1)) & 0x1A | 0x45;
  v14 = *(_BYTE *)(a2 + 12);
  v15 = *(_BYTE *)(a2 + 9);
  LOBYTE(v27) = v13;
  HIBYTE(v27) = v12;
  LOBYTE(v28) = v14;
  v26[1] = -86;
  BYTE1(v27) = 6;
  BYTE2(v27) = v15;
  v26[0] = 85;
  v16 = BM_CRC5(&v27, 40);
  v17 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v28) = HIBYTE(v28) & 0xE0 | v16 & 0x1F;
  if ( !v17 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v7 = 0;
  v18 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  queue_clear(*(_DWORD *)(a1 + 824));
  send_command_packet(a1, (int)v26, 8u);
  sub_12E424(a6, 0x3E8u);
  v29[1] = (_DWORD)&loc_F4240 * v19;
  v29[0] = sub_12E424(a6, 0x3E8u);
  while ( v18 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v30, 0xAu, v29) == 110 )
      {
        v7 = 3;
        goto LABEL_15;
      }
      if ( (unsigned __int8)v30[0] != 170 || v30[1] != 85 || v31[0] != 8 || (v32 & 0xC0) != 0x40 )
      {
        v7 = 1;
        *a5 = v18;
        pthread_mutex_unlock((pthread_mutex_t *)(a1 + 848));
        return v7;
      }
      v20 = v32 & 0x1F;
      if ( v20 == BM_CRC5(v31, 59) )
        break;
      v7 = 2;
    }
    ++v18;
    v22 = v31[4];
    v23 = (v31[3] << 8) | (v31[2] << 16);
    v24 = v31[6];
    *(_BYTE *)(a4 + 4) = v31[5];
    v25 = v23 | v22;
    LOBYTE(v22) = v31[1];
    *(_WORD *)(a4 + 6) = v24;
    *(_BYTE *)(a4 + 8) = v22;
    *(_DWORD *)a4 = v25;
    a4 += 12;
  }
LABEL_15:
  *a5 = v18;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 848));
  return v7;
}
