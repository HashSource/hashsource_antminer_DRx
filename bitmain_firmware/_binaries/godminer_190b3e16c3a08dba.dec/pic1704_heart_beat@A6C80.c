int __fastcall pic1704_heart_beat(char a1)
{
  int v2; // [sp+0h] [bp-1Ch] BYREF
  __int16 v3; // [sp+4h] [bp-18h]
  int v4; // [sp+8h] [bp-14h] BYREF
  __int16 v5; // [sp+Ch] [bp-10h]
  int v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  BYTE2(v6) = 6;
  LOWORD(v6) = 22;
  HIBYTE(v6) = a1;
  v7 = 0;
  v4 = 255;
  v2 = 0;
  v3 = 0;
  v5 = 0;
  return sub_A6724(v6, 0, (int)&v2, (unsigned __int8 *)&v4);
}
