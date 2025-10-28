int __fastcall sub_31724(int a1)
{
  double v1; // d0
  int v2; // r4
  double v3; // d20
  double v4; // d22
  double v5; // d24
  double v6; // d25
  double v7; // d26
  double v8; // d27
  double v9; // d28
  double v10; // d8
  double v11; // d19
  double v12; // d21
  double v13; // d23
  double v14; // d9
  double v15; // d18
  int v17; // r1
  int v18; // r0
  double v19; // d17
  double v20; // d6
  double v21; // d16
  double v22; // d8
  double v23; // d9
  int result; // r0
  int v25; // r1

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 28);
  v3 = *(double *)(v2 + 2904);
  *(double *)(v2 + 2912) = v3;
  v4 = *(double *)(v2 + 2896);
  *(double *)(v2 + 2904) = v4;
  v5 = *(double *)(v2 + 2888);
  *(double *)(v2 + 2896) = v5;
  v6 = *(double *)(v2 + 2880);
  *(double *)(v2 + 2888) = v6;
  v7 = *(double *)(v2 + 2872);
  *(double *)(v2 + 2880) = v7;
  v8 = *(double *)(v2 + 2864);
  *(double *)(v2 + 2872) = v8;
  v9 = *(double *)(v2 + 2856);
  *(double *)(v2 + 2864) = v9;
  v10 = *(double *)(v2 + 2848);
  *(double *)(v2 + 2856) = v10;
  v11 = *(double *)(v2 + 2944);
  *(double *)(v2 + 2952) = v11;
  v12 = *(double *)(v2 + 2936);
  *(double *)(v2 + 2944) = v12;
  v13 = *(double *)(v2 + 2928);
  *(double *)(v2 + 2936) = v13;
  v14 = *(double *)(v2 + 2920);
  *(double *)(v2 + 2928) = v14;
  v15 = *(double *)(v2 + 752);
  v17 = *(_DWORD *)(v2 + 3160);
  v18 = *(_DWORD *)(v2 + 3188) + 1;
  v19 = *(double *)(v2 + 760);
  v20 = v1
      - (v4 * -3.87518
       + v3 * 0.6505491
       + v5 * 11.5118
       + v6 * -21.41264
       + v7 * 27.12837
       + v8 * -23.84486
       + v9 * 14.27663
       + v10 * -5.352734);
  *(double *)(v2 + 2848) = v20;
  v21 = v1 - (v12 * -3.589893 + v11 * 0.8694604 + v13 * 5.570154 + v14 * -3.849667);
  *(double *)(v2 + 2920) = v21;
  v22 = v10 * -0.02055878
      + v20 * 0.004952157
      + v9 * 0.04401413
      + v8 * -0.06558851
      + v7 * 0.07462108
      + v6 * -0.06558851
      + v5 * 0.04401413
      + v4 * -0.02055878
      + v3 * 0.004952157;
  v23 = v14 * -0.01174951 + v21 * 0.003215696 + v13 * 0.01712074 + v12 * -0.01174951 + v11 * 0.003215696;
  *(double *)(v2 + 752) = v15 + v22 * v22;
  *(double *)(v2 + 760) = v19 + v23 * v23;
  result = sub_5AA04(v18, v17);
  *(_DWORD *)(v2 + 3188) = v25;
  if ( !v25 )
    return sub_310AC(a1);
  return result;
}
