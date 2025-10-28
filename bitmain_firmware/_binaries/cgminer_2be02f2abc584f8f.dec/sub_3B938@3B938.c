int __fastcall sub_3B938(int a1, int a2, const char *a3, const char *a4, int a5, int a6, int a7, unsigned __int8 a8)
{
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r0
  _DWORD *v17; // r0
  _DWORD *v18; // r0
  unsigned __int8 **v19; // r0
  unsigned __int8 **v20; // r1
  int v21; // r3
  _BOOL4 v22; // r3
  int v24; // [sp+4h] [bp-Ch] BYREF
  double v25; // [sp+8h] [bp-8h] BYREF

  v24 = a2;
  v25 = dbl_78D10 / 1000.0 / dbl_72438;
  v11 = sub_39404(0, "STATS", (const char *)&v24, 0);
  v12 = sub_39350(v11, "ID", a3, 0);
  v13 = sub_39500(v12, "Elapsed", (const char *)&dbl_72438, 0);
  v14 = sub_3944C(v13, "Calls", a4, 0);
  v15 = sub_39548(v14, "Wait", a4 + 4, 0);
  v16 = sub_39548(v15, "Max", a4 + 12, 0);
  v17 = sub_39548(v16, "Min", a4 + 20, 0);
  dbl_79150 = dbl_796B0 + dbl_79738 + dbl_79478;
  v25 = dbl_78D10 / 1000.0 / dbl_72438;
  v18 = sub_39350(v17, "GHS 5s", byte_75984, 0);
  v19 = (unsigned __int8 **)sub_3B684(v18, "GHS av", (const char *)&v25, 0);
  v20 = v19;
  if ( a6 )
  {
    if ( v19 )
    {
      v21 = *(_DWORD *)(a6 + 16);
      *(_DWORD *)(a6 + 16) = v19[4];
      *((_DWORD *)v19[4] + 5) = a6;
      *(_DWORD *)(v21 + 20) = v19;
      v19[4] = (unsigned __int8 *)v21;
    }
    else
    {
      v20 = (unsigned __int8 **)a6;
    }
  }
  if ( a8 )
    v22 = v24 > 0;
  else
    v22 = 0;
  sub_38838(a1, v20, a8, v22);
  return v24 + 1;
}
