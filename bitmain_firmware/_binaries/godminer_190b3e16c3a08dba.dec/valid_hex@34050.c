int __fastcall valid_hex(const char *a1)
{
  size_t v2; // r0
  const char *v3; // r2
  const char *v4; // r0
  int v5; // t1
  int v6; // r2
  int v7; // r0
  int v8; // r1
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( !a1 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "Null string passed to valid_hex");
    V_UNLOCK();
    v6 = 215;
    v7 = g_zc;
    LOWORD(v8) = 7612;
    goto LABEL_9;
  }
  v2 = strlen(a1);
  if ( v2 )
  {
    if ( *(int *)&aGetValueFromLo[4 * *(unsigned __int8 *)a1 + 148] >= 0 )
    {
      v3 = a1;
      v4 = &a1[v2 - 1];
      while ( v3 != v4 )
      {
        v5 = *(unsigned __int8 *)++v3;
        if ( *(int *)&aGetValueFromLo[4 * v5 + 148] < 0 )
          goto LABEL_8;
      }
      return 1;
    }
LABEL_8:
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "Invalid charpassed to valid_hex");
    V_UNLOCK();
    v6 = 225;
    v7 = g_zc;
    LOWORD(v8) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/"
                                   "release/build/godminer-origin_godminer-new/util.c";
LABEL_9:
    HIWORD(v8) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/util.c" >> 16;
    zlog(v7, v8, 134, "valid_hex", 9, v6, 20, v10);
    return 0;
  }
  return 1;
}
