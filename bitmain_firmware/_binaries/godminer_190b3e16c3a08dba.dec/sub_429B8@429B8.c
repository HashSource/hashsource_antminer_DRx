bool __fastcall sub_429B8(int a1, int *a2, _DWORD *a3)
{
  _BOOL4 v4; // r4
  _DWORD *v7; // r0
  const char *v8; // r5
  _DWORD *v9; // r0
  char *v10; // r6
  _DWORD *v11; // r0
  char *v12; // r8
  _DWORD *v13; // r0
  char *v14; // r7
  _DWORD *v15; // r0
  char *v16; // r9
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  char *v19; // r10
  _DWORD *v20; // r0
  _DWORD *v21; // r0
  const char *v22; // r0
  size_t v23; // r0
  size_t v24; // r0
  size_t v25; // r0
  size_t v26; // r4
  unsigned __int64 *v27; // r9
  int v28; // r3
  int *v29; // r10
  size_t v30; // r2
  const void *v31; // r1
  size_t v32; // r0
  size_t v33; // r7
  char *v34; // r0
  _BYTE *i; // r2
  char v36; // t1
  size_t v37; // r3
  char *v38; // r0
  _BYTE *j; // r2
  char v40; // t1
  size_t v41; // r3
  char *v42; // r0
  _BYTE *k; // r2
  char v44; // t1
  size_t v45; // r3
  _BYTE *v46; // r1
  unsigned __int64 *v47; // r2
  char v48; // t1
  int *v49; // r1
  char *v50; // r2
  char v51; // t1
  char *v52; // r1
  signed int v53; // r2
  char v54; // t1
  bool v55; // cc
  int v56; // r0
  size_t v57; // r7
  char *v58; // r1
  _BYTE *m; // r3
  char v60; // t1
  size_t v61; // r7
  _BYTE *v62; // r2
  unsigned __int64 *v63; // r3
  char v64; // t1
  size_t v65; // r3
  size_t v66; // r7
  size_t v67; // r7
  int v68; // r0
  int v69; // [sp+4h] [bp-10A0h]
  char *src; // [sp+14h] [bp-1090h]
  char *v71; // [sp+18h] [bp-108Ch]
  char *s; // [sp+1Ch] [bp-1088h]
  char *sa; // [sp+1Ch] [bp-1088h]
  void *ptr; // [sp+28h] [bp-107Ch]
  size_t ptrb; // [sp+28h] [bp-107Ch]
  char *ptra; // [sp+28h] [bp-107Ch]
  char *v77; // [sp+2Ch] [bp-1078h]
  char *v78; // [sp+30h] [bp-1074h]
  void *v79; // [sp+34h] [bp-1070h]
  signed int v80; // [sp+38h] [bp-106Ch]
  signed int v81; // [sp+3Ch] [bp-1068h]
  signed int v82; // [sp+40h] [bp-1064h]
  signed int v83; // [sp+44h] [bp-1060h]
  void *v84; // [sp+48h] [bp-105Ch]
  signed int v85; // [sp+4Ch] [bp-1058h]
  size_t n; // [sp+50h] [bp-1054h]
  size_t nmemb; // [sp+54h] [bp-1050h]
  void *v88; // [sp+5Ch] [bp-1048h]
  _BYTE v89[20]; // [sp+6Ch] [bp-1038h] BYREF
  unsigned __int64 dest[4]; // [sp+80h] [bp-1024h] BYREF
  _DWORD v91[1025]; // [sp+A0h] [bp-1004h] BYREF

  if ( !a3 || *a3 != 1 )
    return 0;
  v7 = json_array_get(a3, 0);
  v8 = (const char *)json_string_value(v7);
  v9 = json_array_get(a3, 1u);
  v10 = (char *)json_string_value(v9);
  v11 = json_array_get(a3, 2u);
  v12 = (char *)json_string_value(v11);
  v13 = json_array_get(a3, 3u);
  v14 = (char *)json_string_value(v13);
  v15 = json_array_get(a3, 4u);
  v16 = (char *)json_string_value(v15);
  v17 = json_array_get(a3, 5u);
  s = (char *)json_string_value(v17);
  v18 = json_array_get(a3, 6u);
  v19 = (char *)json_string_value(v18);
  v20 = json_array_get(a3, 7u);
  v71 = (char *)json_string_value(v20);
  v21 = json_array_get(a3, 8u);
  src = (char *)json_string_value(v21);
  if ( valid_ascii(v8)
    && valid_hex(v10)
    && valid_hex(v14)
    && valid_hex(v12)
    && valid_hex(v16)
    && valid_hex(s)
    && valid_hex(v19)
    && valid_hex(v71)
    && valid_hex(src) )
  {
    settime_based_notify_ntime(src);
    if ( a2 == (int *)-456 )
      return 0;
    v22 = (const char *)a2[395];
    if ( v22 && !strcmp(v22, v8) )
    {
      V_LOCK();
      logfmt_raw((char *)v91, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v8);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_hns/frontend_hns.c",
        164,
        "stratum_notify_hns",
        18,
        142,
        80,
        v91);
    }
    if ( strlen(v8) > 0x1F )
    {
      V_LOCK();
      v23 = strlen(v8);
      logfmt_raw((char *)v91, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v8, v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_hns/frontend_hns.c",
        164,
        "stratum_notify_hns",
        18,
        145,
        80,
        v91);
    }
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    ptr = (void *)a2[395];
    a2[395] = (int)_strdup(v8);
    if ( ptr )
      free(ptr);
    snprintf((char *)a2 + 100, 0x41u, "%s", v10);
    v80 = strlen(v10) >> 1;
    v81 = strlen(v12) >> 1;
    v82 = strlen(v14) >> 1;
    v85 = strlen(v16) >> 1;
    v83 = strlen(s) >> 1;
    ptrb = strlen(v19);
    nmemb = strlen(src) >> 1;
    n = ptrb >> 1;
    snprintf((char *)a2 + 332, ptrb + 1, "%s", v19);
    v24 = strlen(v71);
    snprintf((char *)a2 + 344, v24 + 1, "%s", v71);
    v25 = strlen(src);
    snprintf((char *)a2 + 356, v25 + 1, "%s", src);
    strcpy((char *)a2 + 1556, src);
    *((_BYTE *)a2 + 444) = 1;
    v26 = strlen(v71);
    v88 = calloc(v26, 1u);
    v4 = hex2bin((int)v88, (unsigned __int8 *)v71, v26 >> 1);
    if ( v4 )
    {
      v84 = calloc(nmemb, 1u);
      v4 = hex2bin((int)v84, (unsigned __int8 *)src, nmemb);
      if ( v4 )
      {
        v79 = calloc(n, 1u);
        v4 = hex2bin((int)v79, (unsigned __int8 *)v19, n);
        if ( v4 )
        {
          v78 = (char *)calloc(v81, 1u);
          v4 = hex2bin((int)v78, (unsigned __int8 *)v12, v81);
          if ( v4 )
          {
            a2[411] = 0;
            v77 = (char *)calloc(v82, 1u);
            v4 = hex2bin((int)v77, (unsigned __int8 *)v14, v82);
            if ( v4 )
            {
              ptra = (char *)calloc(v83, 1u);
              v4 = hex2bin((int)ptra, (unsigned __int8 *)s, v83);
              if ( v4 )
              {
                sa = (char *)calloc(v85, 1u);
                v4 = hex2bin((int)sa, (unsigned __int8 *)v16, v85);
                if ( v4 )
                {
                  v27 = (unsigned __int64 *)calloc(v80, 1u);
                  v4 = hex2bin((int)v27, (unsigned __int8 *)v10, v80);
                  if ( v4 )
                  {
                    v28 = sa == 0;
                    if ( !v27 )
                      v28 = 1;
                    if ( v28 )
                    {
                      V_LOCK();
                      logfmt_raw((char *)v91, 0x1000u, 0, "%s input value error", "hns_padding");
                      V_UNLOCK();
                      zlog(
                        g_zc,
                        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/bui"
                        "ld/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                        164,
                        "hns_padding",
                        11,
                        82,
                        100,
                        v91);
                    }
                    else
                    {
                      do
                      {
                        v89[v28] = *((_BYTE *)v27 + v28) ^ sa[v28];
                        ++v28;
                      }
                      while ( v28 != 20 );
                    }
                    if ( memcmp(v27, &dword_17ABD4, 0x20u) )
                    {
                      dword_17ABD4 = *(_DWORD *)v27;
                      memset(dest, 0, sizeof(dest));
                      memset(&unk_17ABF4, 0, 0x20u);
                      memset(v91, 0, 0xF0u);
                      hs_blake2b_init(v91, 32);
                      hs_blake2b_update((int)v91, v27, 0x20u);
                      hs_blake2b_update((int)v91, dest, 0x20u);
                      hs_blake2b_final((int)v91, &unk_17ABF4, 0x20u);
                    }
                    v29 = a2 + 116;
                    v30 = a2[19];
                    v31 = (const void *)a2[20];
                    memset(dest, 0, 22);
                    memcpy(dest, v31, v30);
                    memset(a2 + 116, 0, 0x100u);
                    v32 = strlen(v71);
                    memcpy(a2 + 116, v88, v32 >> 1);
                    v33 = strlen(v71) >> 1;
                    memcpy((char *)a2 + v33 + 464, v79, n);
                    v34 = &v78[v81];
                    for ( i = (char *)a2 + v33 + n + 464; v81 > i - ((char *)a2 + v33 + n + 464); ++i )
                    {
                      v36 = *--v34;
                      *i = v36;
                    }
                    v37 = v33 + n + v81;
                    v38 = &v77[v82];
                    for ( j = (char *)v29 + v37; v82 > j - ((char *)v29 + v37); ++j )
                    {
                      v40 = *--v38;
                      *j = v40;
                    }
                    v41 = v37 + v82;
                    v42 = &ptra[v83];
                    for ( k = (char *)v29 + v41; k - ((char *)v29 + v41) < v83; ++k )
                    {
                      v44 = *--v42;
                      *k = v44;
                    }
                    v45 = v41 + v83;
                    v46 = (char *)v29 + v45;
                    v47 = (unsigned __int64 *)((char *)&dest[2] + 6);
                    do
                    {
                      v48 = *((_BYTE *)v47 - 1);
                      v47 = (unsigned __int64 *)((char *)v47 - 1);
                      *v46++ = v48;
                    }
                    while ( dest != v47 );
                    v49 = &dword_17AC14;
                    v50 = (char *)v29 + v45 + 21;
                    do
                    {
                      v51 = *((_BYTE *)v49 - 1);
                      v49 = (int *)((char *)v49 - 1);
                      *++v50 = v51;
                    }
                    while ( &unk_17ABF4 != (_UNKNOWN *)v49 );
                    v52 = &sa[v85];
                    v53 = 0;
                    while ( 1 )
                    {
                      v55 = v85 <= v53;
                      v56 = (int)v29 + v45 + v53++;
                      if ( v55 )
                        break;
                      v54 = *--v52;
                      *(_BYTE *)(v56 + 54) = v54;
                    }
                    v57 = v45 + v85 + 54;
                    v58 = (char *)v27 + v80;
                    for ( m = (char *)v29 + v57; m - ((char *)v29 + v57) < v80; ++m )
                    {
                      v60 = *--v58;
                      *m = v60;
                    }
                    v61 = v57 + v80;
                    v62 = (char *)v29 + v61;
                    v63 = dest;
                    do
                    {
                      v64 = *((_BYTE *)v63 - 1);
                      v63 = (unsigned __int64 *)((char *)v63 - 1);
                      *v62++ = v64;
                    }
                    while ( v89 != (_BYTE *)v63 );
                    v65 = v61 + 20;
                    v66 = v61 + 24;
                    *(int *)((char *)v29 + v65) = 0;
                    memcpy((char *)v29 + v66, v84, nmemb);
                    v67 = v66 + nmemb;
                    *(int *)((char *)v29 + v67) = 0;
                    *(_WORD *)((char *)v29 + v67 + 4) = 0;
                    *((_QWORD *)a2 + 57) = *a2;
                    goto LABEL_63;
                  }
                  V_LOCK();
                  logfmt_raw((char *)v91, 0x1000u, 0, "parse prev_hash failed!");
                  V_UNLOCK();
                  v68 = 233;
                }
                else
                {
                  V_LOCK();
                  v27 = 0;
                  logfmt_raw((char *)v91, 0x1000u, 0, "parse nameroot failed!");
                  V_UNLOCK();
                  v68 = 225;
                }
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                  164,
                  "stratum_notify_hns",
                  18,
                  v68,
                  100,
                  v91);
              }
              else
              {
                V_LOCK();
                sa = 0;
                v27 = 0;
                logfmt_raw((char *)v91, 0x1000u, 0, "parse reserved_root failed!");
                V_UNLOCK();
                zlog(
                  g_zc,
                  "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/god"
                  "miner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                  164,
                  "stratum_notify_hns",
                  18,
                  217,
                  100,
                  v91);
              }
            }
            else
            {
              V_LOCK();
              ptra = 0;
              v27 = 0;
              logfmt_raw((char *)v91, 0x1000u, 0, "parse witness failed!");
              V_UNLOCK();
              zlog(
                g_zc,
                "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmi"
                "ner-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
                164,
                "stratum_notify_hns",
                18,
                209,
                100,
                v91);
              sa = 0;
            }
          }
          else
          {
            V_LOCK();
            ptra = 0;
            v27 = 0;
            logfmt_raw((char *)v91, 0x1000u, 0, "parse merkle failed!");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
              164,
              "stratum_notify_hns",
              18,
              197,
              100,
              v91);
            sa = 0;
            v77 = 0;
          }
        }
        else
        {
          V_LOCK();
          ptra = 0;
          v27 = 0;
          logfmt_raw((char *)v91, 0x1000u, 0, "parse bloc_version failed!");
          V_UNLOCK();
          sa = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_hns/frontend_hns.c",
            164,
            "stratum_notify_hns",
            18,
            189,
            100,
            v91);
          v77 = 0;
          v78 = 0;
        }
