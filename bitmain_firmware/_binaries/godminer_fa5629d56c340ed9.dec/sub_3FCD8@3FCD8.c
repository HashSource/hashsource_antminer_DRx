int __fastcall sub_3FCD8(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r5
  _DWORD *v9; // r0
  int v10; // r9
  unsigned int v11; // r11
  char *v12; // r8
  _DWORD *v13; // r0
  bool v14; // r10
  _BOOL4 v15; // r4
  _DWORD *v17; // r0
  size_t v18; // r0
  const char *v19; // r0
  void *v20; // r4
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v29; // r3
  int v30; // r1
  int v31; // r2
  int v32; // r3
  int v33; // r2
  size_t v34; // r0
  _DWORD v35[8]; // [sp+10h] [bp-1044h] BYREF
  _DWORD v36[8]; // [sp+30h] [bp-1024h] BYREF
  char v37[4100]; // [sp+50h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  v9 = json_array_get(a3, 2u);
  v10 = json_integer_value((int)v9);
  if ( json_array_get(a3, 3u) && *json_array_get(a3, 3u) == 2 )
  {
    v17 = json_array_get(a3, 3u);
    v11 = 4;
    v12 = (char *)json_string_value(v17);
  }
  else
  {
    v11 = 3;
    v12 = 0;
  }
  v13 = json_array_get(a3, v11);
  v14 = (char)v13;
  if ( v13 )
    v14 = *json_array_get(a3, v11) == 5;
  if ( v6 )
    v15 = v8 == 0;
  else
    v15 = 1;
  if ( v15 || strlen(v8) != 64 )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_notify_ckb",
      18,
      30,
      100,
      v37);
    return 0;
  }
  hex2bin((int)v35, (unsigned __int8 *)v8, 32);
  if ( v12 )
  {
    v18 = strlen(v12);
    hex2bin((int)v36, (unsigned __int8 *)v12, v18 >> 1);
  }
  if ( a2 == (int *)-456 )
    return 0;
  v19 = (const char *)a2[395];
  if ( v19 && !strcmp(v19, v6) )
  {
    V_LOCK();
    logfmt_raw(v37, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change(%s)", a2[395]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_notify_ckb",
      18,
      41,
      20,
      v37);
  }
  if ( strlen(v6) > 0x1F )
  {
    V_LOCK();
    v34 = strlen(v6);
    logfmt_raw(v37, 0x1000u, 0, "Stratum notify: job_id %s, len %d >= 32", v6, v34);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_ckb/frontend_ckb.c",
      164,
      "stratum_notify_ckb",
      18,
      44,
      100,
      v37);
  }
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
  v20 = (void *)a2[395];
  a2[395] = (int)_strdup(v6);
  if ( v20 )
    free(v20);
  v21 = v35[1];
  v22 = v35[2];
  v23 = v35[3];
  a2[116] = v35[0];
  a2[117] = v21;
  a2[118] = v22;
  a2[119] = v23;
  v24 = v35[5];
  v25 = v35[6];
  v26 = v35[7];
  a2[120] = v35[4];
  a2[121] = v24;
  a2[122] = v25;
  a2[123] = v26;
  a2[384] = v10;
  a2[411] = v10;
  if ( v12 )
  {
    v27 = v36[1];
    v28 = v36[2];
    v29 = v36[3];
    a2[25] = v36[0];
    a2[26] = v27;
    a2[27] = v28;
    a2[28] = v29;
    v30 = v36[5];
    v31 = v36[6];
    v32 = v36[7];
    a2[29] = v36[4];
    a2[30] = v30;
    a2[31] = v31;
    a2[32] = v32;
  }
  v33 = *a2;
  *((_BYTE *)a2 + 444) = v14;
  *((_QWORD *)a2 + 57) = v33;
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
  return 1;
}
