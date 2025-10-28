int __fastcall sub_27578(_DWORD *a1)
{
  int result; // r0
  int v3; // r2
  int v4; // r12
  double v5; // d16
  int v6; // s15
  unsigned int v7; // r3
  int v8; // r2
  bool v9; // zf
  int v10[2]; // [sp+10h] [bp-8h] BYREF

  result = sub_4EFC8(a1[44], a1[45], a1[46], a1[47], 0, a1[54], a1 + 49, v10);
  if ( result )
  {
    v5 = (double)(int)a1[48] / 1000000000.0;
    if ( v5 < 0.0 )
    {
      v6 = (int)-v5;
      v7 = (unsigned int)((-v5 - (double)(unsigned int)v6) * 4294967300.0);
      v9 = v7 == 0;
      if ( v7 )
        v7 = -v7;
      else
        v3 = (int)-v5;
      if ( v9 )
        v3 = -v3;
      else
        v4 = (int)-v5;
      if ( v9 )
        v6 = v3;
      else
        v4 = ~v4;
      if ( !v9 )
        v6 = v4;
    }
    else
    {
      v6 = (int)v5;
      v7 = (unsigned int)((v5 - (double)(unsigned int)(int)v5) * 4294967300.0);
    }
    v8 = a1[55];
    v10[1] = v7;
    v10[0] += v6;
    sub_27430(a1, v10[0], v7, a1[54], v8);
    return 1;
  }
  return result;
}
