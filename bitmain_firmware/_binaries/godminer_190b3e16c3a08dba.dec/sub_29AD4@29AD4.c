int __fastcall sub_29AD4(_DWORD *a1, const char **a2)
{
  int v3; // r5
  char *all_created_runtime; // r8
  int v5; // r0
  int v6; // r6
  double v7; // d0
  int v8; // r4
  float v9; // s25
  float v10; // s22
  __int64 v11; // r6
  double v12; // d9
  double v13; // d8
  _DWORD *v14; // r8
  _DWORD *v15; // r0
  bool v16; // cc
  double *v17; // r0
  _DWORD *v18; // r5
  double *v19; // r2
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
  int v73; // r1
  double v74; // d8
  double v75; // r0
  _DWORD *v76; // r2
  char *v77; // r7
  size_t v78; // r5
  size_t v79; // r2
  bool v80; // cf
  int v81; // r3
  int v82; // t1
  bool v83; // zf
  char *v84; // r0
  char *v85; // r10
  char *v86; // r11
  char *v87; // r8
  int v88; // t1
  int v89; // r3
  double *v90; // r0
  int v91; // [sp+10h] [bp-1084h]
  char *v92; // [sp+18h] [bp-107Ch]
  _DWORD *v93; // [sp+1Ch] [bp-1078h]
  _DWORD *v94; // [sp+2Ch] [bp-1068h]
  char *v96; // [sp+34h] [bp-1060h]
  char *ptr; // [sp+38h] [bp-105Ch]
  _DWORD *v98; // [sp+3Ch] [bp-1058h]
  int v99; // [sp+44h] [bp-1050h] BYREF
  double v100; // [sp+48h] [bp-104Ch] BYREF
  _DWORD v101[2]; // [sp+50h] [bp-1044h] BYREF
  _DWORD v102[2]; // [sp+58h] [bp-103Ch] BYREF
  int *v103; // [sp+60h] [bp-1034h]
  float v104; // [sp+64h] [bp-1030h]
  float v105; // [sp+68h] [bp-102Ch]
  float v106; // [sp+6Ch] [bp-1028h]
  float v107; // [sp+70h] [bp-1024h]
  double v108; // [sp+78h] [bp-101Ch]
  __int64 v109; // [sp+88h] [bp-100Ch]
  char v110[4100]; // [sp+90h] [bp-1004h] BYREF

  v101[0] = 0;
  v3 = a1 == 0;
  v101[1] = 0;
  v99 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v99);
  v5 = frontend_runtime_instance();
  if ( !a2 )
    v3 = 1;
  if ( v3 )
  {
    V_LOCK();
    logfmt_raw(v110, 0x1000u, 0, "%s: input bad api param", "get_stats");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_stats",
      9,
      741,
      100,
      v110);
    return -2147483646;
  }
  else
  {
    v6 = v5;
    sub_246B8(a1, a2);
    sub_247D4(a1);
    v98 = json_array();
    read_system_status_from_monitor((int)v102);
    v7 = v108;
    v8 = v102[1];
    format_hashrate_double(*(_DWORD *)(*(_DWORD *)(v6 + 72) + 16), &v100, (char *)v101);
    v9 = v104;
    v10 = v105;
    v11 = v109;
    v12 = v106 * v7;
    v13 = v107 * v7;
    if ( v99 > 0 )
    {
      v96 = (char *)malloc(216 * v99);
      v85 = v96;
      v86 = (char *)malloc(4 * v99);
      ptr = v86;
      if ( v99 > 0 )
      {
        v87 = all_created_runtime - 4;
        do
        {
          v88 = *((_DWORD *)v87 + 1);
          v87 += 4;
          read_status_from_monitor(v85, v88);
          v89 = v99;
          v85 += 216;
          *(_DWORD *)&v86[4 * v3++] = *(_DWORD *)(*(_DWORD *)v87 + 224);
        }
        while ( v89 > v3 );
      }
    }
    else
    {
      ptr = 0;
      v96 = 0;
    }
    v14 = json_object();
    v94 = v14;
    get_total_nonce_rate();
    get_total_accept_rate();
    get_miner_elapsed_time();
    v15 = json_integer((__int64)v7);
    json_object_set_new(v14, "elapsed", v15);
    v16 = (unsigned int)opt_algo > 0xA;
    if ( opt_algo != 10 )
      v16 = (unsigned int)(opt_algo - 6) > 1;
    if ( v16 )
    {
      sub_12E10C((__int64)(v9 * v7 * 100.0));
      v90 = json_real();
      v18 = v14;
      json_object_set_new(v14, "rate_5s", v90);
      sub_12E10C((__int64)(v13 * 100.0));
    }
    else
    {
      sub_12E10C((__int64)(v10 * v7 * 100.0));
      v17 = json_real();
      json_object_set_new(v14, "rate_5s", v17);
      v12 = *(float *)&v7 * v12;
      sub_12E10C((__int64)(*(float *)&v7 * v13 * 100.0));
      v18 = v14;
    }
    v19 = json_real();
    json_object_set_new(v18, "rate_avg", v19);
    sub_12E10C((__int64)(v12 * 100.0));
    v20 = json_real();
    json_object_set_new(v18, "rate_30m", v20);
    sub_12E10C((__int64)(v100 * 100.0));
    v21 = json_real();
    json_object_set_new(v14, "rate_ideal", v21);
    v22 = BUFX_strdup((char *)v101);
    json_object_set_new(v14, "rate_unit", v22);
    v23 = json_integer(v99);
    json_object_set_new(v14, "chain_num", v23);
    v24 = json_integer(v8);
    json_object_set_new(v14, "fan_num", v24);
    v25 = json_array();
    if ( v8 > 0 )
    {
      v26 = v103;
      v27 = &v103[v8];
      do
      {
        v28 = *v26++;
        v29 = json_integer(v28);
        json_array_append_new(v25, v29);
      }
      while ( v27 != v26 );
    }
    json_object_set_new(v94, "fan", v25);
    v30 = v11 + total_diff1;
    if ( v11 + total_diff1 )
    {
      LODWORD(v74) = sub_12E0FC(v11);
      HIDWORD(v74) = v73;
      LODWORD(v75) = sub_12E0FC(v30);
      sub_12E10C((__int64)(v74 / v75 * 100.0 * 10000.0));
    }
    v31 = json_real();
    json_object_set_new(v94, "hwp_total", v31);
    v93 = json_array();
    if ( v99 > 0 )
    {
      v32 = v96;
      v92 = ptr - 4;
      v91 = 0;
      while ( 1 )
      {
        v33 = json_object();
        v34 = *((_DWORD *)v92 + 1);
        v92 += 4;
        v35 = json_integer(v34);
        json_object_set_new(v33, "index", v35);
        v36 = json_integer(*((int *)v32 + 18));
        json_object_set_new(v33, "freq_avg", v36);
        v37 = *((float *)v32 + 10);
        v38 = v7 * *((double *)v32 + 6) * 100.0;
        v100 = v7 * *((double *)v32 + 6);
        sub_12E10C((__int64)v38);
        v39 = json_real();
        json_object_set_new(v33, "rate_ideal", v39);
        sub_12E10C((__int64)(v37 * v7 * 100.0));
        v40 = json_real();
        json_object_set_new(v33, "rate_real", v40);
        v41 = json_integer(*((int *)v32 + 16));
        json_object_set_new(v33, "asic_num", v41);
        v42 = *((_DWORD *)v32 + 17);
        if ( v42 )
        {
          v77 = v110;
          v78 = 0;
          v79 = stpcpy(v110, v42) - (_DWORD)v110;
          while ( 1 )
          {
            v80 = v78++ >= v79;
            if ( v80 )
              break;
            while ( 1 )
            {
              v82 = (unsigned __int8)*v77++;
              v81 = v82;
              v83 = v82 == 111;
              if ( v82 != 111 )
                v83 = v81 == 32;
              if ( v83 )
                break;
              *(v77 - 1) = 120;
              v79 = strlen(v110);
              v80 = v78++ >= v79;
              if ( v80 )
                goto LABEL_58;
            }
          }
LABEL_58:
          v84 = BUFX_strdup(v110);
          json_object_set_new(v33, "asic", v84);
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
          goto LABEL_22;
        json_object_set_new(v33, "temp_pic", v45);
        v50 = json_array();
LABEL_25:
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
          goto LABEL_28;
LABEL_63:
        json_object_set_new(v33, "temp_pcb", v50);
        v59 = json_array();
        if ( (int)v44 > 0 )
          goto LABEL_31;
LABEL_36:
        json_object_set_new(v33, "temp_chip", v59);
        v67 = *((_QWORD *)v32 + 10);
        if ( opt_algo == 9 )
          LODWORD(v67) = sub_12E424(v67, 0x3E8u);
        v68 = json_integer(v67);
        json_object_set_new(v33, "hw", v68);
        if ( is_eeprom_loaded() )
        {
          if ( is_eeprom_loaded() )
            v69 = json_true();
          else
            v69 = json_false();
          json_object_set_new(v33, "eeprom_loaded", v69);
          if ( api_get_eeprom_chip_sn(v91) )
          {
            eeprom_chip_sn = (char *)api_get_eeprom_chip_sn(v91);
            v71 = BUFX_strdup(eeprom_chip_sn);
            json_object_set_new(v33, "sn", v71);
          }
        }
        else
        {
          if ( is_eeprom_loaded() )
            v76 = json_true();
          else
            v76 = json_false();
          json_object_set_new(v33, "eeprom_loaded", v76);
        }
        json_array_append_new(v93, v33);
        v32 += 216;
        v16 = v99 <= ++v91;
        if ( v16 )
          goto LABEL_45;
      }
      if ( SHIDWORD(v44) <= 0 )
      {
        json_object_set_new(v33, "temp_pic", v43);
        v50 = json_array();
        goto LABEL_63;
      }
LABEL_22:
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
LABEL_28:
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
LABEL_31:
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
            goto LABEL_36;
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
        goto LABEL_36;
      }
      goto LABEL_25;
    }
LABEL_45:
    json_object_set_new(v94, "chain", v93);
    json_array_append_new(v98, v94);
    json_object_set_new(a1, "STATS", v98);
    if ( v99 > 0 )
    {
      free(ptr);
      free(v96);
    }
    return 0;
  }
}
