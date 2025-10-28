int __fastcall pwm_get(int a1, int a2)
{
  int v2; // r4
  int v4; // r3
  int v5; // r12
  int v6; // r2
  int v7; // r0
  int v8; // r1
  char s[2048]; // [sp+10h] [bp-1804h] BYREF
  char v11[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( a1 > 2 )
  {
    v2 = -3;
    strcpy(s, "bad param");
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, s);
    V_UNLOCK();
    v5 = 100;
    v6 = 101;
    v7 = g_zc;
    LOWORD(v8) = 30856;
  }
  else
  {
    v2 = a1 - 1;
    if ( a1 != 1 )
      return -5;
    fpga_read(132, (_DWORD *)a2);
    v4 = *(unsigned __int16 *)(a2 + 2);
    *(_DWORD *)a2 = v4;
    snprintf(s, 0x800u, "duty of fpga = 0x%x", v4);
    V_LOCK();
    logfmt_raw(v11, 0x1000u, v2, s);
    V_UNLOCK();
    v5 = 20;
    v6 = 109;
    v7 = g_zc;
    LOWORD(v8) = (unsigned __int16)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/"
                                   "release/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_pwm.c";
  }
  HIWORD(v8) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/releas"
                             "e/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_pwm.c" >> 16;
  zlog(v7, v8, 171, "pwm_get", 7, v6, v5, v11);
  return v2;
}
