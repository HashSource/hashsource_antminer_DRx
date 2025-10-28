int __fastcall cgtimer_sub(int *a1, int *a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r12
  int result; // r0
  int v6; // r1
  int v7; // r3
  bool v8; // nf
  int v9; // r1
  int v10; // r3

  v3 = a1[1];
  v4 = a2[1];
  result = *a1;
  v6 = *a2;
  v7 = v3 - v4;
  v8 = v7 < 0;
  a3[1] = v7;
  v9 = result - v6;
  v10 = v7 + (v7 < 0 ? 0xF4000 : 0);
  *a3 = v9;
  if ( v8 )
  {
    *a3 = v9 - 1;
    a3[1] = v10 + 576;
  }
  return result;
}
