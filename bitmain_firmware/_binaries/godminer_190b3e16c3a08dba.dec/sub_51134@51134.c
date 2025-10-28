int __fastcall sub_51134(int a1)
{
  int v2; // r4
  int v3; // r1
  int v5; // [sp+10h] [bp-1014h] BYREF
  int v6; // [sp+14h] [bp-1010h] BYREF
  struct timeval tv; // [sp+18h] [bp-100Ch] BYREF
  char v8[4100]; // [sp+20h] [bp-1004h] BYREF

  qword_17AFA0 = 0;
  gettimeofday(&tv, 0);
  v5 = tv.tv_usec + (_DWORD)&loc_F4240 * tv.tv_sec;
  v2 = (unsigned __int16)rand_r((unsigned int *)&v5);
  v3 = *(_DWORD *)(a1 + 1096);
  v6 = 0;
  if ( str2hex((int)&v6, v3, 8) != 4 )
  {
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, "Failed to convert string nonce1 to hex");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
      173,
      "pre_push_work_rvn_2020",
      22,
      25,
      100,
      v8);
  }
  qword_17AFA0 += v2;
  V_LOCK();
  logfmt_raw(v8, 0x1000u, 0, "start_nonce_rvn_high: %016llx", qword_17AFA0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/rvn/rvn_2020/rvn_2020_content.c",
    173,
    "pre_push_work_rvn_2020",
    22,
    33,
    40,
    v8);
  return 0;
}
