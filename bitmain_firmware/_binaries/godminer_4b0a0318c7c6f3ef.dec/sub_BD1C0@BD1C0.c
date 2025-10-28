int __fastcall sub_BD1C0(int a1)
{
  int v2; // r0
  int v3; // r6
  _BYTE *v4; // r3
  int v5; // r2
  char v6; // t1
  char v8[17]; // [sp+10h] [bp-1820h] BYREF
  _BYTE v9[3]; // [sp+21h] [bp-180Fh] BYREF
  char v10[2048]; // [sp+30h] [bp-1800h] BYREF
  char v11[4096]; // [sp+830h] [bp-1000h] BYREF

  v2 = socket(2, 1, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    strcpy(v10, "error sock");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/platform/7007/7007_common.c",
      174,
      "get_eth_mac",
      11,
      128,
      100,
      v11);
    return -1;
  }
  else
  {
    strcpy(v8, "eth0");
    if ( ioctl(v2, 0x8927u, v8) < 0 )
    {
      strcpy(v10, "error ioctl");
      V_LOCK();
      logfmt_raw(v11, 0x1000u, 0, v10);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/device/hal/platform/7007/7007_common.c",
        174,
        "get_eth_mac",
        11,
        134,
        100,
        v11);
      close(v3);
      return -2;
    }
    else
    {
      v4 = v9;
      v5 = a1 - 1;
      do
      {
        v6 = *++v4;
        *(_BYTE *)++v5 = v6;
      }
      while ( v5 != a1 + 5 );
      close(v3);
      return 0;
    }
  }
}
