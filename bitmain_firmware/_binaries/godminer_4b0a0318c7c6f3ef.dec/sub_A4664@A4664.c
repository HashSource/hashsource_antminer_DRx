int __fastcall sub_A4664(int a1, char a2, __int16 a3, int a4)
{
  int v4; // r4
  _DWORD v6[2]; // [sp+0h] [bp-10h] BYREF
  char v7; // [sp+8h] [bp-8h]
  char v8; // [sp+9h] [bp-7h]
  __int16 v9; // [sp+Ah] [bp-6h]
  int v10; // [sp+Ch] [bp-4h]

  v6[0] = a4;
  v7 = 0;
  v10 = 255;
  v6[1] = 0;
  v8 = a2;
  v9 = a3;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 280))(a1, v6);
  usleep(0x4E20u);
  return v4;
}
