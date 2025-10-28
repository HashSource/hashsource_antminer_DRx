int __fastcall sub_18FF0(int a1)
{
  int *v2; // r0
  _DWORD *v3; // r4
  _DWORD *v4; // r5
  int v5; // r7
  double v6; // d8
  int v7; // r1
  void **v8; // r9
  int v9; // r2
  int v10; // r12
  int v11; // r3
  int v12; // r3
  int **v13; // r3
  int v14; // r2
  int v15; // r1
  int v16; // r1
  int v17; // r2
  int v18; // r2
  int v19; // r0
  int *v20; // r0
  int result; // r0
  char s[2048]; // [sp+10h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&mutex) )
  {
    v2 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v2,
      "cgminer.c",
      "clear_stratum_shares",
      7305);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  v3 = (_DWORD *)dword_75300;
  if ( dword_75300 )
  {
    v4 = *(_DWORD **)(dword_75300 + 8);
    v5 = 0;
    v6 = 0.0;
    while ( 1 )
    {
      if ( *(_DWORD *)(v3[9] + 316) == a1 )
      {
        v7 = v3[1];
        if ( v7 || v3[2] )
        {
          v9 = dword_75300;
          v10 = *(_DWORD *)(*(_DWORD *)dword_75300 + 20);
          if ( v3 == (_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_75300 + 16) - v10) )
            *(_DWORD *)(*(_DWORD *)dword_75300 + 16) = v7 + v10;
          v11 = v3[1];
          if ( v11 )
            *(_DWORD *)(v11 + *(_DWORD *)(*(_DWORD *)v9 + 20) + 8) = v3[2];
          else
            dword_75300 = v3[2];
          v12 = v3[2];
          if ( v12 )
            *(_DWORD *)(v12 + *(_DWORD *)(*(_DWORD *)dword_75300 + 20) + 4) = v3[1];
          v13 = (int **)dword_75300;
          v14 = 3 * ((*(_DWORD *)(*(_DWORD *)dword_75300 + 4) - 1) & v3[7]);
          v15 = **v13 + 12 * (((*v13)[1] - 1) & v3[7]);
          --*(_DWORD *)(v15 + 4);
          v16 = **v13;
          if ( *(_DWORD **)(v16 + 4 * v14) == v3 )
            *(_DWORD *)(v16 + 4 * v14) = v3[4];
          v17 = v3[3];
          if ( v17 )
            *(_DWORD *)(v17 + 16) = v3[4];
          v18 = v3[4];
          if ( v18 )
            *(_DWORD *)(v18 + 12) = v3[3];
          --(*v13)[3];
        }
        else
        {
          v8 = (void **)dword_75300;
          free(**(void ***)dword_75300);
          free(*v8);
          dword_75300 = 0;
        }
        v19 = v3[9];
        v6 = v6 + *(double *)(v19 + 440);
        sub_11D18((void **)v19);
        v3[9] = 0;
        --*(_DWORD *)(a1 + 748);
        free(v3);
        ++v5;
      }
      if ( !v4 )
        break;
      v3 = v4;
      v4 = (_DWORD *)v4[2];
    }
  }
  else
  {
    v5 = 0;
    v6 = 0.0;
  }
  if ( pthread_mutex_unlock(&mutex) )
  {
    v20 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v20,
      "cgminer.c",
      "clear_stratum_shares",
      7318);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  result = off_72D00(0);
  if ( v5 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      snprintf(s, 0x800u, "Lost %d shares due to stratum disconnect on pool %d", v5, *(_DWORD *)a1);
      result = sub_3F1C0(4, s, 0);
    }
    *(_DWORD *)(a1 + 124) += v5;
    *(_QWORD *)&dbl_79DD0 += v5;
    *(double *)(a1 + 88) = *(double *)(a1 + 88) + v6;
    dbl_79478 = dbl_79478 + v6;
  }
  return result;
}
