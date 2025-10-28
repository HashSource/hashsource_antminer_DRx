int __fastcall sub_32F10(_DWORD *a1, const char *a2)
{
  double v2; // d0
  int v5; // r5
  int v6; // r0
  int v7; // r4
  int v8; // r8
  _DWORD *v9; // r6
  _DWORD *v10; // r10
  char *v11; // r5
  const char *v12; // r0
  const char *v13; // r6
  int v14; // r0
  size_t v15; // r6
  int v16; // r0
  int v17; // r8
  int *v18; // r0
  void *v19; // r0
  int v20; // r0
  int v21; // r0
  int v22; // r9
  int *v23; // r0
  double v24; // d9
  int *v25; // r0
  int v26; // r0
  const char *v27; // r5
  const char *v28; // r6
  char *v29; // r8
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
  int v49; // [sp+14h] [bp-2204h] BYREF
  char *v50; // [sp+18h] [bp-2200h] BYREF
  char v51[256]; // [sp+1Ch] [bp-21FCh] BYREF
  char s[7908]; // [sp+11Ch] [bp-20FCh] BYREF
  _DWORD v53[9]; // [sp+211Ch] [bp-FCh] BYREF
  char v54[136]; // [sp+2178h] [bp-A0h] BYREF

  if ( !a2 )
    return 0;
  v6 = sub_5AF5C(a2, 0, v53);
  v7 = v6;
  if ( !v6 )
  {
    if ( !byte_7CC61 )
      return 0;
    if ( !byte_7FE78 && !byte_7CC60 && dword_7A52C <= 6 )
      return 0;
    snprintf(s, 0x800u, "JSON decode failed(%d): %s", v53[0], v54);
    sub_3F178(7, s, 0);
    return 0;
  }
  v8 = sub_5BC34(v6, "method");
  if ( !v8 )
  {
    v5 = 0;
    goto LABEL_168;
  }
  v9 = (_DWORD *)sub_5BC34(v7, "error");
  v10 = (_DWORD *)sub_5BC34(v7, "params");
  if ( v9 && *v9 != 7 )
  {
    v11 = (char *)sub_5942C(v9, 3);
    if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
    {
      snprintf(s, 0x800u, "JSON-RPC method decode failed: %s", v11);
      sub_3F178(7, s, 0);
    }
LABEL_50:
    free(v11);
    v5 = 0;
    goto LABEL_168;
  }
  v12 = (const char *)sub_5C084(v8);
  v13 = v12;
  if ( !v12 )
  {
    v5 = 0;
    goto LABEL_168;
  }
  if ( !strncasecmp(v12, "mining.notify", 0xDu) )
  {
    if ( dword_79C4C == 1 )
    {
      v14 = sub_2D310((int)a1, v10);
    }
    else
    {
      if ( dword_79C4C )
      {
        strcpy(s, "Fatal Error Coin Type");
        sub_3F178(3, s, 1);
        sub_134A4(1);
      }
      v14 = sub_2E4B0((int)a1, v10);
    }
    if ( v14 )
    {
      v5 = 1;
      *((_BYTE *)a1 + 643) = 1;
    }
    else
    {
      v5 = 0;
      *((_BYTE *)a1 + 643) = 0;
    }
    goto LABEL_168;
  }
  if ( strncasecmp(v13, "mining.set_extranonce", 0x15u) )
  {
    if ( !strncasecmp(v13, "mining.set_difficulty", 0x15u) )
    {
      if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
      {
        snprintf(s, 0x800u, "mining.set_difficulty: %s", a2);
        sub_3F178(7, s, 0);
      }
      v21 = sub_5BEB8(v10, 0);
      sub_5C320(v21);
      if ( v2 == 0.0 )
      {
        v5 = 0;
      }
      else
      {
        sub_12B3C((int)v51);
        v22 = sub_306E4((int)v51);
        if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
        {
          v23 = _errno_location();
          snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v23, "util.c", "parse_diff", 2642);
          sub_3F178(3, s, 1);
          sub_134A4(1);
        }
        sub_2CB78((pthread_rwlock_t *)(a1 + 61), "util.c", "parse_diff", 2642);
        v24 = *((double *)a1 + 233);
        *((double *)a1 + 233) = v2;
        a1[471] = v22;
        sub_2CBE4((pthread_rwlock_t *)(a1 + 61), "util.c", "parse_diff", 2646);
        if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
        {
          v25 = _errno_location();
          snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v25, "util.c", "parse_diff", 2646);
          sub_3F178(3, s, 1);
          sub_134A4(1);
        }
        off_79D40(0);
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          snprintf(s, 0x800u, "pool diff: %d, sdiff: %8.4f", a1[471], *((double *)a1 + 233));
          sub_3F178(5, s, 0);
        }
        if ( v2 == v24 )
        {
          if ( byte_7CC61 )
          {
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
            {
              snprintf(s, 0x800u, "Pool %d difficulty set to %f", *a1, v2);
              sub_3F178(7, s, 0);
              v5 = 1;
            }
            else
            {
              v5 = 1;
            }
          }
          else
          {
            v5 = 1;
          }
        }
        else if ( v2 == (double)(int)v2 )
        {
          if ( byte_7CC61 )
          {
            if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
            {
              snprintf(s, 0x800u, "Pool %d difficulty changed to %d", *a1, (int)v2);
              sub_3F178(7, s, 0);
              v5 = 1;
            }
            else
            {
              v5 = 1;
            }
          }
          else
          {
            v5 = 1;
          }
        }
        else if ( byte_7CC61 )
        {
          if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
          {
            snprintf(s, 0x800u, "Pool %d difficulty changed to %.1f", *a1, v2);
            sub_3F178(7, s, 0);
            v5 = 1;
          }
          else
          {
            v5 = 1;
          }
        }
        else
        {
          v5 = 1;
        }
      }
      goto LABEL_168;
    }
    if ( strncasecmp(v13, "client.reconnect", 0x10u) )
    {
      if ( !strncasecmp(v13, "client.get_version", 0x12u) )
      {
        if ( sub_5BC34(v7, "id") )
        {
          v38 = sub_5BC34(v7, "id");
          v39 = sub_5C19C(v38);
          sprintf(s, "{\"id\": %d, \"result\": \"cgminer_dr5/4.9.0\", \"error\": null}", v39);
          v40 = strlen(s);
          v5 = sub_30E24((pthread_mutex_t *)a1, s, v40);
        }
        else
        {
          v5 = 0;
        }
      }
      else if ( !strncasecmp(v13, "client.show_message", 0x13u) )
      {
        if ( v10 )
        {
          if ( *v10 == 1 )
          {
            v41 = sub_5BEB8(v10, 0);
            v42 = (const char *)sub_5C084(v41);
            if ( v42 )
            {
              if ( byte_7CC61 )
              {
                if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 6 )
                {
                  snprintf(s, 0x800u, "Pool %d message: %s", *a1, v42);
                  sub_3F178(7, s, 0);
                  v5 = 1;
                }
                else
                {
                  v5 = 1;
                }
              }
              else
              {
                v5 = 1;
              }
            }
            else
            {
              v5 = 0;
            }
          }
          else
          {
            v5 = 0;
          }
        }
        else
        {
          v5 = 0;
        }
      }
      else if ( !strncasecmp(v13, "mining.ping", 0xBu) )
      {
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(s, 0x800u, "Pool %d ping", *a1);
          sub_3F178(7, s, 0);
        }
        if ( sub_5BC34(v7, "id") )
        {
          v43 = sub_5BC34(v7, "id");
          v44 = sub_5C19C(v43);
          sprintf(s, "{\"id\": %d, \"result\": \"pong\", \"error\": null}", v44);
          v45 = strlen(s);
          v5 = sub_30E24((pthread_mutex_t *)a1, s, v45);
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        v5 = 0;
      }
      goto LABEL_168;
    }
    memset(v51, 0, 0xFFu);
    v26 = sub_5BEB8(v10, 0);
    v27 = (const char *)sub_5C084(v26);
    if ( v27 )
    {
      v28 = (const char *)a1[150];
      v29 = strchr(v28, 46);
      if ( !v29 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf(s, 0x800u, "Denied stratum reconnect request for pool without domain '%s'", v28);
          sub_3F178(3, s, 0);
          v5 = 0;
        }
        else
        {
          v5 = 0;
        }
        goto LABEL_168;
      }
      v30 = strchr(v27, 46);
      if ( !v30 )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf(s, 0x800u, "Denied stratum reconnect request to url without domain '%s'", v27);
          sub_3F178(3, s, 0);
          v5 = 0;
        }
        else
        {
          v5 = 0;
        }
        goto LABEL_168;
      }
      if ( strcmp(v29, v30) )
      {
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 2 )
        {
          snprintf(s, 0x800u, "Denied stratum reconnect request to non-matching domain url '%s'", v28);
          sub_3F178(3, s, 0);
          v5 = 0;
        }
        else
        {
          v5 = 0;
        }
        goto LABEL_168;
      }
    }
    else
    {
      v27 = (const char *)a1[150];
    }
    v31 = sub_5BEB8(v10, 1);
    v32 = (const char *)sub_5C084(v31);
    if ( !v32 )
      v32 = (const char *)a1[146];
    snprintf(v51, 0xFEu, "%s:%s", v27, v32);
    if ( sub_30358(v51, &v49, &v50) )
    {
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 3 )
      {
        snprintf(s, 0x800u, "Stratum reconnect requested from pool %d to %s", *a1, v51);
        sub_3F178(4, s, 0);
      }
      sub_18ED4(a1);
      if ( pthread_mutex_lock((pthread_mutex_t *)a1 + 30) )
      {
        v33 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v33, "util.c", "parse_reconnect", 2768);
        sub_3F178(3, s, 1);
        sub_134A4(1);
      }
      sub_2C124((int)a1);
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
          2777);
        sub_3F178(3, s, 1);
        sub_134A4(1);
      }
      off_79D40(0);
      v5 = sub_32EB0((pthread_mutex_t *)a1);
    }
    else
    {
      v5 = 0;
    }
    goto LABEL_168;
  }
  v11 = sub_2CB58(v10, 0);
  if ( sub_2BF88(v11, "util.c", "parse_extranonce", 2673) )
  {
    v15 = strlen(v11) >> 1;
    if ( v15 <= 0xC )
    {
      v16 = sub_5BEB8(v10, 1);
      v17 = sub_5C19C(v16);
      if ( (unsigned int)(v17 - 2) <= 0xA )
      {
        if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
        {
          v18 = _errno_location();
          snprintf(
            s,
            0x800u,
            "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
            *v18,
            "util.c",
            "parse_extranonce",
            2693);
          sub_3F178(3, s, 1);
          sub_134A4(1);
        }
        sub_2CB78((pthread_rwlock_t *)(a1 + 61), "util.c", "parse_extranonce", 2693);
        a1[153] = v11;
        a1[395] = v15;
        free((void *)a1[154]);
        v19 = calloc(a1[395], 1u);
        a1[154] = v19;
        if ( !v19 )
        {
          snprintf(s, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "parse_extranonce", 2699);
          sub_3F178(3, s, 1);
          sub_134A4(1);
        }
        sub_2D164((_BYTE *)a1[154], (unsigned __int8 *)a1[153], a1[395]);
        a1[158] = v17;
        *((_BYTE *)a1 + 1900) = 0;
        if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
        {
          snprintf(s, 0x800u, "%s, pool->n2size %d", "parse_extranonce", v17);
          sub_3F178(5, s, 0);
        }
        if ( byte_7CC61 && (byte_7FE78 || byte_7CC60 || dword_7A52C > 6) )
        {
          snprintf(
            s,
            0x800u,
            "Pool %d confirmed mining.extranonce.subscribe with extranonce1 %s extran2size %d",
            *a1,
            (const char *)a1[153],
            a1[158]);
          sub_3F178(7, s, 0);
        }
        sub_2CBE4((pthread_rwlock_t *)(a1 + 61), "util.c", "parse_extranonce", 2706);
        v20 = sub_2C260((pthread_mutex_t *)(a1 + 55), "util.c", "parse_extranonce", 2706);
        off_79D40(v20);
        v5 = 1;
        goto LABEL_168;
      }
      if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
      {
        strcpy(s, "Failed to get valid n2size in parse_extranonce");
        sub_3F178(5, s, 0);
      }
    }
    else if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
    {
      strcpy(s, "Failed to get valid nonce1 in initiate_stratum");
      sub_3F178(5, s, 0);
    }
    goto LABEL_50;
  }
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    strcpy(s, "Failed to get valid nonce1 in parse_extranonce");
    sub_3F178(5, s, 0);
    v5 = 0;
  }
  else
  {
    v5 = 0;
  }
LABEL_168:
  v47 = *(_DWORD *)(v7 + 4);
  if ( v47 != -1 )
  {
    v46 = v47 - 1;
    *(_DWORD *)(v7 + 4) = v46;
    if ( !v46 )
      sub_5C394(v7);
  }
  return v5;
}
