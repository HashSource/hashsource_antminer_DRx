int __fastcall sub_59858(int a1, __int64 *a2)
{
  __int64 v3; // r2
  __int64 *v4; // lr
  int *v6; // r1
  unsigned __int8 *v7; // r7
  char *v8; // r5
  int v9; // r0
  int v10; // r1
  int v11; // r0
  int v12; // r1
  char *v13; // r4
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r3
  int v20; // r1
  int v21; // r2
  __int64 *v22; // r4
  unsigned int v23; // r0
  void (__fastcall *v24)(int, __int64 *); // r3
  __int64 v26; // [sp+0h] [bp-C8h] BYREF
  int v27; // [sp+8h] [bp-C0h]
  int v28; // [sp+Ch] [bp-BCh]
  char v29; // [sp+10h] [bp-B8h] BYREF
  int v30; // [sp+40h] [bp-88h]
  int v31; // [sp+44h] [bp-84h]
  int v32; // [sp+48h] [bp-80h]
  int v33; // [sp+4Ch] [bp-7Ch]
  int v34; // [sp+50h] [bp-78h]
  int v35; // [sp+54h] [bp-74h]
  int v36; // [sp+58h] [bp-70h]
  int v37; // [sp+5Ch] [bp-6Ch]
  double v38; // [sp+C0h] [bp-8h]

  v3 = *a2;
  v4 = a2 + 1;
  v6 = (int *)*((_DWORD *)a2 + 281);
  v7 = (unsigned __int8 *)*((_DWORD *)a2 + 283);
  v8 = &v29;
  v26 = v3;
  v9 = *v6;
  v10 = v6[1];
  v27 = v9;
  v28 = v10;
  do
  {
    v11 = *(_DWORD *)v4;
    v4 += 2;
    v12 = *((_DWORD *)v4 - 3);
    v13 = v8;
    v14 = *((_DWORD *)v4 - 2);
    v8 += 16;
    v15 = *((_DWORD *)v4 - 1);
    *(_DWORD *)v13 = v11;
    *((_DWORD *)v13 + 1) = v12;
    *((_DWORD *)v13 + 2) = v14;
    *((_DWORD *)v13 + 3) = v15;
  }
  while ( v4 != a2 + 7 );
  v16 = *((_DWORD *)a2 + 259);
  v17 = *((_DWORD *)a2 + 260);
  v18 = *((_DWORD *)a2 + 261);
  v30 = *((_DWORD *)a2 + 258);
  v31 = v16;
  v32 = v17;
  v33 = v18;
  v19 = *((_DWORD *)a2 + 265);
  v20 = *((_DWORD *)a2 + 263);
  v21 = *((_DWORD *)a2 + 264);
  v22 = a2 + 129;
  v34 = *((_DWORD *)a2 + 262);
  v35 = v20;
  v36 = v21;
  v37 = v19;
  memcpy((char *)&v26 + 64 - *v7, v7 + 9, *v7 - 5);
  v23 = target_to_diff_ks5(v22);
  *(_DWORD *)(a1 + 516) = 0;
  v24 = *(void (__fastcall **)(int, __int64 *))(a1 + 36);
  v38 = (double)v23;
  v24(a1, &v26);
  return 0;
}
