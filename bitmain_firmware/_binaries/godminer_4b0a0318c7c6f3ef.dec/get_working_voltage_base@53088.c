int __fastcall get_working_voltage_base(int a1)
{
  int temp; // r8
  int v3; // r7
  int working_voltage; // r4
  int result; // r0
  char v6[4096]; // [sp+18h] [bp-1000h] BYREF

  temp = get_temp(1);
  v3 = get_temp(2);
  working_voltage = get_working_voltage();
  V_LOCK();
  logfmt_raw(
    v6,
    0x1000u,
    0,
    "temp_min:%d, temp_max:%d, working_voltage:%d, compensate:%d, bias:%d",
    temp,
    v3,
    working_voltage,
    0,
    0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "get_working_voltage_base",
    24,
    331,
    20,
    v6);
  result = *(_DWORD *)(a1 + 96);
  if ( working_voltage < result )
    return working_voltage;
  return result;
}
