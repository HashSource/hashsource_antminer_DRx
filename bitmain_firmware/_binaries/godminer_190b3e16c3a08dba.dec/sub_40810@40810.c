int __fastcall sub_40810(int a1, int a2, _DWORD *a3)
{
  double v3; // d0
  _DWORD *v6; // r0
  char *v7; // r6
  size_t v8; // r0
  char *v9; // lr
  unsigned int v10; // r1
  int v11; // r12
  int v12; // t1
  int v13; // r3
  int v14; // r2
  int v16; // [sp+Ch] [bp-102Ch]
  _BYTE v17[32]; // [sp+18h] [bp-1020h] BYREF
  char v18[4096]; // [sp+38h] [bp-1000h] BYREF

  v6 = json_array_get(a3, 0);
  json_number_value((int)v6);
  if ( v3 == 0.0 )
  {
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, "Stratum set target: invalid parameters");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_set_diff_or_target_eth",
      30,
      837,
      100,
      v18);
    return 0;
  }
  else
  {
    pthread_mutex_lock((pthread_mutex_t *)(a2 + 1592));
    (*(void (__fastcall **)(int))(a1 + 64))(a2 + 1488);
    v7 = (char *)abin2hex(a2 + 1488, 32);
    v8 = strlen(v7);
    hex2bin((int)v17, (unsigned __int8 *)v7, v8 >> 1);
    v9 = v17;
    v10 = 0;
LABEL_3:
    v12 = *v9++;
    v11 = v12;
    v13 = 7;
    while ( 1 )
    {
      v14 = v11 >> v13--;
      if ( (v14 & 1) != 0 )
        break;
      v10 = (unsigned __int8)(v10 + 1);
      if ( v13 == -1 )
      {
        if ( v9 != v18 )
          goto LABEL_3;
        break;
      }
    }
    *(double *)(a2 + 1520) = (double)v10;
    *(double *)(a2 + 448) = (double)v10;
    *(double *)(a2 + 1808) = (double)v10;
    pthread_mutex_unlock((pthread_mutex_t *)(a2 + 1592));
    V_LOCK();
    logfmt_raw(
      v18,
      0x1000u,
      0,
      "set diff %f, generated target is %s, targetdiff %lf",
      v3,
      v7,
      v16,
      *(_DWORD *)(a2 + 1520),
      *(_DWORD *)(a2 + 1524));
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_eth/frontend_eth.c",
      164,
      "stratum_set_diff_or_target_eth",
      30,
      877,
      40,
      v18);
    free(v7);
    return 1;
  }
}
