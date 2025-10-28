char *print_summary()
{
  double v0; // d0
  _DWORD *v1; // r6
  _DWORD *v2; // r11
  _DWORD *v3; // r3
  _DWORD *v4; // r7
  double v5; // d11
  double v6; // r0
  double v7; // d9
  double v8; // d8
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // r1
  _DWORD *v15; // r2
  int v16; // r3
  int v17; // r1
  _DWORD *v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int v28; // r3
  int v29; // r1
  int v30; // r1
  int v31; // r3
  int v32; // r1
  int v33; // r3
  int v34; // r1
  int v35; // r3
  int v36; // r1
  int *v37; // r9
  int v38; // r3
  int v39; // r1
  _DWORD *v40; // r2
  int v41; // r3
  int v42; // r1
  _DWORD *v43; // r2
  int v44; // r3
  int v45; // r1
  _DWORD *v46; // r2
  int v47; // r3
  int v48; // r1
  _DWORD *v49; // r2
  int v50; // r3
  int v51; // r1
  int v52; // r3
  int v53; // r1
  char *result; // r0
  const char *v55; // r11
  char *v56; // r3
  char *v57; // r2
  _DWORD *v58; // r12
  int v59; // r0
  int v60; // r3
  int v61; // r6
  char *v62; // r2
  int v63; // r8
  int v64; // r5
  __int64 *v65; // r4
  __int64 *v66; // r5
  int v67; // r3
  int v68; // r9
  __int64 v69; // t1
  __int64 v70; // r4
  int v71; // r1
  double v72; // d10
  double v73; // r0
  int v74; // r3
  int v75; // r1
  int v76; // r3
  int v77; // r1
  int v78; // r3
  int v79; // r1
  int v80; // r2
  int v81; // r9
  int v82; // r8
  unsigned int *v83; // r4
  int v84; // r3
  int v85; // r3
  int v86; // r3
  int v87; // r3
  int v88; // r3
  int v89; // r3
  unsigned int v90; // r5
  unsigned int v91; // r6
  int v92; // r1
  double v93; // d8
  double v94; // r0
  int v95; // r3
  int v96; // [sp+4h] [bp-2078h]
  int v97; // [sp+18h] [bp-2064h]
  _DWORD *v98; // [sp+1Ch] [bp-2060h]
  char *v99; // [sp+1Ch] [bp-2060h]
  int v100; // [sp+1Ch] [bp-2060h]
  int v101; // [sp+20h] [bp-205Ch]
  char *v102; // [sp+24h] [bp-2058h]
  char *v103; // [sp+24h] [bp-2058h]
  char *v104; // [sp+28h] [bp-2054h]
  int v105; // [sp+2Ch] [bp-2050h]
  int v106; // [sp+2Ch] [bp-2050h]
  char *format; // [sp+34h] [bp-2048h]
  int v108; // [sp+3Ch] [bp-2040h] BYREF
  float v109[14]; // [sp+40h] [bp-203Ch] BYREF
  char v110[4040]; // [sp+78h] [bp-2004h] BYREF
  char v111[4100]; // [sp+1078h] [bp-1004h] BYREF

  LOWORD(v1) = 20624;
  HIWORD(v1) = (unsigned int)&total_getworks >> 16;
  LOWORD(v2) = 20600;
  HIWORD(v2) = (unsigned int)&total_ro >> 16;
  read_system_status_from_monitor((int)v109);
  LOWORD(v3) = 20584;
  HIWORD(v3) = (unsigned int)&total_discarded >> 16;
  v98 = v3;
  LOWORD(v4) = 20532;
  HIWORD(v4) = (unsigned int)&g_fan_zc >> 16;
  v5 = v109[6] / 1000.0 / 1000.0 / 1000.0;
  get_miner_elapsed_time();
  LODWORD(v6) = sub_1457AC(*(_QWORD *)v1);
  v7 = v6 / v0 * 60.0;
  v8 = (*(double *)v98 + *(double *)v2 + total_diff_stale) / v0 * 60.0;
  V_LOCK();
  LOWORD(v9) = 27412;
  HIWORD(v9) = (unsigned int)"etail: " >> 16;
  logfmt_raw(v111, 0x1000u, 0, v9);
  V_UNLOCK();
  LOWORD(v10) = 24672;
  HIWORD(v10) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v10, 137, "print_summary", 13, 2286, 80, v111);
  V_LOCK();
  LOWORD(v11) = 27444;
  HIWORD(v11) = (unsigned int)"0.0" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v11, (int)v0 / 3600, (int)v0 % 3600 / 60, (int)v0 % 60);
  V_UNLOCK();
  LOWORD(v12) = 24672;
  HIWORD(v12) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v12, 137, "print_summary", 13, 2287, 80, v111);
  V_LOCK();
  LOWORD(v13) = 27480;
  HIWORD(v13) = (unsigned int)"%s: exec socket() failed" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v13, v5);
  V_UNLOCK();
  LOWORD(v14) = 24672;
  HIWORD(v14) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v14, 137, "print_summary", 13, 2288, 80, v111);
  V_LOCK();
  LOWORD(v15) = 20632;
  LOWORD(v16) = 27512;
  HIWORD(v15) = (unsigned int)&total_diff_stale >> 16;
  HIWORD(v16) = (unsigned int)"api bind to port %d failed, trying again in 30sec" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v16, *v15, v15[1]);
  V_UNLOCK();
  LOWORD(v17) = 24672;
  HIWORD(v17) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v17, 137, "print_summary", 13, 2289, 80, v111);
  V_LOCK();
  LOWORD(v18) = 20652;
  LOWORD(v19) = 27544;
  HIWORD(v18) = (unsigned int)&dword_1B50B4 >> 16;
  HIWORD(v19) = (unsigned int)"ng again in 30sec" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v19, *v18);
  V_UNLOCK();
  LOWORD(v20) = 24672;
  HIWORD(v20) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v20, 137, "print_summary", 13, 2290, 80, v111);
  V_LOCK();
  LOWORD(v21) = 22616;
  LOWORD(v22) = 27576;
  HIWORD(v21) = (unsigned int)&dword_195860 >> 16;
  HIWORD(v22) = (unsigned int)"port %d, failed (%s)" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v22, *(_DWORD *)(v21 + 0x20));
  V_UNLOCK();
  LOWORD(v23) = 24672;
  HIWORD(v23) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v23, 137, "print_summary", 13, 2291, 80, v111);
  V_LOCK();
  LOWORD(v24) = 27596;
  HIWORD(v24) = (unsigned int)"" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v24, *(_QWORD *)v1 + *(_QWORD *)&total_rejected);
  V_UNLOCK();
  LOWORD(v25) = 24672;
  HIWORD(v25) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v25, 137, "print_summary", 13, 2292, 80, v111);
  V_LOCK();
  LOWORD(v26) = 27620;
  HIWORD(v26) = (unsigned int)"iled (%s)" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v26, *v1, v1[1]);
  V_UNLOCK();
  LOWORD(v27) = 24672;
  HIWORD(v27) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v27, 137, "print_summary", 13, 2293, 80, v111);
  V_LOCK();
  LOWORD(v28) = 27644;
  HIWORD(v28) = (unsigned int)"ket failed" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v28, total_rejected, dword_1B50B4);
  V_UNLOCK();
  LOWORD(v29) = 24672;
  HIWORD(v29) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v29, 137, "print_summary", 13, 2294, 80, v111);
  V_LOCK();
  logfmt_raw(v111, 0x1000u, 0, "Accepted difficulty shares: %1.f", *v98, v98[1]);
  V_UNLOCK();
  LOWORD(v30) = 24672;
  HIWORD(v30) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v30, 137, "print_summary", 13, 2295, 80, v111);
  V_LOCK();
  LOWORD(v31) = 27704;
  HIWORD(v31) = (unsigned int)"IMEO failed\n" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v31, *v2, v2[1]);
  V_UNLOCK();
  LOWORD(v32) = 24672;
  HIWORD(v32) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v32, 137, "print_summary", 13, 2296, 80, v111);
  V_LOCK();
  LOWORD(v33) = 27740;
  HIWORD(v33) = (unsigned int)"IMEO failed\n" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v33, v109[12], v109[13]);
  V_UNLOCK();
  LOWORD(v34) = 24672;
  HIWORD(v34) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v34, 137, "print_summary", 13, 2297, 80, v111);
  if ( *(_QWORD *)v1 || *(_QWORD *)&total_rejected )
  {
    V_LOCK();
    v70 = *(_QWORD *)&total_rejected;
    LODWORD(v72) = sub_1457AC(100LL * *(_QWORD *)&total_rejected);
    HIDWORD(v72) = v71;
    LODWORD(v73) = sub_1457AC(v70 + *(_QWORD *)v1);
    LOWORD(v74) = 27768;
    HIWORD(v74) = (unsigned int)": %s" >> 16;
    logfmt_raw(v111, 0x1000u, 0, v74, v72 / v73);
    V_UNLOCK();
    LOWORD(v75) = 24672;
    HIWORD(v75) = (unsigned int)" print time %lld ms" >> 16;
    zlog(*v4, v75, 137, "print_summary", 13, 2300, 80, v111);
  }
  V_LOCK();
  LOWORD(v35) = 27792;
  HIWORD(v35) = (unsigned int)"%s error: format error about command" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v35, v7);
  V_UNLOCK();
  LOWORD(v36) = 24672;
  HIWORD(v36) = (unsigned int)" print time %lld ms" >> 16;
  LOWORD(v37) = 23136;
  HIWORD(v37) = (unsigned int)&dword_195A68 >> 16;
  zlog(*v4, v36, 137, "print_summary", 13, 2302, 80, v111);
  V_LOCK();
  LOWORD(v38) = 27836;
  HIWORD(v38) = (unsigned int)"meter" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v38, v8);
  V_UNLOCK();
  LOWORD(v39) = 24672;
  HIWORD(v39) = (unsigned int)" print time %lld ms" >> 16;
  v102 = (char *)v37;
  zlog(*v4, v39, 137, "print_summary", 13, 2303, 80, v111);
  V_LOCK();
  LOWORD(v40) = 20576;
  LOWORD(v41) = 27888;
  HIWORD(v40) = (unsigned int)&total_diff_accepted >> 16;
  HIWORD(v41) = (unsigned int)" 'command'" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v41, *v40, v40[1]);
  V_UNLOCK();
  LOWORD(v42) = 24672;
  HIWORD(v42) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v42, 137, "print_summary", 13, 2304, 80, v111);
  V_LOCK();
  LOWORD(v43) = 20616;
  LOWORD(v44) = 27940;
  HIWORD(v43) = (unsigned int)&total_accepted >> 16;
  HIWORD(v44) = (unsigned int)"1.0.0" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v44, *v43);
  V_UNLOCK();
  LOWORD(v45) = 24672;
  HIWORD(v45) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v45, 137, "print_summary", 13, 2305, 80, v111);
  V_LOCK();
  LOWORD(v46) = 20608;
  LOWORD(v47) = 27988;
  HIWORD(v46) = (unsigned int)&total_go >> 16;
  HIWORD(v47) = (unsigned int)"s" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v47, *v46);
  V_UNLOCK();
  LOWORD(v48) = 24672;
  HIWORD(v48) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v48, 137, "print_summary", 13, 2306, 80, v111);
  V_LOCK();
  LOWORD(v49) = 20648;
  LOWORD(v50) = 28036;
  HIWORD(v49) = (unsigned int)&total_rejected >> 16;
  HIWORD(v50) = (unsigned int)"ary" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v50, *v49);
  V_UNLOCK();
  LOWORD(v51) = 24672;
  HIWORD(v51) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v51, 137, "print_summary", 13, 2307, 80, v111);
  if ( *v37 > 0 )
  {
    V_LOCK();
    LOWORD(v78) = 28072;
    HIWORD(v78) = (unsigned int)"rn noncenum" >> 16;
    logfmt_raw(v111, 0x1000u, 0, v78);
    V_UNLOCK();
    LOWORD(v79) = 24672;
    HIWORD(v79) = (unsigned int)" print time %lld ms" >> 16;
    zlog(*v4, v79, 137, "print_summary", 13, 2311, 80, v111);
    if ( *v37 > 0 )
    {
      LOWORD(v80) = 28100;
      LOWORD(v81) = 24672;
      HIWORD(v80) = (unsigned int)"Return target chip reg" >> 16;
      HIWORD(v81) = (unsigned int)" print time %lld ms" >> 16;
      v106 = v80;
      v100 = 0;
      do
      {
        v82 = *(_DWORD *)(pools + 4 * v100);
        V_LOCK();
        v83 = (unsigned int *)(v82 + 1936);
        logfmt_raw(v111, 0x1000u, 0, v106, *(_DWORD *)(v82 + 12));
        V_UNLOCK();
        zlog(*v4, v81, 137, "print_summary", 13, 2316, 80, v111);
        V_LOCK();
        LOWORD(v84) = 28112;
        HIWORD(v84) = (unsigned int)"t chip reg" >> 16;
        logfmt_raw(v111, 0x1000u, 0, v84, *(_DWORD *)(v82 + 16));
        V_UNLOCK();
        zlog(*v4, v81, 137, "print_summary", 13, 2317, 80, v111);
        V_LOCK();
        LOWORD(v85) = 27596;
        HIWORD(v85) = (unsigned int)"" >> 16;
        logfmt_raw(v111, 0x1000u, 0, v85, *(_QWORD *)(v82 + 1928) + *(_QWORD *)(v82 + 1936));
        V_UNLOCK();
        zlog(*v4, v81, 137, "print_summary", 13, 2318, 80, v111);
        V_LOCK();
        LOWORD(v86) = 27620;
        HIWORD(v86) = (unsigned int)"iled (%s)" >> 16;
        logfmt_raw(v111, 0x1000u, 0, v86, *(_DWORD *)(v82 + 1928), *(_DWORD *)(v82 + 1932));
        V_UNLOCK();
        zlog(*v4, v81, 137, "print_summary", 13, 2319, 80, v111);
        V_LOCK();
        LOWORD(v87) = 27644;
        HIWORD(v87) = (unsigned int)"ket failed" >> 16;
        logfmt_raw(v111, 0x1000u, 0, v87, *(_DWORD *)(v82 + 1936), *(_DWORD *)(v82 + 1940));
        V_UNLOCK();
        zlog(*v4, v81, 137, "print_summary", 13, 2320, 80, v111);
        V_LOCK();
        v82 += 1968;
        LOWORD(v88) = 27668;
        HIWORD(v88) = (unsigned int)"ept failed (%s)" >> 16;
        logfmt_raw(v111, 0x1000u, 0, v88, *(_DWORD *)(v82 - 8), *(_DWORD *)(v82 - 4));
        V_UNLOCK();
        zlog(*v4, v81, 137, "print_summary", 13, 2321, 80, v111);
        V_LOCK();
        LOWORD(v89) = 27704;
        HIWORD(v89) = (unsigned int)"IMEO failed\n" >> 16;
        logfmt_raw(v111, 0x1000u, 0, v89, *(_DWORD *)v82, *(_DWORD *)(v82 + 4));
        V_UNLOCK();
        zlog(*v4, v81, 137, "print_summary", 13, 2322, 80, v111);
        if ( *((_QWORD *)v83 - 1) || *(_QWORD *)v83 )
        {
          V_LOCK();
          v90 = *v83;
          v91 = v83[1];
          LODWORD(v93) = sub_1457AC(100LL * *(_QWORD *)v83);
          HIDWORD(v93) = v92;
          LODWORD(v94) = sub_1457AC(__PAIR64__(v91, v90) + *((_QWORD *)v83 - 1));
          LOWORD(v95) = 27768;
          HIWORD(v95) = (unsigned int)": %s" >> 16;
          logfmt_raw(v111, 0x1000u, 0, v95, v93 / v94);
          V_UNLOCK();
          zlog(*v4, v81, 137, "print_summary", 13, 2325, 80, v111);
        }
        ++v100;
      }
      while ( *(_DWORD *)v102 > v100 );
    }
  }
  V_LOCK();
  LOWORD(v52) = 28124;
  HIWORD(v52) = (unsigned int)"getchipreg" >> 16;
  logfmt_raw(v111, 0x1000u, 0, v52);
  V_UNLOCK();
  LOWORD(v53) = 24672;
  HIWORD(v53) = (unsigned int)" print time %lld ms" >> 16;
  zlog(*v4, v53, 137, "print_summary", 13, 2330, 80, v111);
  v108 = 0;
  result = (char *)get_all_created_runtime(&v108);
  if ( v108 > 0 )
  {
    LOWORD(v55) = 26444;
    LOWORD(v56) = 28160;
    LOWORD(v57) = 25528;
    HIWORD(v57) = (unsigned int)"ING" >> 16;
    v99 = result - 4;
    v105 = 0;
    HIWORD(v56) = (unsigned int)"eg" >> 16;
    format = v56;
    v104 = v57;
    do
    {
      v58 = (_DWORD *)*((_DWORD *)v99 + 1);
      v99 += 4;
      v59 = snprintf(v110, 0x1000u, format, v58[64], v58[62], v96, v58[114], v58[115], v58[116], v58[117]);
      v60 = *(_DWORD *)v99;
      v61 = v59;
      v101 = *(_DWORD *)(*(_DWORD *)v99 + 352);
      if ( v101 > 0 )
      {
        LOWORD(v62) = 25532;
        v63 = 0;
        HIWORD(v62) = (unsigned int)"%s: send select failed, ret = %d" >> 16;
        v97 = 0;
        v103 = v62;
        while ( 1 )
        {
          v64 = *(_DWORD *)(v60 + 472);
          v65 = (__int64 *)(v64 + v63);
          v63 += 48;
          v66 = (__int64 *)(v64 + v63);
          ++v97;
          v68 = snprintf(&v110[v61], 4096 - v61, v104) + v61;
          do
          {
            v69 = *v65++;
            HIWORD(v55) = (unsigned int)"fanid" >> 16;
            v68 += snprintf(&v110[v68], 4096 - v68, v55, v67, v69);
          }
          while ( v66 != v65 );
          v61 = v68 + 2;
          snprintf(&v110[v68], 4096 - v68, v103);
          if ( v97 == v101 )
            break;
          v60 = *(_DWORD *)v99;
        }
      }
      V_LOCK();
      LOWORD(v76) = -27680;
      HIWORD(v76) = (unsigned int)"space" >> 16;
      logfmt_raw(v111, 0x1000u, 0, v76, v110);
      V_UNLOCK();
      LOWORD(v77) = 24672;
      HIWORD(v77) = (unsigned int)" print time %lld ms" >> 16;
      ++v105;
      result = (char *)zlog(*v4, v77, 137, "print_summary", 13, 2350, 80, v111);
    }
    while ( v108 > v105 );
  }
  return result;
}
