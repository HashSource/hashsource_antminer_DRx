int __fastcall sub_576DC(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  int v4; // r3
  int v5; // r0
  double *v6; // r6
  int v7; // r0
  _DWORD *v8; // r5
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r3
  void (__fastcall *v21)(_DWORD *, _DWORD *); // r2
  _DWORD v23[22]; // [sp+4h] [bp-60h] BYREF
  char v24; // [sp+5Ch] [bp-8h]

  v3 = (_DWORD *)a2[283];
  v4 = dword_196898 | (a1[62] << 28);
  v5 = a2[1];
  v23[0] = *a2;
  a1[127] = 1;
  v23[1] = v5;
  v23[20] = 0;
  v23[21] = v4;
  if ( v3 )
  {
    v6 = (double *)(a2 + 268);
    v8 = a2 + 2;
    v7 = a2[2];
    v9 = a2[3];
    v10 = v8[2];
    v11 = v8[3];
    v23[4] = v7;
    v23[5] = v9;
    v23[6] = v10;
    v23[7] = v11;
    v12 = v8[5];
    v13 = v8[6];
    v14 = v8[7];
    v23[8] = v8[4];
    v23[9] = v12;
    v23[10] = v13;
    v23[11] = v14;
    v15 = v3[1];
    v16 = v3[2];
    v17 = v3[3];
    v23[12] = *v3;
    v23[13] = v15;
    v23[14] = v16;
    v23[15] = v17;
    v18 = v3[5];
    v19 = v3[6];
    v20 = v3[7];
    v23[16] = v3[4];
    v23[17] = v18;
    v23[18] = v19;
    v23[19] = v20;
    v21 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[9];
    v24 = (unsigned int)*(v6 - 1);
    v21(a1, v23);
  }
  else
  {
    printf(aInvalidPointer, "work->private");
  }
  return 0;
}
