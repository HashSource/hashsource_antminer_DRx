int __fastcall sub_5F9F0(int a1)
{
  int v2; // r8
  float v3; // s14
  float v4; // s11
  float v5; // s13
  float v6; // s15
  int v7; // r5
  signed int temp; // r0
  int v9; // r5
  int v11; // [sp+4h] [bp-1014h]
  char v12[4096]; // [sp+18h] [bp-1000h] BYREF

  flt_197B44 = (float)get_temp(dword_194738);
  v2 = fan_pwm_get();
  v3 = flt_197B40 - flt_197B44;
  flt_197B58 = flt_197B40 - flt_197B44;
  v4 = (float)(flt_197B40 - flt_197B44) - flt_197B5C;
  v5 = (float)((float)(flt_197B40 - flt_197B44) - (float)(flt_197B5C + flt_197B5C)) + flt_197B60;
  if ( a1 )
  {
    flt_197B60 = flt_197B5C;
    flt_197B5C = flt_197B40 - flt_197B44;
    LODWORD(v6) = (int)(float)((float)((float)(v3 * flt_197B50) + (float)(v4 * flt_197B48)) + (float)(v5 * flt_197B54));
    v7 = LODWORD(v6);
    if ( SLODWORD(v6) < -20 )
      v7 = -20;
  }
  else
  {
    flt_197B60 = flt_197B5C;
    flt_197B5C = flt_197B40 - flt_197B44;
    LODWORD(v6) = (int)(float)((float)((float)(v3 * flt_197B50) + (float)(v4 * flt_197B4C)) + (float)(v5 * flt_197B54));
    v7 = LODWORD(v6);
  }
  temp = get_temp(dword_194730);
  if ( dword_194734 <= temp )
    v6 = 100.0;
  else
    v7 += v2;
  if ( dword_194734 > temp )
    v6 = (float)v7;
  if ( flt_197B3C > v6 )
  {
    if ( flt_197B3C <= flt_197B38 )
    {
      v9 = (int)flt_197B3C;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  if ( v6 > flt_197B38 )
  {
LABEL_16:
    v9 = (int)flt_197B38;
    goto LABEL_11;
  }
  v9 = (int)v6;
LABEL_11:
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "initial_stage: %d, feedback: %f, pwm_percent: %d  ", a1, v11, flt_197B44, v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "set_pwm_by_pid",
    14,
    313,
    20,
    v12);
  V_LOCK();
  logfmt_raw(v12, 0x1000u, 0, "new input: %d  ", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "set_pwm_by_pid",
    14,
    314,
    20,
    v12);
  return v9;
}
