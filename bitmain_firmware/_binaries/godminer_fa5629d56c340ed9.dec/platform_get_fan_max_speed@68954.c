int __fastcall platform_get_fan_max_speed(int a1)
{
  return *(_DWORD *)(dword_1B6A88 + 12 * a1 + 8);
}
