int __fastcall sub_27430(_DWORD *a1, int a2, unsigned int a3, int a4, int a5)
{
  double v5; // d0
  int v7; // r3
  unsigned int v8; // r6
  double v9; // d16
  int result; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int vars8; // [sp+14h] [bp+8h]
  int _18; // [sp+18h] [bp+Ch]
  int varg_r3; // [sp+1Ch] [bp+10h]

  a1[54] = vars8;
  a1[55] = _18;
  if ( a5 )
  {
    v8 = HIWORD(a3) + ((unsigned int)-a5 >> 16);
    if ( (((unsigned __int16)a3 + (unsigned __int16)-(__int16)a5) & 0x10000) != 0 )
      ++v8;
    v7 = ~varg_r3 + a2;
    a3 = (unsigned __int16)(a3 - a5) | (v8 << 16);
    if ( (v8 & 0x10000) != 0 )
      ++v7;
  }
  else
  {
    v7 = a2 - a4;
  }
  if ( v7 < 0 )
  {
    if ( a3 )
    {
      a3 = -a3;
      v13 = ~v7;
    }
    else
    {
      v13 = -v7;
    }
    v9 = -((double)v13 + (double)a3 * 2.32830644e-10);
  }
  else
  {
    v9 = (double)v7 + (double)a3 * 2.32830644e-10;
  }
  result = a1[51];
  v11 = (a1[50] + 1) % 60;
  a1[50] = v11;
  *(double *)&a1[2 * v11 + 62] = v9 + v5;
  if ( v11 == result )
  {
    v12 = v11 + 1;
    result = -2004318071 * v12;
    a1[51] = v12 % 60;
  }
  return result;
}
