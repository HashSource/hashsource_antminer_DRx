int __fastcall sub_15FC4(int *a1)
{
  int v2; // r0
  int v3; // r12

  v2 = a1[5];
  v3 = dword_7CF44;
  dword_7CF44 = (int)a1;
  *a1 = v3;
  sub_12224(v2, 1);
  return 1;
}
