int __fastcall sub_20EC8(int a1, int a2)
{
  pthread_mutex_t *v2; // r6
  int v5; // r3
  int v6; // r2
  int v7; // r2
  int v8; // r1
  unsigned int v9; // t1
  int v10; // r3
  int v11; // r1
  int v12; // r3
  unsigned int v13; // r0
  int v14; // r6
  unsigned int v16; // r0
  int v17; // r8
  size_t v18; // r2
  const void *v19; // r1
  size_t v20; // r2
  int v21; // r0
  int v22; // r2
  int *v23; // r1
  int v24; // r3
  int v25; // r0
  size_t v26; // r2
  void *v27; // r0
  size_t v28; // r2
  int v29; // r0
  int v30; // r3
  char *v31; // r9
  const char *v32; // r0
  char *v33; // r8
  int *v34; // r0
  int *v35; // r0
  int v36; // r3
  int v37; // r4
  int *v38; // r0
  int *v39; // r0
  size_t v40; // r2
  int v41; // r3
  int v42; // r1
  int src; // [sp+14h] [bp-830h] BYREF
  int v44; // [sp+18h] [bp-82Ch] BYREF
  int v45; // [sp+1Ch] [bp-828h] BYREF
  char v46[32]; // [sp+20h] [bp-824h] BYREF
  char s[2052]; // [sp+40h] [bp-804h] BYREF

  v2 = (pthread_mutex_t *)(a1 + 220);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 220)) )
  {
    v34 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
      *v34,
      "cgminer.c",
      "gen_stratum_work_decred",
      8341);
    goto LABEL_45;
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v35 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v35,
      "cgminer.c",
      "gen_stratum_work_decred",
      8341);
    goto LABEL_45;
  }
  v5 = *(_DWORD *)(a1 + 624);
  v6 = *(_DWORD *)(a1 + 628);
  *(_DWORD *)(a1 + 624) = v5 + 1;
  *(_DWORD *)(a1 + 628) = __CFADD__(v5, 1) + v6;
  *(_DWORD *)(a2 + 352) = v5;
  *(_DWORD *)(a2 + 356) = v6;
  *(_DWORD *)(a2 + 360) = *(_DWORD *)(a1 + 632);
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v36 = *_errno_location();
    v37 = 8344;
LABEL_48:
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      v36,
      "cgminer.c",
      "gen_stratum_work_decred",
      v37);
    goto LABEL_45;
  }
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v38 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
      *v38,
      "cgminer.c",
      "gen_stratum_work_decred",
      8344);
    goto LABEL_45;
  }
  if ( pthread_mutex_unlock(v2) )
  {
    v39 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v39,
      "cgminer.c",
      "gen_stratum_work_decred",
      8344);
LABEL_45:
    sub_343C4(3, s, 1);
    sub_1B070(1, 1);
  }
  v7 = a1 + 1596;
  v8 = a2;
  *(_DWORD *)a2 = (*(unsigned __int8 *)(a1 + 1598) << 16)
                + (*(unsigned __int8 *)(a1 + 1597) << 8)
                + *(unsigned __int8 *)(a1 + 1596)
                + (*(unsigned __int8 *)(a1 + 1599) << 24);
  do
  {
    v9 = *(_DWORD *)(v7 + 4);
    v7 += 4;
    *(_DWORD *)(v8 + 4) = bswap32(v9);
    v8 += 4;
  }
  while ( a1 + 1628 != v7 );
  memcpy((void *)(a2 + 36), *(const void **)(a1 + 1584), 0x6Cu);
  *(_WORD *)(a2 + 100) = ((unsigned __int16)&loc_1FFFC + 2) & (2 * dword_6F1FC) | *(_WORD *)(a2 + 100) & 1;
  v10 = *(_DWORD *)(a1 + 1896);
  if ( v10 )
  {
    if ( v10 == 2 )
    {
      v40 = *(_DWORD *)(a1 + 1580);
      if ( v40 >= 0xC )
        v40 = 12;
      memcpy((void *)(a2 + 144), *(const void **)(a1 + 616), v40);
      v41 = *(_DWORD *)(a2 + 152);
      v42 = *(_DWORD *)(a2 + 352);
      *(_DWORD *)(a2 + 144) = 0;
      *(_DWORD *)(a2 + 148) = 0;
      *(_DWORD *)(a2 + 152) = v41 | (v42 << 16);
      v13 = *(_DWORD *)(a1 + 632);
    }
    else
    {
      v11 = *(_DWORD *)(a2 + 312);
      v12 = *(_DWORD *)(a2 + 352);
      *(_DWORD *)(a2 + 144) = 0;
      *(_DWORD *)(a2 + 148) = 0;
      *(_DWORD *)(a2 + 152) = v12 | (v11 << 24);
      v13 = *(_DWORD *)(a1 + 632);
    }
    goto LABEL_11;
  }
  v16 = *(_DWORD *)(a1 + 1580);
  v17 = *(unsigned __int8 *)(a1 + 1900);
  v18 = v16;
  v19 = *(const void **)(a1 + 616);
  if ( v16 >= 0xC )
    v18 = 12;
  src = *(_DWORD *)(a2 + 352);
  if ( v17 )
  {
    memcpy((void *)(a2 + 144), v19, v18);
    v20 = *(_DWORD *)(a1 + 632);
    if ( v20 >= 4 )
      v20 = 4;
    memcpy((void *)(*(_DWORD *)(a1 + 1580) + 144 + a2), &src, v20);
    v13 = *(_DWORD *)(a1 + 632);
    if ( v13 > 4 )
    {
      v21 = rand();
      v22 = *(_DWORD *)(a1 + 1580);
      v23 = &v44;
      v24 = *(_DWORD *)(a1 + 632);
      v44 = v21;
      v25 = v22 + 148;
      v26 = v24 - 4;
      v27 = (void *)(v25 + a2);
      if ( (unsigned int)(v24 - 4) >= 4 )
        v26 = 4;
LABEL_24:
      memcpy(v27, v23, v26);
      v13 = *(_DWORD *)(a1 + 632);
    }
  }
  else
  {
    memcpy((void *)(156 - v16 + a2), v19, v18);
    *(_BYTE *)(a2 + 144) = 0;
    v28 = *(_DWORD *)(a1 + 632) - 1;
    if ( v28 >= 3 )
      v28 = 3;
    memcpy((void *)(a2 + 145), &src, v28);
    v13 = *(_DWORD *)(a1 + 632);
    if ( v13 > 4 )
    {
      v29 = rand();
      v30 = *(_DWORD *)(a1 + 632);
      v45 = v29;
      v27 = (void *)(a2 + 148);
      v23 = &v45;
      v26 = v30 - 4;
      if ( (unsigned int)(v30 - 4) >= 4 )
        v26 = 4;
      goto LABEL_24;
    }
  }
