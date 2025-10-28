int __fastcall platform_get_sensor_addr(int a1, int a2)
{
  int v2; // r3

  LOWORD(v2) = -10108;
  HIWORD(v2) = (unsigned int)&unk_186A74 >> 16;
  return *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v2 + 0x24) + 120 * a1 + 84) + 24 * a2 + 20);
}
