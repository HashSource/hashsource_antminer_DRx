bool __fastcall sub_41694(int a1, int *a2, _DWORD *a3)
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
  char *v17; // r10
  _DWORD *v18; // r0
  const char *v19; // r11
  _DWORD *v20; // r0
  bool v21; // r4
  const char *v22; // r0
  int v23; // r3
  int v24; // r1
  int v25; // r11
  size_t v26; // r11
  int v27; // r2
  int i; // r4
  int *v29; // r5
  void *v30; // r7
  unsigned __int8 *v31; // r8
  unsigned __int8 *v32; // r3
  unsigned __int8 *v33; // r2
  bool v34; // cf
  unsigned int v35; // t1
  bool v36; // cc
  int j; // r0
  int v38; // t1
  _BOOL4 v39; // r1
  int v40; // r2
  void *v41; // r9
  void *v42; // r0
  void *v43; // r10
  int *v44; // r2
  int *v45; // r3
  unsigned int v46; // t1
  int *v47; // r11
  unsigned __int8 *v48; // lr
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r1
  int v53; // r2
  int v54; // r3
  int v55; // r0
  int v56; // r1
  int v57; // r2
  int v58; // r3
  int v59; // r1
  __int64 v60; // r2
  int v61; // r1
  signed int v62; // r7
  _DWORD *v63; // r0
  unsigned __int8 *v64; // r4
  void *v65; // r0
  size_t v66; // r0
  int v67; // lr
  int v68; // [sp+14h] [bp-1038h]
  const char *v69; // [sp+18h] [bp-1034h]
  char *s; // [sp+1Ch] [bp-1030h]
  _BOOL4 v71; // [sp+20h] [bp-102Ch]
  pthread_mutex_t *mutex; // [sp+28h] [bp-1024h]
  void *ptr; // [sp+2Ch] [bp-1020h]
  void *ptra; // [sp+2Ch] [bp-1020h]
  size_t v75; // [sp+30h] [bp-101Ch]
  size_t nmemb; // [sp+34h] [bp-1018h]
  size_t v77; // [sp+38h] [bp-1014h]
  int v78; // [sp+3Ch] [bp-1010h]
  int v79; // [sp+44h] [bp-1008h] BYREF
  char v80[4100]; // [sp+48h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v68 = (int)json_array_size(v5);
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
  v69 = (const char *)json_string_value(v20);
  if ( json_array_get(a3, 8u) )
  {
    v21 = *json_array_get(a3, 8u) == 5;
    v71 = v21;
  }
  else
  {
    v21 = 0;
    v71 = 0;
  }
  if ( valid_ascii(v10) && valid_hex(v12) && valid_hex(v14) && valid_hex(v17) && valid_hex(v19) && valid_hex(v69) )
  {
    settime_based_notify_ntime(v69);
    if ( a2 == (int *)-456 )
      return 0;
    v22 = (const char *)a2[395];
    if ( v22 && !strcmp(v22, v10) )
    {
      V_LOCK();
      logfmt_raw(v80, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v10);
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
        v80);
    }
    if ( strlen(v10) > 0x1F )
    {
      V_LOCK();
      v66 = strlen(v10);
      logfmt_raw(v80, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v10, v66);
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
        v80);
    }
    mutex = (pthread_mutex_t *)(a2 + 398);
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    ptr = (void *)a2[395];
    a2[395] = (int)_strdup(v10);
    if ( ptr )
      free(ptr);
    snprintf((char *)a2 + 100, 0x41u, "%s", v12);
    nmemb = strlen(v12) >> 1;
    v77 = strlen(v17) >> 1;
    ptra = (void *)(strlen(v14) >> 1);
    v75 = strlen(s) >> 1;
    snprintf((char *)a2 + 332, 9u, "%s", v17);
    snprintf((char *)a2 + 344, 9u, "%s", v19);
    snprintf((char *)a2 + 356, 9u, "%s", v69);
    strcpy((char *)a2 + 1556, v69);
    v23 = a2[21];
    v24 = a2[81];
    v25 = (int)ptra + a2[19];
    a2[80] = v25;
    *((_BYTE *)a2 + 444) = v21;
    v26 = v75 + v23 + v25;
    a2[74] = v26;
    if ( v24 > 0 )
    {
      v27 = a2[82];
      for ( i = 0; i < v24; ++i )
      {
        if ( *(_DWORD *)(v27 + 4 * i) )
        {
          free(*(void **)(v27 + 4 * i));
          v27 = a2[82];
          v24 = a2[81];
          *(_DWORD *)(v27 + 4 * i) = 0;
        }
      }
    }
    if ( v68 )
    {
      v62 = 0;
      a2[82] = (int)realloc((void *)a2[82], 4 * v68);
      while ( 1 )
      {
        v78 = 4 * v62;
        if ( v68 <= v62 )
          break;
        v63 = json_array_get(v6, v62);
        v64 = (unsigned __int8 *)json_string_value(v63);
        v79 = a2[82];
        v65 = malloc(0x20u);
        *(_DWORD *)(v79 + 4 * v62) = v65;
        if ( !v65 )
        {
          V_LOCK();
          logfmt_raw(v80, 0x1000u, 0, "Failed to malloc pool swork merkle_bin");
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
            v80);
        }
        if ( opt_protocol )
        {
          V_LOCK();
          logfmt_raw(v80, 0x1000u, 0, "merkle %d: %s", v62, v64);
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
            v80);
        }
        ++v62;
        if ( !hex2bin(*(_DWORD *)(a2[82] + v78), v64, 32) )
        {
          v7 = 0;
          V_LOCK();
          logfmt_raw(v80, 0x1000u, 0, "Failed to convert merkle to merkle_bin in parse_notify");
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
            v80);
          pthread_mutex_unlock(mutex);
          return v7;
        }
      }
    }
    a2[81] = v68;
    if ( v71 )
      *((_QWORD *)a2 + 39) = 0;
    v29 = (int *)calloc(nmemb, 1u);
    v7 = hex2bin((int)v29, (unsigned __int8 *)v12, nmemb);
    if ( !v7 )
    {
      V_LOCK();
      logfmt_raw(v80, 0x1000u, 0, "Failed to convert prev_bloc_hash to prev_bloc_hash_bin in parse_notify");
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
        v80);
      pthread_mutex_unlock(mutex);
      if ( !v29 )
        return v7;
      v41 = 0;
      v31 = 0;
      v30 = 0;
      goto LABEL_59;
    }
    v30 = calloc(v77, 1u);
    if ( hex2bin((int)v30, (unsigned __int8 *)v17, v77) )
    {
      v31 = (unsigned __int8 *)calloc((size_t)ptra, 1u);
      if ( hex2bin((int)v31, (unsigned __int8 *)v14, (int)ptra) )
      {
        v32 = v31 + 32;
        v33 = v31 + 160;
        v34 = v31[32] == 255;
        if ( v31[32] != 255 )
          v34 = v32 >= v33;
        if ( !v34 )
        {
          do
          {
            v35 = *++v32;
            v36 = v35 > 0xFF;
            if ( v35 != 255 )
              v36 = v33 > v32;
          }
          while ( v36 );
        }
        for ( j = *v32; ; j = v38 )
        {
          v39 = j == 255;
          if ( v33 <= v32 )
            v39 = 0;
          if ( !v39 )
            break;
          v38 = *++v32;
        }
        if ( *(v32 - 1) == 255 && *(v32 - 2) == 255 )
        {
          v61 = v32[1];
          v40 = (unsigned __int16)(v32[2] + (v32[3] << 8));
          if ( v61 == 3 )
          {
            v40 += v32[4] << 16;
          }
          else if ( v61 == 4 )
          {
            v40 += (v32[4] + (v32[5] << 8)) << 16;
          }
        }
        else
        {
          v40 = 0;
        }
        a2[411] = v40;
        v41 = calloc(v75, 1u);
        v7 = hex2bin((int)v41, (unsigned __int8 *)s, v75);
        if ( v7 )
        {
          v42 = (void *)a2[75];
          if ( v42 )
            free(v42);
          if ( (v26 & 3) != 0 )
            v26 = (v26 & 0xFFFFFFFC) + 4;
          v43 = calloc(v26, 1u);
          a2[75] = (int)v43;
          if ( !v43 )
          {
            V_LOCK();
            logfmt_raw(v80, 0x1000u, 0, "Failed to calloc pool coinbase in parse_notify");
            V_UNLOCK();
            zlog(
              g_zc,
              "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godmine"
              "r-origin_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
              164,
              "stratum_notify_dcr",
              18,
              197,
              100,
              v80);
          }
          v44 = v29 - 1;
          v45 = &v79;
          do
          {
            v46 = v44[1];
            ++v44;
            v45[1] = bswap32(v46);
            ++v45;
          }
          while ( v29 + 7 != v44 );
          v47 = a2 + 125;
          memcpy((void *)a2[75], v31, (size_t)ptra);
          memset(a2 + 116, 0, 0xB4u);
          v48 = v31;
          v49 = v29[1];
          v50 = v29[2];
          v51 = v29[3];
          a2[117] = *v29;
          a2[118] = v49;
          a2[119] = v50;
          a2[120] = v51;
          v52 = v29[5];
          v53 = v29[6];
          v54 = v29[7];
          a2[121] = v29[4];
          a2[122] = v52;
          a2[123] = v53;
          a2[124] = v54;
          do
          {
            v55 = *(_DWORD *)v48;
            v56 = *((_DWORD *)v48 + 1);
            v57 = *((_DWORD *)v48 + 2);
            v58 = *((_DWORD *)v48 + 3);
            v48 += 16;
            v47 += 4;
            *(v47 - 4) = v55;
            *(v47 - 3) = v56;
            *(v47 - 2) = v57;
            *(v47 - 1) = v58;
          }
          while ( v48 != v31 + 32 );
          v59 = *((_DWORD *)v48 + 1);
          *v47 = *(_DWORD *)v48;
          v47[1] = v59;
          v60 = *a2;
          a2[152] = *(_DWORD *)a2[20];
          *((_QWORD *)a2 + 57) = v60;
          pthread_mutex_unlock(mutex);
          goto LABEL_59;
        }
        V_LOCK();
        logfmt_raw(v80, 0x1000u, 0, "Failed to convert cb2 to cb2_bin in parse_notify");
        V_UNLOCK();
        v67 = 190;
      }
      else
      {
        V_LOCK();
        v41 = 0;
        logfmt_raw(v80, 0x1000u, 0, "Failed to convert cb1 to cb1_bin in parse_notify");
        V_UNLOCK();
        v67 = 182;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        v67,
        100,
        v80);
    }
    else
    {
      V_LOCK();
      v41 = 0;
      logfmt_raw(v80, 0x1000u, 0, "Failed to convert block_version to block_version_bin in parse_notify");
      V_UNLOCK();
      v31 = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_dcr/frontend_dcr.c",
        164,
        "stratum_notify_dcr",
        18,
        174,
        100,
        v80);
    }
    pthread_mutex_unlock(mutex);
    if ( !v29 )
    {
      v7 = 0;
      goto LABEL_60;
    }
    v7 = 0;
LABEL_59:
    free(v29);
LABEL_60:
    if ( v30 )
      free(v30);
    if ( v31 )
      free(v31);
    if ( v41 )
      free(v41);
    return v7;
  }
  V_LOCK();
  logfmt_raw(v80, 0x1000u, 0, "Stratum notify: invalid parameters");
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
    v80);
  return 0;
}
