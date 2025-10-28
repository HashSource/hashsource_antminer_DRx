_DWORD *__fastcall sub_2FACC(char *s2)
{
  _DWORD *result; // r0
  char v3[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( (unsigned int)dword_17A040 > 0x13 )
  {
    V_LOCK();
    logfmt_raw(v3, 0x1000u, 0, "only support %d reject reasons", dword_17A040);
    V_UNLOCK();
    return (_DWORD *)zlog(
                       g_zc,
                       "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/buil"
                       "d/godminer-origin_godminer-new/pool.c",
                       134,
                       "reject_reason_history_update",
                       28,
                       41,
                       20,
                       v3);
  }
  else
  {
    if ( !dword_17A040 )
    {
      V_LOCK();
      logfmt_raw(v3, 0x1000u, 0, "reject reason init %d", dword_17A040);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/pool.c",
        134,
        "reject_reason_history_update",
        28,
        46,
        40,
        v3);
      reject_reason_map = 0;
      dword_18D86C = 0;
      dword_18D870 = 0;
      dword_18D874 = 0;
      dword_18D878 = 0;
    }
    result = (_DWORD *)map_get_(&reject_reason_map, s2);
    dword_18D874 = (int)result;
    if ( result )
    {
      ++*result;
    }
    else
    {
      dword_18D878 = 1;
      ++dword_17A040;
      return (_DWORD *)map_set_((void **)&reject_reason_map, s2, &dword_18D878, 4u);
    }
  }
  return result;
}
