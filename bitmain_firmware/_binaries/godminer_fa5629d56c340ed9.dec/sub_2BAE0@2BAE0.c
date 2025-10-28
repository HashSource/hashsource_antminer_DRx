int __fastcall sub_2BAE0(_DWORD *a1, const char **a2)
{
  int v3; // r5
  char *all_created_runtime; // r8
  int v5; // r0
  int v6; // r6
  double v7; // d0
  int v8; // r4
  float v9; // s22
  float v10; // s23
  __int64 v11; // r6
  double v12; // d9
  double v13; // d8
  double v14; // d13
  _DWORD *v15; // r0
  double v16; // d11
  double *v17; // r0
  _DWORD *v18; // r5
  double *v19; // r0
  double *v20; // r0
  double *v21; // r0
  char *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r0
  _DWORD *v25; // r5
  int *v26; // r8
  int *v27; // r4
  int v28; // t1
  _DWORD *v29; // r0
  __int64 v30; // r4
  double *v31; // r0
  char *v32; // r6
  _DWORD *v33; // r8
  int v34; // r0
  _DWORD *v35; // r0
  _DWORD *v36; // r0
  double v37; // d8
  double v38; // d6
  double *v39; // r0
  double *v40; // r0
  _DWORD *v41; // r0
  int v42; // r1
  _DWORD *v43; // r0
  __int64 v44; // r4
  _DWORD *v45; // r7
  int v46; // r10
  _DWORD *v47; // r0
  int v48; // r10
  _DWORD *v49; // r0
  _DWORD *v50; // r7
  int v51; // r10
  int v52; // r11
  int v53; // t1
  _DWORD *v54; // r0
  int *v55; // r11
  int *v56; // r10
  int v57; // t1
  _DWORD *v58; // r0
  _DWORD *v59; // r7
  int v60; // r10
  int v61; // r11
  int v62; // t1
  _DWORD *v63; // r0
  int v64; // r10
  int v65; // t1
  _DWORD *v66; // r0
  unsigned __int64 v67; // r0
  _DWORD *v68; // r0
  _DWORD *v69; // r2
  char *eeprom_chip_sn; // r0
  char *v71; // r0
  int v74; // r1
  double v75; // d8
  double v76; // r0
  _DWORD *v77; // r2
  char *v78; // r7
  size_t v79; // r5
  size_t v80; // r2
  bool v81; // cf
  int v82; // r3
  int v83; // t1
  bool v84; // zf
  char *v85; // r0
  char *v86; // r10
  char *v87; // r11
  char *v88; // r8
  int v89; // t1
  int v90; // r3
  double v91; // r0
  double v92; // d7
  double *v93; // r0
  bool v94; // nf
  double v95; // d8
  double v96; // d9
  double *v97; // r0
  int v98; // [sp+28h] [bp-1084h]
  char *v99; // [sp+30h] [bp-107Ch]
  _DWORD *v100; // [sp+34h] [bp-1078h]
  _DWORD *v101; // [sp+3Ch] [bp-1070h]
  char *v103; // [sp+4Ch] [bp-1060h]
  char *ptr; // [sp+50h] [bp-105Ch]
  _DWORD *v105; // [sp+54h] [bp-1058h]
  int v106; // [sp+5Ch] [bp-1050h] BYREF
  double v107; // [sp+60h] [bp-104Ch] BYREF
  _DWORD v108[2]; // [sp+68h] [bp-1044h] BYREF
  _DWORD v109[2]; // [sp+70h] [bp-103Ch] BYREF
  int *v110; // [sp+78h] [bp-1034h]
  float v111; // [sp+7Ch] [bp-1030h]
  float v112; // [sp+80h] [bp-102Ch]
  float v113; // [sp+84h] [bp-1028h]
  float v114; // [sp+88h] [bp-1024h]
  double v115; // [sp+90h] [bp-101Ch]
  __int64 v116; // [sp+A0h] [bp-100Ch]
  char v117[4100]; // [sp+A8h] [bp-1004h] BYREF

  v108[0] = 0;
  v3 = a1 == 0;
  v108[1] = 0;
  v106 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v106);
  v5 = frontend_runtime_instance();
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v117, 0x1000u, 0, "%s: input bad api param", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats",
      9,
      754,
      100,
      v117);
    return -2147483646;
  }
  else
  {
    v6 = v5;
    sub_26068(a1, a2);
    sub_26184(a1);
    v105 = json_array();
    read_system_status_from_monitor((int)v109);
    v7 = v115;
    v8 = v109[1];
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), &v107, (char *)v108);
    v9 = v111;
    v10 = v112;
    v11 = v116;
    v12 = v113 * v7;
    v13 = v114 * v7;
    if ( v106 > 0 )
    {
      v103 = (char *)malloc(216 * v106);
      v86 = v103;
      v87 = (char *)malloc(4 * v106);
      ptr = v87;
      if ( v106 > 0 )
      {
        v88 = all_created_runtime - 4;
        do
        {
          v89 = *((_DWORD *)v88 + 1);
          v88 += 4;
          read_status_from_monitor(v86, v89);
          v90 = v106;
          v86 += 216;
          *(_DWORD *)&v87[4 * v3++] = *(_DWORD *)(*(_DWORD *)v88 + 260);
        }
        while ( v90 > v3 );
      }
    }
    else
    {
      ptr = 0;
      v103 = 0;
    }
    v101 = json_object();
    if ( opt_algo == 7 )
    {
      LODWORD(v14) = 1.0;
    }
    else
    {
      sub_296B4();
      LODWORD(v14) = LODWORD(v7);
    }
    get_total_accept_rate();
    HIDWORD(v14) = LODWORD(v7);
    get_miner_elapsed_time();
    v15 = json_integer((__int64)v7);
    json_object_set_new(v101, "elapsed", v15);
    if ( opt_algo == 6 )
    {
      LODWORD(v91) = sub_146C5C((__int64)(v10 * v7 * 100.0));
      v92 = v91;
      v93 = json_real();
      json_object_set_new(v101, "rate_5s", v93);
      v94 = *(float *)&v7 < *(float *)&v14;
      if ( *(float *)&v7 < *(float *)&v14 )
        v14 = *(float *)&v14;
      else
        v92 = *(float *)&v7;
      if ( v94 )
        v95 = v14 * v13;
      else
        v95 = v92 * v13;
      if ( v94 )
        v96 = v14 * v12;
      else
        v96 = v92 * v12;
      sub_146C5C((__int64)(v95 * 100.0));
      v97 = json_real();
      v18 = v101;
      json_object_set_new(v101, "rate_avg", v97);
      sub_146C5C((__int64)(v96 * 100.0));
    }
    else
    {
      V_LOCK();
      v16 = v9 * v7;
      logfmt_raw(
        v117,
        0x1000u,
        0,
        "total_accept_rate/total_nonce_rate:%2f/%2f, hash_rate_last_30m_avg/hash_rate_lifetime_avg: %2f/%2f, hash_rate_last_5s_avg: %2f",
        *(float *)&v7,
        *(float *)&v14,
        v12,
        v13,
        v16);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/api_new.c",
        137,
        "get_stats",
        9,
        805,
        20,
        v117);
      sub_146C5C((__int64)(v16 * 100.0));
      v17 = json_real();
      v18 = v101;
      json_object_set_new(v101, "rate_5s", v17);
      sub_146C5C((__int64)(v13 * 100.0));
      v19 = json_real();
      json_object_set_new(v101, "rate_avg", v19);
      sub_146C5C((__int64)(v12 * 100.0));
    }
    v20 = json_real();
    json_object_set_new(v18, "rate_30m", v20);
    sub_146C5C((__int64)(v107 * 100.0));
    v21 = json_real();
    json_object_set_new(v101, "rate_ideal", v21);
    v22 = BUFX_strdup((char *)v108);
    json_object_set_new(v101, "rate_unit", v22);
    v23 = json_integer(v106);
    json_object_set_new(v101, "chain_num", v23);
    v24 = json_integer(v8);
    json_object_set_new(v101, "fan_num", v24);
    v25 = json_array();
    if ( v8 > 0 )
    {
      v26 = v110;
      v27 = &v110[v8];
      do
      {
        v28 = *v26++;
        v29 = json_integer(v28);
        json_array_append_new(v25, v29);
      }
      while ( v27 != v26 );
    }
    json_object_set_new(v101, "fan", v25);
    v30 = v11 + total_diff1;
    if ( v11 + total_diff1 )
    {
      LODWORD(v75) = sub_146C4C(v11);
      HIDWORD(v75) = v74;
      LODWORD(v76) = sub_146C4C(v30);
      sub_146C5C((__int64)(v75 / v76 * 100.0 * 10000.0));
    }
    v31 = json_real();
    json_object_set_new(v101, "hwp_total", v31);
    v100 = json_array();
    if ( v106 > 0 )
    {
      v32 = v103;
      v99 = ptr - 4;
      v98 = 0;
      while ( 1 )
      {
        v33 = json_object();
        v34 = *((_DWORD *)v99 + 1);
        v99 += 4;
        v35 = json_integer(v34);
        json_object_set_new(v33, "index", v35);
        v36 = json_integer(*((int *)v32 + 18));
        json_object_set_new(v33, "freq_avg", v36);
        v37 = *((float *)v32 + 10);
        v38 = v7 * *((double *)v32 + 6) * 100.0;
        v107 = v7 * *((double *)v32 + 6);
        sub_146C5C((__int64)v38);
        v39 = json_real();
        json_object_set_new(v33, "rate_ideal", v39);
        sub_146C5C((__int64)(v37 * v7 * 100.0));
        v40 = json_real();
        json_object_set_new(v33, "rate_real", v40);
        v41 = json_integer(*((int *)v32 + 16));
        json_object_set_new(v33, "asic_num", v41);
        v42 = *((_DWORD *)v32 + 17);
        if ( v42 )
        {
          v78 = v117;
          v79 = 0;
          v80 = stpcpy(v117, v42) - (_DWORD)v117;
          while ( 1 )
          {
            v81 = v79++ >= v80;
            if ( v81 )
              break;
            while ( 1 )
            {
              v83 = (unsigned __int8)*v78++;
              v82 = v83;
              v84 = v83 == 111;
              if ( v83 != 111 )
                v84 = v82 == 32;
              if ( v84 )
                break;
              *(v78 - 1) = 120;
              v80 = strlen(v117);
              v81 = v79++ >= v80;
              if ( v81 )
                goto LABEL_59;
            }
          }
LABEL_59:
          v85 = BUFX_strdup(v117);
          json_object_set_new(v33, "asic", v85);
        }
        v43 = json_array();
        v44 = *((_QWORD *)v32 + 3);
        v45 = v43;
        if ( (int)v44 <= 0 )
          break;
        v46 = 0;
        do
        {
          v47 = json_integer(0);
          ++v46;
          json_array_append_new(v45, v47);
        }
        while ( v46 != (_DWORD)v44 );
        if ( v44 > 0 )
          goto LABEL_23;
        json_object_set_new(v33, "temp_pic", v45);
        v50 = json_array();
LABEL_26:
        v51 = 0;
        v52 = *(_DWORD *)v32 - 4;
        do
        {
          v53 = *(_DWORD *)(v52 + 4);
          v52 += 4;
          ++v51;
          v54 = json_integer(v53);
          json_array_append_new(v50, v54);
        }
        while ( v51 < (int)v44 );
        if ( v44 > 0 )
          goto LABEL_29;
LABEL_64:
        json_object_set_new(v33, "temp_pcb", v50);
        v59 = json_array();
        if ( (int)v44 > 0 )
          goto LABEL_32;
LABEL_37:
        json_object_set_new(v33, "temp_chip", v59);
        v67 = *((_QWORD *)v32 + 10);
        if ( opt_algo == 9 )
          LODWORD(v67) = sub_146F74(v67, 0x3E8u);
        v68 = json_integer(v67);
        json_object_set_new(v33, "hw", v68);
        if ( is_eeprom_loaded() )
        {
          if ( is_eeprom_loaded() )
            v69 = json_true();
          else
            v69 = json_false();
          json_object_set_new(v33, "eeprom_loaded", v69);
          if ( api_get_eeprom_chip_sn(v98) )
          {
            eeprom_chip_sn = (char *)api_get_eeprom_chip_sn(v98);
            v71 = BUFX_strdup(eeprom_chip_sn);
            json_object_set_new(v33, "sn", v71);
          }
        }
        else
        {
          if ( is_eeprom_loaded() )
            v77 = json_true();
          else
            v77 = json_false();
          json_object_set_new(v33, "eeprom_loaded", v77);
        }
        json_array_append_new(v100, v33);
        v32 += 216;
        if ( v106 <= ++v98 )
          goto LABEL_46;
      }
      if ( SHIDWORD(v44) <= 0 )
      {
        json_object_set_new(v33, "temp_pic", v43);
        v50 = json_array();
        goto LABEL_64;
      }
LABEL_23:
      v48 = 0;
      do
      {
        v49 = json_integer(0);
        ++v48;
        json_array_append_new(v45, v49);
      }
      while ( v48 < SHIDWORD(v44) );
      json_object_set_new(v33, "temp_pic", v45);
      v50 = json_array();
      if ( (int)v44 <= 0 )
      {
LABEL_29:
        v55 = (int *)*((_DWORD *)v32 + 2);
        v56 = &v55[HIDWORD(v44)];
        do
        {
          v57 = *v55++;
          v58 = json_integer(v57);
          json_array_append_new(v50, v58);
        }
        while ( v56 != v55 );
        json_object_set_new(v33, "temp_pcb", v50);
        v59 = json_array();
        if ( (int)v44 > 0 )
        {
LABEL_32:
          v60 = 0;
          v61 = *((_DWORD *)v32 + 1) - 4;
          do
          {
            v62 = *(_DWORD *)(v61 + 4);
            v61 += 4;
            ++v60;
            v63 = json_integer(v62);
            json_array_append_new(v59, v63);
          }
          while ( v60 < (int)v44 );
          if ( v44 <= 0 )
            goto LABEL_37;
        }
        LODWORD(v44) = 0;
        v64 = *((_DWORD *)v32 + 3) - 4;
        do
        {
          v65 = *(_DWORD *)(v64 + 4);
          v64 += 4;
          LODWORD(v44) = v44 + 1;
          v66 = json_integer(v65);
          json_array_append_new(v59, v66);
        }
        while ( (int)v44 < SHIDWORD(v44) );
        goto LABEL_37;
      }
      goto LABEL_26;
    }
LABEL_46:
    json_object_set_new(v101, "chain", v100);
    json_array_append_new(v105, v101);
    json_object_set_new(a1, "STATS", v105);
    if ( v106 > 0 )
    {
      free(ptr);
      free(v103);
    }
    return 0;
  }
}
