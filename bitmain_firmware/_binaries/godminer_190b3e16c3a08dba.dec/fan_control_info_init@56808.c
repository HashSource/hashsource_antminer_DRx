int __fastcall fan_control_info_init(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  char var1004[4104]; // [sp+38h] [bp-1004h] BYREF
  int varg_r0; // [sp+1048h] [bp+Ch]
  int varg_r1; // [sp+104Ch] [bp+10h]
  int varg_r2; // [sp+1050h] [bp+14h]
  int varg_r3; // [sp+1054h] [bp+18h]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  dword_17846C = a1;
  dword_178470 = a2;
  dword_178474 = a3;
  dword_178478 = a4;
  dword_17847C = a5;
  dword_178480 = a6;
  flt_178484 = a7;
  dword_178488 = a8;
  dword_17848C = a9;
  dword_178490 = a10;
  dword_178494 = a11;
  dword_178498 = a12;
  dword_17849C = a13;
  memset(&flt_17B0C8, 0, 0x2Cu);
  if ( dword_17846C == 2 )
  {
    LODWORD(flt_17B0D8) = dword_178490;
    flt_17B0D0 = (float)SLODWORD(flt_178484);
    LODWORD(flt_17B0DC) = dword_178494;
    LODWORD(flt_17B0E0) = dword_178498;
    flt_17B0CC = (float)dword_178470;
    LODWORD(flt_17B0E4) = dword_17849C;
    flt_17B0C8 = (float)dword_178474;
  }
  V_LOCK();
  logfmt_raw(
    var1004,
    0x1000u,
    0,
    1373400,
    flt_17B0D8,
    flt_17B0DC,
    flt_17B0E0,
    flt_17B0E4,
    flt_17B0D0,
    flt_17B0CC,
    flt_17B0C8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/miner_util/set_pwm_by_temp.c",
    156,
    "fan_control_info_init",
    21,
    344,
    40,
    var1004);
  return 0;
}
