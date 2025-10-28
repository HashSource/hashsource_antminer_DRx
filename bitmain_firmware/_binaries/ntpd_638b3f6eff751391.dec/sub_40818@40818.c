int __fastcall sub_40818(int a1, unsigned __int8 a2, int a3, int a4)
{
  int *v4; // r12
  _DWORD *v7; // r4
  int *v8; // r3
  int v9; // r6
  int v10; // r2
  unsigned int v11; // r2
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r10
  int result; // r0
  int v17; // r1
  double v18; // d16
  int v19; // r12
  int v20; // r3
  _DWORD *v21; // r2
  int v22; // r1
  int v23; // r1
  int v24; // r2
  int v27; // [sp+8h] [bp-8h]
  unsigned int v28; // [sp+Ch] [bp-4h]

  v7 = *(_DWORD **)(*(_DWORD *)(a1 + 60) + 28);
  v8 = v7 + 222;
  v9 = v7[224];
  if ( v9 )
    v4 = v7 + 224;
  v27 = v7[222];
  v28 = v7[223];
  if ( !v9 )
  {
    v10 = v7[225];
    if ( v10 )
    {
      v4 = v7 + 224;
      goto LABEL_7;
    }
    v22 = v7[223];
    v4 = v7 + 224;
    v9 = *v8;
    v7[224] = *v8;
    v7[225] = v22;
  }
  v10 = v7[225];
  if ( !v10 )
  {
    result = *v8;
    v23 = v7[223];
    v14 = v27 - v9;
    v15 = v28;
    *v4 = *v8;
    v4[1] = v23;
    if ( v27 - v9 >= 0 )
      goto LABEL_12;
    goto LABEL_19;
  }
LABEL_7:
  v11 = -v10;
  v12 = (unsigned __int16)v28 + (unsigned __int16)v11;
  v13 = HIWORD(v28) + HIWORD(v11);
  if ( (v12 & 0x10000) != 0 )
    ++v13;
  v14 = ~v9 + v27;
  v15 = (unsigned __int16)v12 | (v13 << 16);
  if ( (v13 & 0x10000) != 0 )
    ++v14;
  result = *v8;
  v17 = v7[223];
  *v4 = *v8;
  v4[1] = v17;
  if ( v14 >= 0 )
  {
LABEL_12:
    v18 = (double)v14 + (double)(unsigned int)v15 * 2.32830644e-10;
    if ( v18 <= 0.403333333 )
      goto LABEL_13;
LABEL_23:
    sub_4010C(a1);
    goto LABEL_14;
  }
LABEL_19:
  if ( v15 )
  {
    v15 = -v15;
    v24 = ~v14;
  }
  else
  {
    v24 = -v14;
  }
  v18 = -((double)v24 + (double)(unsigned int)v15 * 2.32830644e-10);
  if ( v18 > 0.403333333 )
    goto LABEL_23;
LABEL_13:
  if ( v18 > 0.0916666667 )
  {
LABEL_14:
    v19 = 1;
    v20 = 0;
LABEL_15:
    result = a3;
    v21 = &v7[2 * v20 + 80];
    v7[278] = v19;
    v7[v20 + 266] = a2;
    *v21 = a3;
    v21[1] = a4;
    return result;
  }
  v20 = v7[278];
  if ( v20 <= 10 )
  {
    v19 = v20 + 1;
    goto LABEL_15;
  }
  return result;
}
