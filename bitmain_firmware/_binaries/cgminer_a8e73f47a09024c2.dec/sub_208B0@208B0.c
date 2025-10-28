void __fastcall sub_208B0(int a1)
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
    if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
    {
      strcpy(s, "Get A Error Data To Push!DROP!\r\n");
      sub_3F178(4, s, 0);
    }
    return;
  }
  v2 = *(_DWORD **)(a1 + 316);
  sub_30050(a1 + 496);
  if ( byte_7AED0 )
  {
    v3 = sub_13DE8(*(_DWORD *)(a1 + 312));
    if ( pthread_mutex_lock(&stru_7FE7C) )
    {
      v4 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v4,
        "cgminer.c",
        "submit_work_async",
        8782);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    ++*(_DWORD *)(v3 + 36);
    dbl_80550 = dbl_80550 + 1.0;
    ++*((_QWORD *)v2 + 1);
    *(double *)(v3 + 200) = *(double *)(v3 + 200) + *(double *)(a1 + 440);
    v5 = *(double *)(a1 + 440);
    dbl_80790 = v5 + dbl_80790;
    *((double *)v2 + 9) = *((double *)v2 + 9) + v5;
    if ( pthread_mutex_unlock(&stru_7FE7C) )
    {
      v6 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
        *v6,
        "cgminer.c",
        "submit_work_async",
        8789);
      sub_3F178(3, s, 1);
      sub_134A4(1);
    }
    off_79D40(0);
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(
        s,
        0x800u,
        "Accepted %s %d benchmark share nonce %08x",
        *(const char **)(*(_DWORD *)(v3 + 4) + 8),
        *(_DWORD *)(v3 + 8),
        *(_DWORD *)(a1 + 76));
      sub_3F178(7, s, 0);
    }
    return;
  }
  if ( !sub_14AAC(a1, 1) )
    goto LABEL_40;
  if ( byte_79C75 )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as user requested", *v2);
      sub_3F178(7, s, 0);
    }
LABEL_39:
    *(_BYTE *)(a1 + 337) = 1;
LABEL_40:
    if ( *(_BYTE *)(a1 + 340) && v2[186] )
    {
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "Pushing pool %d work to stratum queue", *v2);
        sub_3F178(7, s, 0);
      }
      if ( !sub_2FA6C(v2[186], a1) )
      {
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          strcpy(s, "Discarding work from removed pool");
          sub_3F178(7, s, 0);
        }
        sub_11F58((void **)a1);
      }
    }
    else
    {
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        strcpy(s, "Pushing submit work to work thread");
        sub_3F178(7, s, 0);
      }
      if ( pthread_create(&v11, 0, (void *(*)(void *))sub_C7CC, (void *)a1) )
      {
        strcpy(s, "Failed to create submit_work_thread");
        sub_3F178(3, s, 1);
        sub_134A4(1);
      }
    }
    return;
  }
  if ( *((_BYTE *)v2 + 104) )
  {
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "Pool %d stale share detected, submitting as pool requested", *v2);
      sub_3F178(7, s, 0);
    }
    goto LABEL_39;
  }
  if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
  {
    snprintf(s, 0x800u, "Pool %d stale share detected, discarding", *v2);
    sub_3F178(7, s, 0);
  }
  sub_1D318("discard", (_DWORD *)a1);
  if ( pthread_mutex_lock(&stru_7FE7C) )
  {
    v7 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v7, "cgminer.c", "submit_work_async", 8807);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  ++*(_QWORD *)&dbl_80EB0;
  ++v2[31];
  v8 = *(double *)(a1 + 440);
  dbl_80558 = v8 + dbl_80558;
  *((double *)v2 + 11) = *((double *)v2 + 11) + v8;
  if ( pthread_mutex_unlock(&stru_7FE7C) )
  {
    v9 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v9,
      "cgminer.c",
      "submit_work_async",
      8812);
    sub_3F178(3, s, 1);
    sub_134A4(1);
  }
  off_79D40(0);
  sub_11F58((void **)a1);
}
