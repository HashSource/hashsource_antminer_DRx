_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v5; // r7
  __int64 v6; // r2
  char *v7; // r8
  float v8; // s16
  int v9; // r9
  int v10; // lr
  int v11; // r9
  __int64 v12; // kr08_8
  __int64 *v13; // r2
  __int64 v14; // t1
  int v16; // r5
  int v17; // r3
  int v18; // r2
  double v19; // d6
  int v20; // r5
  __int64 v21; // kr10_8
  float v22; // s17
  _DWORD *v23; // r9
  int v24; // lr
  unsigned int v25; // r3
  unsigned int v26; // r10
  __int64 v27; // r0
  unsigned int v28; // r10
  float v29; // s17
  int v30; // r0
  int v31; // r0
  char v32; // r1
  int v33; // r3
  __int64 v34; // r0
  float v35; // s17
  int v36; // [sp+24h] [bp-11F8h]
  int v37; // [sp+24h] [bp-11F8h]
  int v38; // [sp+24h] [bp-11F8h]
  int v40; // [sp+54h] [bp-11C8h]
  unsigned int v41; // [sp+58h] [bp-11C4h]
  unsigned int v42; // [sp+64h] [bp-11B8h]
  unsigned int v43; // [sp+64h] [bp-11B8h]
  _BYTE v44[4]; // [sp+74h] [bp-11A8h] BYREF
  __int64 v45; // [sp+78h] [bp-11A4h] BYREF
  __int64 v46; // [sp+80h] [bp-119Ch] BYREF
  double v47; // [sp+88h] [bp-1194h] BYREF
  _BYTE v48[8]; // [sp+94h] [bp-1188h] BYREF
  unsigned __int8 v49; // [sp+9Ch] [bp-1180h]
  _DWORD v50[8]; // [sp+A0h] [bp-117Ch] BYREF
  _DWORD v51[7]; // [sp+C0h] [bp-115Ch] BYREF
  int v52; // [sp+DCh] [bp-1140h]
  _DWORD v53[7]; // [sp+E0h] [bp-113Ch] BYREF
  int v54; // [sp+FCh] [bp-1120h]
  _DWORD v55[7]; // [sp+100h] [bp-111Ch] BYREF
  int v56; // [sp+11Ch] [bp-1100h]
  _DWORD v57[7]; // [sp+120h] [bp-10FCh] BYREF
  int v58; // [sp+13Ch] [bp-10E0h]
  _BYTE v59[32]; // [sp+140h] [bp-10DCh] BYREF
  float v60; // [sp+160h] [bp-10BCh]
  float v61; // [sp+168h] [bp-10B4h]
  float v62; // [sp+16Ch] [bp-10B0h]
  char v63[4100]; // [sp+218h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 136))(a1, &v45);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 144))(a1, &v46);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 140))(a1, &v47, v44);
  v5 = *(_DWORD *)(a1 + 252);
  v6 = v46;
  *(_QWORD *)(a2 + 48) = v45;
  *(_QWORD *)(a2 + 56) = v6;
  if ( v5 <= 16 )
  {
    v40 = 16 * v5;
    if ( !*((_BYTE *)&unk_199390 + v5) )
    {
      clock_gettime(1, (struct timespec *)&unk_1993A0 + 2 * v5);
      clock_gettime(1, (struct timespec *)&unk_1994A0 + 2 * v5);
      clock_gettime(1, (struct timespec *)&unk_1995A0 + 2 * v5);
      *((_QWORD *)&unk_1996A0 + v5) = 0;
      *((_BYTE *)&unk_199390 + v5) = 1;
    }
    if ( *(_QWORD *)(a1 + 472) )
    {
      if ( !byte_199720 )
        byte_199720 = 1;
    }
    else if ( !byte_199720 )
    {
      clock_gettime(1, (struct timespec *)&unk_1993A0 + 2 * v5);
      clock_gettime(1, (struct timespec *)&unk_1994A0 + 2 * v5);
      clock_gettime(1, (struct timespec *)&unk_1995A0 + 2 * v5);
      *((_QWORD *)&unk_1996A0 + v5) = 0;
      return a3;
    }
    clock_gettime(1, (struct timespec *)&unk_1993A0 + 2 * v5 + 1);
    v7 = (char *)&unk_199728 + 2896 * v5;
    v8 = (float)(1000LL * (*((_DWORD *)&unk_199390 + 4 * v5 + 6) - *((_DWORD *)&unk_199390 + 4 * v5 + 4))
               + (*((_DWORD *)&unk_199390 + 4 * v5 + 7) - *((_DWORD *)&unk_199390 + 4 * v5 + 5)) / 1000000)
       / 1000.0;
    if ( v8 >= 5.0 )
    {
      v41 = *(_DWORD *)(a1 + 472);
      v42 = *(_DWORD *)(a1 + 476);
      v21 = __PAIR64__(v42, v41) - *((_QWORD *)&unk_1996A0 + v5);
      get_miner_working_status((int)v59);
      if ( v59[6] || v59[0] )
      {
        v22 = 0.0;
      }
      else
      {
        v31 = *(_DWORD *)(a1 + 456);
        v32 = 32 - v31;
        v33 = 1 << (v31 - 32);
        LODWORD(v34) = 1 << v31;
        HIDWORD(v34) = v33 | (1u >> v32);
        v35 = COERCE_FLOAT(sub_146E48(v34));
        v22 = v35 * (float)(COERCE_FLOAT(sub_146E48(v21)) / v8);
      }
      V_LOCK();
      V_INT((int)v50, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v63,
        0x1000u,
        0,
        v63,
        v50[0],
        v50[1],
        v50[2],
        v50[3],
        v50[4],
        v50[5],
        v50[6],
        v50[7],
        "[HashRate-%d] time_passed_sec: %.2f, nc %llu, new %llu, %.2f H/s",
        *(_DWORD *)(a1 + 260),
        v8,
        v41,
        v42,
        v21,
        v22);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        190,
        "update_hashrate",
        15,
        126,
        20,
        v63);
      v23 = (_DWORD *)((char *)&unk_199728 + 2896 * v5);
      clock_gettime(1, (struct timespec *)&unk_1993A0 + 2 * v5);
      v24 = v23[720];
      v25 = v23[722];
      *((_DWORD *)&unk_1996A0 + 2 * v5) = v41;
      v26 = v23[723];
      *((_DWORD *)&unk_1996A0 + 2 * v5 + 1) = v42;
      *((float *)&unk_199728 + 724 * v5 + v24) = v22;
      v43 = v25 + 1;
      v27 = __PAIR64__(v26, v25);
      v28 = (__PAIR64__(v26, v25) + 1) >> 32;
      v23[720] = (v24 + 1) % 720;
      v29 = v22 + (float)(COERCE_FLOAT(sub_146E48(v27)) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v29 / COERCE_FLOAT(sub_146E48(__SPAIR64__(v28, v43)));
      v23[722] = v43;
      v23[723] = v28;
    }
    sub_64320((int)v7);
    *(float *)(a2 + 32) = 5.0;
    sub_64320((int)v7);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_64320((int)v7);
    v9 = *(_DWORD *)(a1 + 356);
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v9 <= 0 )
    {
      v12 = 0;
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 480) + 16;
      v11 = v10 + 48 * v9;
      v12 = 0;
      do
      {
        v13 = (__int64 *)v10;
        do
        {
          v14 = *v13++;
          v12 += v14;
        }
        while ( (__int64 *)(v10 + 32) != v13 );
        v10 += 48;
      }
      while ( v11 != v10 );
    }
    *(_QWORD *)(a2 + 80) = v12;
    clock_gettime(1, (struct timespec *)&unk_1994A0 + 2 * v5 + 1);
    if ( (float)((float)(1000LL
                       * (*(_DWORD *)((char *)&unk_199390 + v40 + 280) - *(_DWORD *)((char *)&unk_199390 + v40 + 272))
                       + (*(_DWORD *)((char *)&unk_199390 + v40 + 284) - *(_DWORD *)((char *)&unk_199390 + v40 + 276))
                       / 1000000)
               / 1000.0) >= 900.0 )
    {
      sub_64320((int)v7);
      v16 = *(_DWORD *)(a2 + 200);
      if ( v16 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v16 + 104) = 1147207680;
      }
      v17 = *(_DWORD *)(a2 + 208);
      v18 = *(_DWORD *)(a2 + 212);
      v19 = v47 * 0.97;
      *(_DWORD *)(a2 + 200) = v16 + 1;
      *(_DWORD *)(a2 + 208) = v17 + 1;
      *(_DWORD *)(a2 + 212) = __CFADD__(v17, 1) + v18;
      if ( v19 < 900.0 )
      {
        v30 = *(_DWORD *)(a1 + 260);
        a3[2] |= 1u;
        set_miner_6060info_low_hashrate_err(v30, 0);
      }
      else
      {
        *a3 |= 1u;
        get_miner_working_status((int)v48);
        v20 = v49;
        if ( !v49 )
        {
          V_LOCK();
          V_INT((int)v51, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v63,
            0x1000u,
            v20,
            v52,
            v51[0],
            v51[1],
            v51[2],
            v51[3],
            v51[4],
            v51[5],
            v51[6],
            v52,
            "%s low hashrate happened!",
            "update_hashrate");
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            173,
            80,
            v63);
          read_status_from_monitor(v59, a1);
          V_LOCK();
          V_INT((int)v53, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v63,
            0x1000u,
            v20,
            v54,
            v53[0],
            v53[1],
            v53[2],
            v53[3],
            v53[4],
            v53[5],
            v53[6],
            v54,
            "no ratio hashrate last_5s: %f",
            v36,
            v60 / 1000000000.0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            176,
            80,
            v63);
          V_LOCK();
          V_INT((int)v55, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v63,
            0x1000u,
            v20,
            v56,
            v55[0],
            v55[1],
            v55[2],
            v55[3],
            v55[4],
            v55[5],
            v55[6],
            v56,
            "no ratio hashrate last_30min: %f",
            v37,
            v61 / 1000000000.0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            177,
            80,
            v63);
          V_LOCK();
          V_INT((int)v57, "chain", *(int *)(a1 + 260));
          logfmt_raw(
            v63,
            0x1000u,
            v20,
            v58,
            v57[0],
            v57[1],
            v57[2],
            v57[3],
            v57[4],
            v57[5],
            v57[6],
            v58,
            "no ratio hashrate lifetime: %f",
            v38,
            v62 / 1000000000.0);
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
            190,
            "update_hashrate",
            15,
            178,
            80,
            v63);
          set_miner_6060info_low_hashrate_err(*(_DWORD *)(a1 + 260), 1);
        }
      }
      clock_gettime(1, (struct timespec *)((char *)&unk_1994A0 + v40));
    }
  }
  return a3;
}
