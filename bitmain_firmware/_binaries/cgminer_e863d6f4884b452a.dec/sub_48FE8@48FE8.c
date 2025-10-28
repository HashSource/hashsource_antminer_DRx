int __fastcall sub_48FE8(int *a1)
{
  char *v2; // r4
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r12
  char *v8; // r4
  int result; // r0
  int v10; // r1
  int v11; // r2

  v2 = (char *)realloc((void *)dword_A71F4, 28 * (dword_A71FC + 1));
  v3 = *a1;
  v4 = a1[1];
  v5 = a1[2];
  v6 = a1[3];
  a1 += 4;
  dword_A71F4 = (int)v2;
  v7 = 7 * dword_A71FC++;
  v8 = &v2[4 * v7];
  *(_DWORD *)v8 = v3;
  *((_DWORD *)v8 + 1) = v4;
  *((_DWORD *)v8 + 2) = v5;
  *((_DWORD *)v8 + 3) = v6;
  v8 += 16;
  result = *a1;
  v10 = a1[1];
  v11 = a1[2];
  *(_DWORD *)v8 = *a1;
  *((_DWORD *)v8 + 1) = v10;
  *((_DWORD *)v8 + 2) = v11;
  return result;
}
