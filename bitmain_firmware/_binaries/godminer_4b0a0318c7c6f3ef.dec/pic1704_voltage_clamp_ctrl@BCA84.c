int __fastcall pic1704_voltage_clamp_ctrl(char a1, char a2)
{
  _BYTE v3[5]; // [sp+7h] [bp-19h] BYREF
  __int16 v4; // [sp+Ch] [bp-14h] BYREF
  _DWORD v5[2]; // [sp+10h] [bp-10h] BYREF
  int v6; // [sp+18h] [bp-8h]
  _BYTE *v7; // [sp+1Ch] [bp-4h]

  v3[0] = a2;
  v7 = v3;
  LOWORD(v6) = 305;
  HIBYTE(v6) = a1;
  BYTE2(v6) = 2;
  v5[0] = 0;
  *(_DWORD *)((char *)v5 + 3) = 0;
  v4 = 255;
  return sub_BB8DC(v6, (int)v3, (int)v5, (unsigned __int8 *)&v4);
}
