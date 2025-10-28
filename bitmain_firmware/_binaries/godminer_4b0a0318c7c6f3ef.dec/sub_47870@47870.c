int __fastcall sub_47870(int a1, int a2)
{
  const char *v4; // r0
  const char *v5; // r1
  void *v7; // r4
  char v8[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( *(_DWORD *)(a1 + 1132) || (v7 = calloc(1u, 0xAu), (*(_DWORD *)(a1 + 1132) = v7) != 0) )
  {
    if ( *(_DWORD *)(a2 + 1588) )
    {
      v4 = *(const char **)(a1 + 1124);
      if ( v4 && (v5 = *(const char **)(a2 + 1580)) != 0 && !strcmp(v4, v5) )
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "NO ERROR");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "check_job_kas",
          13,
          206,
          20,
          v8);
        return 0;
      }
      else
      {
        V_LOCK();
        logfmt_raw(v8, 0x1000u, 0, "RETIRED");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "check_job_kas",
          13,
          211,
          20,
          v8);
        return 2;
      }
    }
    else
    {
      printf(aInvalidPointer, "pool->work.private");
      return 0;
    }
  }
  else
  {
    printf(aInvalidPointer, "work->private");
    return 0;
  }
}
