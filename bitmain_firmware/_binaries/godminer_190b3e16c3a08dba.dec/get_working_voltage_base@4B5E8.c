int __fastcall get_working_voltage_base(int a1)
{
  int temp; // r4
  int v3; // r11
  int working_voltage; // r0
  int v5; // r9
  int v6; // r7
  int (__fastcall *v7)(int, int); // r2
  int v8; // r10
  int v9; // r7
  int v10; // r6
  int result; // r0
  float v12[1025]; // [sp+18h] [bp-1004h] BYREF

  temp = get_temp(1);
  v3 = get_temp(2);
  working_voltage = get_working_voltage();
  v5 = working_voltage;
  if ( temp == -64 )
  {
    v8 = 0;
    v10 = working_voltage;
    v9 = 0;
  }
  else
  {
    if ( dword_178450 - temp > 5 )
    {
      if ( ++dword_17ADC8 <= 1 )
        v6 = 0;
      else
        v6 = 20;
    }
    else
    {
      v6 = 0;
      dword_17ADC8 = 0;
    }
    v7 = *(int (__fastcall **)(int, int))a1;
    dword_178450 = temp;
    v8 = v7(a1, temp);
    platform_get_fan_control_info(v12);
    v9 = v6 + (*(int (__fastcall **)(int, int, int, _DWORD))(a1 + 4))(a1, temp, v3, LODWORD(v12[6]));
    v10 = v5 + v8 + v9;
  }
  V_LOCK();
  logfmt_raw(
    (char *)v12,
    0x1000u,
    0,
    "temp_min:%d, temp_max:%d, working_voltage:%d, compensate:%d, bias:%d",
    temp,
    v3,
    v5,
    v8,
    v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/machine_runtime_base.c",
    166,
    "get_working_voltage_base",
    24,
    286,
    20,
    v12);
  result = *(_DWORD *)(a1 + 88);
  if ( v10 < result )
    return v10;
  return result;
}
