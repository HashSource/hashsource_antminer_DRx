int __fastcall sub_45BE8(int a1, int *a2)
{
  int *v2; // r12
  int *v4; // r6
  int v5; // r5
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3

  v2 = a2 + 16;
  v4 = a2;
  v5 = a1 + 136;
  do
  {
    v5 += 16;
    v6 = *v4;
    v7 = v4[1];
    v8 = v4[2];
    v9 = v4[3];
    v4 += 4;
    *(_DWORD *)(v5 - 16) = v6;
    *(_DWORD *)(v5 - 12) = v7;
    *(_DWORD *)(v5 - 8) = v8;
    *(_DWORD *)(v5 - 4) = v9;
  }
  while ( v4 != v2 );
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
