int __fastcall get_chain_mps_voltage(int a1, _WORD *a2)
{
  int result; // r0
  unsigned __int16 v5; // r9
  __int16 v6; // r10
  int v7; // r9
  unsigned int v8; // r8
  unsigned __int8 v9; // [sp+10h] [bp-1008h] BYREF
  unsigned __int8 v10; // [sp+11h] [bp-1007h]
  __int16 src; // [sp+18h] [bp-1000h] BYREF
  char v12; // [sp+1Ah] [bp-FFEh]

  *a2 = -1;
  if ( !sub_BB300(a1, 0)
    || (src = 8562, v12 = 2, sub_BAF38(a1, 60, &src, 3u, &v9, 2u))
    || (v5 = v9, v6 = v10, !sub_BB300(a1, 2))
    || (v12 = 2, src = 3442, (result = sub_BAF38(a1, 60, &src, 3u, &v9, 2u)) != 0) )
  {
    V_LOCK();
    logfmt_raw((char *)&src, 0x1000u, 0, 1527088, a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "get_chain_mps_voltage",
      21,
      193,
      100,
      &src);
    return 1;
  }
  else
  {
    v7 = 10 * ((v5 | (unsigned __int16)(v6 << 8)) & 0x1FF) + 490;
    v8 = 10 * (((unsigned int)(v9 | (v10 << 8)) >> 5) & 0x1FF) + 490;
    *a2 = v8;
    if ( v7 != v8 )
    {
      V_LOCK();
      logfmt_raw((char *)&src, 0x1000u, 0, 1527040, v7, v8, a1);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/drv_pic/mps2973.c",
        164,
        "get_chain_mps_voltage",
        21,
        189,
        80,
        &src);
      return 0;
    }
  }
  return result;
}
