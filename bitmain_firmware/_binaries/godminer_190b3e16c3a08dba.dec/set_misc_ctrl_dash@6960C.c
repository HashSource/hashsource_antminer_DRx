int __fastcall set_misc_ctrl_dash(int a1, int a2)
{
  _DWORD v3[5]; // [sp+0h] [bp-14h] BYREF

  v3[0] = a2;
  v3[1] = 0;
  v3[3] = 0;
  v3[2] = 1835009;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v3);
}
