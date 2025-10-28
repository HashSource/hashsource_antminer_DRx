int __fastcall sync_get_core_reg_rvn(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r5
  char v11; // r12
  unsigned int v12; // r0
  __int16 v13; // r0
  char v14; // r3
  char v15; // r0
  int v16; // r2
  int v17; // r9
  int v18; // r2
  int v19; // r11
  char v21; // r2
  unsigned int v22; // r3
  int v23[2]; // [sp+0h] [bp-24h] BYREF
  unsigned __int8 v24[2]; // [sp+8h] [bp-1Ch] BYREF
  __int64 v25; // [sp+Ah] [bp-1Ah] BYREF
  char v26[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v27[2]; // [sp+16h] [bp-Eh] BYREF
  int v28; // [sp+18h] [bp-Ch]
  unsigned int v29; // [sp+1Ch] [bp-8h]

  if ( !*(_BYTE *)(a1 + 264) )
    return 4;
  v25 = 0;
  v24[0] = 85;
  v11 = *(_BYTE *)(a2 + 9);
  v12 = *(_WORD *)(a2 + 10) & 0xFFF;
  LOBYTE(v25) = (16 * (*(_BYTE *)(a2 + 8) & 1)) & 0x1A | 0x45;
  BYTE2(v25) = v11;
  v24[1] = -86;
  BYTE1(v25) = 8;
  v13 = reverse_byte_order_16(v12);
  v14 = *(_BYTE *)(a2 + 12);
  *(_WORD *)((char *)&v25 + 3) = v13;
  BYTE6(v25) = 63;
  BYTE5(v25) = v14;
  v15 = BM_CRC5(&v25, 56);
  v16 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v25) = HIBYTE(v25) & 0xE0 | v15 & 0x1F;
  if ( !v16 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v7 = 0;
  v17 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 928));
  queue_clear(*(_DWORD *)(a1 + 892));
  send_command_packet(a1, v24, 0xAu);
  sub_146F74(a6, 0x3E8u);
  v23[1] = (_DWORD)&loc_F4240 * v18;
  v23[0] = sub_146F74(a6, 0x3E8u);
  while ( v17 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 892), v26, 0xCu, v23) == 110 )
      {
        v7 = 3;
        goto LABEL_15;
      }
      if ( (unsigned __int8)v26[0] != 170 || v26[1] != 85 || v27[0] != 10 || (v29 & 0x40000000) != 0 )
      {
        v7 = 1;
        *a5 = v17;
        pthread_mutex_unlock((pthread_mutex_t *)(a1 + 928));
        return v7;
      }
      v19 = HIBYTE(v29) & 0x1F;
      if ( v19 == BM_CRC5(v27, 75) )
        break;
      v7 = 2;
    }
    ++v17;
    v21 = v27[1];
    *(_BYTE *)(a4 + 4) = v29;
    v22 = v29;
    *(_BYTE *)(a4 + 8) = v21;
    *(_WORD *)(a4 + 6) = v22 >> 8;
    *(_DWORD *)a4 = v28;
    a4 += 12;
  }
LABEL_15:
  *a5 = v17;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 928));
  return v7;
}
