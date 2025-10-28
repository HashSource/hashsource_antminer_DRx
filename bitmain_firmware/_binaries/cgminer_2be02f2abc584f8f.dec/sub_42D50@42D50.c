void __fastcall __noreturn sub_42D50(int *a1)
{
  pthread_t v2; // r4
  int v3; // r8
  int i; // r4
  int v5; // r0
  int v6; // r5
  int *v7; // r0
  int *v8; // r0
  int *v9; // r0
  int *v10; // r0
  int *v11; // r0
  _DWORD *v12; // r9
  int v13; // r5
  unsigned int v14; // r0
  void **v15; // r0
  int v16; // r3
  char s[2028]; // [sp+14h] [bp-8C0h] BYREF
  unsigned __int8 v18[2]; // [sp+814h] [bp-C0h] BYREF
  _BYTE v19[180]; // [sp+816h] [bp-BEh] BYREF
  __int16 v20; // [sp+8CAh] [bp-Ah]
  struct sched_param v21; // [sp+8CCh] [bp-8h] BYREF

  v2 = pthread_self();
  pthread_detach(v2);
  v21.__sched_priority = sched_get_priority_max(1);
  if ( !pthread_setschedparam(v2, 1, &v21) && (byte_78D98 || byte_75C08 || dword_734EC > 4) )
  {
    snprintf(s, 0x800u, "IO Thread #%lx using high-priority scheduler! ", v2);
    sub_3F1C0(5, s, 0);
  }
  v3 = *a1;
  if ( byte_75C09 )
  {
    if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
      goto LABEL_12;
    strcpy(s, "Start To Fill Work!");
    sub_3F1C0(7, s, 0);
    if ( byte_75C09 )
    {
      if ( byte_78D98 )
      {
LABEL_14:
        snprintf(s, 0x800u, "Start To Fill Work!ChainIndex:[%d]", 0);
        sub_3F1C0(7, s, 0);
        goto LABEL_15;
      }
LABEL_12:
      if ( !byte_75C08 && dword_734EC <= 6 )
        goto LABEL_15;
      goto LABEL_14;
    }
  }
LABEL_15:
  for ( i = 0; ; ++i )
  {
    while ( i > 3 )
    {
      byte_75CFC = 1;
      sub_2FE30((struct timeval *)&dword_75D00);
      sub_2FF48();
      i = 0;
    }
    if ( *((_BYTE *)&unk_93504 + i + 8) == 1 || byte_75C10[i + 232] )
    {
      v5 = sub_14838();
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
            5825);
          sub_3F1C0(3, s, 1);
          sub_132C4(1);
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
            5825);
          sub_3F1C0(3, s, 1);
          sub_132C4(1);
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
            5825);
          sub_3F1C0(3, s, 1);
          sub_132C4(1);
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
              5831);
            sub_3F1C0(3, s, 1);
            sub_132C4(1);
          }
          off_72D00(0);
          v12 = sub_18360();
          sub_1B740(v6, (int)v12);
          v13 = v12[100] & 0x7F;
          memcpy(v19, v12, sizeof(v19));
          v18[0] = 32;
          v18[1] = v13;
          v14 = sub_4202C(0xFFFFu, v18, 182);
          v20 = (v14 >> 8) | ((_WORD)v14 << 8);
          sub_429E0((unsigned __int8)i, v18, 0xB8u);
          v15 = *(void ***)(v3 + 4 * (v13 + (i << 7)) + 150);
          if ( v15 )
          {
            sub_11D18(v15);
            v16 = v3 + 4 * (v13 + (i << 7) + 36);
            *(_WORD *)(v16 + 6) = 0;
            *(_WORD *)(v16 + 8) = 0;
          }
          *(_DWORD *)(v3 + 4 * (v13 + (i << 7)) + 150) = v12;
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
              5828);
            sub_3F1C0(3, s, 1);
            sub_132C4(1);
          }
          off_72D00(0);
        }
      }
    }
  }
}
