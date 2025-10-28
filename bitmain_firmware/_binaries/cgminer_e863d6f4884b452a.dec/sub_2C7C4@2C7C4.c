int __fastcall sub_2C7C4(_DWORD *a1, const char *a2)
{
  double v2; // d0
  int v5; // r0
  int v6; // r5
  int v7; // r6
  _DWORD *v8; // r8
  _DWORD *v9; // r9
  const char *v10; // r0
  const char *v11; // r6
  int v12; // r0
  int v13; // r0
  size_t v14; // r0
  int v15; // r4
  int v16; // r3
  int v17; // r3
  const char *v19; // r4
  char *v20; // r0
  int v21; // r0
  int v22; // r4
  char *v23; // r12
  unsigned int v24; // r0
  unsigned int v25; // t1
  int v26; // r3
  unsigned int v27; // r2
  double v28; // d9
  char *v29; // r8
  size_t v30; // r11
  const char *v31; // r6
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int *v36; // r6
  int v37; // r0
  int v38; // r1
  int v39; // r2
  int v40; // r3
  int v41; // r1
  int v42; // r2
  int v43; // r3
  int v44; // r0
  const char *v45; // r4
  const char *v46; // r8
  char *v47; // r6
  char *v48; // r0
  int v49; // r0
  int v50; // r0
  int v51; // r0
  int v52; // r9
  int v53; // r0
  const char *v54; // r0
  int v55; // r3
  void *v56; // r0
  void *v57; // r0
  int v58; // r0
  int v59; // r0
  void *v60; // r0
  size_t v61; // r11
  _BYTE *v62; // r0
  int v63; // r3
  int *v64; // r0
  int *v65; // r0
  int *v66; // r0
  int *v67; // r0
  int v68; // [sp+14h] [bp-2208h] BYREF
  char *v69; // [sp+18h] [bp-2204h] BYREF
  _DWORD v70[23]; // [sp+1Ch] [bp-2200h] BYREF
  char v71[160]; // [sp+78h] [bp-21A4h] BYREF
  char v72[256]; // [sp+118h] [bp-2104h] BYREF
  char s[8196]; // [sp+218h] [bp-2004h] BYREF

  v5 = sub_475C8(a2, 0, v70);
  if ( v5 )
  {
    v6 = v5;
    v7 = sub_47F24(v5, "method");
    if ( !v7 )
      goto LABEL_21;
    v8 = (_DWORD *)sub_47F24(v6, "error");
    v9 = (_DWORD *)sub_47F24(v6, "params");
    if ( v8 && *v8 != 7 )
    {
      v19 = (const char *)sub_46454(v8, 3);
      if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
      {
        snprintf(s, 0x800u, "JSON-RPC method decode failed: %s", v19);
        sub_343C4(7, s, 0);
      }
      v20 = (char *)v19;
      v15 = 0;
      free(v20);
      goto LABEL_22;
    }
    v10 = (const char *)sub_4813C(v7);
    v11 = v10;
    if ( !v10 )
      goto LABEL_21;
    if ( !strncasecmp(v10, "mining.notify", 0xDu) )
    {
      if ( dword_6CA78 == 1 )
      {
        v15 = sub_2842C((int)a1, v9);
      }
      else
      {
        if ( dword_6CA78 )
        {
          strcpy(s, "Fatal Error Coin Type");
          sub_343C4(3, s, 1);
          sub_26B0C(1);
        }
        v15 = sub_29198((int)a1, v9);
      }
      if ( v15 )
      {
        *((_BYTE *)a1 + 643) = 1;
      }
      else
      {
        v15 = 0;
        *((_BYTE *)a1 + 643) = 0;
      }
      goto LABEL_22;
    }
    if ( strncasecmp(v11, "mining.set_extranonce", 0x15u) )
    {
      if ( !strncasecmp(v11, "mining.set_difficulty", 0x15u) )
      {
        if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
        {
          snprintf(s, 0x800u, "mining.set_difficulty: %s", a2);
          sub_343C4(7, s, 0);
        }
        v21 = sub_48048(v9, 0);
        sub_482A8(v21);
        if ( v2 == 0.0 )
          goto LABEL_21;
        v22 = 0;
        sub_1A9C0((int)v72);
        v23 = &v72[32];
LABEL_44:
        v25 = *((_DWORD *)v23 - 1);
        v23 -= 4;
        v24 = v25;
        v26 = 31;
        while ( 1 )
        {
          v27 = v24 >> v26--;
          if ( (v27 & 1) != 0 )
            break;
          v22 = (unsigned __int8)(v22 + 1);
          if ( v26 == -1 )
          {
            if ( v23 != v72 )
              goto LABEL_44;
            break;
          }
        }
        if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 55)) )
          sub_28044("parse_diff", 2642);
        if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 61)) )
        {
          v66 = _errno_location();
          snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v66, "util.c", "parse_diff", 2642);
          sub_343C4(3, s, 1);
          sub_26B0C(1);
        }
        v28 = *((double *)a1 + 233);
        *((double *)a1 + 233) = v2;
        a1[471] = v22;
        if ( pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 61)) )
        {
          v65 = _errno_location();
          snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v65, "util.c", "parse_diff", 2646);
          sub_343C4(3, s, 1);
          sub_26B0C(1);
        }
        if ( pthread_mutex_unlock((pthread_mutex_t *)(a1 + 55)) )
        {
          v64 = _errno_location();
          snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v64, "util.c", "parse_diff", 2646);
          sub_343C4(3, s, 1);
          sub_26B0C(1);
        }
        off_6CB70(0);
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
        {
          snprintf(s, 0x800u, "pool diff: %d, sdiff: %8.4f", a1[471], *((double *)a1 + 233));
          sub_343C4(5, s, 0);
        }
        v15 = (unsigned __int8)byte_6FA71;
        if ( v2 == v28 )
        {
          if ( !byte_6FA71 )
            goto LABEL_94;
          if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
            goto LABEL_22;
          snprintf(s, 0x800u, "Pool %d difficulty set to %f", *a1, v2);
        }
        else
        {
          if ( v2 != (double)(int)v2 )
          {
            if ( byte_6FA71 )
            {
              if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
              {
                snprintf(s, 0x800u, "Pool %d difficulty changed to %.1f", *a1, v2);
                goto LABEL_62;
              }
              goto LABEL_22;
            }
LABEL_94:
            v15 = 1;
            goto LABEL_22;
          }
          if ( !byte_6FA71 )
            goto LABEL_94;
          if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 6 )
            goto LABEL_22;
          snprintf(s, 0x800u, "Pool %d difficulty changed to %d", *a1, (int)v2);
        }
