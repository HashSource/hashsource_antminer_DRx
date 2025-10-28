int __fastcall sync_get_core_reg_base2(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
{
  int v7; // r5
  char v10; // r1
  unsigned int v12; // r0
  _BYTE *v13; // r10
  char v14; // r0
  int v15; // r9
  int v16; // r2
  char v17; // r11
  char v19; // r2
  unsigned int v20; // r3
  int v21[2]; // [sp+0h] [bp-24h] BYREF
  unsigned __int8 v22[2]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD src[2]; // [sp+Ah] [bp-1Ah] BYREF
  char v24[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v25[2]; // [sp+16h] [bp-Eh] BYREF
  _BYTE v26[7]; // [sp+18h] [bp-Ch]
  char v27; // [sp+1Fh] [bp-5h]

  if ( !*(_BYTE *)(a1 + 264) )
    return 4;
  memset(src, 0, 7);
  v10 = *(_BYTE *)(a2 + 8);
  v22[0] = 85;
  v12 = *(unsigned __int16 *)(a2 + 10);
  src[0] = (16 * (v10 & 1)) & 0x1A | 0x45;
  v22[1] = -86;
  BYTE1(src[0]) = 7;
  LOWORD(src[1]) = reverse_byte_order_16(v12);
  v13 = calloc(8u, 1u);
  memcpy(v13, src, 6u);
  v14 = BM_CRC5(v13, 64);
  BYTE2(src[1]) = BYTE2(src[1]) & 0xE0 | v14 & 0x1F;
  free(v13);
  if ( !*(_BYTE *)(a2 + 8) && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v7 = 0;
  v15 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 928));
  queue_clear(*(_DWORD *)(a1 + 892));
  send_command_packet(a1, v22, 9u);
  sub_146F74(a6, 0x3E8u);
  v21[1] = (_DWORD)&loc_F4240 * v16;
  v21[0] = sub_146F74(a6, 0x3E8u);
  while ( v15 < a3 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 892), v24, 0xCu, v21) == 110 )
      {
        v7 = 3;
        goto LABEL_14;
      }
      if ( (unsigned __int8)v24[0] != 170 || v24[1] != 85 || (v25[0] & 0xEF) != 1 )
      {
        v7 = 1;
        *a5 = v15;
        pthread_mutex_unlock((pthread_mutex_t *)(a1 + 928));
        return v7;
      }
      v17 = v27;
      if ( (v17 & 0x1F) == BM_CRC5(v25, 72) )
        break;
      v7 = 2;
    }
    ++v15;
    v19 = v26[0];
    *(_BYTE *)(a4 + 4) = v25[1];
    v20 = *(_DWORD *)v26;
    *(_BYTE *)(a4 + 8) = v19;
    *(_WORD *)(a4 + 6) = v20 >> 8;
    *(_DWORD *)a4 = *(_DWORD *)&v26[3];
    a4 += 12;
  }
LABEL_14:
  *a5 = v15;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 928));
  return v7;
}
