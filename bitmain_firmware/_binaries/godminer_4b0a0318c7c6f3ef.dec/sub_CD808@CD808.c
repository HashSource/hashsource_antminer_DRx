int __fastcall sub_CD808(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  pthread_mutex_t *v5; // r9
  int v9; // r6
  int v10; // r8
  int v11; // r2
  int v12; // r7
  __int16 v14; // r2
  int v15; // r3
  int v17[2]; // [sp+Ch] [bp-18h] BYREF
  char v18[2]; // [sp+14h] [bp-10h] BYREF
  char v19; // [sp+16h] [bp-Eh] BYREF
  int v20; // [sp+17h] [bp-Dh]
  char v21; // [sp+1Bh] [bp-9h]
  unsigned __int8 v22; // [sp+1Ch] [bp-8h]
  char v23; // [sp+1Dh] [bp-7h]

  v5 = (pthread_mutex_t *)(a1 + 920);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 920));
  v9 = 0;
  queue_clear(*(_DWORD *)(a1 + 884));
  v10 = 0;
  sub_145AC4(a5, 0x3E8u);
  v17[1] = (_DWORD)&loc_F4240 * v11;
  v17[0] = sub_145AC4(a5, 0x3E8u);
  while ( a2 > v10 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 884), v18, 0xAu, v17) == 110 )
      {
        v9 = 3;
        goto LABEL_11;
      }
      if ( (unsigned __int8)v18[0] != 170 || v18[1] != 85 || v19 != 8 )
      {
        v9 = 1;
        goto LABEL_11;
      }
      v12 = v23 & 0x1F;
      if ( v12 == BM_CRC5(&v19, 59) )
        break;
      v9 = 2;
    }
    ++v10;
    v14 = v22;
    v15 = v20;
    *(_BYTE *)(a3 + 4) = v21;
    *(_WORD *)(a3 + 6) = v14;
    *(_DWORD *)a3 = v15;
    a3 += 12;
  }
LABEL_11:
  *a4 = v10;
  pthread_mutex_unlock(v5);
  return v9;
}
