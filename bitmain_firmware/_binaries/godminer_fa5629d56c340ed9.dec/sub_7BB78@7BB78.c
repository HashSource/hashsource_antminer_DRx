int __fastcall sub_7BB78(int a1, int a2)
{
  int v2; // r4
  _DWORD v4[4]; // [sp+0h] [bp-10h] BYREF

  v4[2] = 1376256;
  v4[3] = 255;
  v4[0] = a2;
  v4[1] = 0;
  v2 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 284))(a1, v4);
  usleep(0x4E20u);
  return v2;
}
