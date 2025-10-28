int __fastcall share_result(int a1, int a2, char *a3, double *a4)
{
  double v7; // d5
  double v8; // d7
  __int64 v9; // kr10_8
  __int64 v10; // kr18_8
  double v11; // d5
  int v12; // r0
  double v13; // d6
  double v14; // d7
  int v15; // r7
  unsigned int v16; // r1
  int v17; // r1
  double v19; // d5
  __int64 v20; // r2
  double v21; // d7
  double v22; // d6
  time_t v23; // r0
  __int64 v24; // r6
  _DWORD v25[7]; // [sp+28h] [bp-1024h] BYREF
  int v26; // [sp+44h] [bp-1008h]
  char v27[4100]; // [sp+48h] [bp-1004h] BYREF

  pthread_mutex_lock(&stru_196A84);
  if ( a1 )
  {
    v19 = a4[226];
    LODWORD(v20) = *((_DWORD *)a4 + 482);
    v21 = a4[245] + v19;
    ++total_accepted;
    HIDWORD(v20) = *((_DWORD *)a4 + 483);
    v22 = total_diff_accepted + v19;
    *((_QWORD *)a4 + 241) = v20 + 1;
    a4[245] = v21;
    total_diff_accepted = v22;
    v23 = time(0);
    v24 = *((_QWORD *)a4 + 226);
    *((_DWORD *)a4 + 404) = v23;
    *((_QWORD *)a4 + 203) = v24;
    pthread_mutex_unlock(&stru_196A84);
    return 1;
  }
  else
  {
    if ( strstr(a3, "Low difficulty") )
    {
      puts("The string contains 'Low difficulty'");
      v7 = a4[226];
      v8 = a4[246] + v7;
      v9 = *((_QWORD *)a4 + 242) + 1LL;
      total_diff_rejected = total_diff_rejected + v7;
      v10 = total_rejected + 1;
      a4[246] = v8;
      total_rejected = v10;
      *((_QWORD *)a4 + 242) = v9;
    }
    if ( strstr(a3, "stale work") )
    {
      puts("The string contains 'stale work'");
      v11 = a4[226];
      v12 = *((_DWORD *)a4 + 410);
      v13 = total_diff_stale + v11;
      v14 = a4[227] + v11;
      ++total_stale;
      *((_DWORD *)a4 + 410) = v12 + 1;
      total_diff_stale = v13;
      a4[227] = v14;
    }
    pthread_mutex_unlock(&stru_196A84);
    v15 = *((_DWORD *)a4 + 484);
    sub_31CCC(a3);
    if ( v15 < 1 )
      v16 = 1;
    else
      v16 = v15;
    sub_146924(v15 % 10 + v15 % 100 + v15 % 1000 + v15 % 10000, v16);
    if ( !v17 )
    {
      V_LOCK();
      V_INT((int)v25, "poolno", *(int *)a4);
      logfmt_raw(
        v27,
        0x1000u,
        0,
        v26,
        v25[0],
        v25[1],
        v25[2],
        v25[3],
        v25[4],
        v25[5],
        v25[6],
        v26,
        "reject reason: %s",
        a3);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "share_result",
        12,
        581,
        80,
        v27);
    }
    return 1;
  }
}
