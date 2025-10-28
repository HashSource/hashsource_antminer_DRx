int __fastcall sub_D986C(int a1, int *a2)
{
  int *v3; // r4
  int v4; // lr
  int *v5; // r6
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3

  v3 = a2;
  v4 = a1 + 136;
  v5 = a2 + 16;
  do
  {
    v4 += 16;
    v6 = *v3;
    v7 = v3[1];
    v8 = v3[2];
    v9 = v3[3];
    v3 += 4;
    *(_DWORD *)(v4 - 16) = v6;
    *(_DWORD *)(v4 - 12) = v7;
    *(_DWORD *)(v4 - 8) = v8;
    *(_DWORD *)(v4 - 4) = v9;
  }
  while ( v3 != v5 );
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 200) = 0;
  *(_DWORD *)(a1 + 204) = 0;
  *(_DWORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 216) = 0;
  *(_DWORD *)(a1 + 220) = 0;
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  return 0;
}
