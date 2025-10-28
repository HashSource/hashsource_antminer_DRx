int __fastcall platform_get_sensor_max_pcb_temp(int a1)
{
  return *(_DWORD *)(dword_1B5930 + 120 * a1 + 100);
}
