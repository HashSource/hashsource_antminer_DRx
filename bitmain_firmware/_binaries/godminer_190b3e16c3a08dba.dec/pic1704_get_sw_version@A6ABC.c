int __fastcall pic1704_get_sw_version(char a1, _BYTE *a2)
{
  int result; // r0
  int v4; // [sp+0h] [bp-18h] BYREF
  char v5; // [sp+4h] [bp-14h]
  int v6; // [sp+8h] [bp-10h] BYREF
  __int16 v7; // [sp+Ch] [bp-Ch]
  int v8; // [sp+10h] [bp-8h]
  int v9; // [sp+14h] [bp-4h]

  BYTE2(v8) = 5;
  LOWORD(v8) = 23;
  HIBYTE(v8) = a1;
  v9 = 0;
  *a2 = -1;
  v4 = 255;
  v6 = 0;
  v7 = 0;
  v5 = 0;
  result = sub_A6724(v8, v9, (int)&v6, (unsigned __int8 *)&v4);
  if ( result )
    *a2 = BYTE2(v4);
  return result;
}
