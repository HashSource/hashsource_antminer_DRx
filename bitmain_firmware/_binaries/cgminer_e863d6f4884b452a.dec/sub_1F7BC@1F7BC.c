void __noreturn sub_1F7BC()
{
  int v0; // r3
  int v1; // r5
  int v2; // r4
  __int64 v3; // r8
  double v4; // r0
  double v5; // d7
  double v6; // d6
  int v7; // r7
  int v8; // r9
  _DWORD *v9; // r1
  int v10; // r7
  _DWORD *v11; // r12
  int v12; // r8
  int v13; // r0
  int v14; // r2
  __int64 v15; // r2
  char *v16; // r0
  int v17; // r9
  _DWORD *v18; // r7
  _DWORD *v19; // r8
  _DWORD *v20; // r4
  int v21; // r0
  __int64 **v22; // r3
  int v23; // r12
  int v24; // r1
  int v25; // r0
  __int64 v26; // r0
  int v27; // r1
  int v28; // r0
  int v29; // r1
  int v30; // r1
  __int64 v31; // r2
  int *v32; // r0
  const char *v33; // r4
  int *v34; // r0
  int v35; // r1
  int *v36; // r0
  int v37; // [sp+10h] [bp-82Ch]
  pthread_mutex_t *mutex; // [sp+14h] [bp-828h]
  pthread_mutex_t *mutexa; // [sp+14h] [bp-828h]
  void **ptra; // [sp+1Ch] [bp-820h]
  __int64 **ptr; // [sp+1Ch] [bp-820h]
  void **v42; // [sp+24h] [bp-818h]
  int v43; // [sp+28h] [bp-814h] BYREF
  int v44; // [sp+30h] [bp-80Ch] BYREF
  char s[2052]; // [sp+38h] [bp-804h] BYREF

  pthread_setcanceltype(1, 0);
  v37 = 0;
  sub_2D764("Watchpool");
  sub_178A0();
  while ( 1 )
  {
    v0 = v37 + 1;
    if ( v37 + 1 >= 21 )
      v0 = 0;
    v37 = v0;
    sub_2A69C(&v43);
    if ( dword_72EF0 > 0 )
      break;
LABEL_21:
    if ( *(_BYTE *)(sub_1E098() + 97) )
      sub_1F158(0);
    if ( dword_6DB74 == 2 && v43 - dword_6DDD0 > 60 * dword_73000 )
    {
      sub_2A69C(&dword_6DDD0);
      sub_1F158(0);
    }
    sub_2A7F4(30000);
  }
  v1 = 0;
  while ( 1 )
  {
    v2 = *(_DWORD *)(dword_732EC + 4 * v1);
    if ( byte_6DDB1 || dword_6DC8C )
      goto LABEL_10;
    mutex = (pthread_mutex_t *)(v2 + 196);
    sub_2A69C(&v44);
    v8 = pthread_mutex_lock((pthread_mutex_t *)(v2 + 196));
    if ( v8 )
    {
      v32 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v32, "cgminer.c", "reap_curl", 10106);
      goto LABEL_92;
    }
    v9 = *(_DWORD **)(v2 + 352);
    v10 = v2 + 352;
    v11 = v9 - 1;
    v12 = *v9 - 4;
    if ( (_DWORD *)(v2 + 352) != v9 )
    {
      v13 = *(_DWORD *)(v2 + 296);
      if ( v13 > 1 )
      {
        while ( 1 )
        {
          if ( v44 - v11[3] <= 300 )
          {
            v14 = *(_DWORD *)(v12 + 4) - 4;
            if ( v10 == v12 + 4 )
              goto LABEL_40;
          }
          else
          {
            ++v8;
            *(_DWORD *)(v2 + 296) = v13 - 1;
            v15 = *(_QWORD *)(v11 + 1);
            *(_DWORD *)(v15 + 4) = HIDWORD(v15);
            *(_DWORD *)HIDWORD(v15) = v15;
            free(v11);
            v14 = *(_DWORD *)(v12 + 4) - 4;
            if ( v10 == v12 + 4 )
            {
LABEL_40:
              if ( pthread_mutex_unlock(mutex) )
                goto LABEL_93;
              off_6CB70();
              if ( v8 && byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
              {
                v16 = "s";
                if ( v8 == 1 )
                  v16 = &byte_57FF0;
                snprintf(s, 0x800u, "Reaped %d curl%s from pool %d", v8, v16, *(_DWORD *)v2);
                sub_343C4(7, s, 0);
              }
              goto LABEL_47;
            }
          }
          v13 = *(_DWORD *)(v2 + 296);
          v11 = (_DWORD *)v12;
          if ( v13 <= 1 )
            goto LABEL_40;
          v12 = v14;
        }
      }
    }
    if ( pthread_mutex_unlock(mutex) )
    {
LABEL_93:
      v33 = "reap_curl";
      v34 = _errno_location();
      v35 = 10120;
      goto LABEL_94;
    }
    off_6CB70();
LABEL_47:
    mutexa = (pthread_mutex_t *)time(0);
    v17 = pthread_mutex_lock(&stru_6DDB4);
    if ( v17 )
    {
      v36 = _errno_location();
      snprintf(
        s,
        0x800u,
        "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
        *v36,
        "cgminer.c",
        "prune_stratum_shares",
        10135);
      goto LABEL_92;
    }
    v18 = (_DWORD *)dword_6DDCC;
    if ( dword_6DDCC )
      break;
    if ( pthread_mutex_unlock(&stru_6DDB4) )
    {
LABEL_96:
      v34 = _errno_location();
      v33 = "prune_stratum_shares";
      v35 = 10146;
LABEL_94:
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v34, "cgminer.c", v33, v35);
LABEL_92:
      sub_343C4(3, s, 1);
      sub_1B070(1, 1);
    }
    off_6CB70();
LABEL_10:
    if ( v37 == 20 )
    {
      v3 = *(_QWORD *)(v2 + 40);
      v4 = sub_4A0BC((int)v3 - *(_DWORD *)(v2 + 160), (unsigned __int64)(v3 - *(int *)(v2 + 160)) >> 32);
      v5 = *(double *)(v2 + 152);
      *(_DWORD *)(v2 + 160) = v3;
      v6 = (v5 + v4 * 0.63) / 1.63;
      *(double *)(v2 + 152) = v6;
      *(_DWORD *)(v2 + 164) = (int)v6;
    }
    if ( !*(_DWORD *)(v2 + 100) || *(_BYTE *)(v2 + 292) )
      goto LABEL_7;
    if ( !*(_BYTE *)(v2 + 97) )
    {
LABEL_6:
      if ( !dword_6DB74 )
      {
        v7 = *(_DWORD *)(v2 + 4);
        if ( v7 < sub_1E1C4() && v43 - *(_DWORD *)(v2 + 140) > 300 )
        {
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
          {
            snprintf(s, 0x800u, "Pool %d %s stable for 5 mins", *(_DWORD *)v2, *(const char **)(v2 + 172));
            sub_343C4(4, s, 0);
          }
          sub_1F158(0);
        }
      }
      goto LABEL_7;
    }
    if ( v43 - *(_DWORD *)(v2 + 140) <= 30 )
    {
LABEL_7:
      if ( dword_72EF0 <= ++v1 )
        goto LABEL_21;
    }
    else
    {
      if ( sub_1C088((_DWORD *)v2, 1) && sub_1BFF8(v2, (_BYTE *)(v2 + 97)) )
        sub_1E240(v2);
      else
        sub_2A69C(v2 + 140);
      if ( !*(_BYTE *)(v2 + 97) )
        goto LABEL_6;
      if ( dword_72EF0 <= ++v1 )
        goto LABEL_21;
    }
  }
  v19 = (_DWORD *)v2;
  v20 = *(_DWORD **)(dword_6DDCC + 8);
  if ( v19 == *(_DWORD **)(*(_DWORD *)(dword_6DDCC + 36) + 316) )
    goto LABEL_52;
