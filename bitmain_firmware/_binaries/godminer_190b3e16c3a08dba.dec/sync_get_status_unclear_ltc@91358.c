int __fastcall sync_get_status_unclear_ltc(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r5
  pthread_mutex_t *v6; // r11
  int v10; // r10
  int v11; // r2
  int v12; // r9
  char v14; // r0
  __int16 v15; // r1
  int v16; // r2
  int v18[2]; // [sp+Ch] [bp-18h] BYREF
  char v19[2]; // [sp+14h] [bp-10h] BYREF
  int v20; // [sp+16h] [bp-Eh] BYREF
  char v21; // [sp+1Ah] [bp-Ah]
  unsigned __int8 v22; // [sp+1Bh] [bp-9h]
  unsigned __int8 v23; // [sp+1Ch] [bp-8h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v6 = (pthread_mutex_t *)(a1 + 848);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  v5 = 0;
  sub_12E424(a5, 0x3E8u);
  v10 = 0;
  v18[1] = (_DWORD)&loc_F4240 * v11;
  v18[0] = sub_12E424(a5, 0x3E8u);
  while ( v10 < a2 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v19, 9u, v18) == 110 )
      {
        v5 = 3;
        goto LABEL_13;
      }
      if ( (unsigned __int8)v19[0] != 170 || v19[1] != 85 || (v23 & 0x80u) != 0 )
      {
        v5 = 1;
        *a4 = v10;
        pthread_mutex_unlock(v6);
        return v5;
      }
      v12 = v23 & 0x1F;
      if ( v12 == BM_CRC5(&v20, 51) )
        break;
      v5 = 2;
    }
    ++v10;
    v14 = v21;
    a3 += 12;
    v15 = v22;
    v16 = v20;
    *(_BYTE *)(a3 - 3) = (v23 >> 5) & 3;
    *(_BYTE *)(a3 - 8) = v14;
    *(_WORD *)(a3 - 6) = v15;
    *(_DWORD *)(a3 - 12) = v16;
  }
LABEL_13:
  *a4 = v10;
  pthread_mutex_unlock(v6);
  return v5;
}
