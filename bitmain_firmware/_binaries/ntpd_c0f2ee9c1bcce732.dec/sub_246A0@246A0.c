double *__fastcall sub_246A0(int a1)
{
  double v1; // d0
  __int64 v2; // d1
  __int64 v3; // d2
  double v5; // d16
  int v6; // r7
  int v7; // r3
  char *v8; // r5
  int v9; // s15
  int v10; // r10
  char v11; // r0
  unsigned int v12; // r8
  int v13; // r0
  int v14; // r1
  double v15; // d18
  double *v16; // r2
  double v17; // d16
  int v18; // r9
  unsigned int v19; // r3
  double *v20; // r0
  _DWORD *v21; // r8
  int i; // r5
  int v23; // r3
  double *v24; // r1
  int v25; // r2
  double v26; // d16
  int v27; // r10
  int v28; // r9
  char *v29; // r2
  double *v30; // r1
  int v31; // r3
  int v32; // r5
  double v33; // d18
  double v34; // d16
  int v35; // t1
  int v36; // r10
  int v37; // r3
  int v38; // r0
  double *result; // r0
  double v40; // d16
  int v41; // r2
  bool v42; // cc
  int v43; // r1
  int v44; // r3
  double v45; // d8
  double v46; // d9
  __int64 v47; // r2
  double v48; // d16
  double v49; // d17
  double v50; // d16
  double v51; // d18
  unsigned int v52; // r2
  unsigned int v53; // r3
  double v54; // d16
  int v55; // r0
  __int64 v56; // [sp+10h] [bp-BCh] BYREF
  _DWORD v57[7]; // [sp+18h] [bp-B4h] BYREF
  char v58; // [sp+34h] [bp-98h] BYREF
  _BYTE v59[8]; // [sp+38h] [bp-94h] BYREF
  char v60; // [sp+40h] [bp-8Ch] BYREF
  char v61; // [sp+70h] [bp-5Ch] BYREF
  char s[84]; // [sp+78h] [bp-54h] BYREF

  v5 = dbl_7A1C0;
  v6 = dword_CB548;
  v7 = *(_DWORD *)(a1 + 128);
  v8 = &v61;
  v9 = dword_CB548 - *(_DWORD *)(a1 + 504);
  v10 = a1 + 8 * v7;
  *(_DWORD *)(a1 + 4 * (v7 + 82)) = dword_CB548;
  *(double *)(v10 + 200) = v1;
  *(_QWORD *)(v10 + 136) = v2;
  *(_QWORD *)(v10 + 264) = v3;
  v11 = byte_7A1B8;
  *(_DWORD *)(a1 + 504) = v6;
  v12 = 1 << v11;
  v13 = 7;
  v14 = (v7 + 1) % 8;
  *(_DWORD *)(a1 + 128) = v14;
  v15 = (double)(unsigned int)v9 * v5;
  do
  {
    v16 = (double *)(a1 + 8 * (v14 + 33));
    if ( v13 )
      v17 = v15 + *v16;
    else
      v17 = *v16;
    if ( v13 )
      *v16 = v17;
    if ( v17 < 16.0 )
    {
      v18 = a1 + 8 * v14;
      v19 = v6 - *(_DWORD *)(a1 + 4 * (v14 + 82));
      if ( v19 <= v12 )
        *(_QWORD *)v8 = *(_QWORD *)(v18 + 136);
      else
        v17 = *(double *)(v18 + 136) + v17;
      if ( v19 > v12 )
        *(double *)v8 = v17;
    }
    else
    {
      *(double *)(a1 + 8 * (v14 + 33)) = 16.0;
      *(double *)v8 = 16.0;
    }
    v57[v13--] = v14;
    v8 -= 8;
    v14 = (v14 + 1) % 8;
  }
  while ( v13 != -1 );
  if ( byte_CB4B0 != 3 )
  {
    v20 = (double *)&v60;
    v21 = v57;
    for ( i = 1; i != 8; ++i )
    {
      v23 = 0;
      v24 = (double *)v59;
      v25 = 0;
      do
      {
        v26 = *v24++;
        ++v25;
        if ( v26 > *v20 )
        {
          v27 = v57[v23];
          *(v24 - 1) = *v20;
          v28 = v21[1];
          *v20 = v26;
          v57[v23] = v28;
          v21[1] = v27;
        }
        ++v23;
      }
      while ( v25 < i );
      ++v20;
      ++v21;
    }
  }
  v29 = (char *)&v56 + 4;
  v30 = (double *)v59;
  v31 = a1;
  v32 = 0;
  v33 = dbl_7A2A8;
  do
  {
    v34 = *v30++;
    v35 = *((_DWORD *)v29 + 1);
    v29 += 4;
    *(_BYTE *)(v31 + 360) = v35;
    if ( v34 < 16.0 && (v32 <= 1 || v34 < v33) )
      ++v32;
    ++v31;
  }
  while ( v29 != &v58 );
  v36 = v57[0];
  v37 = 7;
  v38 = v57[0] + 25;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  result = (double *)(a1 + 8 * v38);
  v40 = 0.0;
  do
  {
    v41 = v57[v37];
    v42 = v32 <= v37--;
    v43 = a1 + 8 * v41;
    v40 = (v40 + *(double *)(v43 + 264)) * 0.5;
    if ( !v42 )
      *(double *)(a1 + 424) = *(double *)(a1 + 424)
                            + (*(double *)(v43 + 200) - *result) * (*(double *)(v43 + 200) - *result);
  }
  while ( v37 != -1 );
  *(double *)(a1 + 432) = v40;
  if ( !v32 )
    return (double *)sub_232C4();
  if ( v32 == 1 )
  {
    v1 = *(double *)(a1 + 424);
  }
  else
  {
    v40 = *(double *)(a1 + 424);
    v43 = v32 - 1;
  }
  v44 = a1 + 8 * v36;
  v45 = *(double *)(v44 + 200);
  if ( v32 != 1 )
    LODWORD(v1) = v43;
  v46 = *(double *)(a1 + 408);
  v47 = *(_QWORD *)(v44 + 136);
  *(double *)(a1 + 408) = v45;
  if ( v32 != 1 )
    v1 = (double)SLODWORD(v1);
  *(_QWORD *)(a1 + 416) = v47;
  if ( v32 != 1 )
    v1 = v40 / v1;
  v48 = sqrt(v1);
  if ( v32 != 1 )
    *(double *)(a1 + 424) = v1;
  if ( byte_CB478 < 0 )
  {
    v49 = 1.0 / (double)(1 << -byte_CB478);
    if ( v48 <= v49 )
      goto LABEL_46;
LABEL_61:
    v49 = sqrt(*(double *)(a1 + 424));
    goto LABEL_46;
  }
  v49 = (double)(1 << byte_CB478);
  if ( v48 > v49 )
    goto LABEL_61;
LABEL_46:
  v50 = dbl_7A2A8;
  v51 = *(double *)(a1 + 432);
  *(double *)(a1 + 424) = v49;
  if ( v51 >= v50 || v50 <= *(double *)(a1 + 8 * v36 + 264) || (v54 = fabs(v46 - v45), v54 <= v49 * 3.0) )
  {
    v52 = *(_DWORD *)(a1 + 112);
    v53 = *(_DWORD *)(a1 + 4 * (v36 + 82));
  }
  else
  {
    v52 = *(_DWORD *)(a1 + 112);
    v53 = *(_DWORD *)(a1 + 4 * (v36 + 82));
    if ( (double)(v53 - v52) < (double)(1 << *(_BYTE *)(a1 + 48)) + (double)(1 << *(_BYTE *)(a1 + 48)) )
    {
      snprintf(s, 0x50u, "%.6f s", v54);
      return (double *)sub_1D3D8(141, a1, s);
    }
  }
  if ( v52 >= v53 )
  {
    if ( dword_7CF4C )
      return (double *)printf("clock_filter: old sample %lu\n", dword_CB548 - v53);
    return result;
  }
  *(_DWORD *)(a1 + 112) = v53;
  v55 = sub_1C1BC(a1);
  result = (double *)sub_2DBD4(a1 + 12, v55);
  if ( dword_7CF4C )
    result = (double *)printf(
                         "clock_filter: n %d off %.6f del %.6f dsp %.6f jit %.6f\n",
                         v32,
                         *(double *)(a1 + 408),
                         *(double *)(a1 + 416),
                         *(double *)(a1 + 432),
                         *(double *)(a1 + 424));
  if ( !*(_DWORD *)(a1 + 116) || byte_CB4B0 == 3 )
    return (double *)sub_232C4();
  return result;
}
