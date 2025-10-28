int __fastcall set_voltage_base(int a1, int a2)
{
  int v3; // r0

  v3 = is_power_init();
  set_voltage(a2, v3);
  return 0;
}
