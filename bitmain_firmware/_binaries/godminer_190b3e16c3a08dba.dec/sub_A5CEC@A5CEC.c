time_t __fastcall sub_A5CEC(int a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r10
  char *v7; // r5
  int v8; // t1
  char *v9; // r0
  char s[36]; // [sp+10h] [bp-1024h] BYREF

  if ( a3 )
  {
    v5 = a2 - 1;
    v6 = a2 - 1 + a3;
    v7 = s;
    do
    {
      v8 = *(unsigned __int8 *)++v5;
      v9 = v7;
      v7 += 2;
      sprintf(v9, "%02x", v8);
    }
    while ( v5 != v6 );
  }
  V_LOCK();
  logfmt_raw(s, 0x1000u, 0, "%s[%d]=%s", a1, a3, s);
  V_UNLOCK();
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/device/hal/drv_pic/mps2973.c",
           164,
           "hex_dump",
           8,
           37,
           20,
           s);
}
