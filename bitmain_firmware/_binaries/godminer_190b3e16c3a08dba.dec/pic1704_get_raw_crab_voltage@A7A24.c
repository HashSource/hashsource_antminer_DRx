int __fastcall pic1704_get_raw_crab_voltage(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int result; // r0
  unsigned int v9; // r3
  unsigned __int16 v10; // r2
  unsigned __int16 v11; // r1
  int v12; // [sp+0h] [bp-20h] BYREF
  __int16 v13; // [sp+4h] [bp-1Ch]
  int v14; // [sp+8h] [bp-18h]
  int v15; // [sp+Ch] [bp-14h]
  _BYTE v16[12]; // [sp+10h] [bp-10h] BYREF
  char v17; // [sp+1Ch] [bp-4h]

  HIBYTE(v14) = a1;
  v15 = 0;
  LOWORD(v14) = 40;
  BYTE2(v14) = 13;
  *(_DWORD *)v16 = 255;
  v12 = 0;
  v13 = 0;
  *(_DWORD *)&v16[4] = 0;
  *(_DWORD *)&v16[8] = 0;
  v17 = 0;
  result = sub_A6724(v14, 0, (int)&v12, v16);
  if ( result )
  {
    v9 = *(unsigned __int16 *)&v16[9];
    v10 = __rev16(*(unsigned __int16 *)&v16[7]);
    v11 = __rev16(*(unsigned __int16 *)&v16[5]);
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)&v16[3]);
    *a3 = v11;
    *a4 = v10;
    *a5 = (unsigned __int16)__rev16(v9);
    return 1;
  }
  return result;
}
