int __fastcall read_system_status_from_monitor(int a1)
{
  int v1; // r5
  int *all_created_runtime; // r0
  double v4; // d6
  float v5; // s15
  double v6; // d4
  int *v7; // r1
  float v8; // s10
  float v9; // s11
  float v10; // s14
  __int64 v11; // kr00_8
  int v12; // t1
  _DWORD *v13; // r3
  char *v14; // r6
  int v15; // r3
  int v17; // [sp+4h] [bp-4h] BYREF

  v1 = 0;
  *(_DWORD *)(a1 + 28) = 0;
  v17 = 0;
  all_created_runtime = (int *)get_all_created_runtime(&v17);
  v4 = 0.0;
  if ( v17 <= 0 )
  {
    v5 = 0.0;
    v15 = 0;
    v6 = 0.0;
    v8 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0;
  }
  else
  {
    v5 = 0.0;
    v6 = 0.0;
    v7 = all_created_runtime;
    v8 = 0.0;
    v9 = 0.0;
    v10 = 0.0;
    v11 = 0;
    do
    {
      v12 = *v7++;
      v13 = &dword_1974C8[54 * *(_DWORD *)(v12 + 248)];
      v11 += *((_QWORD *)v13 + 10);
      v10 = v10 + *((float *)v13 + 8);
      v9 = v9 + *((float *)v13 + 9);
      v8 = v8 + *((float *)v13 + 10);
      v5 = v5 + *((float *)v13 + 11);
      v6 = v6 + *((double *)v13 + 6);
      v4 = v4 + *((double *)v13 + 7);
    }
    while ( &all_created_runtime[v17] != v7 );
    v14 = (char *)&unk_196FC8 + 216 * *(_DWORD *)(*all_created_runtime + 248);
    v15 = *((_DWORD *)v14 + 343);
    v1 = *((_DWORD *)v14 + 344);
  }
  *(_DWORD *)a1 = v17;
  *(_DWORD *)(a1 + 4) = v15;
  *(_DWORD *)(a1 + 8) = v1;
  *(float *)(a1 + 12) = v10;
  *(float *)(a1 + 16) = v9;
  *(float *)(a1 + 20) = v8;
  *(float *)(a1 + 24) = v5;
  *(double *)(a1 + 32) = v6;
  *(double *)(a1 + 40) = v4;
  *(_QWORD *)(a1 + 48) = v11;
  return a1;
}
