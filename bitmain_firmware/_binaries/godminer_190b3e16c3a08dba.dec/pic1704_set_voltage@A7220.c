int __fastcall pic1704_set_voltage(char a1, unsigned __int8 a2)
{
  __int16 v3; // [sp+4h] [bp-1Ch] BYREF
  __int16 v4; // [sp+8h] [bp-18h] BYREF
  char v5; // [sp+Ah] [bp-16h]
  int v6; // [sp+Ch] [bp-14h]
  __int16 *v7; // [sp+10h] [bp-10h]
  _DWORD v8[2]; // [sp+14h] [bp-Ch] BYREF
  char v9; // [sp+1Ch] [bp-4h]

  HIBYTE(v6) = a1;
  LOWORD(v6) = 784;
  BYTE2(v6) = 2;
  v4 = a2;
  v7 = &v4;
  v8[0] = 0;
  v5 = 0;
  v8[1] = 0;
  v9 = 0;
  v3 = 255;
  return sub_A6724(v6, (int)&v4, (int)v8, (unsigned __int8 *)&v3);
}