LABEL_63:
        pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
        V_LOCK();
        logfmt_raw((char *)v91, 0x1000u, 0, "job_id: %s", v8);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          303,
          20,
          v91);
        V_LOCK();
        logfmt_raw((char *)v91, 0x1000u, 0, "prev_hash: %s", v10);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          304,
          20,
          v91);
        V_LOCK();
        logfmt_raw((char *)v91, 0x1000u, 0, "nbit: %s", v71);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          305,
          20,
          v91);
        V_LOCK();
        logfmt_raw((char *)v91, 0x1000u, 0, "ntime: %s", src);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_hns/frontend_hns.c",
          164,
          "stratum_notify_hns",
          18,
          306,
          20,
          v91);
        if ( v88 )
          free(v88);
        if ( v84 )
          free(v84);
        if ( v79 )
          free(v79);
        if ( v78 )
          free(v78);
        if ( v77 )
          free(v77);
        if ( ptra )
          free(ptra);
        if ( sa )
          free(sa);
        if ( v27 )
          free(v27);
        return v4;
      }
      V_LOCK();
      ptra = 0;
      logfmt_raw((char *)v91, 0x1000u, 0, "parse ntime failed!");
      V_UNLOCK();
      v69 = 181;
      sa = 0;
      v77 = 0;
    }
    else
    {
      V_LOCK();
      v84 = 0;
      logfmt_raw((char *)v91, 0x1000u, 0, "parse nbits failed!");
      V_UNLOCK();
      v69 = 173;
      ptra = 0;
      sa = 0;
      v77 = 0;
    }
    v27 = 0;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_hns/frontend_hns.c",
      164,
      "stratum_notify_hns",
      18,
      v69,
      100,
      v91);
    v78 = 0;
    v79 = 0;
    goto LABEL_63;
  }
  V_LOCK();
  logfmt_raw((char *)v91, 0x1000u, 0, "Stratum notify: invalid parameters");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/frontend/frontend_hns/frontend_hns.c",
    164,
    "stratum_notify_hns",
    18,
    134,
    100,
    v91);
  return 0;
}