LABEL_50:
  if ( !v20 )
  {
LABEL_66:
    v2 = (int)v19;
    if ( pthread_mutex_unlock(&stru_6DDB4) )
      goto LABEL_96;
    off_6CB70();
    if ( v17 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
      {
        snprintf(s, 0x800u, "Lost %d shares due to no stratum share response from pool %d", v17, *v19);
        sub_343C4(4, s, 0);
      }
      v31 = *(_QWORD *)&dword_72C38;
      v19[31] += v17;
      *(_QWORD *)&dword_72C38 = v31 + v17;
    }
    goto LABEL_10;
  }
  while ( 1 )
  {
    v18 = v20;
    v20 = (_DWORD *)v20[2];
    if ( v19 != *(_DWORD **)(v18[9] + 316) )
      goto LABEL_50;
LABEL_52:
    if ( (int)mutexa <= v18[11] + 120 )
      goto LABEL_50;
    v21 = v18[1];
    v22 = (__int64 **)dword_6DDCC;
    v23 = *(_DWORD *)dword_6DDCC;
    if ( v21 )
      break;
    ptr = (__int64 **)v18[2];
    if ( ptr )
    {
      v24 = *(_DWORD *)(v23 + 20);
      if ( v18 != (_DWORD *)(*(_DWORD *)(v23 + 16) - v24) )
        goto LABEL_78;
LABEL_80:
      *(_DWORD *)(v23 + 16) = v24 + v21;
      v21 = v18[1];
      if ( v21 )
      {
        v24 = *((_DWORD *)*v22 + 5);
        goto LABEL_55;
      }
      ptr = (__int64 **)v18[2];
LABEL_78:
      v22 = ptr;
      dword_6DDCC = (int)ptr;
LABEL_56:
      v25 = v18[2];
      if ( v25 )
        *(_DWORD *)(v25 + *((_DWORD *)*v22 + 5) + 4) = v18[1];
      v26 = **v22;
      v27 = 3 * ((HIDWORD(v26) - 1) & v18[7]);
      --*(_DWORD *)(v26 + 4 * v27 + 4);
      v28 = *(_DWORD *)*v22;
      if ( *(_DWORD **)(v28 + 4 * v27) == v18 )
        *(_DWORD *)(v28 + 4 * v27) = v18[4];
      v29 = v18[3];
      if ( v29 )
        *(_DWORD *)(v29 + 16) = v18[4];
      v30 = v18[4];
      if ( v30 )
        *(_DWORD *)(v30 + 12) = v18[3];
      --*((_DWORD *)*v22 + 3);
      goto LABEL_65;
    }
    v42 = (void **)dword_6DDCC;
    free(*(void **)v23);
    free(*v42);
    dword_6DDCC = 0;
LABEL_65:
    ++v17;
    ptra = (void **)v18[9];
    sub_19F2C(ptra);
    free(ptra);
    free(v18);
    if ( !v20 )
      goto LABEL_66;
  }
  v24 = *(_DWORD *)(v23 + 20);
  if ( v18 == (_DWORD *)(*(_DWORD *)(v23 + 16) - v24) )
    goto LABEL_80;
LABEL_55:
  *(_DWORD *)(v24 + v21 + 8) = v18[2];
  goto LABEL_56;
}
