int __fastcall sub_4817C(int a1, int *a2, _DWORD *a3)
{
  unsigned int v5; // r4
  char *v6; // r5
  _DWORD *v7; // r0
  _QWORD *v8; // r6
  const char *v9; // r9
  _DWORD *v10; // r0
  unsigned int v11; // r1
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  __int64 v14; // r6
  __int64 v15; // t1
  int v16; // r4
  int v17; // r2
  const char *v19; // r0
  unsigned __int64 v20; // r6
  unsigned __int64 *v21; // r3
  int *v22; // r2
  unsigned int v23; // t1
  unsigned int v24; // r1
  int v25; // r0
  int v26; // r12
  int v27; // r1
  int v28; // r10
  int v29; // r12
  int v30; // r0
  int v31; // r1
  size_t v32; // r10
  size_t v33; // r0
  unsigned __int64 v34; // [sp+10h] [bp-102Ch] BYREF
  _DWORD v35[8]; // [sp+18h] [bp-1024h] BYREF
  char v36[4100]; // [sp+38h] [bp-1004h] BYREF

  v5 = 0;
  v6 = (char *)v35;
  v7 = json_array_get(a3, 0);
  v8 = v35;
  v9 = (const char *)json_string_value(v7);
  do
  {
    v10 = json_array_get(a3, 1u);
    v11 = v5++;
    v12 = json_array_get(v10, v11);
    *v8++ = json_integer_value((int)v12);
  }
  while ( v5 != 4 );
  v13 = json_array_get(a3, 2u);
  v14 = json_integer_value((int)v13);
  v34 = v14;
  do
  {
    v15 = *(_QWORD *)v6;
    v6 += 8;
    if ( !v15 )
    {
      V_LOCK();
      v16 = 0;
      logfmt_raw(v36, 0x1000u, 0, "Stratum notify: invalid parameters");
      V_UNLOCK();
      v17 = 381;
      goto LABEL_10;
    }
  }
  while ( v6 != v36 );
  v16 = valid_ascii(v9) ^ 1;
  if ( !v14 )
    LOBYTE(v16) = v16 | 1;
  v16 = (unsigned __int8)v16;
  if ( (_BYTE)v16 )
  {
    V_LOCK();
    v16 = 0;
    logfmt_raw(v36, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    v17 = 387;
LABEL_10:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kas/frontend_kas.c",
      164,
      "stratum_notify_kas",
      18,
      v17,
      100,
      v36);
    return v16;
  }
  if ( a2 != (int *)-456 )
  {
    v19 = (const char *)a2[395];
    if ( v19 && !strcmp(v19, v9) )
    {
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        395,
        80,
        v36);
    }
    if ( strlen(v9) > 0x1F )
    {
      V_LOCK();
      v33 = strlen(v9);
      logfmt_raw(v36, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v9, v33);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        399,
        80,
        v36);
    }
    v20 = _byteswap_uint64(__PAIR64__(v14, HIDWORD(v14)));
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    a2[395] = (int)_strdup(v9);
    v34 = __PAIR64__(v20, HIDWORD(v20));
    v21 = &v34;
    v22 = a2 + 118;
    a2[116] = HIDWORD(v20);
    a2[117] = v20;
    do
    {
      v23 = *((_DWORD *)v21++ + 2);
      v22 += 2;
      v24 = *((_DWORD *)v21 + 1);
      *((_DWORD *)v21 + 1) = bswap32(v23);
      v25 = *((_DWORD *)v21 + 2);
      v26 = *((_DWORD *)v21 + 1);
      *(_DWORD *)v21 = bswap32(v24);
      v27 = *((_DWORD *)v21 + 3);
      v28 = *(_DWORD *)v21;
      *(v22 - 1) = v26;
      *v22 = v25;
      *(v22 - 2) = v28;
      v22[1] = v27;
      v29 = *((_DWORD *)v21 + 5);
      v30 = *((_DWORD *)v21 + 6);
      v31 = *((_DWORD *)v21 + 7);
      v22[2] = *((_DWORD *)v21 + 4);
      v22[3] = v29;
      v22[4] = v30;
      v22[5] = v31;
    }
    while ( v22 != a2 + 126 );
    v32 = a2[19];
    memcpy(v22, (const void *)a2[20], v32);
    memset((char *)a2 + v32 + 504, 0, 8 - v32);
    *((_QWORD *)a2 + 57) = *a2;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    v16 = (unsigned __int8)opt_protocol;
    if ( opt_protocol )
    {
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "job_id: %s", v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        427,
        20,
        v36);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "header0: %llx", v35[0], v35[1]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        428,
        20,
        v36);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "header1: %llx", v35[2], v35[3]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        429,
        20,
        v36);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "header2: %llx", v35[4], v35[5]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        430,
        20,
        v36);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "header3: %llx", v35[6], v35[7]);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        431,
        20,
        v36);
      V_LOCK();
      logfmt_raw(v36, 0x1000u, 0, "timestamp: %llx", HIDWORD(v20), (_DWORD)v20);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        432,
        20,
        v36);
    }
    else
    {
      return 1;
    }
  }
  return v16;
}
