void __fastcall __noreturn check_working_voltage(int a1)
{
  int current_voltage; // r5
  int v3; // r0
  int v4; // r3
  int v5; // r4
  int v6; // r0
  int v7; // [sp+14h] [bp-4h] BYREF
  char v8[4100]; // [sp+18h] [bp+0h] BYREF

  v7 = 0;
  get_all_created_runtime(&v7);
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
      logfmt_raw(v8, 0x1000u, 0, "cur_voltage:%d, voltage:%d", current_voltage, v5);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "check_working_voltage",
        21,
        304,
        40,
        v8);
      v6 = is_power_init();
      set_voltage_by_steps(v5, v6);
    }
    sleep(1u);
  }
}
