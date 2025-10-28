int __fastcall pic1704_write_iic(char a1, char a2)
{
  __int16 v3; // [sp+0h] [bp-18h] BYREF
  _BYTE v4[4]; // [sp+4h] [bp-14h] BYREF
  int v5; // [sp+8h] [bp-10h]
  _BYTE *v6; // [sp+Ch] [bp-Ch]
  _DWORD v7[2]; // [sp+10h] [bp-8h] BYREF

  v6 = v4;
  LOWORD(v5) = 571;
  BYTE2(v5) = 2;
  v4[0] = a2;
  HIBYTE(v5) = a1;
  v7[0] = 0;
  v4[1] = 0;
  v7[1] = 0;
  v3 = 255;
  return sub_BB8DC(v5, (int)v4, (int)v7, (unsigned __int8 *)&v3);
}
