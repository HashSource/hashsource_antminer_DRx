int __fastcall sub_2DC70(pthread_mutex_t *a1, int a2)
{
  double v2; // d0
  int v4; // r0
  int v5; // r4
  int v6; // r7
  int v7; // r5
  _DWORD *v8; // r8
  const char *v9; // r0
  char *v10; // r5
  char *v11; // r0
  int v12; // r3
  int v13; // r3
  const char *v15; // r0
  const char *v16; // r7
  int v17; // r0
  int v18; // r0
  int v19; // r0
  size_t v20; // r0
  int v21; // r0
  double v22; // d9
  _BOOL4 v23; // r0
  int v24; // r0
  const char *nusers; // r5
  const char *v26; // r7
  char *v27; // r10
  char *v28; // r1
  const char *v29; // r2
  const char *v30; // r3
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r7
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int lock; // r0
  int count; // r0
  void *v40; // r0
  unsigned int v41; // r3
  void *v42; // r0
  size_t v43; // r3
  void *owner; // r0
  size_t spins; // r5
  _BYTE *v46; // r0
  int *v47; // r0
  int *v48; // r0
  int *v49; // r0
  int *v50; // r0
  unsigned int v51; // [sp+14h] [bp-2204h] BYREF
  char *v52; // [sp+18h] [bp-2200h] BYREF
  int v53[23]; // [sp+1Ch] [bp-21FCh] BYREF
  char v54[160]; // [sp+78h] [bp-21A0h] BYREF
  char v55[256]; // [sp+118h] [bp-2100h] BYREF
  char s[8168]; // [sp+218h] [bp-2000h] BYREF

  if ( !a2 )
    return 0;
  v4 = sub_45AA8(a2, 0, v53);
  v5 = v4;
  if ( !v4 )
  {
    if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
    {
      v7 = 0;
      snprintf(s, 0x800u, "JSON decode failed(%d): %s", v53[0], v54);
      sub_38438(7, s, 0);
      return v7;
    }
    return 0;
  }
  v6 = sub_46698(v4, "method");
  if ( !v6 )
    goto LABEL_17;
  v7 = sub_46698(v5, "error");
  v8 = (_DWORD *)sub_46698(v5, "params");
  if ( !v7 || *(_DWORD *)v7 == 7 )
  {
    v15 = (const char *)sub_469F0(v6);
    v16 = v15;
    if ( !v15 )
      goto LABEL_17;
    if ( !strncasecmp(v15, "mining.notify", 0xDu) )
    {
      v23 = sub_29724((int)a1, v8);
      if ( v23 )
        v7 = 1;
      else
        a1[26].__size[11] = 0;
      if ( v23 )
        a1[26].__size[11] = v7;
      else
        v7 = 0;
      goto LABEL_8;
    }
    if ( !strncasecmp(v16, "mining.set_extranonce", 0x15u) )
    {
      v10 = sub_28EC4(v8, 0);
      if ( !sub_28EDC(v10, "parse_extranonce", 2172) )
      {
        v7 = (unsigned __int8)byte_630C1;
        if ( byte_630C1 )
        {
          if ( byte_632F0 || (v7 = (unsigned __int8)byte_630C0, byte_630C0) || dword_60964 > 6 )
          {
            v7 = 0;
            strcpy(s, "Failed to get valid nonce1 in parse_extranonce");
            sub_38438(7, s, 0);
          }
        }
        goto LABEL_8;
      }
      v33 = sub_46880(v8, 1);
      v34 = sub_46AC0(v33);
      if ( (unsigned int)(v34 - 2) <= 0xE )
      {
        if ( pthread_mutex_lock((pthread_mutex_t *)((char *)a1 + 212)) )
          sub_B7D8("parse_extranonce", 2183);
        sub_29094((pthread_rwlock_t *)(&a1[9].__align + 5), "parse_extranonce", 2183);
        a1[25].__count = (unsigned int)v10;
        v43 = strlen(v10) >> 1;
        owner = (void *)a1[25].__owner;
        a1[63].__spins = v43;
        free(owner);
        spins = a1[63].__spins;
        v46 = calloc(spins, 1u);
        a1[25].__owner = (int)v46;
        if ( !v46 )
        {
          snprintf(s, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "parse_extranonce", 2189);
          sub_38438(3, s, 1);
          sub_16724(1);
        }
        sub_295B8(v46, (unsigned __int8 *)a1[25].__count, spins);
        a1[26].__lock = v34;
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          snprintf(
            s,
            0x800u,
            "Pool %d confirmed mining.extranonce.subscribe with extranonce1 %s extran2size %d",
            a1->__lock,
            (const char *)a1[25].__count,
            v34);
          sub_38438(7, s, 0);
        }
        v7 = 1;
        sub_29018((pthread_rwlock_t *)(&a1[9].__align + 5), "parse_extranonce", 2194);
        sub_29110((pthread_mutex_t *)((char *)a1 + 212), "parse_extranonce", 2194);
        off_60178();
        goto LABEL_8;
      }
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        strcpy(s, "Failed to get valid n2size in parse_extranonce");
        sub_38438(7, s, 0);
      }
      goto LABEL_7;
    }
    v7 = strncasecmp(v16, "mining.set_difficulty", 0x15u);
    if ( !v7 )
    {
      v21 = sub_46880(v8, 0);
      sub_46BF0(v21);
      if ( v2 == 0.0 )
        goto LABEL_8;
      if ( pthread_mutex_lock((pthread_mutex_t *)((char *)a1 + 212)) )
        sub_B7D8("parse_diff", 2145);
      if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(&a1[9].__align + 5)) )
      {
        v48 = _errno_location();
        snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v48, "util.c", "parse_diff", 2145);
        sub_38438(3, s, 1);
        sub_16724(1);
      }
      v22 = *((double *)&a1[74].__align + 1);
      *((double *)&a1[74].__align + 1) = v2;
      if ( pthread_rwlock_unlock((pthread_rwlock_t *)(&a1[9].__align + 5)) )
      {
        v50 = _errno_location();
        snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v50, "util.c", "parse_diff", 2148);
        sub_38438(3, s, 1);
        sub_16724(1);
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)((char *)a1 + 212)) )
      {
        v49 = _errno_location();
        snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v49, "util.c", "parse_diff", 2148);
        sub_38438(3, s, 1);
        sub_16724(1);
      }
      off_60178();
      if ( v2 == v22 )
      {
        if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
        {
          v7 = 1;
          snprintf(s, 0x800u, "Pool %d difficulty set to %f", a1->__lock, v2);
          sub_38438(7, s, 0);
          goto LABEL_8;
        }
        goto LABEL_53;
      }
      if ( v2 == (double)(int)v2 )
      {
        if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
          goto LABEL_53;
        snprintf(s, 0x800u, "Pool %d difficulty changed to %d", a1->__lock, (int)v2);
      }
      else
      {
        if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
          goto LABEL_53;
        snprintf(s, 0x800u, "Pool %d difficulty changed to %.1f", a1->__lock, v2);
      }
      goto LABEL_52;
    }
    if ( strncasecmp(v16, "client.reconnect", 0x10u) )
    {
      if ( !strncasecmp(v16, "client.get_version", 0x12u) )
      {
        v17 = sub_46698(v5, "id");
        if ( v17 )
        {
          v31 = sub_46698(v5, "id");
          v32 = sub_46AC0(v31);
          sprintf(s, "{\"id\": %d, \"result\": \"cgminer/4.9.0\", \"error\": null}", v32);
          goto LABEL_37;
        }
LABEL_104:
        v7 = v17;
        goto LABEL_8;
      }
      if ( strncasecmp(v16, "client.show_message", 0x13u) )
      {
        if ( !strncasecmp(v16, "mining.ping", 0xBu) )
        {
          if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
          {
            snprintf(s, 0x800u, "Pool %d ping", a1->__lock);
            sub_38438(7, s, 0);
          }
          v17 = sub_46698(v5, "id");
          if ( v17 )
          {
            v18 = sub_46698(v5, "id");
            v19 = sub_46AC0(v18);
            sprintf(s, "{\"id\": %d, \"result\": \"pong\", \"error\": null}", v19);
LABEL_37:
            v20 = strlen(s);
            v7 = sub_2BEA8(a1, s, v20);
            goto LABEL_8;
          }
          goto LABEL_104;
        }
LABEL_17:
        v7 = 0;
        goto LABEL_8;
      }
      if ( !v8 )
        goto LABEL_17;
      if ( *v8 != 1 )
        goto LABEL_17;
      v35 = sub_46880(v8, 0);
      v36 = sub_469F0(v35);
      if ( !v36 )
        goto LABEL_17;
      if ( !byte_630C1 || !byte_632F0 && !byte_630C0 && dword_60964 <= 6 )
      {
LABEL_53:
        v7 = 1;
        goto LABEL_8;
      }
      snprintf(s, 0x800u, "Pool %d message: %s", a1->__lock, v36);
LABEL_52:
      sub_38438(7, s, 0);
      goto LABEL_53;
    }
    memset(v55, 0, 0xFFu);
    v24 = sub_46880(v8, 0);
    nusers = (const char *)sub_469F0(v24);
    if ( !nusers )
    {
      nusers = (const char *)a1[24].__nusers;
      goto LABEL_92;
    }
    v26 = (const char *)a1[24].__nusers;
    v27 = strchr(v26, 46);
    if ( v27 )
    {
      v28 = strchr(nusers, 46);
      if ( v28 )
      {
        if ( !strcmp(v27, v28) )
        {
LABEL_92:
          v37 = sub_46880(v8, 1);
          lock = sub_469F0(v37);
          if ( !lock )
            lock = a1[24].__lock;
          snprintf(v55, 0xFEu, "%s:%s", nusers, lock);
          if ( sub_2B43C(v55, &v51, &v52) )
          {
            if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
            {
              snprintf(s, 0x800u, "Stratum reconnect requested from pool %d to %s", a1->__lock, v55);
              sub_38438(4, s, 0);
            }
            sub_17FC4(a1);
            if ( pthread_mutex_lock(a1 + 28) )
              sub_B7D8("parse_reconnect", 2252);
            sub_286F8((int)a1);
            count = a1[24].__count;
            a1[26].__size[11] = 0;
            a1[26].__size[9] = 0;
            if ( count )
              close(count);
            v40 = (void *)a1[24].__nusers;
            v41 = v51;
            a1[24].__count = 0;
            a1[23].__nusers = v41;
            a1[24].__nusers = v41;
            free(v40);
            v42 = (void *)a1[24].__lock;
            a1[24].__lock = (int)v52;
            free(v42);
            if ( pthread_mutex_unlock(a1 + 28) )
            {
              v47 = _errno_location();
              snprintf(
                s,
                0x800u,
                "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
                *v47,
                "util.c",
                "parse_reconnect",
                2261);
              sub_38438(3, s, 1);
              sub_16724(1);
            }
            off_60178();
            v7 = sub_2DC00(a1);
            goto LABEL_8;
          }
          goto LABEL_17;
        }
        if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
          goto LABEL_17;
        v29 = "Denied stratum reconnect request to non-matching domain url '%s'";
        v30 = v26;
      }
      else
      {
        if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
          goto LABEL_17;
        v30 = nusers;
        v29 = "Denied stratum reconnect request to url without domain '%s'";
      }
    }
    else
    {
      if ( !byte_632F0 && !byte_630C0 && dword_60964 <= 2 )
        goto LABEL_17;
      v30 = v26;
      v29 = "Denied stratum reconnect request for pool without domain '%s'";
    }
    v7 = 0;
    snprintf(s, 0x800u, v29, v30);
    sub_38438(3, s, 0);
    goto LABEL_8;
  }
  v9 = (const char *)sub_440CC(v7, 3);
  v10 = (char *)v9;
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(s, 0x800u, "JSON-RPC method decode failed: %s", v9);
    sub_38438(7, s, 0);
  }
LABEL_7:
  v11 = v10;
  v7 = 0;
  free(v11);
LABEL_8:
  v12 = *(_DWORD *)(v5 + 4);
  if ( v12 != -1 )
  {
    v13 = v12 - 1;
    *(_DWORD *)(v5 + 4) = v13;
    if ( !v13 )
      sub_46C5C(v5);
  }
  return v7;
}