LABEL_11:
  *(_DWORD *)(a2 + 176) = *(_DWORD *)(*(_DWORD *)(a1 + 1584) + v13 + *(_DWORD *)(a1 + 1592));
  *(_QWORD *)(a2 + 368) = *(_QWORD *)(a1 + 1864);
  *(_DWORD *)(a2 + 508) = *(_DWORD *)(a1 + 1884);
  *(_DWORD *)(a2 + 344) = _strdup(*(const char **)(a1 + 664));
  *(_DWORD *)(a2 + 380) = _strdup(*(const char **)(a1 + 612));
  *(_DWORD *)(a2 + 364) = _strdup(*(const char **)(a1 + 684));
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v36 = *_errno_location();
    v37 = 8404;
    goto LABEL_48;
  }
  off_6CB70();
  if ( !byte_6FA71 )
    goto LABEL_13;
  v31 = (char *)sub_2826C(a2, 112);
  v32 = (const char *)sub_2826C(v46, 32);
  v33 = (char *)v32;
  if ( byte_6FA71 )
  {
    if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
      goto LABEL_37;
    snprintf(s, 0x800u, "Generated stratum merkle %s", v32);
    sub_343C4(7, s, 0);
    if ( !byte_6FA71 )
      goto LABEL_43;
    if ( !byte_73320 )
    {
LABEL_37:
      if ( !byte_6FA70 && dword_6D35C <= 6 )
        goto LABEL_40;
    }
    snprintf(s, 0x800u, "Generated stratum header %s", v31);
    sub_343C4(7, s, 0);
    if ( byte_6FA71 )
    {
      if ( byte_73320 )
      {
LABEL_42:
        snprintf(
          s,
          0x800u,
          "Work job_id %s nonce2 %llu ntime %s",
          *(const char **)(a2 + 344),
          *(_QWORD *)(a2 + 352),
          *(const char **)(a2 + 364));
        sub_343C4(7, s, 0);
        goto LABEL_43;
      }
LABEL_40:
      if ( !byte_6FA70 && dword_6D35C <= 6 )
        goto LABEL_43;
      goto LABEL_42;
    }
  }
LABEL_43:
  free(v31);
  free(v33);
LABEL_13:
  sub_1A9C0(a2 + 212);
  ++dword_73CA0;
  if ( time(0) - dword_6F200 > 5 )
  {
    dword_6F200 = time(0);
    dword_6F204 = dword_73CA0;
  }
  v14 = dword_6DDF0;
  *(_BYTE *)(a2 + 340) = 1;
  *(_DWORD *)(a2 + 304) = 0;
  *(_BYTE *)(a2 + 336) = 0;
  *(_BYTE *)(a2 + 504) = 83;
  *(_DWORD *)(a2 + 300) = 60;
  *(_DWORD *)(a2 + 316) = a1;
  *(_DWORD *)(a2 + 396) = v14;
  sub_16F70(a2);
  return sub_2A69C(a2 + 320);
}
