time_t read_version_file()
{
  FILE *v0; // r6
  signed int v1; // r6
  char *v2; // r0
  char *v3; // r7
  char *v4; // r7
  char *v5; // r0
  size_t v6; // r2
  size_t v7; // r0
  int v8; // r3
  size_t v9; // r0
  int v10; // r3
  int *v11; // r5
  char v13[256]; // [sp+10h] [bp-1104h] BYREF
  char v14[4100]; // [sp+110h] [bp-1004h] BYREF

  v0 = (FILE *)fopen64(opt_version_path, "rb");
  memset(v13, 0, sizeof(v13));
  if ( v0 )
  {
    v1 = fread(v13, 1u, 0x100u, v0);
    if ( v1 <= 0 )
    {
      V_LOCK();
      v11 = &g_zc;
      logfmt_raw(v14, 0x1000u, 0, "Read miner version file %s error %d", opt_version_path, v1);
      V_UNLOCK();
      v4 = g_miner_type;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/god-miner.c",
        139,
        "read_version_file",
        17,
        656,
        100,
        v14);
    }
    else
    {
      v2 = strchr(v13, 10);
      v3 = v2;
      if ( v2 )
      {
        memcpy(g_miner_compiletime, v13, v2 - v13);
        v4 = (char *)stpcpy(v13, v3 + 1);
        v5 = strchr(v13, 10);
        if ( v5 )
          v4 = g_miner_type;
        else
          v6 = v4 - v13;
        if ( v5 )
          v6 = v5 - v13;
        else
          v4 = g_miner_type;
        if ( !v5 )
          ++v6;
        memcpy(v4, v13, v6);
      }
      else
      {
        v4 = g_miner_type;
        strcpy(g_miner_compiletime, v13);
      }
      v7 = strlen(g_miner_compiletime) - 1;
      v8 = *((unsigned __int8 *)&max_timeout_value[20] + v7 + 4);
      if ( v8 == 10 )
      {
        *((_BYTE *)&max_timeout_value[20] + v7 + 4) = 0;
        v7 = strlen(g_miner_compiletime) - 1;
        v8 = *((unsigned __int8 *)&max_timeout_value[20] + v7 + 4);
      }
      if ( v8 == 13 )
        *((_BYTE *)&max_timeout_value[20] + v7 + 4) = 0;
      v9 = strlen(g_miner_type) - 1;
      v10 = *((unsigned __int8 *)&max_timeout_value[28] + v9 + 4);
      if ( v10 == 10 )
      {
        *((_BYTE *)&max_timeout_value[28] + v9 + 4) = 0;
        v9 = strlen(g_miner_type) - 1;
        v10 = *((unsigned __int8 *)&max_timeout_value[28] + v9 + 4);
      }
      v11 = &g_zc;
      if ( v10 == 13 )
        *((_BYTE *)&max_timeout_value[28] + v9 + 4) = 0;
    }
  }
  else
  {
    V_LOCK();
    v11 = &g_zc;
    logfmt_raw(v14, 0x1000u, 0, "Open miner version file %s error", opt_version_path);
    V_UNLOCK();
    v4 = g_miner_type;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/god-miner.c",
      139,
      "read_version_file",
      17,
      651,
      100,
      v14);
  }
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, "Miner compile time: %s type: %s", g_miner_compiletime, v4);
  V_UNLOCK();
  return zlog(
           *v11,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/god-miner.c",
           139,
           "read_version_file",
           17,
           691,
           60,
           v14);
}
