int __fastcall sub_409D0(int a1)
{
  double v1; // d0
  int v3; // r6
  int v4; // r4
  int v5; // r8
  int v6; // r2
  int v7; // r3
  double v8; // d8
  int v9; // r1
  int v10; // r7
  int v11; // r12
  double *v12; // r7
  double v13; // d16
  double v14; // d16
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r3

  v3 = *(_DWORD *)(a1 + 60);
  v4 = *(_DWORD *)(v3 + 28);
  if ( *(int *)(v4 + 932) <= 0 )
    return 0;
  v6 = 0;
  v7 = *(_DWORD *)(v3 + 28);
  v8 = 0.0;
  v9 = v4 + 40 * *(_DWORD *)(v4 + 936);
  v10 = *(_DWORD *)(v9 + 976);
  *(_DWORD *)(v9 + 980) = 0;
  v9 += 944;
  v11 = v10 + 1;
  v12 = (double *)(v9 + 8 * v10);
  v13 = *(double *)(v9 + 24) - *v12;
  *v12 = v1;
  *(_DWORD *)(v9 + 32) = v11 % 3;
  *(double *)(v9 + 24) = v13 + v1;
  do
  {
    v14 = *(double *)(v7 + 968);
    v15 = *(_DWORD *)(v7 + 980) + 1;
    *(_DWORD *)(v7 + 980) = v15;
    if ( v14 > v8 )
    {
      v15 = *(_DWORD *)(v4 + 920);
      *(_DWORD *)(v4 + 936) = v6;
    }
    ++v6;
    if ( v14 > v8 )
    {
      v8 = v14;
      *(_DWORD *)(v4 + 920) = v15 | 0x800;
    }
    v7 += 40;
  }
  while ( v6 != 3 );
  v16 = *(_DWORD *)(v4 + 940) + 1;
  *(_DWORD *)(v4 + 940) = v16 % 5;
  if ( !(v16 % 5) || v8 == 0.0 )
  {
    v17 = *(_DWORD *)(v4 + 980);
    if ( v17 <= 0 )
      v17 = 0;
    else
      *(_DWORD *)(v4 + 936) = 0;
    if ( v17 < *(_DWORD *)(v4 + 1020) )
    {
      v17 = *(_DWORD *)(v4 + 1020);
      *(_DWORD *)(v4 + 936) = 1;
    }
    if ( *(_DWORD *)(v4 + 1060) > v17 )
      *(_DWORD *)(v4 + 936) = 2;
  }
  v5 = sub_4F5E8();
  snprintf((char *)(v4 + 924), 5u, "CHU%d", *(_DWORD *)(v4 + 936));
  *(_DWORD *)(v3 + 748) = *(_DWORD *)(v4 + 924);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(v4 + 924);
  if ( v8 == 0.0 )
  {
    v18 = *(_DWORD *)(v4 + 920);
    if ( (v18 & 0x800) != 0 )
    {
      *(_DWORD *)(v4 + 920) = v18 & 0xFFFFF7FF;
      sub_27040(a1, 4);
    }
  }
  return v5;
}
