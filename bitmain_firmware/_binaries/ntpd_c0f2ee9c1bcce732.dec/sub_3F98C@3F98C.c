void __fastcall sub_3F98C(int a1, int a2)
{
  int *v2; // r0
  void *v3; // r4

  v2 = *(int **)(a2 + 60);
  v3 = (void *)v2[7];
  if ( v2[5] != -1 )
    sub_15FF4(v2);
  if ( v3 )
    free(v3);
}
