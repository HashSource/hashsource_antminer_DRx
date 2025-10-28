int __fastcall sub_1B740(int a1, int a2)
{
  pthread_mutex_t *v4; // r7
  int *v5; // r0
  int *v6; // r0
  __int64 v7; // r2
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  int i; // r3
  size_t v12; // r2
  int v13; // r3
  unsigned __int64 v14; // r2
  int *v15; // r0
  char *v16; // r7
  char *v17; // r6
  char s[2028]; // [sp+14h] [bp-828h] BYREF
  __int16 v20; // [sp+816h] [bp-26h]
  int v21; // [sp+818h] [bp-24h] BYREF

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
      8368);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
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
      8368);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
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
      8371);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
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
      8371);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
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
      8371);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  *(_DWORD *)a2 = (*(unsigned __int8 *)(a1 + 1598) << 16)
                + (*(unsigned __int8 *)(a1 + 1597) << 8)
                + *(unsigned __int8 *)(a1 + 1596)
                + (*(unsigned __int8 *)(a1 + 1599) << 24);
  for ( i = 0; i != 32; i += 4 )
    *(_DWORD *)(a2 + 4 + i) = bswap32(*(_DWORD *)(a1 + 1600 + i));
  memcpy((void *)(a2 + 36), *(const void **)(a1 + 1584), 0x6Cu);
  v20 = *(_WORD *)(a2 + 100) & 1 | (2 * dword_7536C);
  *(_WORD *)(a2 + 100) = v20;
  v12 = *(_DWORD *)(a1 + 1580);
  if ( v12 >= 0x24 )
    v12 = 36;
  memcpy((void *)(a2 + 144), *(const void **)(a1 + 616), v12);
  v13 = *(_DWORD *)(a1 + 1896);
  if ( v13 )
  {
    if ( v13 == 2 )
    {
      *(_DWORD *)(a2 + 144) = dword_75370;
      *(_DWORD *)(a2 + 148) = 0;
      v14 = *(_QWORD *)(a2 + 352);
      *(_DWORD *)(a2 + 152) |= (_DWORD)v14 << 16;
      if ( v14 > 0xFFFE )
      {
        *(_QWORD *)(a1 + 624) = 0;
        sub_12B68((unsigned int *)&dword_75370);
      }
    }
    else
    {
      *(_DWORD *)(a2 + 144) = 0;
      *(_DWORD *)(a2 + 148) = 0;
      *(_DWORD *)(a2 + 152) = *(_DWORD *)(a2 + 352);
    }
  }
  else if ( *(_DWORD *)(a1 + 1892) )
  {
    if ( *(_QWORD *)(a2 + 352) > 0xFFFFFEu && (byte_78D98 || byte_75C08 || dword_734EC > 4) )
    {
      snprintf(s, 0x800u, "Make work scan all nonce2 warning %08x", *(_DWORD *)(a1 + 628));
      sub_3F1C0(5, s, 0);
    }
    memcpy((void *)(a2 + *(_DWORD *)(a1 + 1580) + 144), (const void *)(a2 + 352), *(_DWORD *)(a1 + 632));
  }
  else
  {
    *(_DWORD *)(a2 + 144) = *(_DWORD *)(a2 + 352);
    *(_DWORD *)(a2 + 148) = *(_DWORD *)(a2 + 312) | (rand() << 10);
  }
  *(_DWORD *)(a2 + 176) = *(_DWORD *)(*(_DWORD *)(a1 + 1584) + *(_DWORD *)(a1 + 1592) + *(_DWORD *)(a1 + 632));
  *(_QWORD *)(a2 + 368) = *(_QWORD *)(a1 + 1864);
  *(_DWORD *)(a2 + 344) = _strdup(*(const char **)(a1 + 664));
  *(_DWORD *)(a2 + 380) = _strdup(*(const char **)(a1 + 612));
  *(_DWORD *)(a2 + 364) = _strdup(*(const char **)(a1 + 684));
  if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 244)) )
  {
    v15 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v15,
      "cgminer.c",
      "gen_stratum_work_decred",
      8429);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  off_72D00(0);
  if ( byte_75C09 )
  {
    v16 = (char *)sub_2CDEC(a2, 112);
    v17 = (char *)sub_2CDEC(&v21, 32);
    if ( byte_75C09 )
    {
      if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
        goto LABEL_38;
      snprintf(s, 0x800u, "Generated stratum merkle %s", v17);
      sub_3F1C0(7, s, 0);
      if ( !byte_75C09 )
        goto LABEL_44;
      if ( !byte_78D98 )
      {
LABEL_38:
        if ( !byte_75C08 && dword_734EC <= 6 )
          goto LABEL_41;
      }
      snprintf(s, 0x800u, "Generated stratum header %s", v16);
      sub_3F1C0(7, s, 0);
      if ( byte_75C09 )
      {
        if ( byte_78D98 )
        {
LABEL_43:
          snprintf(
            s,
            0x800u,
            "Work job_id %s nonce2 %llu ntime %s",
            *(const char **)(a2 + 344),
            *(_QWORD *)(a2 + 352),
            *(const char **)(a2 + 364));
          sub_3F1C0(7, s, 0);
          goto LABEL_44;
        }
LABEL_41:
        if ( !byte_75C08 && dword_734EC <= 6 )
          goto LABEL_44;
        goto LABEL_43;
      }
    }
LABEL_44:
    free(v16);
    free(v17);
  }
  sub_128FC(a2 + 212);
  ++dword_79598;
  if ( time(0) - dword_75374 > 5 )
  {
    dword_75374 = time(0);
    dword_75378 = dword_79598;
  }
  *(_DWORD *)(a2 + 316) = a1;
  *(_BYTE *)(a2 + 340) = 1;
  *(_DWORD *)(a2 + 304) = 0;
  *(_BYTE *)(a2 + 336) = 0;
  *(_BYTE *)(a2 + 504) = 83;
  *(_DWORD *)(a2 + 396) = dword_73E78;
  *(_DWORD *)(a2 + 300) = 60;
  sub_E210(a2);
  return sub_2FE30(a2 + 320);
}
