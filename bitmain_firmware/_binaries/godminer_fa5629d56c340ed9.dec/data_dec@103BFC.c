int __fastcall data_dec(unsigned int *a1, unsigned int a2, int a3, int a4)
{
  unsigned int v5; // r5
  int v6; // r2
  int v7; // r0
  int v8; // r1
  char v10[4100]; // [sp+10h] [bp-1004h] BYREF

  if ( a3 != 1 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, "algorithm_type is %d, but not support it", a3);
    V_UNLOCK();
    v6 = 119;
    v7 = g_zc;
    LOWORD(v8) = -16316;
    goto LABEL_4;
  }
  v5 = a2 & 7;
  if ( (a2 & 7) != 0 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, " xxtea input data length %% 8 must be 0, but now is %d", v5);
    V_UNLOCK();
    v6 = 112;
    v7 = g_zc;
    LOWORD(v8) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/"
                                   "release/build/godminer-origin_godminer-new/common/general/xxtea.c";
LABEL_4:
    HIWORD(v8) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/rele"
                               "ase/build/godminer-origin_godminer-new/common/general/xxtea.c" >> 16;
    zlog(v7, v8, 150, "data_dec", 8, v6, 100, v10);
    return 0;
  }
  xxtea_decode(a1, a2 >> 2, (int)&xxtea_key + 16 * a4);
  return 1;
}
