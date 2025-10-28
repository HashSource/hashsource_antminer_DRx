void __fastcall sub_3CDE4(int a1, int a2)
{
  int *v2; // r0
  void *v3; // r4

  v2 = *(int **)(a2 + 60);
  v3 = (void *)v2[7];
  sub_15FF4(v2);
  free(v3);
}
