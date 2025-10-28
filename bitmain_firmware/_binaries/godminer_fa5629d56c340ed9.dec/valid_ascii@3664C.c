int __fastcall valid_ascii(const char *a1)
{
  signed int v2; // r0
  const char *v3; // r2
  int v4; // t1
  int v5; // r0
  int v6; // r1
  int v8; // r2
  char v9[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a1 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "Null string passed to valid_ascii");
    V_UNLOCK();
    v8 = 236;
    v5 = g_zc;
    LOWORD(v6) = -21456;
LABEL_9:
    HIWORD(v6) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/util.c" >> 16;
    zlog(v5, v6, 134, "valid_ascii", 11, v8, 20, v9);
    return 0;
  }
  v2 = strlen(a1);
  if ( !v2 )
  {
    V_LOCK();
    logfmt_raw(v9, 0x1000u, 0, "Zero length string passed to valid_ascii");
    V_UNLOCK();
    v8 = 242;
LABEL_8:
    v5 = g_zc;
    LOWORD(v6) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/"
                                   "release/build/godminer-origin_godminer-new/util.c";
    goto LABEL_9;
  }
  v3 = a1;
  do
  {
    v4 = *(unsigned __int8 *)v3++;
    if ( (unsigned int)(v4 - 32) > 0x5E )
    {
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "Invalid char passed to valid_ascii");
      V_UNLOCK();
      v8 = 251;
      goto LABEL_8;
    }
  }
  while ( v3 - a1 < v2 );
  return 1;
}
