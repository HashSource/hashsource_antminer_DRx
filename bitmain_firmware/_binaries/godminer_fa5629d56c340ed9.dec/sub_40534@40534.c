bool __fastcall sub_40534(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r9
  int v9; // r8
  _DWORD *v10; // r0
  const char *v11; // r6
  _DWORD *v12; // r0
  const char *v13; // r7
  _DWORD *v14; // r0
  char *v15; // r11
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // r9
  const char *v22; // r0
  size_t v23; // r0
  void *v24; // r10
  int v25; // r1
  int v26; // r2
  size_t v27; // r3
  int v28; // r3
  int i; // r9
  void *v30; // r10
  void *v31; // r0
  void *v32; // r8
  int v33; // r5
  char *v34; // r2
  signed int v35; // r6
  _DWORD *v36; // r0
  unsigned __int8 *v37; // r0
  int v38; // r10
  unsigned __int8 *v39; // r9
  void *v40; // r0
  char *s; // [sp+1Ch] [bp-1138h]
  const char *v42; // [sp+20h] [bp-1134h]
  const char *v43; // [sp+24h] [bp-1130h]
  const char *v44; // [sp+28h] [bp-112Ch]
  _BOOL4 v45; // [sp+2Ch] [bp-1128h]
  void *src; // [sp+30h] [bp-1124h]
  size_t n; // [sp+34h] [bp-1120h]
  unsigned int v48; // [sp+38h] [bp-111Ch]
  size_t nmemb; // [sp+40h] [bp-1114h]
  const char *v50; // [sp+44h] [bp-1110h]
  pthread_mutex_t *mutex; // [sp+48h] [bp-110Ch]
  int v52; // [sp+5Ch] [bp-10F8h]
  char v53[228]; // [sp+6Ch] [bp-10E8h] BYREF
  char v54[4100]; // [sp+150h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v9 = (int)json_array_size(v5);
  v10 = json_array_get(a3, 0);
  v11 = (const char *)json_string_value(v10);
  v12 = json_array_get(a3, 1u);
  v13 = (const char *)json_string_value(v12);
  v14 = json_array_get(a3, 2u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 3u);
  s = (char *)json_string_value(v16);
  v17 = json_array_get(a3, 5u);
  v42 = (const char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v44 = (const char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v43 = (const char *)json_string_value(v19);
  v20 = json_array_get(a3, 8u);
  v21 = (char)v20;
  if ( v20 )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v45 = v21;
  }
  else
  {
    v45 = 0;
  }
  if ( valid_ascii(v11)
    && valid_hex(v13)
    && valid_hex(v15)
    && valid_hex(s)
    && valid_hex(v42)
    && valid_hex(v44)
    && valid_hex(v43) )
  {
    settime_based_notify_ntime(v43);
    if ( a2 != -456 )
    {
      v22 = *(const char **)(a2 + 1580);
      if ( v22 && !strcmp(v22, v11) )
      {
        V_LOCK();
        logfmt_raw(
          v54,
          0x1000u,
          0,
          "Stratum notify: new job's job_id doesnot change, %s, %s",
          *(_DWORD *)(a2 + 1580),
          v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          89,
          80,
          v54);
      }
      if ( strlen(v11) > 0x3F )
      {
        V_LOCK();
        v23 = strlen(v11);
        logfmt_raw(v54, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 64", v11, v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          92,
          80,
          v54);
      }
      mutex = (pthread_mutex_t *)(a2 + 1592);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
      v24 = *(void **)(a2 + 1580);
      *(_DWORD *)(a2 + 1580) = _strdup(v11);
      if ( v24 )
        free(v24);
      snprintf((char *)(a2 + 100), 0x41u, "%s", v13);
      nmemb = strlen(v15) >> 1;
      n = strlen(s) >> 1;
      snprintf((char *)(a2 + 332), 9u, "%s", v42);
      snprintf((char *)(a2 + 344), 9u, "%s", v44);
      snprintf((char *)(a2 + 356), 9u, "%s", v43);
      v25 = *(_DWORD *)(a2 + 84);
      v26 = *(_DWORD *)(a2 + 324);
      v27 = nmemb + *(_DWORD *)(a2 + 76);
      *(_DWORD *)(a2 + 320) = v27;
      *(_BYTE *)(a2 + 444) = v21;
      v48 = n + v25 + v27;
      *(_DWORD *)(a2 + 296) = v48;
      if ( v26 > 0 )
      {
        v28 = *(_DWORD *)(a2 + 328);
        for ( i = 0; i < v26; ++i )
        {
          if ( *(_DWORD *)(v28 + 4 * i) )
          {
            free(*(void **)(v28 + 4 * i));
            v28 = *(_DWORD *)(a2 + 328);
            v26 = *(_DWORD *)(a2 + 324);
            *(_DWORD *)(v28 + 4 * i) = 0;
          }
        }
      }
      if ( v9 )
      {
        v50 = v11;
        v35 = 0;
        *(_DWORD *)(a2 + 328) = realloc(*(void **)(a2 + 328), 4 * v9);
        do
        {
          v52 = 4 * v35;
          if ( v9 <= v35 )
          {
            v11 = v50;
            goto LABEL_30;
          }
          v36 = json_array_get(v6, v35);
          v37 = (unsigned __int8 *)json_string_value(v36);
          v38 = *(_DWORD *)(a2 + 328);
          v39 = v37;
          v40 = malloc(0x20u);
          *(_DWORD *)(v38 + 4 * v35) = v40;
          if ( !v40 )
          {
            V_LOCK();
            logfmt_raw(v54, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              120,
              100,
              v54);
            set_miner_6060info_malloc_failed_err(1);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw(v54, 0x1000u, 0, "merkle %d: %s", v35, v39);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              124,
              20,
              v54);
          }
          ++v35;
        }
        while ( hex2bin(*(_DWORD *)(*(_DWORD *)(a2 + 328) + v52), v39, 32) );
        v7 = 0;
        v11 = v50;
        v30 = 0;
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
        V_UNLOCK();
        src = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          129,
          100,
          v54);
        set_miner_6060info_malloc_failed_err(1);
      }
      else
      {
LABEL_30:
        *(_DWORD *)(a2 + 324) = v9;
        if ( v45 )
          *(_QWORD *)(a2 + 312) = 0;
        snprintf(
          v53,
          0xE1u,
          "%s%s%s%s%s%s%s",
          (const char *)(a2 + 332),
          (const char *)(a2 + 100),
          "0000000000000000000000000000000000000000000000000000000000000000",
          (const char *)(a2 + 356),
          (const char *)(a2 + 344),
          "00000000",
          workpadding[0]);
        v7 = hex2bin(a2 + 168, (unsigned __int8 *)v53, 112);
        if ( v7 )
        {
          src = calloc(nmemb, 1u);
          v7 = hex2bin((int)src, (unsigned __int8 *)v15, nmemb);
          if ( v7 )
          {
            v30 = calloc(n, 1u);
            v7 = hex2bin((int)v30, (unsigned __int8 *)s, n);
            if ( v7 )
            {
              v31 = *(void **)(a2 + 300);
              if ( v31 )
                free(v31);
              if ( (v48 & 3) != 0 )
                v48 = (v48 & 0xFFFFFFFC) + 4;
              v32 = calloc(v48, 1u);
              *(_DWORD *)(a2 + 300) = v32;
              if ( !v32 )
              {
                V_LOCK();
                logfmt_raw(v54, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                  166,
                  "stratum_notify_dash",
                  19,
                  171,
                  100,
                  v54);
              }
              v33 = a2 + 464;
              memcpy(*(void **)(v33 - 164), src, nmemb);
              memcpy((void *)(*(_DWORD *)(v33 - 164) + nmemb), *(const void **)(v33 - 384), *(_DWORD *)(v33 - 388));
              memcpy((void *)(*(_DWORD *)(v33 - 164) + *(_DWORD *)(v33 - 388) + *(_DWORD *)(v33 - 380) + nmemb), v30, n);
              *(_QWORD *)(v33 - 8) = *(int *)(v33 - 464);
            }
            else
            {
              V_LOCK();
              logfmt_raw(v54, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                166,
                "stratum_notify_dash",
                19,
                164,
                100,
                v54);
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v54, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
            V_UNLOCK();
            v30 = 0;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              157,
              100,
              v54);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v54, 0x1000u, 0, "Failed to convert header to header_bin in parse_notify");
          V_UNLOCK();
          v30 = 0;
          src = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            150,
            100,
            v54);
        }
      }
      pthread_mutex_unlock(mutex);
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "job_id: %s", v11);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          189,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "prev_hash: %s", v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          190,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "coinbase1: %s", v15);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          191,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "coinbase2: %s", s);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          192,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "bbversion: %s", v42);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          193,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "nbit: %s", v44);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          194,
          20,
          v54);
        V_LOCK();
        logfmt_raw(v54, 0x1000u, 0, "ntime: %s", v43);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          195,
          20,
          v54);
        V_LOCK();
        v34 = "yes";
        if ( !v45 )
          v34 = "no";
        logfmt_raw(v54, 0x1000u, 0, "clean: %s", v34);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          196,
          20,
          v54);
      }
      if ( src )
        free(src);
      if ( v30 )
        free(v30);
      return v7;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw(v54, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_dash/frontend_dash.c",
    166,
    "stratum_notify_dash",
    19,
    81,
    100,
    v54);
  return 0;
}
