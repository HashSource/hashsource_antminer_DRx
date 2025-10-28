bool __fastcall sub_3E2AC(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _BOOL4 v7; // r6
  _DWORD *v9; // r0
  const char *v10; // r8
  _DWORD *v11; // r0
  const char *v12; // r10
  _DWORD *v13; // r0
  char *v14; // r9
  _DWORD *v15; // r0
  char *v16; // r11
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r0
  bool v21; // r6
  const char *v22; // r0
  size_t v23; // r0
  void *v24; // r7
  int v25; // r1
  int v26; // r2
  size_t v27; // r3
  int v28; // r3
  int i; // r6
  void *v30; // r0
  void *v31; // r7
  int v32; // r5
  char *v33; // r2
  signed int v34; // r7
  _DWORD *v35; // r0
  unsigned __int8 *v36; // r0
  int v37; // r6
  unsigned __int8 *v38; // r8
  void *v39; // r11
  const char *v40; // [sp+1Ch] [bp-1140h]
  int ptr; // [sp+20h] [bp-113Ch]
  void *ptra; // [sp+20h] [bp-113Ch]
  const char *v43; // [sp+24h] [bp-1138h]
  const char *v44; // [sp+28h] [bp-1134h]
  _BOOL4 v45; // [sp+2Ch] [bp-1130h]
  void *src; // [sp+30h] [bp-112Ch]
  unsigned int v47; // [sp+34h] [bp-1128h]
  size_t n; // [sp+38h] [bp-1124h]
  size_t nmemb; // [sp+40h] [bp-111Ch]
  char *v50; // [sp+44h] [bp-1118h]
  const char *v51; // [sp+48h] [bp-1114h]
  pthread_mutex_t *mutex; // [sp+54h] [bp-1108h]
  int v53; // [sp+68h] [bp-10F4h]
  char s[228]; // [sp+74h] [bp-10E8h] BYREF
  char v55[4100]; // [sp+158h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  ptr = (int)json_array_size(v5);
  v9 = json_array_get(a3, 0);
  v10 = (const char *)json_string_value(v9);
  v11 = json_array_get(a3, 1u);
  v12 = (const char *)json_string_value(v11);
  v13 = json_array_get(a3, 2u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 3u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  v40 = (const char *)json_string_value(v17);
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
  if ( valid_ascii(v10)
    && valid_hex(v12)
    && valid_hex(v14)
    && valid_hex(v16)
    && valid_hex(v40)
    && valid_hex(v44)
    && valid_hex(v43) )
  {
    settime_based_notify_ntime(v43);
    if ( a2 != -456 )
    {
      v22 = *(const char **)(a2 + 1580);
      if ( v22 && !strcmp(v22, v10) )
      {
        V_LOCK();
        logfmt_raw(
          v55,
          0x1000u,
          0,
          "Stratum notify: new job's job_id doesnot change, %s, %s",
          *(_DWORD *)(a2 + 1580),
          v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          88,
          80,
          v55);
      }
      if ( strlen(v10) > 0x3F )
      {
        V_LOCK();
        v23 = strlen(v10);
        logfmt_raw(v55, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 64", v10, v23);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          91,
          80,
          v55);
      }
      mutex = (pthread_mutex_t *)(a2 + 1592);
      pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
      v24 = *(void **)(a2 + 1580);
      *(_DWORD *)(a2 + 1580) = _strdup(v10);
      if ( v24 )
        free(v24);
      snprintf((char *)(a2 + 100), 0x41u, "%s", v12);
      nmemb = strlen(v14) >> 1;
      n = strlen(v16) >> 1;
      snprintf((char *)(a2 + 332), 9u, "%s", v40);
      snprintf((char *)(a2 + 344), 9u, "%s", v44);
      snprintf((char *)(a2 + 356), 9u, "%s", v43);
      v25 = *(_DWORD *)(a2 + 84);
      v26 = *(_DWORD *)(a2 + 324);
      v27 = nmemb + *(_DWORD *)(a2 + 76);
      *(_DWORD *)(a2 + 320) = v27;
      *(_BYTE *)(a2 + 444) = v21;
      v47 = n + v25 + v27;
      *(_DWORD *)(a2 + 296) = v47;
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
      if ( ptr )
      {
        *(_DWORD *)(a2 + 328) = realloc(*(void **)(a2 + 328), 4 * ptr);
        v34 = 0;
        v50 = v16;
        v51 = v10;
        do
        {
          v53 = 4 * v34;
          if ( ptr <= v34 )
          {
            v16 = v50;
            v10 = v51;
            goto LABEL_30;
          }
          v35 = json_array_get(v6, v34);
          v36 = (unsigned __int8 *)json_string_value(v35);
          v37 = *(_DWORD *)(a2 + 328);
          v38 = v36;
          v39 = malloc(0x20u);
          *(_DWORD *)(v37 + 4 * v34) = v39;
          if ( !v39 )
          {
            V_LOCK();
            logfmt_raw(v55, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              119,
              100,
              v55);
            V_LOCK();
            logfmt_raw(v55, 0x1000u, 0, "Sweep error string = %s.", "M:1");
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
              v55);
          }
          if ( opt_protocol )
          {
            V_LOCK();
            logfmt_raw(v55, 0x1000u, 0, "merkle %d: %s", v34, v38);
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              123,
              20,
              v55);
          }
          ++v34;
        }
        while ( hex2bin(*(_DWORD *)(*(_DWORD *)(a2 + 328) + v53), v38, 32) );
        v7 = 0;
        v16 = v50;
        v10 = v51;
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
        V_UNLOCK();
        ptra = 0;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          128,
          100,
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "Sweep error string = %s.", "M:1");
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
          v55);
      }
      else
      {
LABEL_30:
        *(_DWORD *)(a2 + 324) = ptr;
        if ( v45 )
          *(_QWORD *)(a2 + 312) = 0;
        snprintf(
          s,
          0xE1u,
          "%s%s%s%s%s%s%s",
          (const char *)(a2 + 332),
          (const char *)(a2 + 100),
          "0000000000000000000000000000000000000000000000000000000000000000",
          (const char *)(a2 + 356),
          (const char *)(a2 + 344),
          "00000000",
          workpadding[0]);
        v7 = hex2bin(a2 + 168, (unsigned __int8 *)s, 112);
        if ( v7 )
        {
          src = calloc(nmemb, 1u);
          v7 = hex2bin((int)src, (unsigned __int8 *)v14, nmemb);
          if ( v7 )
          {
            ptra = calloc(n, 1u);
            v7 = hex2bin((int)ptra, (unsigned __int8 *)v16, n);
            if ( v7 )
            {
              v30 = *(void **)(a2 + 300);
              if ( v30 )
                free(v30);
              if ( (v47 & 3) != 0 )
                v47 = (v47 & 0xFFFFFFFC) + 4;
              v31 = calloc(v47, 1u);
              *(_DWORD *)(a2 + 300) = v31;
              if ( !v31 )
              {
                V_LOCK();
                logfmt_raw(v55, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                  166,
                  "stratum_notify_dash",
                  19,
                  170,
                  100,
                  v55);
              }
              v32 = a2 + 464;
              memcpy(*(void **)(v32 - 164), src, nmemb);
              memcpy((void *)(*(_DWORD *)(v32 - 164) + nmemb), *(const void **)(v32 - 384), *(_DWORD *)(v32 - 388));
              memcpy(
                (void *)(*(_DWORD *)(v32 - 164) + *(_DWORD *)(v32 - 388) + *(_DWORD *)(v32 - 380) + nmemb),
                ptra,
                n);
              *(_QWORD *)(v32 - 8) = *(int *)(v32 - 464);
            }
            else
            {
              V_LOCK();
              logfmt_raw(v55, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
                166,
                "stratum_notify_dash",
                19,
                163,
                100,
                v55);
            }
          }
          else
          {
            V_LOCK();
            logfmt_raw(v55, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
            V_UNLOCK();
            ptra = 0;
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
              166,
              "stratum_notify_dash",
              19,
              156,
              100,
              v55);
          }
        }
        else
        {
          V_LOCK();
          logfmt_raw(v55, 0x1000u, 0, "Failed to convert header to header_bin in parse_notify");
          V_UNLOCK();
          ptra = 0;
          src = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_dash/frontend_dash.c",
            166,
            "stratum_notify_dash",
            19,
            149,
            100,
            v55);
        }
      }
      pthread_mutex_unlock(mutex);
      if ( opt_protocol )
      {
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "job_id: %s", v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_dash/frontend_dash.c",
          166,
          "stratum_notify_dash",
          19,
          188,
          20,
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "prev_hash: %s", v12);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "coinbase1: %s", v14);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "coinbase2: %s", v16);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "bbversion: %s", v40);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "nbit: %s", v44);
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
          v55);
        V_LOCK();
        logfmt_raw(v55, 0x1000u, 0, "ntime: %s", v43);
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
          v55);
        V_LOCK();
        v33 = "yes";
        if ( !v45 )
          v33 = "no";
        logfmt_raw(v55, 0x1000u, 0, "clean: %s", v33);
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
          v55);
      }
      if ( src )
        free(src);
      if ( ptra )
        free(ptra);
      return v7;
    }
    return 0;
  }
  V_LOCK();
  logfmt_raw(v55, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_dash/frontend_dash.c",
    166,
    "stratum_notify_dash",
    19,
    80,
    100,
    v55);
  return 0;
}
