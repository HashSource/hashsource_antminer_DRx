void __fastcall __noreturn sub_44044(int *a1)
{
  pthread_t v2; // r4
  int v3; // r6
  int i; // r4
  int v5; // r0
  int v6; // r10
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  int *v11; // r0
  _DWORD *v12; // r9
  int v13; // r10
  unsigned int v14; // r0
  void **v15; // r0
  int v16; // r3
  char s[2044]; // [sp+14h] [bp-28C0h] BYREF
  _BYTE v18[4096]; // [sp+814h] [bp-20C0h] BYREF
  _BYTE v19[4096]; // [sp+1814h] [bp-10C0h] BYREF
  unsigned __int8 v20; // [sp+2814h] [bp-C0h] BYREF
  char v21; // [sp+2815h] [bp-BFh]
  _BYTE v22[180]; // [sp+2816h] [bp-BEh] BYREF
  __int16 v23; // [sp+28CAh] [bp-Ah]
  struct sched_param v24; // [sp+28CCh] [bp-8h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v24.__sched_priority = sched_get_priority_max(1);
  if ( !pthread_setschedparam(v2, 1, &v24) && (byte_7FE78 || byte_7CC60 || dword_7A52C > 4) )
  {
    snprintf(s, 0x800u, "IO Thread #%lx using high-priority scheduler! ", v2);
    sub_3F178(5, s, 0);
  }
  v3 = *a1;
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    strcpy(s, "Start To Fill Work!");
    sub_3F178(7, s, 0);
  }
  memset(v19, 0, sizeof(v19));
  memset(v18, 0, sizeof(v18));
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "Start To Fill Work!ChainIndex:[%d]", 0);
    sub_3F178(7, s, 0);
  }
  for ( i = 0; ; ++i )
  {
    while ( i > 3 )
    {
      if ( dword_B3B1C )
      {
        i = 0;
        sub_30168();
      }
      else
      {
        sub_30168();
        i = 0;
      }
    }
    if ( *((_BYTE *)&unk_B3AFC + i + 24) == 1 )
    {
      if ( byte_7CCC8[i + 232] )
      {
        v5 = sub_14A18();
        v6 = v5;
        if ( v5 )
        {
          if ( pthread_mutex_lock((pthread_mutex_t *)(v5 + 220)) )
          {
            v7 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
              *v7,
              "driver-btm-dcr.c",
              "dcr_fill_work_all",
              6425);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v6 + 244)) )
          {
            v8 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
              *v8,
              "driver-btm-dcr.c",
              "dcr_fill_work_all",
              6425);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          if ( pthread_mutex_unlock((pthread_mutex_t *)(v6 + 220)) )
          {
            v9 = _errno_location();
            snprintf(
              s,
              0x800u,
              "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
              *v9,
              "driver-btm-dcr.c",
              "dcr_fill_work_all",
              6425);
            sub_3F178(3, s, 1);
            sub_134A4(1);
          }
          if ( *(_BYTE *)(v6 + 641) && *(_BYTE *)(v6 + 643) )
          {
            if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v6 + 244)) )
            {
              v11 = _errno_location();
              snprintf(
                s,
                0x800u,
                "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                *v11,
                "driver-btm-dcr.c",
                "dcr_fill_work_all",
                6431);
              sub_3F178(3, s, 1);
              sub_134A4(1);
            }
            off_79D40(0);
            v12 = sub_18540();
            sub_1B920(v6, (int)v12);
            v13 = v12[100] & 0x7F;
            memcpy(v22, v12, sizeof(v22));
            v20 = 32;
            if ( !strcmp((const char *)v12[86], &v19[1024 * i]) && !strcmp((const char *)v12[91], &v18[1024 * i]) )
              v21 = v13;
            else
              v21 = v13 | 0x80;
            v14 = sub_432E4(0xFFFFu, &v20, 182);
            v23 = (v14 >> 8) | ((_WORD)v14 << 8);
            sub_43CC0((unsigned __int8)i, &v20, 0xB8u);
            v15 = *(void ***)(v3 + 4 * (v13 + (i << 7)) + 182);
            if ( v15 )
            {
              sub_11F58(v15);
              v16 = v3 + 4 * (v13 + (i << 7) + 44);
              *(_WORD *)(v16 + 6) = 0;
              *(_WORD *)(v16 + 8) = 0;
            }
            *(_DWORD *)(v3 + 4 * (v13 + (i << 7)) + 182) = v12;
            strcpy(&v19[1024 * i], (const char *)v12[86]);
            strcpy(&v18[1024 * i], (const char *)v12[91]);
            if ( !byte_7CDB4 )
              byte_7CDB4 = 1;
            sub_30050((struct timeval *)&dword_7CDB8);
          }
          else
          {
            if ( pthread_rwlock_unlock((pthread_rwlock_t *)(v6 + 244)) )
            {
              v10 = _errno_location();
              snprintf(
                s,
                0x800u,
                "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
                *v10,
                "driver-btm-dcr.c",
                "dcr_fill_work_all",
                6428);
              sub_3F178(3, s, 1);
              sub_134A4(1);
            }
            off_79D40(0);
          }
        }
      }
    }
  }
}
