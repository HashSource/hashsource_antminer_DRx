int __fastcall sub_CEB94(int a1, int a2, int a3, int *a4, unsigned __int64 a5)
{
  pthread_mutex_t *v5; // r9
  int v9; // r6
  int v10; // r8
  int v11; // r2
  int v12; // r7
  __int16 v14; // r3
  int v16[2]; // [sp+Ch] [bp-18h] BYREF
  char v17[2]; // [sp+14h] [bp-10h] BYREF
  _BYTE v18[3]; // [sp+16h] [bp-Eh] BYREF
  int v19; // [sp+19h] [bp-Bh]
  char v20; // [sp+1Dh] [bp-7h]

  v5 = (pthread_mutex_t *)(a1 + 928);
  pthread_mutex_lock((pthread_mutex_t *)(a1 + 928));
  v9 = 0;
  queue_clear(*(_DWORD *)(a1 + 892));
  v10 = 0;
  sub_146F74(a5, 0x3E8u);
  v16[1] = (_DWORD)&loc_F4240 * v11;
  v16[0] = sub_146F74(a5, 0x3E8u);
  while ( a2 > v10 )
  {
    while ( 1 )
    {
      if ( queue_dequeue_for(*(_DWORD *)(a1 + 892), v17, 0xAu, v16) == 110 )
      {
        v9 = 3;
        goto LABEL_11;
      }
      if ( (unsigned __int8)v17[0] != 170 || v17[1] != 85 || (v18[0] & 0xEF) != 0 )
      {
        v9 = 1;
        goto LABEL_11;
      }
      v12 = v20 & 0x1F;
      if ( v12 == BM_CRC5(v18, 56) )
        break;
      v9 = 2;
    }
    ++v10;
    v14 = v18[2];
    *(_BYTE *)(a3 + 4) = v18[1];
    *(_WORD *)(a3 + 6) = v14;
    *(_DWORD *)a3 = v19;
    a3 += 12;
  }
LABEL_11:
  *a4 = v10;
  pthread_mutex_unlock(v5);
  return v9;
}
