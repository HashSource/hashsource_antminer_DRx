int __fastcall sub_26154(_DWORD *a1, int a2)
{
  _BOOL4 v2; // r4
  _DWORD *v4; // r7
  _DWORD *v5; // r5
  char *v6; // r0
  char *v7; // r0
  char *v8; // r0
  char *v9; // r0
  char *v10; // r0
  _DWORD *v11; // r0
  char v13[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a2 )
    v2 = a1 == 0;
  else
    v2 = 1;
  if ( v2 )
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, 0, "%s: input bad api param", "get_version_old");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/api_new.c",
      137,
      "get_version_old",
      15,
      1705,
      100,
      v13);
    return -2147483646;
  }
  else
  {
    sub_25FCC(a1, 1, 22, *(const char **)(a2 + 8));
    v4 = json_array();
    v5 = json_object();
    v6 = BUFX_strdup("2.12");
    json_object_set_new(v5, "BMMiner", v6);
    v7 = BUFX_strdup("3.1");
    json_object_set_new(v5, "API", v7);
    v8 = BUFX_strdup(g_miner_version);
    json_object_set_new(v5, "Miner", v8);
    v9 = BUFX_strdup(g_miner_compiletime);
    json_object_set_new(v5, "CompileTime", v9);
    v10 = BUFX_strdup(g_miner_type);
    json_object_set_new(v5, "Type", v10);
    json_array_append_new(v4, v5);
    json_object_set_new(a1, "VERSION", v4);
    v11 = json_integer(1);
    json_object_set_new(a1, "id", v11);
    return 0;
  }
}
