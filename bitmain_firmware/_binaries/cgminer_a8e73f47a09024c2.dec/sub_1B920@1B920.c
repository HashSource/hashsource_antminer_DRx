int __fastcall sub_1B920(int a1, int a2)
{
  pthread_mutex_t *v4; // r7
  int *v5; // r0
  int *v6; // r0
  __int64 v7; // r2
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  int i; // r3
  int v12; // r3
  size_t v13; // r2
  size_t v14; // r2
  size_t v15; // r2
  void *v16; // r0
  int *v17; // r1
  size_t v18; // r2
  void *v19; // r0
  size_t v20; // r2
  size_t v21; // r2
  int *v22; // r0
  char *v23; // r7
  char *v24; // r6
  int src; // [sp+10h] [bp-834h] BYREF
  int v27; // [sp+14h] [bp-830h] BYREF
  int v28; // [sp+18h] [bp-82Ch] BYREF
  char s[2020]; // [sp+1Ch] [bp-828h] BYREF
  __int16 v30; // [sp+81Eh] [bp-26h]
  _BYTE v31[36]; // [sp+820h] [bp-24h] BYREF

  v4 = (pthread_mutex_t *)(a1 + 220);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
  {
    v5 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v5,
      "cgminer.c",
      "gen_stratum_work_decred",
      8341);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v6 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v6,
      "cgminer.c",
      "gen_stratum_work_decred",
      8341);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  v7 = *(_QWORD *)(a1 + 624);
  *(_QWORD *)(a2 + 352) = v7;
  *(_QWORD *)(a1 + 624) = v7 + 1;
  *(_DWORD *)(a2 + 360) = *(_DWORD *)(a1 + 632);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v8 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v8,
      "cgminer.c",
      "gen_stratum_work_decred",
      8344);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v9 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v9,
      "cgminer.c",
      "gen_stratum_work_decred",
      8344);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  if ( pthread_mutex_unlock(v4) )
  {
    v10 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v10,
      "cgminer.c",
      "gen_stratum_work_decred",
      8344);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  *(_DWORD *)a2 = (*(unsigned __int8 *)(a1 + 1598) << 16)
                + (*(unsigned __int8 *)(a1 + 1597) << 8)
                + *(unsigned __int8 *)(a1 + 1596)
                + (*(unsigned __int8 *)(a1 + 1599) << 24);
  for ( i = 0; i != 32; i += 4 )
    *(_DWORD *)(a2 + 4 + i) = bswap32(*(_DWORD *)(a1 + 1600 + i));
  memcpy((void *)(a2 + 36), *(const void **)(a1 + 1584), 0x6Cu);
  v30 = *(_WORD *)(a2 + 100) & 1 | (2 * dword_7C3CC);
  *(_WORD *)(a2 + 100) = v30;
  v12 = *(_DWORD *)(a1 + 1896);
  if ( v12 )
  {
    if ( v12 == 2 )
    {
      v21 = *(_DWORD *)(a1 + 1580);
      if ( v21 >= 0xC )
        v21 = 12;
      memcpy((void *)(a2 + 144), *(const void **)(a1 + 616), v21);
      *(_DWORD *)(a2 + 144) = 0;
      *(_DWORD *)(a2 + 148) = 0;
      *(_DWORD *)(a2 + 152) |= *(_DWORD *)(a2 + 352) << 16;
    }
    else
    {
      *(_DWORD *)(a2 + 144) = 0;
      *(_DWORD *)(a2 + 148) = 0;
      *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 352) | (*(_DWORD *)(a2 + 312) << 24);
    }
  }
  else
  {
    src = *(_DWORD *)(a2 + 352);
    if ( *(_BYTE *)(a1 + 1900) )
    {
      v13 = *(_DWORD *)(a1 + 1580);
      if ( v13 >= 0xC )
        v13 = 12;
      memcpy((void *)(a2 + 144), *(const void **)(a1 + 616), v13);
      v14 = *(_DWORD *)(a1 + 632);
      if ( v14 >= 4 )
        v14 = 4;
      memcpy((void *)(a2 + *(_DWORD *)(a1 + 1580) + 144), &src, v14);
      if ( *(_DWORD *)(a1 + 632) > 4u )
      {
        v27 = rand();
        v15 = *(_DWORD *)(a1 + 632) - 4;
        v16 = (void *)(a2 + *(_DWORD *)(a1 + 1580) + 148);
        v17 = &v27;
        if ( v15 >= 4 )
          v15 = 4;
LABEL_22:
        memcpy(v16, v17, v15);
      }
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 1580);
      v19 = (void *)(a2 + 156 - v18);
      if ( v18 >= 0xC )
        v18 = 12;
      memcpy(v19, *(const void **)(a1 + 616), v18);
      *(_BYTE *)(a2 + 144) = 0;
      v20 = *(_DWORD *)(a1 + 632) - 1;
      if ( v20 >= 3 )
        v20 = 3;
      memcpy((void *)(a2 + 145), &src, v20);
      if ( *(_DWORD *)(a1 + 632) > 4u )
      {
        v28 = rand();
        v15 = *(_DWORD *)(a1 + 632) - 4;
        v16 = (void *)(a2 + 148);
        v17 = &v28;
        if ( v15 >= 4 )
          v15 = 4;
        goto LABEL_22;
      }
    }
  }
  *(_DWORD *)(a2 + 176) = *(_DWORD *)(*(_DWORD *)(a1 + 1584) + *(_DWORD *)(a1 + 1592) + *(_DWORD *)(a1 + 632));
  *(_QWORD *)(a2 + 368) = *(_QWORD *)(a1 + 1864);
  *(_DWORD *)(a2 + 508) = *(_DWORD *)(a1 + 1884);
  *(_DWORD *)(a2 + 344) = _strdup(*(const char **)(a1 + 664));
  *(_DWORD *)(a2 + 380) = _strdup(*(const char **)(a1 + 612));
  *(_DWORD *)(a2 + 364) = _strdup(*(const char **)(a1 + 684));
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v22 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v22,
      "cgminer.c",
      "gen_stratum_work_decred",
      8404);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  off_79D40(0);
  if ( byte_7CC61 )
  {
    v23 = (char *)sub_2D0B4(a2, 112);
    v24 = (char *)sub_2D0B4(v31, 32);
    if ( byte_7CC61 )
    {
      if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 6 )
        goto LABEL_46;
      snprintf(s, 0x800u, "Generated stratum merkle %s", v24);
      sub_3F178(7, s, 0);
      if ( !byte_7CC61 )
        goto LABEL_52;
      if ( !byte_7FE78 )
      {
LABEL_46:
        if ( !byte_7CC60 && dword_7A52C <= 6 )
          goto LABEL_49;
      }
      snprintf(s, 0x800u, "Generated stratum header %s", v23);
      sub_3F178(7, s, 0);
      if ( byte_7CC61 )
      {
        if ( byte_7FE78 )
        {
LABEL_51:
          snprintf(
            s,
            0x800u,
            "Work job_id %s nonce2 %llu ntime %s",
            *(const char **)(a2 + 344),
            *(_QWORD *)(a2 + 352),
            *(const char **)(a2 + 364));
          sub_3F178(7, s, 0);
          goto LABEL_52;
        }
LABEL_49:
        if ( !byte_7CC60 && dword_7A52C <= 6 )
          goto LABEL_52;
        goto LABEL_51;
      }
    }
LABEL_52:
    free(v23);
    free(v24);
  }
  sub_12B3C(a2 + 212);
  ++dword_80678;
  if ( time(0) - dword_7C3D0 > 5 )
  {
    dword_7C3D0 = time(0);
    dword_7C3D4 = dword_80678;
  }
  *(_DWORD *)(a2 + 316) = a1;
  *(_BYTE *)(a2 + 340) = 1;
  *(_DWORD *)(a2 + 304) = 0;
  *(_BYTE *)(a2 + 336) = 0;
  *(_BYTE *)(a2 + 504) = 83;
  *(_DWORD *)(a2 + 396) = dword_7AED8;
  *(_DWORD *)(a2 + 300) = 60;
  sub_E3D8(a2);
  return sub_30050(a2 + 320);
}
