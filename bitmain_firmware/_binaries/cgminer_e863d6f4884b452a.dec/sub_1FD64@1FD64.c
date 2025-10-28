int *__fastcall sub_1FD64(int a1)
{
  _DWORD *v2; // r4
  int v3; // r8
  _DWORD *v4; // r5
  double v5; // d8
  int v6; // r0
  void **v7; // r7
  int v8; // r12
  int v9; // r2
  int v10; // r2
  _DWORD *v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r7
  int *result; // r0
  double v18; // d6
  double v19; // d8
  __int64 v20; // kr10_8
  int v21; // r4
  int v22; // r1
  int *v23; // r0
  int *v24; // r0
  char s[2048]; // [sp+18h] [bp-800h] BYREF

  if ( pthread_mutex_lock(&stru_6DDB4) )
  {
    v23 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v23,
      "cgminer.c",
      "clear_stratum_shares",
      7307);
    goto LABEL_36;
  }
  v2 = (_DWORD *)dword_6DDCC;
  if ( !dword_6DDCC )
  {
    if ( !pthread_mutex_unlock(&stru_6DDB4) )
      return (int *)off_6CB70();
    goto LABEL_37;
  }
  v3 = 0;
  v4 = *(_DWORD **)(dword_6DDCC + 8);
  v5 = 0.0;
  if ( *(_DWORD *)(*(_DWORD *)(dword_6DDCC + 36) + 316) == a1 )
    goto LABEL_6;
LABEL_4:
  if ( v4 )
  {
    while ( 1 )
    {
      v2 = v4;
      v4 = (_DWORD *)v4[2];
      if ( *(_DWORD *)(v2[9] + 316) != a1 )
        goto LABEL_4;
LABEL_6:
      v6 = v2[1];
      v7 = (void **)dword_6DDCC;
      v8 = *(_DWORD *)dword_6DDCC;
      if ( v6 )
        break;
      v22 = v2[2];
      if ( v22 )
      {
        v9 = *(_DWORD *)(v8 + 20);
        if ( v2 != (_DWORD *)(*(_DWORD *)(v8 + 16) - v9) )
          goto LABEL_30;
LABEL_28:
        *(_DWORD *)(v8 + 16) = v9 + v6;
        v6 = v2[1];
        if ( !v6 )
        {
          v22 = v2[2];
LABEL_30:
          v10 = v22;
          v7 = (void **)v22;
          dword_6DDCC = v22;
LABEL_9:
          v11 = *v7;
          if ( v10 )
          {
            *(_DWORD *)(v10 + v11[5] + 4) = v2[1];
            v11 = *v7;
          }
          v12 = 3 * ((v11[1] - 1) & v2[7]);
          --*(_DWORD *)(*v11 + 4 * v12 + 4);
          v13 = *(_DWORD *)*v7;
          if ( *(_DWORD **)(v13 + 4 * v12) == v2 )
            *(_DWORD *)(v13 + 4 * v12) = v2[4];
          v14 = v2[4];
          v15 = v2[3];
          if ( v15 )
          {
            *(_DWORD *)(v15 + 16) = v14;
            v14 = v2[4];
          }
          if ( v14 )
            *(_DWORD *)(v14 + 12) = v2[3];
          --*((_DWORD *)*v7 + 3);
          goto LABEL_18;
        }
        v9 = *((_DWORD *)*v7 + 5);
LABEL_8:
        *(_DWORD *)(v9 + v6 + 8) = v2[2];
        v10 = v2[2];
        goto LABEL_9;
      }
      free(*(void **)v8);
      free(*v7);
      dword_6DDCC = 0;
LABEL_18:
      v16 = v2[9];
      ++v3;
      v5 = v5 + *(double *)(v16 + 440);
      sub_19F2C((void **)v16);
      free((void *)v16);
      v2[9] = 0;
      --*(_DWORD *)(a1 + 748);
      free(v2);
      if ( !v4 )
        goto LABEL_19;
    }
    v9 = *(_DWORD *)(v8 + 20);
    if ( v2 == (_DWORD *)(*(_DWORD *)(v8 + 16) - v9) )
      goto LABEL_28;
    goto LABEL_8;
  }
LABEL_19:
  if ( pthread_mutex_unlock(&stru_6DDB4) )
  {
LABEL_37:
    v24 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v24,
      "cgminer.c",
      "clear_stratum_shares",
      7320);
LABEL_36:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  result = (int *)off_6CB70();
  if ( v3 )
  {
    if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
    {
      snprintf(s, 0x800u, "Lost %d shares due to stratum disconnect on pool %d", v3, *(_DWORD *)a1);
      sub_343C4(4, s, 0);
    }
    result = &dword_72C38;
    v18 = *(double *)(a1 + 88) + v5;
    v19 = dbl_739F8 + v5;
    v20 = *(_QWORD *)&dword_72C38 + v3;
    v21 = *(_DWORD *)(a1 + 124) + v3;
    *(double *)(a1 + 88) = v18;
    *(_QWORD *)&dword_72C38 = v20;
    *(_DWORD *)(a1 + 124) = v21;
    dbl_739F8 = v19;
  }
  return result;
}
