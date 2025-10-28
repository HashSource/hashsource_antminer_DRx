int __fastcall sync_get_core_reg_base(int a1, int a2, int a3, int a4, int *a5, unsigned __int64 a6)
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
  char v22; // r1
  __int16 v23; // r2
  _BYTE v24[2]; // [sp+4h] [bp-20h] BYREF
  int v25; // [sp+6h] [bp-1Eh] BYREF
  __int16 v26; // [sp+Ah] [bp-1Ah]
  int v27[2]; // [sp+Ch] [bp-18h] BYREF
  char v28[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v29[2]; // [sp+16h] [bp-Eh] BYREF
  int v30; // [sp+18h] [bp-Ch]
  char v31; // [sp+1Ch] [bp-8h]
  unsigned __int8 v32; // [sp+1Dh] [bp-7h]
  char v33; // [sp+1Eh] [bp-6h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v25 = 0;
  v10 = *(_BYTE *)(a2 + 8);
  v26 = 0;
  v12 = *(_WORD *)(a2 + 10);
  v13 = (16 * (v10 & 1)) & 0x1A | 0x45;
  v14 = *(_BYTE *)(a2 + 12);
  v15 = *(_BYTE *)(a2 + 9);
  LOBYTE(v25) = v13;
  HIBYTE(v25) = v12;
  LOBYTE(v26) = v14;
  v24[1] = -86;
  BYTE1(v25) = 6;
  BYTE2(v25) = v15;
  v24[0] = 85;
  v16 = BM_CRC5(&v25, 40);
  v17 = *(unsigned __int8 *)(a2 + 8);
  HIBYTE(v26) = HIBYTE(v26) & 0xE0 | v16 & 0x1F;
  if ( !v17 && *(unsigned __int8 *)(a2 + 12) != 255 )
    a3 = 1;
  v7 = 0;
  v18 = 0;
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  queue_clear(*(_DWORD *)(a1 + 824));
  send_command_packet(a1, (int)v24, 8u);
  sub_12E424(a6, 0x3E8u);
  v27[1] = (_DWORD)&loc_F4240 * v19;
  v27[0] = sub_12E424(a6, 0x3E8u);
  while ( a3 > v18 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v28, 0xBu, v27) == 110 )
      {
        v7 = 3;
        goto LABEL_15;
      }
      if ( (unsigned __int8)v28[0] != 170 || v28[1] != 85 || v29[0] != 9 || (v33 & 0x40) == 0 )
      {
        v7 = 1;
        *a5 = v18;
        pthread_mutex_unlock((pthread_mutex_t *)(a1 + 848));
        return v7;
      }
      v20 = v33 & 0x1F;
      if ( v20 == BM_CRC5(v29, 67) )
        break;
      v7 = 2;
    }
    ++v18;
    v22 = v31;
    v23 = v32;
    *(_BYTE *)(a4 + 8) = v29[1];
    *(_BYTE *)(a4 + 4) = v22;
    *(_WORD *)(a4 + 6) = v23;
    *(_DWORD *)a4 = v30;
    a4 += 12;
  }
LABEL_15:
  *a5 = v18;
  pthread_mutex_unlock((pthread_mutex_t *)(a1 + 848));
  return v7;
}
