int __fastcall sub_441B0(int a1, int a2)
{
  int v4; // r4
  const char *v5; // r0
  const char *v6; // r1
  int v7; // r5
  void *v9; // r5
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( *(_DWORD *)(a1 + 1132) || (v9 = calloc(1u, 0x71u), (*(_DWORD *)(a1 + 1132) = v9) != 0) )
  {
    v4 = *(_DWORD *)(a2 + 1588);
    if ( v4 )
    {
      v5 = *(const char **)(a1 + 1124);
      if ( v5 && (v6 = *(const char **)(a2 + 1580)) != 0 && (v7 = strcmp(v5, v6)) == 0 )
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "NO ERROR");
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "check_job_kas",
          13,
          288,
          20,
          v10);
      }
      else
      {
        V_LOCK();
        logfmt_raw(v10, 0x1000u, 0, "RETIRED");
        V_UNLOCK();
        v7 = 2;
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/frontend/frontend_kas/frontend_kas.c",
          164,
          "check_job_kas",
          13,
          293,
          20,
          v10);
      }
      set_cur_seed_kas((_DWORD *)v4);
      set_cur_block_num_kas(*(_QWORD *)(v4 + 105));
      return v7;
    }
    else
    {
      printf("invalid pointer(%s)!\n", "pool->work.private");
      return 0;
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
