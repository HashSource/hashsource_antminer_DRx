int __fastcall data_enc(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  char v7[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 == 1 )
  {
    v5 = a2 & 7;
    if ( (a2 & 7) != 0 )
    {
      V_LOCK();
      logfmt_raw(v7, 0x1000u, 0, 1556740, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/common/general/xxtea.c",
        150,
        "data_enc",
        8,
        93,
        100,
        v7);
      return 0;
    }
    else
    {
      xxtea_encode(a1, a2 >> 2, 16 * a4 + 1664880);
      return 1;
    }
  }
  else
  {
    V_LOCK();
    logfmt_raw(v7, 0x1000u, 0, 1556796, a3);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/common/general/xxtea.c",
      150,
      "data_enc",
      8,
      100,
      100,
      v7);
    return 0;
  }
}
