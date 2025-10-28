int __fastcall sync_get_status_unclear_base(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  int v5; // r5
  pthread_mutex_t *v6; // r11
  int v10; // r10
  int v11; // r2
  int v12; // r7
  __int16 v14; // r2
  int v15; // r3
  int v17[2]; // [sp+Ch] [bp-18h] BYREF
  char v18[2]; // [sp+14h] [bp-10h] BYREF
  int v19; // [sp+16h] [bp-Eh] BYREF
  char v20; // [sp+1Ah] [bp-Ah]
  unsigned __int8 v21; // [sp+1Bh] [bp-9h]
  char v22; // [sp+1Dh] [bp-7h]

  if ( !*(_BYTE *)(a1 + 228) )
    return 4;
  v6 = (pthread_mutex_t *)(a1 + 848);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 848));
  v5 = 0;
  sub_12E424(a5, 0x3E8u);
  v10 = 0;
  v17[1] = (_DWORD)&loc_F4240 * v11;
  v17[0] = sub_12E424(a5, 0x3E8u);
  while ( v10 < a2 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 824), v18, 0xAu, v17) == 110 )
      {
        v5 = 3;
        goto LABEL_12;
      }
      if ( (unsigned __int8)v18[0] != 170 || v18[1] != 85 )
      {
        *a4 = v10;
        v5 = 1;
        pthread_mutex_unlock(v6);
        return v5;
      }
      v12 = v22 & 0x1F;
      if ( v12 == BM_CRC5(&v19, 59) )
        break;
      v5 = 2;
    }
    ++v10;
    v14 = v21;
    v15 = v19;
    *(_BYTE *)(a3 + 4) = v20;
    *(_WORD *)(a3 + 6) = v14;
    *(_DWORD *)a3 = v15;
    a3 += 12;
  }
LABEL_12:
  *a4 = v10;
  pthread_mutex_unlock(v6);
  return v5;
}
