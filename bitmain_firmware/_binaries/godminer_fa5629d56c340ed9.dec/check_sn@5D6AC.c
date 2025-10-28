int __fastcall check_sn(char *a1)
{
  FILE *v1; // r0
  FILE *v2; // r6
  char *v3; // r0
  size_t v4; // r0
  int v5; // r3
  int v7; // r4
  int v8; // r12
  size_t v9; // r0
  char ptr[16]; // [sp+14h] [bp-1018h] BYREF
  __int16 v11; // [sp+24h] [bp-1008h]
  char v12[4100]; // [sp+28h] [bp-1004h] BYREF

  if ( !a1 )
    a1 = "/config/sn";
  v11 = 0;
  memset(ptr, 0, sizeof(ptr));
  g_miner_sn_file_path = (int)a1;
  v1 = (FILE *)fopen64(a1, "r");
  v2 = v1;
  if ( v1 )
  {
    if ( fread(ptr, 0x11u, 1u, v1) )
    {
      v3 = strstr(ptr, "\r\n");
      if ( v3 )
        strncpy(g_miner_sn, ptr, v3 - ptr);
      else
        strcpy(g_miner_sn, ptr);
      v4 = strlen(g_miner_sn) - 1;
      v5 = *(unsigned __int8 *)(v4 + 1669872);
      if ( v5 == 10 )
      {
        *(_BYTE *)(v4 + 1669872) = 0;
        v4 = strlen(g_miner_sn) - 1;
        v5 = *(unsigned __int8 *)(v4 + 1669872);
      }
      if ( v5 == 13 )
        *(_BYTE *)(v4 + 1669872) = 0;
      V_LOCK();
      logfmt_raw(v12, 0x1000u, 0, "miner sn: %s", ptr);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_sn.c",
        149,
        "check_sn",
        8,
        51,
        60,
        v12);
      fclose(v2);
      return 0;
    }
    else
    {
      v7 = (unsigned __int8)ptr[0];
      if ( ptr[0] )
      {
        V_LOCK();
        v9 = strlen(ptr);
        logfmt_raw(v12, 0x1000u, 0, "miner sn: not support length %d:%s", v9, ptr);
        V_UNLOCK();
        v8 = 55;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v12, 0x1000u, v7, "miner sn: is NULL");
        V_UNLOCK();
        v8 = 57;
      }
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/miner_util/check_sn.c",
        149,
        "check_sn",
        8,
        v8,
        100,
        v12);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, "miner has no sn!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/miner_util/check_sn.c",
      149,
      "check_sn",
      8,
      23,
      100,
      v12);
    return 2;
  }
}
