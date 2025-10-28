_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v6; // r7
  __int64 v7; // r2
  int v8; // r8
  int v9; // r5
  int v10; // r11
  float v11; // s16
  int v12; // r10
  int v13; // lr
  int v14; // r10
  __int64 v15; // kr00_8
  __int64 *v16; // r2
  __int64 v17; // t1
  int v19; // r5
  int v20; // r3
  int v21; // r2
  double v22; // d6
  int v23; // r5
  unsigned int v24; // r3
  bool v25; // cf
  unsigned int v26; // r3
  float v27; // s17
  int v28; // r3
  int *v29; // r3
  int v30; // r0
  int v31; // r1
  _DWORD *v32; // r10
  unsigned int v33; // r12
  int *v34; // r3
  __int64 v35; // r0
  int v36; // lr
  __int64 v37; // kr08_8
  float v38; // s17
  int v39; // r0
  int v40; // r0
  char v41; // r1
  int v42; // r3
  __int64 v43; // r0
  float v44; // s17
  char *v45; // r1
  int v46; // r6
  int v47; // r10
  int v48; // r1
  int v49; // r3
  int v50; // r1
  int v51; // r3
  int v52; // r1
  int v53; // r3
  int v54; // r1
  int v55; // [sp+2Ch] [bp-1158h]
  int v56; // [sp+30h] [bp-1154h]
  int v57; // [sp+38h] [bp-114Ch]
  int *v58; // [sp+44h] [bp-1140h]
  int v59; // [sp+44h] [bp-1140h]
  int v60; // [sp+48h] [bp-113Ch]
  __int64 v61; // [sp+4Ch] [bp-1138h]
  _BYTE v62[4]; // [sp+5Ch] [bp-1128h] BYREF
  __int64 v63; // [sp+60h] [bp-1124h] BYREF
  __int64 v64; // [sp+68h] [bp-111Ch] BYREF
  double v65; // [sp+70h] [bp-1114h] BYREF
  _BYTE v66[8]; // [sp+7Ch] [bp-1108h] BYREF
  unsigned __int8 v67; // [sp+84h] [bp-1100h]
  _DWORD v68[7]; // [sp+88h] [bp-10FCh] BYREF
  int v69; // [sp+A4h] [bp-10E0h]
  _BYTE v70[32]; // [sp+A8h] [bp-10DCh] BYREF
  float v71; // [sp+C8h] [bp-10BCh]
  float v72; // [sp+D0h] [bp-10B4h]
  float v73; // [sp+D4h] [bp-10B0h]
  char v74[4100]; // [sp+180h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 136))(a1, &v63);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 144))(a1, &v64);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 140))(a1, &v65, v62);
  v6 = *(_DWORD *)(a1 + 248);
  v7 = v64;
  *(_QWORD *)(a2 + 48) = v63;
  *(_QWORD *)(a2 + 56) = v7;
  if ( v6 <= 16 )
  {
    LOWORD(v9) = -32136;
    v8 = 16 * v6;
    HIWORD(v9) = (unsigned int)&unk_198280 >> 16;
    v56 = v9 + 16;
    v55 = v9 + 272;
    if ( !*(_BYTE *)(v9 + v6) )
    {
      clock_gettime(1, (struct timespec *)(v9 + 16 + v8));
      clock_gettime(1, (struct timespec *)(v9 + 272 + v8));
      clock_gettime(1, (struct timespec *)(v9 + 528 + v8));
      *(_QWORD *)(v9 + 784 + 8 * v6) = 0;
      *(_BYTE *)(v9 + v6) = 1;
    }
    if ( *(_QWORD *)(a1 + 464) )
    {
      if ( !*(_BYTE *)(v9 + 0x390) )
        *(_BYTE *)(v9 + 0x390) = 1;
    }
    else if ( !*(_BYTE *)(v9 + 0x390) )
    {
      clock_gettime(1, (struct timespec *)(v56 + v8));
      clock_gettime(1, (struct timespec *)(v55 + v8));
      clock_gettime(1, (struct timespec *)((char *)&unk_198488 + v8));
      *((_QWORD *)&unk_198588 + v6) = 0;
      return a3;
    }
    v58 = (int *)(a1 + 464);
    LOWORD(v10) = -31216;
    HIWORD(v10) = (unsigned int)&unk_198618 >> 16;
    clock_gettime(1, (struct timespec *)(v56 + v8 + 8));
    v11 = (float)(1000LL * (*(_DWORD *)(v9 + v8 + 24) - *(_DWORD *)(v9 + v8 + 16))
                + (*(_DWORD *)(v9 + v8 + 28) - *(_DWORD *)(v9 + v8 + 20)) / 1000000)
        / 1000.0;
    v57 = v10 + 2896 * v6;
    if ( v11 >= 5.0 )
    {
      v24 = *((_DWORD *)&unk_198588 + 2 * v6);
      v25 = *v58 >= v24;
      v26 = *v58 - v24;
      v59 = *v58;
      LODWORD(v61) = v26;
      v60 = *(_DWORD *)(a1 + 468);
      HIDWORD(v61) = v60 - (*((_DWORD *)&unk_198588 + 2 * v6 + 1) + !v25);
      get_miner_working_status((int)v70);
      if ( v70[6] || v70[0] )
      {
        v27 = 0.0;
      }
      else
      {
        v40 = *(_DWORD *)(a1 + 448);
        v41 = 32 - v40;
        v42 = 1 << (v40 - 32);
        LODWORD(v43) = 1 << v40;
        HIDWORD(v43) = v42 | (1u >> v41);
        v44 = COERCE_FLOAT(sub_145998(v43));
        v27 = v44 * (float)(COERCE_FLOAT(sub_145998(v61)) / v11);
      }
      V_LOCK();
      LOWORD(v28) = -31292;
      HIWORD(v28) = (unsigned int)"miner_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
      logfmt_raw(v74, 0x1000u, 0, v28, v11, v59, v60, v61, v27);
      V_UNLOCK();
      LOWORD(v29) = 20532;
      HIWORD(v29) = (unsigned int)&g_fan_zc >> 16;
      v30 = *v29;
      LOWORD(v29) = -31308;
      LOWORD(v31) = -31228;
      HIWORD(v29) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
      HIWORD(v31) = (unsigned int)"ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
      zlog(v30, v31, 190, v29, 15, 126, 20, v74);
      v32 = (_DWORD *)(v10 + 2896 * v6);
      clock_gettime(1, (struct timespec *)(v56 + v8));
      v33 = v32[723];
      v34 = (int *)((char *)&unk_198588 + 8 * v6);
      *v34 = v59;
      LODWORD(v35) = v32[722];
      v36 = v32[720] + 1;
      v34[1] = v60;
      HIDWORD(v35) = v33;
      *(float *)(v10 + 4 * (v32[720] + 724 * v6)) = v27;
      v37 = __PAIR64__(v33, v35) + 1;
      v32[720] = v36 % 720;
      v38 = v27 + (float)(COERCE_FLOAT(sub_145998(v35)) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v38 / COERCE_FLOAT(sub_145998(v37));
      *((_QWORD *)v32 + 361) = v37;
    }
    sub_63490(v57);
    *(float *)(a2 + 32) = 5.0;
    sub_63490(v57);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_63490(v57);
    v12 = *(_DWORD *)(a1 + 352);
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v12 <= 0 )
    {
      v15 = 0;
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 472) + 16;
      v14 = v13 + 48 * v12;
      v15 = 0;
      do
      {
        v16 = (__int64 *)v13;
        do
        {
          v17 = *v16++;
          v15 += v17;
        }
        while ( (__int64 *)(v13 + 32) != v16 );
        v13 += 48;
      }
      while ( v14 != v13 );
    }
    *(_QWORD *)(a2 + 80) = v15;
    clock_gettime(1, (struct timespec *)(v55 + v8 + 8));
    if ( (float)((float)(1000LL * (*(_DWORD *)(v9 + v8 + 280) - *(_DWORD *)(v9 + v8 + 272))
                       + (*(_DWORD *)(v9 + v8 + 284) - *(_DWORD *)(v9 + v8 + 276)) / 1000000)
               / 1000.0) >= 900.0 )
    {
      sub_63490(v57);
      v19 = *(_DWORD *)(a2 + 200);
      if ( v19 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v19 + 104) = 1147207680;
      }
      v20 = *(_DWORD *)(a2 + 208);
      v21 = *(_DWORD *)(a2 + 212);
      v22 = v65 * 0.97;
      *(_DWORD *)(a2 + 200) = v19 + 1;
      *(_DWORD *)(a2 + 208) = v20 + 1;
      *(_DWORD *)(a2 + 212) = __CFADD__(v20, 1) + v21;
      if ( v22 < 900.0 )
      {
        v39 = *(_DWORD *)(a1 + 256);
        a3[2] |= 1u;
        set_miner_6060info_low_hashrate_err(v39, 0);
      }
      else
      {
        *a3 |= 1u;
        get_miner_working_status((int)v66);
        v23 = v67;
        if ( !v67 )
        {
          V_LOCK();
          LOWORD(v45) = 27372;
          HIWORD(v45) = (unsigned int)"ity (accepted shares / min): %.2f/min" >> 16;
          LOWORD(v46) = -31308;
          LOWORD(v47) = -31036;
          HIWORD(v46) = (unsigned int)"ns/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
          V_INT((int)v68, v45, *(int *)(a1 + 256));
          HIWORD(v47) = (unsigned int)"t! (%d)" >> 16;
          logfmt_raw(v74, 0x1000u, v23, v69, v68[0], v68[1], v68[2], v68[3], v68[4], v68[5], v68[6], v69, v47, v46);
          V_UNLOCK();
          LOWORD(v48) = -31228;
          HIWORD(v48) = (unsigned int)"ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
          zlog(g_zc, v48, 190, v46, 15, 173, 80, v74);
          read_status_from_monitor(v70, a1);
          V_LOCK();
          LOWORD(v49) = -31008;
          HIWORD(v49) = (unsigned int)"eed limit (%d), uneffective_value_count = %d!" >> 16;
          logfmt_raw(v74, 0x1000u, v23, v49, v71 / 1000000000.0);
          V_UNLOCK();
          LOWORD(v50) = -31228;
          HIWORD(v50) = (unsigned int)"ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
          zlog(g_zc, v50, 190, v46, 15, 176, 80, v74);
          V_LOCK();
          LOWORD(v51) = -30976;
          HIWORD(v51) = (unsigned int)"e_count = %d!" >> 16;
          logfmt_raw(v74, 0x1000u, v23, v51, v72 / 1000000000.0);
          V_UNLOCK();
          LOWORD(v52) = -31228;
          HIWORD(v52) = (unsigned int)"ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
          zlog(g_zc, v52, 190, v46, 15, 177, 80, v74);
          V_LOCK();
          LOWORD(v53) = -30940;
          HIWORD(v53) = (unsigned int)"it (%d), max_chip_temp = %d, max_pcb_temp = %d!" >> 16;
          logfmt_raw(v74, 0x1000u, v23, v53, v73 / 1000000000.0);
          V_UNLOCK();
          LOWORD(v54) = -31228;
          HIWORD(v54) = (unsigned int)"ner-origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_temperature.c" >> 16;
          zlog(g_zc, v54, 190, v46, 15, 178, 80, v74);
          set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 256), 1);
        }
      }
      clock_gettime(1, (struct timespec *)(v55 + v8));
    }
  }
  return a3;
}
