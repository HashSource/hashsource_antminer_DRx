int __fastcall platform_get_fan_max_speed(int a1)
{
  return *(_DWORD *)(dword_18D8E0 + 12 * a1 + 8);
}
