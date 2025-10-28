void __fastcall sub_206AC(int a1)
{
  _DWORD *v2; // r5
  int v3; // r6
  int *v4; // r0
  double v5; // d16
  int *v6; // r0
  int *v7; // r0
  double v8; // d16
  int *v9; // r0
  char s[2044]; // [sp+14h] [bp-804h] BYREF
  pthread_t v11; // [sp+814h] [bp-4h] BYREF

  if ( !*(_DWORD *)(a1 + 76) )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
    {
      strcpy(s, "Get A Error Data To Push!DROP!\r\n");
      sub_3F1C0(4, s, 0);
    }
    return;
  }
  v2 = *(_DWORD **)(a1 + 316);
  sub_2FE30(a1 + 496);
  if ( byte_73E70 )
  {
    v3 = sub_13C08(*(_DWORD *)(a1 + 312));
    if ( pthread_mutex_lock(&stru_78D9C) )
    {
      v4 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v4,
        "cgminer.c",
        "submit_work_async",
        8807);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    ++*(_DWORD *)(v3 + 36);
    dbl_79470 = dbl_79470 + 1.0;
    ++*((_QWORD *)v2 + 1);
    *(double *)(v3 + 200) = *(double *)(v3 + 200) + *(double *)(a1 + 440);
    v5 = *(double *)(a1 + 440);
    dbl_796B0 = v5 + dbl_796B0;
    *((double *)v2 + 9) = *((double *)v2 + 9) + v5;
    if ( pthread_mutex_unlock(&stru_78D9C) )
    {
      v6 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v6,
        "cgminer.c",
        "submit_work_async",
        8814);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    off_72D00(0);
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(
        s,
        0x800u,
        "Accepted %s %d benchmark share nonce %08x",
        *(const char **)(*(_DWORD *)(v3 + 4) + 8),
        *(_DWORD *)(v3 + 8),
        *(_DWORD *)(a1 + 76));
      sub_3F1C0(7, s, 0);
    }
    return;
  }
  if ( !sub_148CC(a1, 1) )
    goto LABEL_40;
  if ( byte_72C35 )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as user requested", *v2);
      sub_3F1C0(7, s, 0);
    }
LABEL_39:
    *(_BYTE *)(a1 + 337) = 1;
LABEL_40:
    if ( *(_BYTE *)(a1 + 340) )
    {
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        snprintf(s, 0x800u, "Pushing pool %d work to stratum queue", *v2);
        sub_3F1C0(7, s, 0);
      }
      if ( !sub_2F84C(v2[186], a1) )
      {
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          strcpy(s, "Discarding work from removed pool");
          sub_3F1C0(7, s, 0);
        }
        sub_11D18((void **)a1);
      }
    }
    else
    {
      if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
      {
        strcpy(s, "Pushing submit work to work thread");
        sub_3F1C0(7, s, 0);
      }
      if ( pthread_create(&v11, 0, (void *(*)(void *))sub_C604, (void *)a1) )
      {
        strcpy(s, "Failed to create submit_work_thread");
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
    }
    return;
  }
  if ( *((_BYTE *)v2 + 104) )
  {
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as pool requested", *v2);
      sub_3F1C0(7, s, 0);
    }
    goto LABEL_39;
  }
  if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
  {
    snprintf(s, 0x800u, "Pool %d stale share detected, discarding", *v2);
    sub_3F1C0(7, s, 0);
  }
  sub_1D120("discard", (_DWORD *)a1);
  if ( pthread_mutex_lock(&stru_78D9C) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v7, "cgminer.c", "submit_work_async", 8832);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  ++*(_QWORD *)&dbl_79DD0;
  ++v2[31];
  v8 = *(double *)(a1 + 440);
  dbl_79478 = v8 + dbl_79478;
  *((double *)v2 + 11) = *((double *)v2 + 11) + v8;
  if ( pthread_mutex_unlock(&stru_78D9C) )
  {
    v9 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v9,
      "cgminer.c",
      "submit_work_async",
      8837);
    sub_3F1C0(3, s, 1);
    sub_132C4(1);
  }
  off_72D00(0);
  sub_11D18((void **)a1);
}
