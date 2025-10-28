int __fastcall sub_6E184(int a1)
{
  int v1; // r4
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  v3[0] = 26806532;
  v3[1] = 0;
  v3[3] = 0;
  v3[2] = 3670017;
  v1 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v3);
  usleep((__useconds_t)&stru_18698.st_size);
  return v1;
}
