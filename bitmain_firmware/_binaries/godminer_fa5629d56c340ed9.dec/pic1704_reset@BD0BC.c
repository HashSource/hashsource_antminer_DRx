int __fastcall pic1704_reset(char a1)
{
  __int16 v2; // [sp+4h] [bp-18h] BYREF
  int v3; // [sp+8h] [bp-14h] BYREF
  __int16 v4; // [sp+Ch] [bp-10h]
  int v5; // [sp+10h] [bp-Ch]
  int v6; // [sp+14h] [bp-8h]

  v6 = 0;
  v3 = 0;
  v4 = 0;
  LOWORD(v5) = 7;
  HIBYTE(v5) = a1;
  BYTE2(v5) = 2;
  v2 = 255;
  return sub_BCC64(v5, 0, (int)&v3, (unsigned __int8 *)&v2);
}
