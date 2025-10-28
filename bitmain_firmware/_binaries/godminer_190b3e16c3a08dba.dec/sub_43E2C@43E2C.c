int __fastcall sub_43E2C(int a1, int *a2, _DWORD *a3)
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
  __int64 v14; // r0
  unsigned int v15; // r4
  unsigned int v16; // r6
  __int64 v17; // t1
  int result; // r0
  int v19; // r2
  const char *v20; // r0
  void *v21; // r7
  unsigned __int64 *v22; // r3
  int *v23; // r2
  unsigned int v24; // t1
  unsigned int v25; // r1
  int v26; // r0
  int v27; // r12
  int v28; // r1
  int v29; // lr
  int v30; // r12
  int v31; // r0
  int v32; // r1
  size_t v33; // r6
  size_t v34; // r0
  unsigned __int64 v35; // [sp+18h] [bp-102Ch] BYREF
  _BYTE v36[32]; // [sp+20h] [bp-1024h] BYREF
  char v37[4100]; // [sp+40h] [bp-1004h] BYREF

  v5 = 0;
  v6 = v36;
  v7 = json_array_get(a3, 0);
  v8 = v36;
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
  v15 = HIDWORD(v14);
  v16 = v14;
  v35 = v14;
  do
  {
    v17 = *(_QWORD *)v6;
    v6 += 8;
    if ( !v17 )
    {
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "Stratum notify: invalid parameters");
      V_UNLOCK();
      v19 = 574;
      goto LABEL_10;
    }
  }
  while ( v6 != v37 );
  result = valid_ascii(v9) ^ 1;
  if ( !(v15 | v16) )
    LOBYTE(result) = result | 1;
  result = (unsigned __int8)result;
  if ( (_BYTE)result )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    v19 = 580;
LABEL_10:
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kas/frontend_kas.c",
      164,
      "stratum_notify_kas",
      18,
      v19,
      100,
      v37);
    return 0;
  }
  if ( a2 != (int *)-456 )
  {
    v20 = (const char *)a2[395];
    if ( v20 && !strcmp(v20, v9) )
    {
      V_LOCK();
      logfmt_raw(v37, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        587,
        80,
        v37);
    }
    if ( strlen(v9) > 0x1F )
    {
      V_LOCK();
      v34 = strlen(v9);
      logfmt_raw(v37, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= 32", v9, v34);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/frontend/frontend_kas/frontend_kas.c",
        164,
        "stratum_notify_kas",
        18,
        590,
        80,
        v37);
    }
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
    v21 = (void *)a2[395];
    a2[395] = (int)_strdup(v9);
    if ( v21 )
      free(v21);
    v22 = &v35;
    v35 = _byteswap_uint64(__PAIR64__(v15, v16));
    v23 = a2 + 118;
    *((_QWORD *)a2 + 58) = v35;
    do
    {
      v24 = *((_DWORD *)v22++ + 2);
      v23 += 2;
      v25 = *((_DWORD *)v22 + 1);
      *((_DWORD *)v22 + 1) = bswap32(v24);
      v26 = *((_DWORD *)v22 + 2);
      v27 = *((_DWORD *)v22 + 1);
      *(_DWORD *)v22 = bswap32(v25);
      v28 = *((_DWORD *)v22 + 3);
      v29 = *(_DWORD *)v22;
      *(v23 - 1) = v27;
      *v23 = v26;
      *(v23 - 2) = v29;
      v23[1] = v28;
      v30 = *((_DWORD *)v22 + 5);
      v31 = *((_DWORD *)v22 + 6);
      v32 = *((_DWORD *)v22 + 7);
      v23[2] = *((_DWORD *)v22 + 4);
      v23[3] = v30;
      v23[4] = v31;
      v23[5] = v32;
    }
    while ( v23 != a2 + 126 );
    v33 = a2[19];
    memcpy(v23, (const void *)a2[20], v33);
    memset((char *)a2 + v33 + 504, 0, 8 - v33);
    *((_QWORD *)a2 + 57) = *a2;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
    return 1;
  }
  return result;
}
