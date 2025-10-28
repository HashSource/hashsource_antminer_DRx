void __fastcall __noreturn check_working_voltage(int a1)
{
  int current_voltage; // r6
  int v3; // r0
  int v4; // r3
  int v5; // r4
  int v6; // r0
  int v7; // r0
  int v8; // [sp+1Ch] [bp-4h] BYREF
  char v9[4100]; // [sp+20h] [bp+0h] BYREF

  v8 = 0;
  get_all_created_runtime(&v8);
  while ( 1 )
  {
    current_voltage = get_current_voltage();
    v3 = (*(int (__fastcall **)(int))(a1 + 8))(a1);
    v4 = current_voltage - v3;
    v5 = v3;
    if ( current_voltage - v3 < 0 )
      v4 = v3 - current_voltage;
    if ( v4 > 9 )
    {
      V_LOCK();
      logfmt_raw(v9, 0x1000u, 0, "cur_voltage:%d, set voltage to %d", current_voltage, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_working_voltage",
        21,
        396,
        40,
        v9);
      if ( opt_algo == 9 )
      {
        (*(void (__fastcall **)(int, int))(a1 + 28))(a1, v5);
      }
      else if ( opt_algo == 11 )
      {
        v7 = is_power_init();
        set_voltage_by_steps(v5, v7, 0x14u);
      }
      else
      {
        v6 = is_power_init();
        set_voltage_by_steps(v5, v6, 0x64u);
      }
    }
    sleep(1u);
  }
}
