char *__fastcall http_test_bm(int a1, char *a2, size_t a3)
{
  const char *v4; // r5
  const char *v5; // r1
  char *v7; // r4
  const char *v8; // r1
  const char *v9; // r1
  int *v10; // r3
  int v11; // r0
  int v12; // r1
  const char *v13; // r1
  const char *v15; // r1
  const char *v16; // r1
  int v17; // r3
  int *v18; // r3
  int v19; // r0
  int v20; // r1
  int theory_hashrate; // r0
  int v22; // r3
  int *v23; // r3
  int v24; // r0
  int v25; // r1
  int miner_sale_hashrate; // r0
  int v27; // r3
  int *v28; // r3
  int v29; // r0
  int v30; // r1
  int v31; // r0
  const char *v32; // r1
  const char *v33; // r1
  const char *v34; // r5
  size_t v35; // r0
  int v36; // r3
  int *v37; // r3
  int v38; // r0
  int v39; // r1
  int v40; // r3
  int *v41; // r3
  int v42; // r0
  int v43; // r1
  const char *v44; // r1
  const char *v45; // r1
  int v46; // r3
  int *v47; // r3
  int v48; // r0
  int v49; // r1
  char *v50; // r12
  int *v51; // lr
  int *v52; // r6
  int v53; // r0
  int v54; // r1
  int v55; // r2
  int v56; // r3
  __int16 v57; // r2
  char v58; // r3
  int v59; // r3
  int *v60; // r3
  int v61; // r0
  int v62; // r1
  _DWORD *v63; // r3
  int v64; // r1
  FILE *v65; // r0
  FILE *v66; // r6
  const char *v67; // r2
  int v68; // [sp+14h] [bp-1020h] BYREF
  int v69; // [sp+18h] [bp-101Ch] BYREF
  _DWORD v70[4]; // [sp+1Ch] [bp-1018h] BYREF
  __int16 v71; // [sp+2Ch] [bp-1008h]
  char v72[4100]; // [sp+30h] [bp-1004h] BYREF

  v4 = (const char *)(a1 + 4);
  LOWORD(v5) = -32396;
  HIWORD(v5) = (unsigned int)"odminer-new/miner.c" >> 16;
  v68 = -1;
  v69 = -1;
  v7 = strstr((const char *)(a1 + 4), v5);
  if ( v7 )
  {
    V_LOCK();
    LOWORD(v22) = -32388;
    HIWORD(v22) = (unsigned int)"new/miner.c" >> 16;
    v7 = 0;
    logfmt_raw(v72, 0x1000u, 0, v22);
    V_UNLOCK();
    LOWORD(v23) = 20532;
    HIWORD(v23) = (unsigned int)&g_fan_zc >> 16;
    v24 = *v23;
    LOWORD(v23) = -32588;
    LOWORD(v25) = -32372;
    HIWORD(v25) = (unsigned int)"it_upstream_work stratum_send_line failed %d count %d" >> 16;
    HIWORD(v23) = (unsigned int)off_1483C4 >> 16;
    zlog(v24, v25, 139, v23, 12, 484, 20, v72);
    freq_scan_status = 1;
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_2FD98(a2, a3, miner_sale_hashrate);
    return v7;
  }
  LOWORD(v8) = -32232;
  HIWORD(v8) = (unsigned int)"anged" >> 16;
  if ( strstr(v4, v8) )
  {
    LOWORD(v9) = -32224;
    HIWORD(v9) = (unsigned int)"Wait for new job timeout" >> 16;
    _isoc99_sscanf(v4, v9, &v68, &v69);
    V_LOCK();
    logfmt_raw(v72, 0x1000u, 0, "cmd : get test = %d", v68);
    V_UNLOCK();
    LOWORD(v10) = 20532;
    HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
    v11 = *v10;
    LOWORD(v10) = -32588;
    LOWORD(v12) = -32372;
    HIWORD(v10) = (unsigned int)off_1483C4 >> 16;
    HIWORD(v12) = (unsigned int)"it_upstream_work stratum_send_line failed %d count %d" >> 16;
    zlog(v11, v12, 139, v10, 12, 491, 20, v72);
    if ( v68 != 523 )
    {
      LOWORD(v13) = -32192;
      HIWORD(v13) = (unsigned int)"job has come" >> 16;
      sprintf(a2, v13);
      return 0;
    }
    get_miner_info(a2);
    return v7;
  }
  LOWORD(v15) = -32176;
  HIWORD(v15) = (unsigned int)"work generator: jobid %p cancel %d" >> 16;
  v7 = strstr(v4, v15);
  if ( !v7 )
  {
    LOWORD(v16) = -32140;
    HIWORD(v16) = (unsigned int)"poolno=%d work generator switched to new job %s" >> 16;
    if ( strstr(v4, v16) )
    {
      V_LOCK();
      LOWORD(v17) = -32128;
      HIWORD(v17) = (unsigned int)"rk generator switched to new job %s" >> 16;
      logfmt_raw(v72, 0x1000u, 0, v17);
      V_UNLOCK();
      LOWORD(v18) = 20532;
      HIWORD(v18) = (unsigned int)&g_fan_zc >> 16;
      v19 = *v18;
      LOWORD(v18) = -32588;
      LOWORD(v20) = -32372;
      HIWORD(v18) = (unsigned int)off_1483C4 >> 16;
      HIWORD(v20) = (unsigned int)"it_upstream_work stratum_send_line failed %d count %d" >> 16;
      zlog(v19, v20, 139, v18, 12, 511, 20, v72);
      theory_hashrate = get_theory_hashrate();
      sub_2FD98(a2, a3, 102 * theory_hashrate / 100);
    }
    else
    {
      LOWORD(v32) = -32108;
      HIWORD(v32) = (unsigned int)"d to new job %s" >> 16;
      if ( strstr(v4, v32) )
      {
        V_LOCK();
        LOWORD(v40) = -32092;
        HIWORD(v40) = (unsigned int)"New job pushed after %lld ms" >> 16;
        v7 = 0;
        logfmt_raw(v72, 0x1000u, 0, v40);
        V_UNLOCK();
        LOWORD(v41) = 20532;
        HIWORD(v41) = (unsigned int)&g_fan_zc >> 16;
        v42 = *v41;
        LOWORD(v41) = -32588;
        LOWORD(v43) = -32372;
        HIWORD(v41) = (unsigned int)off_1483C4 >> 16;
        HIWORD(v43) = (unsigned int)"it_upstream_work stratum_send_line failed %d count %d" >> 16;
        zlog(v42, v43, 139, v41, 12, 517, 20, v72);
      }
      else
      {
        LOWORD(v33) = -32068;
        HIWORD(v33) = (unsigned int)"d ms" >> 16;
        if ( strstr(v4, v33) )
        {
          LOWORD(v34) = 22824;
          v7 = 0;
          HIWORD(v34) = (unsigned int)&g_miner_type[8] >> 16;
          V_LOCK();
          v35 = strlen(v34);
          LOWORD(v36) = -32052;
          HIWORD(v36) = (unsigned int)"job pushed after %lld ms" >> 16;
          logfmt_raw(v72, 0x1000u, 0, v36, v35, v34);
          V_UNLOCK();
          LOWORD(v37) = 20532;
          HIWORD(v37) = (unsigned int)&g_fan_zc >> 16;
          v38 = *v37;
          LOWORD(v37) = -32588;
          LOWORD(v39) = -32372;
          HIWORD(v37) = (unsigned int)off_1483C4 >> 16;
          HIWORD(v39) = (unsigned int)"it_upstream_work stratum_send_line failed %d count %d" >> 16;
          zlog(v38, v39, 139, v37, 12, 522, 20, v72);
          strcpy(a2, v34);
        }
        else
        {
          LOWORD(v44) = -32024;
          HIWORD(v44) = (unsigned int)"the pool is NULL" >> 16;
          v7 = (char *)strncmp(v4, v44, 7u);
          if ( v7 )
          {
            LOWORD(v45) = -31968;
            HIWORD(v45) = (unsigned int)"p_url" >> 16;
            v7 = (char *)strncmp(v4, v45, 7u);
            if ( v7 )
            {
              return (char *)-1;
            }
            else
            {
              V_LOCK();
              LOWORD(v46) = -31960;
              HIWORD(v46) = (unsigned int)"create_pool_stratum_threads" >> 16;
              logfmt_raw(v72, 0x1000u, 0, v46);
              V_UNLOCK();
              LOWORD(v47) = 20532;
              HIWORD(v47) = (unsigned int)&g_fan_zc >> 16;
              v48 = *v47;
              LOWORD(v47) = -32588;
              LOWORD(v49) = -32372;
              HIWORD(v47) = (unsigned int)off_1483C4 >> 16;
              HIWORD(v49) = (unsigned int)"it_upstream_work stratum_send_line failed %d count %d" >> 16;
              zlog(v48, v49, 139, v47, 12, 604, 80, v72);
              LOWORD(v51) = -31924;
              v50 = a2;
              HIWORD(v51) = (unsigned int)"" >> 16;
              v52 = v51 + 8;
              do
              {
                v50 += 16;
                v53 = *v51;
                v54 = v51[1];
                v55 = v51[2];
                v56 = v51[3];
                v51 += 4;
                *((_DWORD *)v50 - 4) = v53;
                *((_DWORD *)v50 - 3) = v54;
                *((_DWORD *)v50 - 2) = v55;
                *((_DWORD *)v50 - 1) = v56;
              }
              while ( v51 != v52 );
              v57 = *((_WORD *)v51 + 2);
              v58 = *((_BYTE *)v51 + 6);
              *(_DWORD *)v50 = *v51;
              *((_WORD *)v50 + 2) = v57;
              v50[6] = v58;
            }
          }
          else
          {
            memset(v70, 0, sizeof(v70));
            v71 = 0;
            V_LOCK();
            LOWORD(v59) = -32016;
            HIWORD(v59) = (unsigned int)" is NULL" >> 16;
            logfmt_raw(v72, 0x1000u, 0, v59);
            V_UNLOCK();
            LOWORD(v60) = 20532;
            HIWORD(v60) = (unsigned int)&g_fan_zc >> 16;
            v61 = *v60;
            LOWORD(v60) = -32588;
            LOWORD(v62) = -32372;
            HIWORD(v60) = (unsigned int)off_1483C4 >> 16;
            HIWORD(v62) = (unsigned int)"it_upstream_work stratum_send_line failed %d count %d" >> 16;
            zlog(v61, v62, 139, v60, 12, 530, 20, v72);
            LOWORD(v63) = 27348;
            LOWORD(v64) = -10508;
            HIWORD(v63) = (unsigned int)&g_miner_sn[4] >> 16;
            HIWORD(v64) = (unsigned int)" RX_MARGIN_ERROR_CLEAR_OVRD to 0" >> 16;
            v65 = (FILE *)fopen64(*v63, v64);
            v66 = v65;
            if ( v65 && (fread(v70, 0x11u, 1u, v65), fclose(v66), LOBYTE(v70[0])) )
            {
              LOWORD(v67) = -27680;
              HIWORD(v67) = (unsigned int)"space" >> 16;
              snprintf(a2, 0x12u, v67, v70);
            }
            else
            {
              strcpy(a2, "no miner sn stored on board");
            }
          }
        }
      }
    }
    return v7;
  }
  V_LOCK();
  LOWORD(v27) = -32164;
  HIWORD(v27) = (unsigned int)"or: jobid %p cancel %d" >> 16;
  logfmt_raw(v72, 0x1000u, 0, v27);
  V_UNLOCK();
  LOWORD(v28) = 20532;
  HIWORD(v28) = (unsigned int)&g_fan_zc >> 16;
  v29 = *v28;
  LOWORD(v28) = -32588;
  LOWORD(v30) = -32372;
  HIWORD(v28) = (unsigned int)off_1483C4 >> 16;
  HIWORD(v30) = (unsigned int)"it_upstream_work stratum_send_line failed %d count %d" >> 16;
  zlog(v29, v30, 139, v28, 12, 505, 20, v72);
  v31 = get_theory_hashrate();
  sub_2FD98(a2, a3, v31);
  return 0;
}
