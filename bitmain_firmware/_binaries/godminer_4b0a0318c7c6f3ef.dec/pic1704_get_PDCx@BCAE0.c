int __fastcall pic1704_get_PDCx(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  unsigned __int16 v8; // r2
  unsigned __int16 v9; // r3
  int v10; // [sp+4h] [bp-1Ch] BYREF
  __int16 v11; // [sp+8h] [bp-18h]
  int v12; // [sp+Ch] [bp-14h]
  int v13; // [sp+10h] [bp-10h]
  _BYTE v14[9]; // [sp+14h] [bp-Ch] BYREF

  HIBYTE(v12) = a1;
  v13 = 0;
  LOWORD(v12) = 43;
  BYTE2(v12) = 9;
  *(_DWORD *)v14 = 255;
  v10 = 0;
  v11 = 0;
  *(_DWORD *)&v14[4] = 0;
  v14[8] = 0;
  result = sub_BB8DC(v12, 0, (int)&v10, v14);
  if ( result )
  {
    v8 = __rev16(*(unsigned __int16 *)&v14[5]);
    v9 = __rev16(*(unsigned __int16 *)&v14[7]);
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v14[3]);
    *a3 = v8;
    *a4 = v9;
    return 1;
  }
  return result;
}
