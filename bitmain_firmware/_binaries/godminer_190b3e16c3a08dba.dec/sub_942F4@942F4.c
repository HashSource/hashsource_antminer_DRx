int __fastcall sub_942F4(int a1, char a2, unsigned __int8 a3, int a4)
{
  int v4; // r4
  _DWORD v6[2]; // [sp+0h] [bp-10h] BYREF
  char v7; // [sp+8h] [bp-8h]
  char v8; // [sp+9h] [bp-7h]
  __int16 v9; // [sp+Ah] [bp-6h]
  int v10; // [sp+Ch] [bp-4h]

  v6[0] = a4;
  v7 = 0;
  v6[1] = 0;
  v8 = a2;
  v10 = a3;
  v9 = 179;
  v4 = (*(int (__fastcall **)(int, _DWORD *))(a1 + 244))(a1, v6);
  usleep((__useconds_t)&stru_13878.st_size);
  return v4;
}
