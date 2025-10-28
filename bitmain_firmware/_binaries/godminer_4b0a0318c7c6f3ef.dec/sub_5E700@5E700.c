int sub_5E700()
{
  int v0; // r5
  char *all_created_runtime; // r0
  char *v2; // r9
  char *v3; // r7
  int v4; // r6
  int v5; // t1
  size_t v6; // r0
  int *v7; // r8
  int v8; // r5
  char *v9; // r9
  int i; // r7
  int v11; // t1
  int *v12; // r0
  _DWORD *v13; // r10
  int *v14; // r9
  int *v15; // r5
  int v16; // r7
  int v17; // t1
  int v19; // [sp+24h] [bp-10E0h] BYREF
  const void *v20[6]; // [sp+28h] [bp-10DCh] BYREF
  int v21; // [sp+40h] [bp-10C4h]
  char v22[4100]; // [sp+100h] [bp-1004h] BYREF

  v0 = 0;
  v19 = 0;
  all_created_runtime = (char *)get_all_created_runtime(&v19);
  v2 = all_created_runtime;
  if ( v19 <= 0 )
  {
    v6 = 0;
    v4 = 0;
  }
  else
  {
    v3 = all_created_runtime - 4;
    v4 = 0;
    do
    {
      v5 = *((_DWORD *)v3 + 1);
      v3 += 4;
      read_status_from_monitor(v20, v5);
      ++v0;
      v4 += v21;
    }
    while ( v19 > v0 );
    v6 = v4;
  }
  v7 = (int *)calloc(v6, 4u);
  if ( v7 )
  {
    if ( v19 > 0 )
    {
      v8 = 0;
      v9 = v2 - 4;
      for ( i = 0; i < v19; ++i )
      {
        v11 = *((_DWORD *)v9 + 1);
        v9 += 4;
        read_status_from_monitor(v20, v11);
        v12 = &v7[v8];
        v8 += v21;
        memcpy(v12, v20[0], 4 * v21);
      }
    }
    LOWORD(v13) = (unsigned __int16)&g_zc;
    if ( v4 <= 0 )
    {
      v16 = 0x7FFFFFFF;
      HIWORD(v13) = (unsigned int)&g_zc >> 16;
    }
    else
    {
      v14 = &v7[v4];
      HIWORD(v13) = (unsigned int)&g_zc >> 16;
      v15 = v7;
      v16 = 0x7FFFFFFF;
      do
      {
        while ( 1 )
        {
          v17 = *v15++;
          if ( check_value_valid_with_stdd(__SPAIR64__(v4, (unsigned int)v7), v17) )
            break;
          V_LOCK();
          logfmt_raw(v22, 0x1000u, 0, "%d C, most likely a bad sensor", *(v15 - 1));
          V_UNLOCK();
          zlog(
            *v13,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/miner_util/set_pwm_by_temp.c",
            156,
            "get_min_pcb_temp",
            16,
            140,
            20,
            v22);
          if ( v14 == v15 )
            goto LABEL_16;
        }
        if ( v16 >= *(v15 - 1) )
          v16 = *(v15 - 1);
      }
      while ( v14 != v15 );
    }
LABEL_16:
    free(v7);
    dword_193714 = v16;
    V_LOCK();
    logfmt_raw(v22, 0x1000u, 0, "min temp pcb: %d", v16);
    V_UNLOCK();
    zlog(
      *v13,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/set_pwm_by_temp.c",
      156,
      "get_min_pcb_temp",
      16,
      146,
      20,
      v22);
    return v16;
  }
  else
  {
    printf(aInvalidPointer, "temp_in_pcb");
    return dword_193714;
  }
}
