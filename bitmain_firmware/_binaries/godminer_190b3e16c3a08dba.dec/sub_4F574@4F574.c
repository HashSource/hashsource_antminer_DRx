int __fastcall sub_4F574(int a1, __int64 *a2)
{
  __int64 *v4; // r12
  __int64 *v5; // r7
  _DWORD *v6; // r5
  int v7; // r0
  int v8; // r1
  _DWORD *v9; // lr
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r7
  void (__fastcall *v17)(int, __int64 *); // r4
  _DWORD v19[12]; // [sp+0h] [bp-84h] BYREF
  __int64 v20; // [sp+30h] [bp-54h] BYREF
  int v21; // [sp+40h] [bp-44h]
  int v22; // [sp+44h] [bp-40h]
  int v23; // [sp+48h] [bp-3Ch]
  int v24; // [sp+4Ch] [bp-38h]
  int v25; // [sp+50h] [bp-34h]
  int v26; // [sp+54h] [bp-30h]
  int v27; // [sp+58h] [bp-2Ch]
  int v28; // [sp+5Ch] [bp-28h]
  int v29; // [sp+60h] [bp-24h]
  int v30; // [sp+64h] [bp-20h]
  int v31; // [sp+68h] [bp-1Ch]
  int v32; // [sp+6Ch] [bp-18h]
  int v33; // [sp+70h] [bp-14h]

  v4 = a2 + 1;
  v5 = a2 + 7;
  v6 = v19;
  v20 = *a2;
  do
  {
    v7 = *(_DWORD *)v4;
    v4 += 2;
    v8 = *((_DWORD *)v4 - 3);
    v9 = v6;
    v10 = *((_DWORD *)v4 - 2);
    v6 += 4;
    v11 = *((_DWORD *)v4 - 1);
    *v9 = v7;
    v9[1] = v8;
    v9[2] = v10;
    v9[3] = v11;
  }
  while ( v4 != v5 );
  v12 = v19[0];
  v13 = v19[1];
  v14 = v19[2];
  v15 = v19[3];
  v16 = *((_DWORD *)a2 + 258);
  *(_DWORD *)(a1 + 460) = 0;
  v21 = v12;
  v22 = v13;
  v23 = v14;
  v24 = v15;
  v17 = *(void (__fastcall **)(int, __int64 *))(a1 + 32);
  v25 = v19[4];
  v26 = v19[5];
  v27 = v19[6];
  v28 = v19[7];
  v29 = v19[8];
  v30 = v19[9];
  v31 = v19[10];
  v32 = v19[11];
  v33 = v16;
  v17(a1, &v20);
  return 0;
}
