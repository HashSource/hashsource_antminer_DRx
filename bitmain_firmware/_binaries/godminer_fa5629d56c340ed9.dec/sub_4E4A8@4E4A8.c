int __fastcall sub_4E4A8(int a1, int a2, char *a3)
{
  int v3; // r5
  char *v7; // r8
  char *v8; // r7
  char *v9; // r5
  int v10; // r11
  int v11; // r0
  int v12; // r3
  const char *v13; // r12
  const char *v15; // [sp+4h] [bp-1020h]
  int v16; // [sp+1Ch] [bp-1008h]
  char v17[4100]; // [sp+20h] [bp-1004h] BYREF

  v3 = *(_DWORD *)(a1 + 1132);
  if ( v3 )
  {
    v7 = (char *)abin2hex(v3 + 1468, 4);
    v8 = (char *)abin2hex(v3 + 1480, 28);
    v9 = (char *)abin2hex(v3 + 1508, 1347);
    V_LOCK();
    v10 = *(_DWORD *)(a2 + 1920);
    v16 = *(_DWORD *)(a1 + 1124);
    v11 = target_to_diff_zec(a1 + 1032);
    logfmt_raw(
      v17,
      0x1000u,
      0,
      "prepare submit, json id %d, job %s, ntime %s, nonce %s, diff %d",
      v10,
      v16,
      v7,
      v8,
      v11);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/frontend/frontend_zec/frontend_zec.c",
      164,
      "stratum_prepare_upstream_work_zec",
      33,
      322,
      20,
      v17);
    v12 = *(_DWORD *)(a2 + 1920);
    v13 = *(const char **)(a2 + 16);
    v15 = *(const char **)(a1 + 1124);
    *(_DWORD *)(a2 + 1920) = v12 + 1;
    snprintf(
      a3,
      0xC00u,
      "{\"id\": %d, \"method\": \"mining.submit\", \"params\": [\"%s\", \"%s\", \"%s\", \"%s\", \"%s\"]}",
      v12,
      v13,
      v15,
      v7,
      v8,
      v9);
    free(v7);
    free(v8);
    free(v9);
    return 0;
  }
  else
  {
    printf(aInvalidPointer, "private", a3);
    return 3;
  }
}
