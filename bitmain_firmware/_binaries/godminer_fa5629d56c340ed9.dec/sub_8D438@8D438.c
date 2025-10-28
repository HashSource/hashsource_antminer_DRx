int __fastcall sub_8D438(int a1, __int16 a2, int a3)
{
  _DWORD v4[2]; // [sp+0h] [bp-14h] BYREF
  __int16 v5; // [sp+8h] [bp-Ch]
  __int16 v6; // [sp+Ah] [bp-Ah]
  int v7; // [sp+Ch] [bp-8h]

  v4[0] = a3;
  v7 = 255;
  v4[1] = 0;
  v6 = a2;
  v5 = 1;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 284))(a1, v4);
}
