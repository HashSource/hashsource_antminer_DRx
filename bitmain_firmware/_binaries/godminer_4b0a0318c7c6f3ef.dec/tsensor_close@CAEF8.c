int __fastcall tsensor_close(unsigned int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r5
  unsigned int v4; // r4
  int v5; // r0
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v8[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v8, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      172,
      "tsensor_close",
      13,
      91,
      100,
      v8);
    return -2147482111;
  }
  else
  {
    v2 = 16 * a1;
    v3 = 68 * a1;
    if ( byte_1B46E8[68 * a1] )
    {
      v4 = 0;
      do
      {
        v5 = *(_DWORD *)&byte_1B46E8[8 * v4 + 8 + v3];
        if ( v5 )
          iic_uninit(v5);
        v4 = (unsigned __int8)(v4 + 1);
      }
      while ( byte_1B46E8[v3] > v4 );
    }
    return (int)memset(&byte_1B46E8[4 * v2 + 4 * a1], 0, 0x44u);
  }
}