LABEL_62:
        sub_343C4(7, s, 0);
        goto LABEL_22;
      }
      if ( strncasecmp(v11, "client.reconnect", 0x10u) )
      {
        if ( !strncasecmp(v11, "client.get_version", 0x12u) )
        {
          if ( sub_47F24(v6, "id") )
          {
            v49 = sub_47F24(v6, "id");
            v50 = sub_481D0(v49);
            sprintf(s, "{\"id\": %d, \"result\": \"cgminer_dr5/4.9.0\", \"error\": null}", v50);
            goto LABEL_20;
          }
LABEL_21:
          v15 = 0;
          goto LABEL_22;
        }
        if ( strncasecmp(v11, "client.show_message", 0x13u) )
        {
          if ( !strncasecmp(v11, "mining.ping", 0xBu) )
          {
            if ( byte_6FA71 && (byte_73320 || byte_6FA70 || dword_6D35C > 6) )
            {
              snprintf(s, 0x800u, "Pool %d ping", *a1);
              sub_343C4(7, s, 0);
            }
            if ( sub_47F24(v6, "id") )
            {
              v12 = sub_47F24(v6, "id");
              v13 = sub_481D0(v12);
              sprintf(s, "{\"id\": %d, \"result\": \"pong\", \"error\": null}", v13);
LABEL_20:
              v14 = strlen(s);
              v15 = sub_2AD28((pthread_mutex_t *)a1, s, v14);
              goto LABEL_22;
            }
          }
          goto LABEL_21;
        }
        if ( !v9 )
          goto LABEL_21;
        if ( *v9 != 1 )
          goto LABEL_21;
        v58 = sub_48048(v9, 0);
        v59 = sub_4813C(v58);
        if ( !v59 )
          goto LABEL_21;
        v15 = (unsigned __int8)byte_6FA71;
        if ( byte_6FA71 )
        {
          if ( byte_73320 || byte_6FA70 || dword_6D35C > 6 )
          {
            snprintf(s, 0x800u, "Pool %d message: %s", *a1, v59);
            goto LABEL_62;
          }
LABEL_22:
          v16 = *(_DWORD *)(v6 + 4);
          if ( v16 != -1 )
          {
            v17 = v16 - 1;
            *(_DWORD *)(v6 + 4) = v17;
            if ( !v17 )
              sub_482FC(v6);
          }
          return v15;
        }
        goto LABEL_94;
      }
      memset(v72, 0, 0xFFu);
      v44 = sub_48048(v9, 0);
      v45 = (const char *)sub_4813C(v44);
      if ( v45 )
      {
        v46 = (const char *)a1[150];
        v47 = strchr(v46, 46);
        if ( !v47 )
        {
          if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
            goto LABEL_21;
          snprintf(s, 0x800u, "Denied stratum reconnect request for pool without domain '%s'", v46);
          goto LABEL_90;
        }
        v48 = strchr(v45, 46);
        if ( !v48 )
        {
          if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
            goto LABEL_21;
          snprintf(s, 0x800u, "Denied stratum reconnect request to url without domain '%s'", v45);
          goto LABEL_90;
        }
        if ( strcmp(v47, v48) )
        {
          if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 2 )
            goto LABEL_21;
          snprintf(s, 0x800u, "Denied stratum reconnect request to non-matching domain url '%s'", v46);
LABEL_90:
          v15 = 0;
          sub_343C4(3, s, 0);
          goto LABEL_22;
        }
      }
      else
      {
        v45 = (const char *)a1[150];
      }
      v53 = sub_48048(v9, 1);
      v54 = (const char *)sub_4813C(v53);
      if ( !v54 )
        v54 = (const char *)a1[146];
      snprintf(v72, 0xFEu, "%s:%s", v45, v54);
      if ( sub_2A97C(v72, &v68, &v69) )
      {
        if ( byte_73320 || byte_6FA70 || dword_6D35C > 3 )
        {
          snprintf(s, 0x800u, "Stratum reconnect requested from pool %d to %s", *a1, v72);
          sub_343C4(4, s, 0);
        }
        sub_1EEFC(a1);
        if ( pthread_mutex_lock((pthread_mutex_t *)a1 + 30) )
          sub_28044("parse_reconnect", 2768);
        sub_27BA0((int)a1);
        v55 = v68;
        v56 = (void *)a1[150];
        a1[144] = v68;
        a1[150] = v55;
        free(v56);
        v57 = (void *)a1[146];
        a1[146] = v69;
        free(v57);
        if ( pthread_mutex_unlock((pthread_mutex_t *)a1 + 30) )
        {
          v67 = _errno_location();
          snprintf(
            s,
            0x800u,
            "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v67,
            "util.c",
            "parse_reconnect",
            2777);
          sub_343C4(3, s, 1);
          sub_26B0C(1);
        }
        off_6CB70(0);
        v15 = sub_2C77C((pthread_mutex_t *)a1);
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    v29 = sub_27E58(v9, 0);
    v15 = sub_27EB0(v29, "parse_extranonce", 2673);
    if ( !v15 )
    {
      if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
      {
        strcpy(s, "Failed to get valid nonce1 in parse_extranonce");
        sub_343C4(5, s, 0);
        goto LABEL_22;
      }
      goto LABEL_21;
    }
    v30 = strlen(v29) >> 1;
    if ( v30 > 0xC )
    {
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
        goto LABEL_81;
      v31 = "Failed to get valid nonce1 in initiate_stratum";
LABEL_80:
      v32 = *(_DWORD *)v31;
      v33 = *((_DWORD *)v31 + 1);
      v34 = *((_DWORD *)v31 + 2);
      v35 = *((_DWORD *)v31 + 3);
      v36 = (int *)(v31 + 16);
      *(_DWORD *)s = v32;
      *(_DWORD *)&s[4] = v33;
      *(_DWORD *)&s[8] = v34;
      *(_DWORD *)&s[12] = v35;
      v37 = *v36;
      v38 = v36[1];
      v39 = v36[2];
      v40 = v36[3];
      v36 += 4;
      *(_DWORD *)&s[16] = v37;
      *(_DWORD *)&s[20] = v38;
      *(_DWORD *)&s[24] = v39;
      *(_DWORD *)&s[28] = v40;
      v41 = v36[1];
      v42 = v36[2];
      v43 = v36[3];
      *(_DWORD *)&s[32] = *v36;
      *(_DWORD *)&s[36] = v41;
      *(_DWORD *)&s[40] = v42;
      *(_WORD *)&s[44] = v43;
      s[46] = BYTE2(v43);
      sub_343C4(5, s, 0);
LABEL_81:
      v15 = 0;
      free(v29);
      goto LABEL_22;
    }
    v51 = sub_48048(v9, 1);
    v52 = sub_481D0(v51);
    if ( (unsigned int)(v52 - 2) > 0xA )
    {
      if ( !byte_73320 && !byte_6FA70 && dword_6D35C <= 4 )
        goto LABEL_81;
      v31 = "Failed to get valid n2size in parse_extranonce";
      goto LABEL_80;
    }
    sub_2808C((int)(a1 + 55), "parse_extranonce", 2693);
    a1[395] = v30;
    v60 = (void *)a1[154];
    a1[153] = v29;
    free(v60);
    v61 = a1[395];
    v62 = calloc(v61, 1u);
    a1[154] = v62;
    if ( !v62 )
    {
      snprintf(s, 0x800u, "Failed to calloc pool->nonce1bin in %s %s():%d", "util.c", "parse_extranonce", 2699);
      sub_343C4(3, s, 1);
      sub_26B0C(1);
    }
    sub_28324(v62, (unsigned __int8 *)a1[153], v61);
    v63 = (unsigned __int8)byte_73320;
    a1[158] = v52;
    *((_BYTE *)a1 + 1900) = 0;
    if ( v63 || byte_6FA70 || dword_6D35C > 4 )
    {
      snprintf(s, 0x800u, "%s, pool->n2size %d", "parse_extranonce", v52);
      sub_343C4(5, s, 0);
      if ( !byte_6FA71 )
        goto LABEL_142;
      if ( byte_73320 || byte_6FA70 )
        goto LABEL_141;
    }
    else if ( !byte_6FA71 )
    {
      goto LABEL_142;
    }
    if ( dword_6D35C > 6 )
    {
LABEL_141:
      snprintf(
        s,
        0x800u,
        "Pool %d confirmed mining.extranonce.subscribe with extranonce1 %s extran2size %d",
        *a1,
        (const char *)a1[153],
        a1[158]);
      sub_343C4(7, s, 0);
    }
LABEL_142:
    sub_28114((int)(a1 + 55), "parse_extranonce", 2706);
    goto LABEL_22;
  }
  v15 = (unsigned __int8)byte_6FA71;
  if ( byte_6FA71 )
  {
    if ( byte_73320 || (v15 = (unsigned __int8)byte_6FA70, byte_6FA70) || dword_6D35C > 6 )
    {
      v15 = 0;
      snprintf(s, 0x800u, "JSON decode failed(%d): %s", v70[0], v71);
      sub_343C4(7, s, 0);
    }
  }
  return v15;
}
