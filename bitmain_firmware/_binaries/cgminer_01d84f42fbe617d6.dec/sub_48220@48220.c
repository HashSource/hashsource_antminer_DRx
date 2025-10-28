int __fastcall sub_48220(int *a1)
{
  char *v2; // r0
  int v3; // r10
  int v4; // r8
  char *v5; // r12
  int v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  int result; // r0
  int v11; // r1
  int v12; // r2

  v2 = (char *)realloc((void *)dword_C54D0, 28 * (dword_C54C8 + 1));
  v3 = dword_C54C8 + 1;
  v4 = (int)v2;
  v5 = &v2[28 * dword_C54C8];
  v6 = *a1;
  v7 = a1[1];
  v8 = a1[2];
  v9 = a1[3];
  a1 += 4;
  dword_C54D0 = v4;
  *(_DWORD *)v5 = v6;
  *((_DWORD *)v5 + 1) = v7;
  *((_DWORD *)v5 + 2) = v8;
  *((_DWORD *)v5 + 3) = v9;
  v5 += 16;
  result = *a1;
  v11 = a1[1];
  v12 = a1[2];
  dword_C54C8 = v3;
  *(_DWORD *)v5 = result;
  *((_DWORD *)v5 + 1) = v11;
  *((_DWORD *)v5 + 2) = v12;
  return result;
}
