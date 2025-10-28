bool __fastcall sub_3F4E4(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _BOOL4 v7; // r4
  _DWORD *v9; // r0
  const char *v10; // r7
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  char *v17; // r11
  _DWORD *v18; // r0
  const char *v19; // r10
  _DWORD *v20; // r0
  bool v21; // r4
  const char *v22; // r0
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r2
  int i; // r4
  char *v28; // r5
  void *v29; // r10
  unsigned __int8 *v30; // r7
  unsigned __int8 *v31; // r3
  unsigned __int8 *v32; // r2
  bool v33; // cf
  unsigned int v34; // t1
  bool v35; // cc
  int j; // r0
  int v37; // t1
  _BOOL4 v38; // r1
  int v39; // r2
  void *v40; // r8
  void *v41; // r0
  void *v42; // r9
  unsigned int *v43; // r3
  int *v44; // r1
  unsigned int v45; // t1
  int v46; // r1
  signed int v47; // r10
  _DWORD *v48; // r0
  unsigned __int8 *v49; // r4
  void *v50; // r0
  size_t v51; // r0
  int v52; // lr
  int v53; // [sp+14h] [bp-1038h]
  const char *v54; // [sp+18h] [bp-1034h]
  unsigned int v55; // [sp+18h] [bp-1034h]
  char *s; // [sp+1Ch] [bp-1030h]
  _BOOL4 v57; // [sp+20h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+28h] [bp-1024h]
  void *ptr; // [sp+2Ch] [bp-1020h]
  char *ptra; // [sp+2Ch] [bp-1020h]
  size_t n; // [sp+30h] [bp-101Ch]
  size_t v62; // [sp+34h] [bp-1018h]
  size_t nmemb; // [sp+38h] [bp-1014h]
  int v64; // [sp+3Ch] [bp-1010h]
  int v65; // [sp+44h] [bp-1008h] BYREF
  char v66[4100]; // [sp+48h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v53 = (int)json_array_size(v5);
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v15);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  v19 = (const char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v54 = (const char *)json_string_value(v20);
  if ( json_array_get(a3, 8u) )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v57 = v21;
  }
  else
  {
    v21 = 0;
    v57 = 0;
  }
  if ( valid_ascii(v10) && valid_hex(v12) && valid_hex(v14) && valid_hex(v17) && valid_hex(v19) && valid_hex(v54) )
  {
    settime_based_notify_ntime(v54);
    if ( a2 == (int *)-456 )
      return 0;
    v22 = (const char *)a2[395];
    if ( v22 && !strcmp(v22, v10) )
    {
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        112,
        80,
        v66);
    }
    if ( strlen(v10) > 0x1F )
    {
      V_LOCK();
      v51 = strlen(v10);
      logfmt_raw(v66, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v10, v51);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        115,
        80,
        v66);
    }
    mutex = (pthread_mutex_t *)(a2 + 398);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    ptr = (void *)a2[395];
    a2[395] = (int)_strdup(v10);
    if ( ptr )
      free(ptr);
    snprintf((char *)a2 + 100, 0x41u, "%s", v12);
    ptra = (char *)(strlen(v12) >> 1);
    nmemb = strlen(v17) >> 1;
    n = strlen(v14) >> 1;
    v62 = strlen(s) >> 1;
    snprintf((char *)a2 + 332, 9u, "%s", v17);
    snprintf((char *)a2 + 344, 9u, "%s", v19);
    snprintf((char *)a2 + 356, 9u, "%s", v54);
    strcpy((char *)a2 + 1556, v54);
    v23 = a2[21];
    v24 = a2[81];
    v25 = n + a2[19];
    *((_BYTE *)a2 + 444) = v21;
    a2[80] = v25;
    v55 = v62 + v23 + v25;
    a2[74] = v55;
    if ( v24 > 0 )
    {
      v26 = a2[82];
      for ( i = 0; i < v24; ++i )
      {
        if ( *(_DWORD *)(v26 + 4 * i) )
        {
          free(*(void **)(v26 + 4 * i));
          v26 = a2[82];
          v24 = a2[81];
          *(_DWORD *)(v26 + 4 * i) = 0;
        }
      }
    }
    if ( v53 )
    {
      v47 = 0;
      a2[82] = (int)realloc((void *)a2[82], 4 * v53);
      while ( 1 )
      {
        v64 = 4 * v47;
        if ( v53 <= v47 )
          break;
        v48 = json_array_get(v6, v47);
        v49 = (unsigned __int8 *)json_string_value(v48);
        v65 = a2[82];
        v50 = malloc(0x20u);
        *(_DWORD *)(v65 + 4 * v47) = v50;
        if ( !v50 )
        {
          V_LOCK();
          logfmt_raw(v66, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            164,
            "stratum_notify_dcr",
            18,
            146,
            100,
            v66);
        }
        if ( opt_protocol )
        {
          V_LOCK();
          logfmt_raw(v66, 0x1000u, 0, "merkle %d: %s", v47, v49);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            164,
            "stratum_notify_dcr",
            18,
            148,
            20,
            v66);
        }
        ++v47;
        if ( !hex2bin(*(_DWORD *)(a2[82] + v64), v49, 32) )
        {
          v7 = 0;
          V_LOCK();
          logfmt_raw(v66, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
            164,
            "stratum_notify_dcr",
            18,
            153,
            100,
            v66);
          pthread_mutex_unlock(mutex);
          return v7;
        }
      }
    }
    a2[81] = v53;
    if ( v57 )
      *((_QWORD *)a2 + 39) = 0;
    v28 = (char *)calloc((size_t)ptra, 1u);
    v7 = hex2bin((int)v28, (unsigned __int8 *)v12, (int)ptra);
    if ( v7 )
    {
      v29 = calloc(nmemb, 1u);
      if ( hex2bin((int)v29, (unsigned __int8 *)v17, nmemb) )
      {
        v30 = (unsigned __int8 *)calloc(n, 1u);
        if ( hex2bin((int)v30, (unsigned __int8 *)v14, n) )
        {
          v31 = v30 + 32;
          v32 = v30 + 160;
          v33 = v30[32] == 255;
          if ( v30[32] != 255 )
            v33 = v31 >= v32;
          if ( !v33 )
          {
            do
            {
              v34 = *++v31;
              v35 = v34 > 0xFF;
              if ( v34 != 255 )
                v35 = v32 > v31;
            }
            while ( v35 );
          }
          for ( j = *v31; ; j = v37 )
          {
            v38 = j == 255;
            if ( v32 <= v31 )
              v38 = 0;
            if ( !v38 )
              break;
            v37 = *++v31;
          }
          if ( *(v31 - 1) == 255 && *(v31 - 2) == 255 )
          {
            v46 = v31[1];
            v39 = (unsigned __int16)(v31[2] + (v31[3] << 8));
            if ( v46 == 3 )
            {
              v39 += v31[4] << 16;
            }
            else if ( v46 == 4 )
            {
              v39 += (v31[4] + (v31[5] << 8)) << 16;
            }
          }
          else
          {
            v39 = 0;
          }
          a2[411] = v39;
          v40 = calloc(v62, 1u);
          v7 = hex2bin((int)v40, (unsigned __int8 *)s, v62);
          if ( v7 )
          {
            v41 = (void *)a2[75];
            if ( v41 )
              free(v41);
            if ( (v55 & 3) != 0 )
              v55 = (v55 & 0xFFFFFFFC) + 4;
            v42 = calloc(v55, 1u);
            a2[75] = (int)v42;
            if ( !v42 )
            {
              V_LOCK();
              logfmt_raw(v66, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
                164,
                "stratum_notify_dcr",
                18,
                197,
                100,
                v66);
            }
            v43 = (unsigned int *)(v28 - 4);
            v44 = &v65;
            do
            {
              v45 = v43[1];
              ++v43;
              v44[1] = bswap32(v45);
              ++v44;
            }
            while ( v28 + 28 != (char *)v43 );
            memcpy((void *)a2[75], v30, n);
            memcpy(a2 + 116, v29, nmemb);
            memcpy((char *)a2 + nmemb + 464, v66, (size_t)ptra);
            memcpy(&ptra[nmemb + (_DWORD)(a2 + 116)], v30, n);
            memcpy(a2 + 152, (const void *)a2[20], a2[19]);
            memcpy(a2 + 160, v40, v62);
            *((_QWORD *)a2 + 57) = *a2;
            pthread_mutex_unlock(mutex);
            if ( !v28 )
              goto LABEL_59;
            goto LABEL_57;
          }
          V_LOCK();
          logfmt_raw(v66, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
          V_UNLOCK();
          v52 = 190;
        }
        else
        {
          V_LOCK();
          v40 = 0;
          logfmt_raw(v66, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
          V_UNLOCK();
          v52 = 182;
        }
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
          164,
          "stratum_notify_dcr",
          18,
          v52,
          100,
          v66);
      }
      else
      {
        V_LOCK();
        v40 = 0;
        logfmt_raw(v66, 0x1000u, 0, "Failed to convert block_version to block_version_bin in parse_notify");
        V_UNLOCK();
        v30 = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
          164,
          "stratum_notify_dcr",
          18,
          174,
          100,
          v66);
      }
      pthread_mutex_unlock(mutex);
      if ( !v28 )
      {
        v7 = 0;
LABEL_58:
        if ( !v29 )
        {
LABEL_60:
          if ( v30 )
            free(v30);
          if ( v40 )
            free(v40);
          return v7;
        }
LABEL_59:
        free(v29);
        goto LABEL_60;
      }
      v7 = 0;
    }
    else
    {
      V_LOCK();
      logfmt_raw(v66, 0x1000u, 0, "Failed to convert prev_bloc_hash to prev_bloc_hash_bin in parse_notify");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        166,
        100,
        v66);
      pthread_mutex_unlock(mutex);
      if ( !v28 )
        return v7;
      v40 = 0;
      v30 = 0;
      v29 = 0;
    }
LABEL_57:
    free(v28);
    goto LABEL_58;
  }
  V_LOCK();
  logfmt_raw(v66, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_dcr/frontend_dcr.c",
    164,
    "stratum_notify_dcr",
    18,
    104,
    100,
    v66);
  return 0;
}
