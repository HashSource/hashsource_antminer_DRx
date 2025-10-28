int __fastcall sub_83E60(int a1, int a2)
{
  int v2; // r4
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v4[2] = 1900544;
  v4[3] = 255;
  v4[0] = a2;
  v4[1] = 0;
  v2 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 244))(a1, v4);
  usleep((__useconds_t)&stru_13878.st_size);
  return v2;
}
