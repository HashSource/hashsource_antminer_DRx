int __fastcall sub_493F8(int a1, int *a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  const char *v6; // r7
  _DWORD *v7; // r0
  char *v8; // r5
  bool v9; // r4
  int valid; // r6
  size_t v12; // r0
  void *v13; // r9
  int v14; // r2
  size_t v15; // r0
  _BYTE src[288]; // [sp+10h] [bp-1124h] BYREF
  char v17[4100]; // [sp+130h] [bp-1004h] BYREF

  v5 = json_array_get(a3, 0);
  v6 = (const char *)json_string_value(v5);
  v7 = json_array_get(a3, 1u);
  v8 = (char *)json_string_value(v7);
  if ( json_array_get(a3, 2u) )
    v9 = *json_array_get(a3, 2u) == 5;
  else
    v9 = 0;
  if ( !valid_ascii(v6) || (valid = valid_hex(v8)) == 0 )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "Stratum notify: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_notify_kda",
      18,
      28,
      100,
      v17);
    return 0;
  }
  v12 = strlen(v8);
  hex2bin((int)src, (unsigned __int8 *)v8, v12 >> 1);
  if ( a2 == (int *)-456 )
    return 0;
  pthread_mutex_lock((pthread_mutex_t *)(a2 + 398));
  v13 = (void *)a2[395];
  if ( !v13 )
  {
    if ( strlen(v6) <= 0x3F )
      goto LABEL_13;
    goto LABEL_15;
  }
  if ( !strcmp((const char *)a2[395], v6) )
  {
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, "Stratum notify: new job's job_id doesnot change, %s, %s", a2[395], v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_notify_kda",
      18,
      36,
      80,
      v17);
    if ( strlen(v6) <= 0x3F )
    {
LABEL_16:
      v13 = (void *)a2[395];
      if ( !v13 )
        goto LABEL_13;
      goto LABEL_12;
    }
LABEL_15:
    V_LOCK();
    v15 = strlen(v6);
    logfmt_raw(v17, 0x1000u, 0, "Stratum notify: job_id len = %s, len %d >= %d", v6, v15, 64);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_kda/frontend_kda.c",
      164,
      "stratum_notify_kda",
      18,
      39,
      80,
      v17);
    goto LABEL_16;
  }
  if ( strlen(v6) > 0x3F )
    goto LABEL_15;
LABEL_12:
  free(v13);
  a2[395] = 0;
LABEL_13:
  a2[395] = (int)_strdup(v6);
  memcpy(a2 + 116, src, 0x11Eu);
  v14 = *a2;
  *((_BYTE *)a2 + 444) = v9;
  *((_QWORD *)a2 + 57) = v14;
  pthread_mutex_unlock((pthread_mutex_t *)(a2 + 398));
  return valid;
}
