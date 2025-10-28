int __fastcall platform_get_sensor_max_chip_temp(int a1)
{
  return *(_DWORD *)(dword_1B6A50 + 120 * a1 + 96);
}
