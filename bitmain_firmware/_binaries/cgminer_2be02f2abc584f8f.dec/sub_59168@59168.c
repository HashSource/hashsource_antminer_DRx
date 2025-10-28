int __fastcall sub_59168(int *a1)
{
  int v2; // r6
  int *v3; // r12
  int v4; // r0
  int v5; // r1
  int v6; // r2
  int v7; // r3
  int result; // r0
  int v9; // r1
  int v10; // r2

  dword_93CB0 = (int)realloc((void *)dword_93CB0, 28 * (dword_93CA8 + 1));
  v2 = dword_93CA8;
  v3 = (int *)(dword_93CB0 + 28 * dword_93CA8);
  v4 = *a1;
  v5 = a1[1];
  v6 = a1[2];
  v7 = a1[3];
  a1 += 4;
  *v3 = v4;
  v3[1] = v5;
  v3[2] = v6;
  v3[3] = v7;
  v3 += 4;
  result = *a1;
  v9 = a1[1];
  v10 = a1[2];
  *v3 = *a1;
  v3[1] = v9;
  v3[2] = v10;
  dword_93CA8 = v2 + 1;
  return result;
}
