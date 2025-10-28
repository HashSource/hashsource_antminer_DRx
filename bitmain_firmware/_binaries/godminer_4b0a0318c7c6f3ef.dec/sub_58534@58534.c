int __fastcall sub_58534(int a1, __int64 *a2)
{
  __int64 v3; // r2
  __int64 *v4; // lr
  int *v6; // r1
  int v7; // r7
  _BYTE *v8; // r5
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1
  _DWORD *v13; // r4
  int v14; // r2
  int v15; // r3
  int v16; // r0
  __int64 *v17; // r12
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r2
  int v22; // r1
  int v23; // r3
  unsigned int v24; // r0
  void (__fastcall *v25)(int, __int64 *); // r3
  __int64 v27; // [sp+0h] [bp-C8h] BYREF
  int v28; // [sp+8h] [bp-C0h]
  int v29; // [sp+Ch] [bp-BCh]
  _BYTE v30[48]; // [sp+10h] [bp-B8h] BYREF
  int v31; // [sp+40h] [bp-88h]
  int v32; // [sp+44h] [bp-84h]
  int v33; // [sp+48h] [bp-80h]
  int v34; // [sp+4Ch] [bp-7Ch]
  int v35; // [sp+50h] [bp-78h]
  int v36; // [sp+54h] [bp-74h]
  int v37; // [sp+58h] [bp-70h]
  int v38; // [sp+5Ch] [bp-6Ch]
  double v39; // [sp+C0h] [bp-8h]

  v3 = *a2;
  v4 = a2 + 1;
  v6 = (int *)*((_DWORD *)a2 + 281);
  v7 = *((_DWORD *)a2 + 283);
  v8 = v30;
  v27 = v3;
  v9 = *v6;
  v10 = v6[1];
  v28 = v9;
  v29 = v10;
  do
  {
    v11 = *(_DWORD *)v4;
    v4 += 2;
    v12 = *((_DWORD *)v4 - 3);
    v13 = v8;
    v14 = *((_DWORD *)v4 - 2);
    v8 += 16;
    v15 = *((_DWORD *)v4 - 1);
    *v13 = v11;
    v13[1] = v12;
    v13[2] = v14;
    v13[3] = v15;
  }
  while ( v4 != a2 + 7 );
  v16 = *((_DWORD *)a2 + 258);
  v17 = a2 + 128;
  v18 = *((_DWORD *)v17 + 3);
  v19 = *((_DWORD *)v17 + 4);
  v20 = *((_DWORD *)v17 + 5);
  v31 = v16;
  v32 = v18;
  v33 = v19;
  v34 = v20;
  v21 = *((_DWORD *)v17 + 8);
  v22 = *((_DWORD *)v17 + 7);
  v23 = *((_DWORD *)v17 + 9);
  v35 = *((_DWORD *)v17 + 6);
  v36 = v22;
  v37 = v21;
  v38 = v23;
  v30[42] = *(_BYTE *)(v7 + 9);
  v24 = target_to_diff_kas(v17 + 1);
  *(_DWORD *)(a1 + 508) = 0;
  v25 = *(void (__fastcall **)(int, __int64 *))(a1 + 36);
  v39 = (double)v24;
  v25(a1, &v27);
  return 0;
}
