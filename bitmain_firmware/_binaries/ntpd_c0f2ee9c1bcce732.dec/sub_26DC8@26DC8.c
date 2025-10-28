size_t __fastcall sub_26DC8(int a1)
{
  double v1; // d19
  int v2; // r12
  int v4; // r6
  _QWORD *v5; // r1
  size_t v6; // r4
  size_t v7; // r6
  unsigned int v8; // r1
  unsigned int v9; // r7
  double v10; // d16
  double v11; // d18
  double v12; // d16
  unsigned int v13; // r3
  double *v14; // r2
  bool v15; // cc
  double v16; // d17
  double v17; // d17
  double v18; // d16
  _DWORD base[121]; // [sp+10h] [bp-1E4h] BYREF

  v2 = *(_DWORD *)(a1 + 204);
  v4 = *(_DWORD *)(a1 + 200);
  if ( v2 == v4 )
    return 0;
  v5 = base;
  v6 = 0;
  do
  {
    ++v6;
    v2 = (v2 + 1) % 60;
    *v5++ = *(_QWORD *)(a1 + 8 * v2 + 248);
  }
  while ( v2 != v4 );
  *(_DWORD *)(a1 + 204) = v2;
  v7 = v6;
  if ( !v6 )
    return 0;
  if ( v6 != 1 )
    qsort(base, v6, 8u, (__compar_fn_t)compar);
  v8 = 0;
  v9 = v6 - 4 * v6 / 0xA;
  while ( v9 < v6 - v8 )
  {
    v10 = *(double *)&base[2 * ((v6 + v8) >> 1)];
    if ( *(double *)&base[2 * v6 - 2] - v10 >= v10 - *(double *)&base[2 * v8] )
      --v6;
    else
      ++v8;
  }
  v11 = 0.0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  if ( v6 > v8 )
  {
    v12 = *(double *)&base[2 * v8] + 0.0;
    v13 = v8 + 1;
    v14 = (double *)&base[2 * v8 + 2];
    *(double *)(a1 + 224) = v12;
    while ( v13 != v6 )
    {
      v15 = v13 > v8;
      v16 = *v14++;
      v12 = v12 + v16;
      if ( v13 <= v8 )
        ++v13;
      else
        v1 = *(v14 - 2);
      if ( v15 )
      {
        ++v13;
        v16 = v16 - v1;
      }
      *(double *)(a1 + 224) = v12;
      if ( v15 )
      {
        v11 = v11 + v16 * v16;
        *(double *)(a1 + 240) = v11;
      }
    }
  }
  else
  {
    v12 = 0.0;
  }
  v17 = sqrt(v11 / (double)v9);
  *(double *)(a1 + 224) = v12 / (double)v9;
  if ( byte_CB478 < 0 )
  {
    v18 = 1.0 / (double)(1 << -byte_CB478);
    if ( v17 <= v18 )
      goto LABEL_26;
LABEL_31:
    v18 = sqrt(*(double *)(a1 + 240) / (double)v9);
    goto LABEL_26;
  }
  v18 = (double)(1 << byte_CB478);
  if ( v17 > v18 )
    goto LABEL_31;
LABEL_26:
  *(double *)(a1 + 240) = v18;
  if ( dword_7CF4C )
    printf(
      "refclock_sample: n %d offset %.6f disp %.6f jitter %.6f\n",
      v7,
      *(double *)(a1 + 224),
      *(double *)(a1 + 232),
      v18);
  return v7;
}
