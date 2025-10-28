int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d5
  int v8; // lr
  __int64 v9; // kr10_8
  double v10; // d7
  int v11; // kr04_4
  int v12; // r1
  unsigned int v13; // r4
  int v14; // r5
  int v15; // r1
  double v17; // d5
  __int64 v18; // r2
  double v19; // d7
  double v20; // d6
  time_t v21; // r0
  __int64 v22; // r4
  int v23; // r1
  int v24; // r2
  int v25; // r0
  int v26; // r1
  _DWORD v27[7]; // [sp+28h] [bp-1044h] BYREF
  int v28; // [sp+44h] [bp-1028h]
  _DWORD v29[7]; // [sp+48h] [bp-1024h] BYREF
  int v30; // [sp+64h] [bp-1008h]
  char v31[4100]; // [sp+68h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_195A74);
  if ( a1 )
  {
    v17 = a4[226];
    LODWORD(v18) = *((_DWORD *)a4 + 482);
    v19 = a4[245] + v17;
    ++total_accepted;
    HIDWORD(v18) = *((_DWORD *)a4 + 483);
    v20 = total_diff_accepted + v17;
    *((_QWORD *)a4 + 241) = v18 + 1;
    a4[245] = v19;
    total_diff_accepted = v20;
    v21 = time(0);
    v22 = *((_QWORD *)a4 + 226);
    *((_DWORD *)a4 + 404) = v21;
    *((_QWORD *)a4 + 203) = v22;
    pthread_mutex_unlock(&stru_195A74);
    return 1;
  }
  else
  {
    v7 = a4[226];
    v8 = dword_1B50B4;
    v9 = *((_QWORD *)a4 + 242) + 1LL;
    v10 = total_diff_rejected + v7;
    v11 = total_rejected;
    a4[246] = a4[246] + v7;
    *((_QWORD *)a4 + 242) = v9;
    *(_QWORD *)&total_rejected = __PAIR64__(v8, v11) + 1;
    total_diff_rejected = v10;
    pthread_mutex_unlock(&stru_195A74);
    v12 = *((_DWORD *)a4 + 484);
    if ( v12 < 1 )
      v13 = 1;
    else
      v13 = *((_DWORD *)a4 + 484);
    v14 = v12 % 100 + v12 % 10 + v12 % 1000 + v12 % 10000;
    if ( a3 )
    {
      sub_31854(a3);
      sub_145474(v14, v13);
      if ( v15 )
        return 1;
      V_LOCK();
      V_INT((int)v27, "poolno", *(int *)a4);
      logfmt_raw(
        v31,
        0x1000u,
        0,
        v28,
        v27[0],
        v27[1],
        v27[2],
        v27[3],
        v27[4],
        v27[5],
        v27[6],
        v28,
        "reject reason: %s",
        a3);
      V_UNLOCK();
      v24 = 569;
      v25 = g_zc;
      LOWORD(v26) = -30968;
    }
    else
    {
      sub_31854("NULL");
      sub_145474(v14, v13);
      if ( v23 )
        return 1;
      V_LOCK();
      V_INT((int)v29, "poolno", *(int *)a4);
      logfmt_raw(
        v31,
        0x1000u,
        0,
        v30,
        v29[0],
        v29[1],
        v29[2],
        v29[3],
        v29[4],
        v29[5],
        v29[6],
        v30,
        "reject reason:: NULL");
      V_UNLOCK();
      v24 = 575;
      v25 = g_zc;
      LOWORD(v26) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/t"
                                      "mp/release/build/godminer-origin_godminer-new/pool.c";
    }
    HIWORD(v26) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rel"
                                "ease/build/godminer-origin_godminer-new/pool.c" >> 16;
    zlog(v25, v26, 134, "share_result", 12, v24, 80, v31);
    return 1;
  }
}
