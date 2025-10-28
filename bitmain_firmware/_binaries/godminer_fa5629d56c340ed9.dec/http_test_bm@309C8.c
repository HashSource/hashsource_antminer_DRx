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
  LOWORD(v5) = -26928;
  HIWORD(v5) = (unsigned int)"" >> 16;
  v68 = -1;
  v69 = -1;
  v7 = strstr((const char *)(a1 + 4), v5);
  if ( v7 )
  {
    V_LOCK();
    LOWORD(v22) = -26920;
    HIWORD(v22) = (unsigned int)"etsocket SO_RCVTIMEO failed\n" >> 16;
    v7 = 0;
    logfmt_raw(v72, 0x1000u, 0, v22);
    V_UNLOCK();
    LOWORD(v23) = 24916;
    HIWORD(v23) = (unsigned int)&unk_1B503C >> 16;
    v24 = *v23;
    LOWORD(v23) = -27120;
    LOWORD(v25) = -26904;
    HIWORD(v25) = (unsigned int)"IMEO failed\n" >> 16;
    HIWORD(v23) = (unsigned int)"port %d failed, trying again in 30sec" >> 16;
    zlog(v24, v25, 139, v23, 12, 484, 20, v72);
    freq_scan_status = 1;
    miner_sale_hashrate = get_miner_sale_hashrate();
    sub_30210(a2, a3, miner_sale_hashrate);
    return v7;
  }
  LOWORD(v8) = -26764;
  HIWORD(v8) = (unsigned int)"ing JSON 'command'" >> 16;
  if ( strstr(v4, v8) )
  {
    LOWORD(v9) = -26756;
    HIWORD(v9) = (unsigned int)" 'command'" >> 16;
    _isoc99_sscanf(v4, v9, &v68, &v69);
    V_LOCK();
    logfmt_raw(v72, 0x1000u, 0, "cmd : get test = %d", v68);
    V_UNLOCK();
    LOWORD(v10) = 24916;
    HIWORD(v10) = (unsigned int)&unk_1B503C >> 16;
    v11 = *v10;
    LOWORD(v10) = -27120;
    LOWORD(v12) = -26904;
    HIWORD(v10) = (unsigned int)"port %d failed, trying again in 30sec" >> 16;
    HIWORD(v12) = (unsigned int)"IMEO failed\n" >> 16;
    zlog(v11, v12, 139, v10, 12, 491, 20, v72);
    if ( v68 != 523 )
    {
      LOWORD(v13) = -26724;
      HIWORD(v13) = (unsigned int)"tion !!!" >> 16;
      sprintf(a2, v13);
      return 0;
    }
    get_miner_info(a2);
    return v7;
  }
  LOWORD(v15) = -26708;
  HIWORD(v15) = (unsigned int)"" >> 16;
  v7 = strstr(v4, v15);
  if ( !v7 )
  {
    LOWORD(v16) = -26672;
    HIWORD(v16) = (unsigned int)"s)" >> 16;
    if ( strstr(v4, v16) )
    {
      V_LOCK();
      LOWORD(v17) = -26660;
      HIWORD(v17) = (unsigned int)"stats" >> 16;
      logfmt_raw(v72, 0x1000u, 0, v17);
      V_UNLOCK();
      LOWORD(v18) = 24916;
      HIWORD(v18) = (unsigned int)&unk_1B503C >> 16;
      v19 = *v18;
      LOWORD(v18) = -27120;
      LOWORD(v20) = -26904;
      HIWORD(v18) = (unsigned int)"port %d failed, trying again in 30sec" >> 16;
      HIWORD(v20) = (unsigned int)"IMEO failed\n" >> 16;
      zlog(v19, v20, 139, v18, 12, 511, 20, v72);
      theory_hashrate = get_theory_hashrate();
      sub_30210(a2, a3, 102 * theory_hashrate / 100);
    }
    else
    {
      LOWORD(v32) = -26640;
      HIWORD(v32) = (unsigned int)"ions" >> 16;
      if ( strstr(v4, v32) )
      {
        V_LOCK();
        LOWORD(v40) = -26624;
        HIWORD(v40) = (unsigned int)"Pool reject summary" >> 16;
        v7 = 0;
        logfmt_raw(v72, 0x1000u, 0, v40);
        V_UNLOCK();
        LOWORD(v41) = 24916;
        HIWORD(v41) = (unsigned int)&unk_1B503C >> 16;
        v42 = *v41;
        LOWORD(v41) = -27120;
        LOWORD(v43) = -26904;
        HIWORD(v41) = (unsigned int)"port %d failed, trying again in 30sec" >> 16;
        HIWORD(v43) = (unsigned int)"IMEO failed\n" >> 16;
        zlog(v42, v43, 139, v41, 12, 517, 20, v72);
      }
      else
      {
        LOWORD(v33) = -26600;
        HIWORD(v33) = (unsigned int)" timeout" >> 16;
        if ( strstr(v4, v33) )
        {
          LOWORD(v34) = 26936;
          v7 = 0;
          HIWORD(v34) = (unsigned int)&unk_195930 >> 16;
          V_LOCK();
          v35 = strlen(v34);
          LOWORD(v36) = -26584;
          HIWORD(v36) = (unsigned int)"enum" >> 16;
          logfmt_raw(v72, 0x1000u, 0, v36, v35, v34);
          V_UNLOCK();
          LOWORD(v37) = 24916;
          HIWORD(v37) = (unsigned int)&unk_1B503C >> 16;
          v38 = *v37;
          LOWORD(v37) = -27120;
          LOWORD(v39) = -26904;
          HIWORD(v37) = (unsigned int)"port %d failed, trying again in 30sec" >> 16;
          HIWORD(v39) = (unsigned int)"IMEO failed\n" >> 16;
          zlog(v38, v39, 139, v37, 12, 522, 20, v72);
          strcpy(a2, v34);
        }
        else
        {
          LOWORD(v44) = -26556;
          HIWORD(v44) = (unsigned int)"achipreg" >> 16;
          v7 = (char *)strncmp(v4, v44, 7u);
          if ( v7 )
          {
            LOWORD(v45) = -26500;
            HIWORD(v45) = (unsigned int)"hip reg" >> 16;
            v7 = (char *)strncmp(v4, v45, 7u);
            if ( v7 )
            {
              return (char *)-1;
            }
            else
            {
              V_LOCK();
              LOWORD(v46) = -26492;
              HIWORD(v46) = (unsigned int)"setchipreg" >> 16;
              logfmt_raw(v72, 0x1000u, 0, v46);
              V_UNLOCK();
              LOWORD(v47) = 24916;
              HIWORD(v47) = (unsigned int)&unk_1B503C >> 16;
              v48 = *v47;
              LOWORD(v47) = -27120;
              LOWORD(v49) = -26904;
              HIWORD(v47) = (unsigned int)"port %d failed, trying again in 30sec" >> 16;
              HIWORD(v49) = (unsigned int)"IMEO failed\n" >> 16;
              zlog(v48, v49, 139, v47, 12, 604, 80, v72);
              LOWORD(v51) = -26456;
              v50 = a2;
              HIWORD(v51) = (unsigned int)"artptime" >> 16;
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
            LOWORD(v59) = -26548;
            HIWORD(v59) = (unsigned int)"" >> 16;
            logfmt_raw(v72, 0x1000u, 0, v59);
            V_UNLOCK();
            LOWORD(v60) = 24916;
            HIWORD(v60) = (unsigned int)&unk_1B503C >> 16;
            v61 = *v60;
            LOWORD(v60) = -27120;
            LOWORD(v62) = -26904;
            HIWORD(v60) = (unsigned int)"port %d failed, trying again in 30sec" >> 16;
            HIWORD(v62) = (unsigned int)"IMEO failed\n" >> 16;
            zlog(v61, v62, 139, v60, 12, 530, 20, v72);
            LOWORD(v63) = 31468;
            LOWORD(v64) = -4352;
            HIWORD(v63) = (unsigned int)&unk_196ADC >> 16;
            HIWORD(v64) = (unsigned int)"2b214216aa7b05956f136d0e734a8d27727133d13da8d3b123a9baf3b4fb5269bfe51f307e4e056fcd2ebd21f3b43fa9fe06971ca50435ffde75a2be1ee2ee5dae1243c447efde4e543daf963dbea12fbb9d1707e8c07a9e3e03b75bb663eacacae3dc1f043bef3ae4e823ea64e48e919d5848c85590c035580b4db4e98543ddc3c3a4165c86c8399ba01a5e966c1c627ae9dff4aa8190fdb60544eac6be771edd4bca9c12d5e777ec8538b5a488470d9828029106e28686b0cb8b56745364a17f0cf29f70b1d8c83f500dd7c8b57fb772c83e77481b68e4c578c3a11e1dd937302d3fd1da60cd406c85d4845e866451746895394912c851a8b84eddf42356e6dbccdc582de589e03aa396771b661fbd854365b3400d6fe3434ed512083a36ee6943018127e3disable_cores" >> 16;
            v65 = (FILE *)fopen64(*v63, v64);
            v66 = v65;
            if ( v65 && (fread(v70, 0x11u, 1u, v65), fclose(v66), LOBYTE(v70[0])) )
            {
              LOWORD(v67) = -21600;
              HIWORD(v67) = (unsigned int)"nfo.c" >> 16;
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
  LOWORD(v27) = -26696;
  HIWORD(v27) = (unsigned int)"warning" >> 16;
  logfmt_raw(v72, 0x1000u, 0, v27);
  V_UNLOCK();
  LOWORD(v28) = 24916;
  HIWORD(v28) = (unsigned int)&unk_1B503C >> 16;
  v29 = *v28;
  LOWORD(v28) = -27120;
  LOWORD(v30) = -26904;
  HIWORD(v28) = (unsigned int)"port %d failed, trying again in 30sec" >> 16;
  HIWORD(v30) = (unsigned int)"IMEO failed\n" >> 16;
  zlog(v29, v30, 139, v28, 12, 505, 20, v72);
  v31 = get_theory_hashrate();
  sub_30210(a2, a3, v31);
  return 0;
}
