int __fastcall sub_4B89C(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v8; // r0
  const char *v9; // r11
  _DWORD *v10; // r0
  char *v11; // r7
  _DWORD *v12; // r0
  char *v13; // r8
  _DWORD *v14; // r0
  char *v15; // r9
  _DWORD *v16; // r0
  char *v17; // r10
  _DWORD *v18; // r0
  _DWORD *v19; // r0
  int valid; // r4
  size_t v21; // r0
  void *v22; // r0
  void *v23; // r7
  void *v24; // r0
  void *v25; // r8
  size_t v26; // r0
  size_t v27; // r0
  size_t v28; // r0
  const char *v29; // r0
  size_t v30; // r0
  void *v31; // r9
  void *v32; // r0
  size_t v33; // r10
  size_t v34; // r11
  char *v35; // r0
  char *v36; // r9
  char *v37; // r0
  int v38; // r9
  int v39; // r0
  int v40; // r1
  int v41; // r2
  int v42; // r3
  int v43; // r10
  int v44; // r0
  int v45; // r1
  int v46; // r2
  int v47; // r3
  int v48; // r12
  int v49; // r2
  int v50; // r3
  signed int v51; // r9
  int v52; // r0
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r9
  int v57; // r0
  int v58; // r1
  int v59; // r2
  int v60; // r3
  int v61; // r12
  int v62; // r2
  _DWORD *v63; // r0
  unsigned __int8 *v64; // r0
  int v65; // r10
  unsigned __int8 *v66; // r11
  void *v67; // r0
  int v68; // [sp+10h] [bp-104Ch]
  char *s; // [sp+14h] [bp-1048h]
  pthread_mutex_t *sa; // [sp+14h] [bp-1048h]
  char *v71; // [sp+18h] [bp-1044h]
  bool v72; // [sp+1Ch] [bp-1040h]
  size_t n; // [sp+20h] [bp-103Ch]
  size_t v74; // [sp+24h] [bp-1038h]
  int v75; // [sp+2Ch] [bp-1030h] BYREF
  int v76; // [sp+30h] [bp-102Ch] BYREF
  int v77; // [sp+34h] [bp-1028h] BYREF
  int v78; // [sp+38h] [bp-1024h] BYREF
  int v79; // [sp+3Ch] [bp-1020h]
  int v80; // [sp+40h] [bp-101Ch]
  int v81; // [sp+44h] [bp-1018h]
  int v82; // [sp+48h] [bp-1014h]
  int v83; // [sp+4Ch] [bp-1010h]
  int v84; // [sp+50h] [bp-100Ch]
  int v85; // [sp+54h] [bp-1008h]
  char v86[4100]; // [sp+58h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 4u);
  v6 = v5;
  if ( !v5 || *v5 != 1 )
    return 0;
  v68 = (int)json_array_size(v5);
  v8 = json_array_get(a3, 0);
  v9 = (const char *)json_string_value(v8);
  v10 = json_array_get(a3, 1u);
  v11 = (char *)json_string_value(v10);
  v12 = json_array_get(a3, 2u);
  v13 = (char *)json_string_value(v12);
  v14 = json_array_get(a3, 3u);
  v15 = (char *)json_string_value(v14);
  v16 = json_array_get(a3, 5u);
  v17 = (char *)json_string_value(v16);
  v18 = json_array_get(a3, 6u);
  s = (char *)json_string_value(v18);
  v19 = json_array_get(a3, 7u);
  v71 = (char *)json_string_value(v19);
  if ( json_array_get(a3, 8u) )
    v72 = *json_array_get(a3, 8u) == 5;
  else
    v72 = 0;
  if ( valid_ascii(v9)
    && valid_hex(v11)
    && valid_hex(v13)
    && valid_hex(v15)
    && valid_hex(v17)
    && valid_hex(s)
    && (valid = valid_hex(v71)) != 0 )
  {
    v21 = strlen(v11);
    hex2bin((int)&v78, (unsigned __int8 *)v11, v21 >> 1);
    n = strlen(v13) >> 1;
    v22 = calloc(n, 1u);
    v23 = v22;
    if ( !v22 )
    {
      V_LOCK();
      logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase1");
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        163,
        "stratum_notify_ltc",
        18,
        56,
        100,
        v86);
      return 0;
    }
    hex2bin((int)v22, (unsigned __int8 *)v13, n);
    v74 = strlen(v15) >> 1;
    v24 = calloc(v74, 1u);
    v25 = v24;
    if ( v24 )
    {
      hex2bin((int)v24, (unsigned __int8 *)v15, v74);
      v26 = strlen(v17);
      hex2bin((int)&v75, (unsigned __int8 *)v17, v26 >> 1);
      v27 = strlen(s);
      hex2bin((int)&v76, (unsigned __int8 *)s, v27 >> 1);
      v28 = strlen(v71);
      hex2bin((int)&v77, (unsigned __int8 *)v71, v28 >> 1);
      if ( a2 == (int *)-456 )
      {
        valid = 0;
      }
      else
      {
        v29 = (const char *)a2[395];
        if ( v29 && !strcmp(v29, v9) )
        {
          V_LOCK();
          logfmt_raw(v86, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v9);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            163,
            "stratum_notify_ltc",
            18,
            73,
            80,
            v86);
        }
        if ( strlen(v9) > 0x3F )
        {
          V_LOCK();
          v30 = strlen(v9);
          logfmt_raw(v86, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", v9, v30, 64);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            163,
            "stratum_notify_ltc",
            18,
            76,
            80,
            v86);
        }
        sa = (pthread_mutex_t *)(a2 + 398);
        pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
        v31 = (void *)a2[395];
        a2[395] = (int)_strdup(v9);
        if ( v31 )
          free(v31);
        v32 = (void *)a2[75];
        if ( v32 )
          free(v32);
        v33 = a2[19];
        v34 = v33 + a2[21] + n;
        a2[74] = v74 + v34;
        v35 = (char *)calloc(v74 + v34, 1u);
        v36 = v35;
        a2[75] = (int)v35;
        if ( v35 )
        {
          memcpy(v35, v23, n);
          memcpy(&v36[n], (const void *)a2[20], v33);
          v37 = &v36[v34];
          v38 = 0;
          memcpy(v37, v25, v74);
          v39 = v78;
          v40 = v79;
          v41 = v80;
          v42 = v81;
          a2[22] = n + v33;
          v43 = v75;
          a2[25] = v39;
          a2[26] = v40;
          a2[27] = v41;
          a2[28] = v42;
          v44 = v82;
          v45 = v83;
          v46 = v84;
          v47 = v85;
          v48 = v77;
          a2[83] = v43;
          a2[31] = v46;
          v49 = v76;
          a2[32] = v47;
          a2[29] = v44;
          a2[30] = v45;
          v50 = a2[81];
          a2[86] = v49;
          a2[89] = v48;
          while ( v38 < v50 )
          {
            if ( *(_DWORD *)(a2[82] + 4 * v38) )
            {
              free(*(void **)(a2[82] + 4 * v38));
              v50 = a2[81];
              *(_DWORD *)(a2[82] + 4 * v38) = 0;
            }
            ++v38;
          }
          v51 = 0;
          a2[81] = 0;
          if ( v68 )
          {
            a2[82] = (int)realloc((void *)a2[82], 4 * v68);
            while ( v51 < v68 )
            {
              v63 = json_array_get(v6, v51);
              v64 = (unsigned __int8 *)json_string_value(v63);
              v65 = a2[82];
              v66 = v64;
              v67 = malloc(0x20u);
              *(_DWORD *)(v65 + 4 * v51++) = v67;
              hex2bin((int)v67, v66, 32);
            }
            a2[81] = v68;
          }
          memset(a2 + 116, 0, 0x50u);
          v52 = v78;
          v53 = v79;
          v54 = v80;
          v55 = v81;
          a2[116] = v75;
          v56 = v76;
          a2[117] = v52;
          a2[118] = v53;
          a2[119] = v54;
          a2[120] = v55;
          v57 = v82;
          v58 = v83;
          v59 = v84;
          v60 = v85;
          v61 = v77;
          a2[134] = v56;
          a2[123] = v59;
          v62 = *a2;
          a2[124] = v60;
          a2[121] = v57;
          a2[122] = v58;
          *((_BYTE *)a2 + 444) = v72;
          a2[133] = v61;
          *((_QWORD *)a2 + 57) = v62;
          pthread_mutex_unlock(sa);
        }
        else
        {
          V_LOCK();
          logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase");
          V_UNLOCK();
          valid = 0;
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
            163,
            "stratum_notify_ltc",
            18,
            87,
            100,
            v86);
          pthread_mutex_unlock(sa);
        }
      }
      free(v25);
    }
    else
    {
      V_LOCK();
      logfmt_raw(v86, 0x1000u, 0, "Failed to calloc pool coinbase2");
      V_UNLOCK();
      valid = 0;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
        163,
        "stratum_notify_ltc",
        18,
        63,
        100,
        v86);
    }
    free(v23);
    return valid;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v86, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ltc/fronted_ltc.c",
      163,
      "stratum_notify_ltc",
      18,
      48,
      100,
      v86);
    return 0;
  }
}
