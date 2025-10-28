int __fastcall platform_get_sensor_max_chip_temp(int a1)
{
  return *(_DWORD *)(dword_18D8A8 + 120 * a1 + 96);
}
