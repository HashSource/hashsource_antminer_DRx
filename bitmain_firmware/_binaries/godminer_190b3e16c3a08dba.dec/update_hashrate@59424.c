_DWORD *__fastcall update_hashrate(int a1, int a2, _DWORD *a3)
{
  int v6; // r7
  __int64 v7; // r2
  int v8; // r8
  float *v9; // r10
  float v10; // s16
  int v11; // r7
  int v12; // lr
  int v13; // r7
  __int64 v14; // kr00_8
  __int64 *v15; // r2
  __int64 v16; // t1
  int v18; // r4
  int v19; // r3
  int v20; // r2
  double v21; // d6
  float v22; // s17
  float *v23; // r0
  unsigned int v24; // r12
  __int64 v25; // kr08_8
  float v26; // s17
  int v27; // r0
  char v28; // r1
  int v29; // r3
  __int64 v30; // r0
  float v31; // s17
  int v32; // [sp+24h] [bp-1058h]
  float *v33; // [sp+28h] [bp-1054h]
  unsigned int v34; // [sp+30h] [bp-104Ch]
  unsigned int v35; // [sp+3Ch] [bp-1040h]
  unsigned int v36; // [sp+3Ch] [bp-1040h]
  __int64 v37; // [sp+40h] [bp-103Ch]
  _BYTE v38[4]; // [sp+4Ch] [bp-1030h] BYREF
  __int64 v39; // [sp+50h] [bp-102Ch] BYREF
  __int64 v40; // [sp+58h] [bp-1024h] BYREF
  double v41; // [sp+60h] [bp-101Ch] BYREF
  _BYTE v42[12]; // [sp+6Ch] [bp-1010h] BYREF
  char v43[4100]; // [sp+78h] [bp-1004h] BYREF

  (*(void (__fastcall **)(int, __int64 *))(a1 + 132))(a1, &v39);
  (*(void (__fastcall **)(int, __int64 *))(a1 + 140))(a1, &v40);
  (*(void (__fastcall **)(int, double *, _BYTE *))(a1 + 136))(a1, &v41, v38);
  v6 = *(_DWORD *)(a1 + 220);
  v7 = v40;
  *(_QWORD *)(a2 + 48) = v39;
  *(_QWORD *)(a2 + 56) = v7;
  if ( v6 <= 16 )
  {
    v8 = 16 * v6;
    if ( !byte_1803E8[v6] )
    {
      clock_gettime(1, (struct timespec *)&byte_1803E8[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_1803E8[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_1805F8 + v8));
      *((_QWORD *)&unk_1806F8 + v6) = 0;
      byte_1803E8[v6] = 1;
    }
    if ( *(_QWORD *)(a1 + 416) )
    {
      if ( !byte_180778 )
        byte_180778 = 1;
    }
    else if ( !byte_180778 )
    {
      clock_gettime(1, (struct timespec *)&byte_1803E8[v8 + 16]);
      clock_gettime(1, (struct timespec *)&byte_1803E8[v8 + 272]);
      clock_gettime(1, (struct timespec *)((char *)&unk_1805F8 + v8));
      *((_QWORD *)&unk_1806F8 + v6) = 0;
      return a3;
    }
    clock_gettime(1, (struct timespec *)&byte_1803E8[v8 + 24]);
    v9 = &flt_180780[724 * v6];
    v10 = (float)(1000LL * (*(_DWORD *)&byte_1803E8[v8 + 24] - *(_DWORD *)&byte_1803E8[v8 + 16])
                + (*(_DWORD *)&byte_1803E8[v8 + 28] - *(_DWORD *)&byte_1803E8[v8 + 20]) / 1000000)
        / 1000.0;
    if ( v10 >= 5.0 )
    {
      v34 = *(_DWORD *)(a1 + 416);
      v35 = *(_DWORD *)(a1 + 420);
      v37 = __PAIR64__(v35, v34) - *((_QWORD *)&unk_1806F8 + v6);
      get_miner_working_status((int)v42);
      if ( v42[6] || v42[0] )
      {
        v22 = 0.0;
      }
      else
      {
        v27 = *(_DWORD *)(a1 + 400);
        v28 = 32 - v27;
        v29 = 1 << (v27 - 32);
        LODWORD(v30) = 1 << v27;
        HIDWORD(v30) = v29 | (1u >> v28);
        v31 = COERCE_FLOAT(sub_12E2F8(v30));
        v22 = v31 * (float)(COERCE_FLOAT(sub_12E2F8(v37)) / v10);
      }
      V_LOCK();
      logfmt_raw(
        v43,
        0x1000u,
        0,
        "[HashRate] time_passed_sec: %.2f, nc %llu, new %llu, %.2f H/s",
        v10,
        v34,
        v35,
        v37,
        v22);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/miner_monitor/update_miner_status/update_hashrate.c",
        190,
        "update_hashrate",
        15,
        125,
        20,
        v43);
      clock_gettime(1, (struct timespec *)&byte_1803E8[v8 + 16]);
      v23 = &flt_180780[724 * v6];
      *((_DWORD *)&unk_1806F8 + 2 * v6) = v34;
      v24 = *((_DWORD *)v23 + 723);
      v32 = *((_DWORD *)v23 + 720);
      v33 = v23;
      *((_DWORD *)&unk_1806F8 + 2 * v6 + 1) = v35;
      v36 = *((_DWORD *)v23 + 722);
      flt_180780[724 * v6 + v32] = v22;
      v25 = __PAIR64__(v24, v36) + 1;
      *((_DWORD *)v23 + 720) = (v32 + 1) % 720;
      v26 = v22 + (float)(COERCE_FLOAT(sub_12E2F8(__SPAIR64__(v24, v36))) * *(float *)(a2 + 44));
      *(float *)(a2 + 44) = v26 / COERCE_FLOAT(sub_12E2F8(v25));
      *((_QWORD *)v33 + 361) = v25;
    }
    sub_59388((int)v9);
    *(float *)(a2 + 32) = 5.0;
    sub_59388((int)v9);
    *(_DWORD *)(a2 + 36) = 1114636288;
    sub_59388((int)v9);
    v11 = *(_DWORD *)(a1 + 304);
    *(_DWORD *)(a2 + 40) = 1155596288;
    if ( v11 <= 0 )
    {
      v14 = 0;
    }
    else
    {
      v12 = *(_DWORD *)(a1 + 424) + 16;
      v13 = v12 + 48 * v11;
      v14 = 0;
      do
      {
        v15 = (__int64 *)v12;
        do
        {
          v16 = *v15++;
          v14 += v16;
        }
        while ( (__int64 *)(v12 + 32) != v15 );
        v12 += 48;
      }
      while ( v13 != v12 );
    }
    *(_QWORD *)(a2 + 80) = v14;
    clock_gettime(1, (struct timespec *)&byte_1803E8[v8 + 280]);
    if ( (float)((float)(1000LL * (*(_DWORD *)&byte_1803E8[v8 + 280] - *(_DWORD *)&byte_1803E8[v8 + 272])
                       + (*(_DWORD *)&byte_1803E8[v8 + 284] - *(_DWORD *)&byte_1803E8[v8 + 276]) / 1000000)
               / 1000.0) >= 900.0 )
    {
      sub_59388((int)v9);
      v18 = *(_DWORD *)(a2 + 200);
      if ( v18 > 23 )
      {
        memcpy((void *)(a2 + 104), (const void *)(a2 + 108), 0x5Cu);
        *(_DWORD *)(a2 + 196) = 1147207680;
      }
      else
      {
        *(_DWORD *)(a2 + 4 * v18 + 104) = 1147207680;
      }
      v19 = *(_DWORD *)(a2 + 208);
      v20 = *(_DWORD *)(a2 + 212);
      v21 = v41 * 0.97;
      *(_DWORD *)(a2 + 200) = v18 + 1;
      *(_DWORD *)(a2 + 208) = v19 + 1;
      *(_DWORD *)(a2 + 212) = __CFADD__(v19, 1) + v20;
      if ( v21 >= 900.0 )
        *a3 |= 1u;
      clock_gettime(1, (struct timespec *)&byte_1803E8[v8 + 272]);
    }
  }
  return a3;
}
