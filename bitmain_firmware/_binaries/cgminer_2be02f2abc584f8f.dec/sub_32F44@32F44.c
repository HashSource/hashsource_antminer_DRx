int __fastcall sub_32F44(_DWORD *a1, int a2)
{
  double v2; // d0
  int v4; // r5
  int v5; // r0
  int v6; // r4
  int v7; // r7
  _DWORD *v8; // r5
  _DWORD *v9; // r8
  char *v10; // r5
  const char *v11; // r0
  const char *v12; // r5
  int v13; // r0
  int v14; // r7
  int v15; // r0
  int v16; // r0
  int *v17; // r0
  int *v18; // r0
  void *v19; // r0
  int v20; // r0
  int v21; // r0
  int *v22; // r0
  int *v23; // r0
  double v24; // d9
  int *v25; // r0
  int v26; // r0
  const char *v27; // r5
  const char *v28; // r7
  char *v29; // r10
  char *v30; // r1
  int v31; // r0
  const char *v32; // r0
  int *v33; // r0
  void *v34; // r0
  int v35; // r3
  void *v36; // r0
  int *v37; // r0
  int v38; // r0
  int v39; // r0
  size_t v40; // r0
  int v41; // r0
  const char *v42; // r0
  int v43; // r0
  int v44; // r0
  size_t v45; // r0
  int v46; // r3
  int v47; // r3
  int v49; // [sp+14h] [bp-2208h] BYREF
  char *v50; // [sp+18h] [bp-2204h] BYREF
  char v51[256]; // [sp+1Ch] [bp-2200h] BYREF
  char s[7908]; // [sp+11Ch] [bp-2100h] BYREF
  _DWORD v53[9]; // [sp+211Ch] [bp-100h] BYREF
  char v54[136]; // [sp+2178h] [bp-A4h] BYREF

  if ( !a2 )
    return 0;
  v5 = sub_5662C(a2, 0, v53);
  v6 = v5;
  if ( !v5 )
  {
    if ( !byte_75C09 )
      return 0;
    if ( !byte_78D98 && !byte_75C08 && dword_734EC <= 6 )
      return 0;
    snprintf(s, 0x800u, "JSON decode failed(%d): %s", v53[0], v54);
    sub_3F1C0(7, s, 0);
    return 0;
  }
  v7 = sub_57304(v5, "method");
  if ( !v7 )
  {
    v4 = 0;
    goto LABEL_163;
  }
  v8 = (_DWORD *)sub_57304(v6, "error");
  v9 = (_DWORD *)sub_57304(v6, "params");
  if ( v8 && *v8 != 7 )
  {
    v10 = (char *)sub_54AFC(v8, 3);
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(s, 0x800u, "JSON-RPC method decode failed: %s", v10);
      sub_3F1C0(7, s, 0);
    }
LABEL_20:
    free(v10);
    v4 = 0;
    goto LABEL_163;
  }
  v11 = (const char *)sub_57754(v7);
  v12 = v11;
  if ( !v11 )
  {
    v4 = 0;
    goto LABEL_163;
  }
  if ( !strncasecmp(v11, "mining.notify", 0xDu) )
  {
    if ( dword_72C0C == 1 )
    {
      v13 = sub_2D048((int)a1, v9);
    }
    else
    {
      if ( dword_72C0C )
      {
        strcpy(s, "Fatal Error Coin Type");
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      v13 = sub_2E1C4((int)a1, v9);
    }
    if ( v13 )
    {
      v4 = 1;
      *((_BYTE *)a1 + 643) = 1;
    }
    else
    {
      v4 = 0;
      *((_BYTE *)a1 + 643) = 0;
    }
    goto LABEL_163;
  }
  if ( strncasecmp(v12, "mining.set_extranonce", 0x15u) )
  {
    if ( !strncasecmp(v12, "mining.set_difficulty", 0x15u) )
    {
      v21 = sub_57588(v9, 0);
      sub_579F0(v21);
      if ( v2 == 0.0 )
      {
        v4 = 0;
      }
      else
      {
        if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
        {
          v22 = _errno_location();
          snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v22, "util.c", "parse_diff", 2603);
          sub_3F1C0(3, s, 1);
          sub_132C4(1);
        }
        if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 61)) )
        {
          v23 = _errno_location();
          snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v23, "util.c", "parse_diff", 2603);
          sub_3F1C0(3, s, 1);
          sub_132C4(1);
        }
        v24 = *((double *)a1 + 233);
        *((double *)a1 + 233) = v2;
        sub_2C960((pthread_rwlock_t *)(a1 + 61), "util.c", "parse_diff", 2606);
        if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
        {
          v25 = _errno_location();
          snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v25, "util.c", "parse_diff", 2606);
          sub_3F1C0(3, s, 1);
          sub_132C4(1);
        }
        off_72D00(0);
        if ( v2 == v24 )
        {
          if ( byte_75C09 )
          {
            if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
            {
              snprintf(s, 0x800u, "Pool %d difficulty set to %f", *a1, v2);
              sub_3F1C0(7, s, 0);
              v4 = 1;
            }
            else
            {
              v4 = 1;
            }
          }
          else
          {
            v4 = 1;
          }
        }
        else if ( v2 == (double)(int)v2 )
        {
          if ( byte_75C09 )
          {
            if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
            {
              snprintf(s, 0x800u, "Pool %d difficulty changed to %d", *a1, (int)v2);
              sub_3F1C0(7, s, 0);
              v4 = 1;
            }
            else
            {
              v4 = 1;
            }
          }
          else
          {
            v4 = 1;
          }
        }
        else if ( byte_75C09 )
        {
          if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
          {
            snprintf(s, 0x800u, "Pool %d difficulty changed to %.1f", *a1, v2);
            sub_3F1C0(7, s, 0);
            v4 = 1;
          }
          else
          {
            v4 = 1;
          }
        }
        else
        {
          v4 = 1;
        }
      }
      goto LABEL_163;
    }
    if ( strncasecmp(v12, "client.reconnect", 0x10u) )
    {
      if ( !strncasecmp(v12, "client.get_version", 0x12u) )
      {
        if ( sub_57304(v6, "id") )
        {
          v38 = sub_57304(v6, "id");
          v39 = sub_5786C(v38);
          sprintf(s, "{\"id\": %d, \"result\": \"cgminer/4.9.0\", \"error\": null}", v39);
          v40 = strlen(s);
          v4 = sub_30BA0((pthread_mutex_t *)a1, s, v40);
        }
        else
        {
          v4 = 0;
        }
      }
      else if ( !strncasecmp(v12, "client.show_message", 0x13u) )
      {
        if ( v9 )
        {
          if ( *v9 == 1 )
          {
            v41 = sub_57588(v9, 0);
            v42 = (const char *)sub_57754(v41);
            if ( v42 )
            {
              if ( byte_75C09 )
              {
                if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
                {
                  snprintf(s, 0x800u, "Pool %d message: %s", *a1, v42);
                  sub_3F1C0(7, s, 0);
                  v4 = 1;
                }
                else
                {
                  v4 = 1;
                }
              }
              else
              {
                v4 = 1;
              }
            }
            else
            {
              v4 = 0;
            }
          }
          else
          {
            v4 = 0;
          }
        }
        else
        {
          v4 = 0;
        }
      }
      else if ( !strncasecmp(v12, "mining.ping", 0xBu) )
      {
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          snprintf(s, 0x800u, "Pool %d ping", *a1);
          sub_3F1C0(7, s, 0);
        }
        if ( sub_57304(v6, "id") )
        {
          v43 = sub_57304(v6, "id");
          v44 = sub_5786C(v43);
          sprintf(s, "{\"id\": %d, \"result\": \"pong\", \"error\": null}", v44);
          v45 = strlen(s);
          v4 = sub_30BA0((pthread_mutex_t *)a1, s, v45);
        }
        else
        {
          v4 = 0;
        }
      }
      else
      {
        v4 = 0;
      }
      goto LABEL_163;
    }
    memset(v51, 0, 0xFFu);
    v26 = sub_57588(v9, 0);
    v27 = (const char *)sub_57754(v26);
    if ( v27 )
    {
      v28 = (const char *)a1[150];
      v29 = strchr(v28, 46);
      if ( !v29 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(s, 0x800u, "Denied stratum reconnect request for pool without domain '%s'", v28);
          sub_3F1C0(3, s, 0);
          v4 = 0;
        }
        else
        {
          v4 = 0;
        }
        goto LABEL_163;
      }
      v30 = strchr(v27, 46);
      if ( !v30 )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(s, 0x800u, "Denied stratum reconnect request to url without domain '%s'", v27);
          sub_3F1C0(3, s, 0);
          v4 = 0;
        }
        else
        {
          v4 = 0;
        }
        goto LABEL_163;
      }
      if ( strcmp(v29, v30) )
      {
        if ( byte_78D98 || byte_75C08 || dword_734EC > 2 )
        {
          snprintf(s, 0x800u, "Denied stratum reconnect request to non-matching domain url '%s'", v28);
          sub_3F1C0(3, s, 0);
          v4 = 0;
        }
        else
        {
          v4 = 0;
        }
        goto LABEL_163;
      }
    }
    else
    {
      v27 = (const char *)a1[150];
    }
    v31 = sub_57588(v9, 1);
    v32 = (const char *)sub_57754(v31);
    if ( !v32 )
      v32 = (const char *)a1[146];
    snprintf(v51, 0xFEu, "%s:%s", v27, v32);
    if ( sub_30138(v51, &v49, &v50) )
    {
      if ( byte_78D98 || byte_75C08 || dword_734EC > 3 )
      {
        snprintf(s, 0x800u, "Stratum reconnect requested from pool %d to %s", *a1, v51);
        sub_3F1C0(4, s, 0);
      }
      sub_18CF4(a1);
      if ( pthread_mutex_lock((pthread_mutex_t *)a1 + 30) )
      {
        v33 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v33, "util.c", "parse_reconnect", 2725);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      sub_2BF0C((int)a1);
      v34 = (void *)a1[150];
      v35 = v49;
      a1[150] = v49;
      a1[144] = v35;
      free(v34);
      v36 = (void *)a1[146];
      a1[146] = v50;
      free(v36);
      if ( pthread_mutex_unlock((pthread_mutex_t *)a1 + 30) )
      {
        v37 = _errno_location();
        snprintf(
          s,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v37,
          "util.c",
          "parse_reconnect",
          2734);
        sub_3F1C0(3, s, 1);
        sub_132C4(1);
      }
      off_72D00(0);
      v4 = sub_32EE4((pthread_mutex_t *)a1);
    }
    else
    {
      v4 = 0;
    }
    goto LABEL_163;
  }
  v10 = sub_2C940(v9, 0);
  if ( sub_2BD70(v10, "util.c", "parse_extranonce", 2632) )
  {
    if ( a1[473] )
    {
      v15 = sub_57588(v9, 1);
      v16 = sub_5786C(v15);
      if ( (unsigned int)(v16 - 2) > 0xE )
      {
        if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
        {
          strcpy(s, "Failed to get valid n2size in parse_extranonce");
          sub_3F1C0(7, s, 0);
        }
        goto LABEL_20;
      }
      v14 = v16;
    }
    else
    {
      v14 = 12;
    }
    if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
    {
      v17 = _errno_location();
      snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v17, "util.c", "parse_extranonce", 2651);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 61)) )
    {
      v18 = _errno_location();
      snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v18, "util.c", "parse_extranonce", 2651);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    a1[153] = v10;
    a1[395] = strlen(v10) >> 1;
    free((void *)a1[154]);
    v19 = calloc(a1[395], 1u);
    a1[154] = v19;
    if ( !v19 )
    {
      snprintf(s, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "parse_extranonce", 2657);
      sub_3F1C0(3, s, 1);
      sub_132C4(1);
    }
    sub_2CE9C((_BYTE *)a1[154], (unsigned __int8 *)a1[153], a1[395]);
    a1[158] = v14;
    if ( byte_78D98 || byte_75C08 || dword_734EC > 4 )
    {
      snprintf(s, 0x800u, "%s, pool->n2size %d", "parse_extranonce", v14);
      sub_3F1C0(5, s, 0);
    }
    if ( byte_75C09 && (byte_78D98 || byte_75C08 || dword_734EC > 6) )
    {
      snprintf(
        s,
        0x800u,
        "Pool %d confirmed mining.extranonce.subscribe with extranonce1 %s extran2size %d",
        *a1,
        (const char *)a1[153],
        a1[158]);
      sub_3F1C0(7, s, 0);
    }
    sub_2C960((pthread_rwlock_t *)(a1 + 61), "util.c", "parse_extranonce", 2663);
    v20 = sub_2C048((pthread_mutex_t *)(a1 + 55), "util.c", "parse_extranonce", 2663);
    off_72D00(v20);
    v4 = 1;
    goto LABEL_163;
  }
  if ( byte_75C09 )
  {
    if ( byte_78D98 || byte_75C08 || dword_734EC > 6 )
    {
      strcpy(s, "Failed to get valid nonce1 in parse_extranonce");
      sub_3F1C0(7, s, 0);
      v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = 0;
  }
LABEL_163:
  v47 = *(_DWORD *)(v6 + 4);
  if ( v47 != -1 )
  {
    v46 = v47 - 1;
    *(_DWORD *)(v6 + 4) = v46;
    if ( !v46 )
      sub_57A64(v6);
  }
  return v4;
}
