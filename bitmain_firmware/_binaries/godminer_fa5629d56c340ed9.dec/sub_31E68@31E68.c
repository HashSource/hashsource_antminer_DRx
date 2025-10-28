bool __fastcall sub_31E68(void **a1, _BYTE *a2, char *haystack)
{
  char *v6; // r0
  const char *v7; // r6
  char *v8; // r5
  _BOOL4 result; // r0
  int v10; // r5
  size_t v11; // r0
  void *v12; // r0
  char v13[4096]; // [sp+10h] [bp-1000h] BYREF

  v6 = strstr(haystack, "://");
  if ( v6 )
  {
    v7 = v6 + 3;
    if ( haystack != v6 + 3 )
    {
      if ( strncasecmp(haystack, "http://", 7u)
        && strncasecmp(haystack, "https://", 8u)
        && strncasecmp(haystack, "stratum+tcp://", 0xEu) )
      {
        V_LOCK();
        logfmt_raw(v13, 0x1000u, 0, "unknown protocol -- '%s'", haystack);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/pool.c",
          134,
          "setup_url",
          9,
          180,
          100,
          v13);
      }
      if ( *a1 )
        free(*a1);
      v8 = _strdup(haystack);
      *a1 = v8;
      strcpy(&v8[v7 - haystack], v7);
      goto LABEL_10;
    }
  }
  else
  {
    v7 = haystack;
  }
  v10 = *(unsigned __int8 *)v7;
  if ( *v7 )
  {
    if ( *a1 )
      free(*a1);
    v11 = strlen(v7);
    v12 = malloc(v11 + 128);
    *a1 = v12;
    sprintf((char *)v12, "stratum+tcp://%s", v7);
    v8 = (char *)*a1;
  }
  else
  {
    V_LOCK();
    logfmt_raw(v13, 0x1000u, v10, "invalid URL -- '%s'", haystack);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/pool.c",
      134,
      "setup_url",
      9,
      189,
      100,
      v13);
    if ( *a1 )
      free(*a1);
    v8 = (char *)calloc(1u, 1u);
    *a1 = v8;
  }
LABEL_10:
  result = strncasecmp(v8, "stratum", 7u) == 0;
  *a2 = result;
  return result;
}
