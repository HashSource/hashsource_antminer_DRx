void __fastcall __noreturn check_working_voltage(int a1)
{
  _DWORD *v2; // r11
  int v3; // r9
  int v4; // r8
  int current_voltage; // r6
  int v6; // r0
  int v7; // r3
  int v8; // r4
  int v9; // r0
  int v10; // r0
  int v11; // [sp+1Ch] [bp-4h] BYREF
  char v12[4100]; // [sp+20h] [bp+0h] BYREF

  LOWORD(v2) = 20532;
  v11 = 0;
  LOWORD(v3) = -11884;
  LOWORD(v4) = -12444;
  get_all_created_runtime(&v11);
  while ( 1 )
  {
    current_voltage = get_current_voltage();
    v6 = (*(int (__fastcall **)(int))(a1 + 8))(a1);
    v7 = current_voltage - v6;
    v8 = v6;
    if ( current_voltage - v6 < 0 )
      v7 = v6 - current_voltage;
    if ( v7 > 9 )
    {
      V_LOCK();
      HIWORD(v3) = (unsigned int)"r init error!" >> 16;
      logfmt_raw(v12, 0x1000u, 0, v3, current_voltage, v8);
      V_UNLOCK();
      HIWORD(v2) = (unsigned int)&g_fan_zc >> 16;
      HIWORD(v4) = (unsigned int)"s" >> 16;
      zlog(
        *v2,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        v4,
        21,
        352,
        40,
        v12);
      if ( opt_algo == 9 )
      {
        (*(void (__fastcall **)(int, int))(a1 + 28))(a1, v8);
      }
      else if ( opt_algo == 11 )
      {
        v10 = is_power_init();
        set_voltage_by_steps(v8, v10, 0x14u);
      }
      else
      {
        v9 = is_power_init();
        set_voltage_by_steps(v8, v9, 0x64u);
      }
    }
    sleep(1u);
  }
}
