int __fastcall sub_558B0(int result, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  _DWORD *v4; // r12
  _DWORD *v5; // r1
  int v6; // r6
  int v7; // r5
  int v8; // r4
  int v9; // r4
  int v10; // r12
  int v11; // r1
  int v12; // r4
  int v13; // r12
  int v14; // r1

  v3 = a2;
  v4 = (_DWORD *)(result + 136);
  v5 = a2 + 16;
  do
  {
    v6 = v3[1];
    v7 = v3[2];
    v8 = v3[3];
    *v4 = *v3;
    v4[1] = v6;
    v4[2] = v7;
    v4[3] = v8;
    v3 += 4;
    v4 += 4;
  }
  while ( v3 != v5 );
  v9 = a3[1];
  v10 = a3[2];
  v11 = a3[3];
  *(_DWORD *)(result + 200) = *a3;
  *(_DWORD *)(result + 204) = v9;
  *(_DWORD *)(result + 208) = v10;
  *(_DWORD *)(result + 212) = v11;
  v12 = a3[5];
  v13 = a3[6];
  v14 = a3[7];
  *(_DWORD *)(result + 216) = a3[4];
  *(_DWORD *)(result + 220) = v12;
  *(_DWORD *)(result + 224) = v13;
  *(_DWORD *)(result + 228) = v14;
  *(_QWORD *)(result + 240) = 0;
  *(_QWORD *)(result + 232) = 0;
  *(_DWORD *)(result + 128) = 0;
  return result;
}
