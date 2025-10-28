void __fastcall sub_3E4D8(int a1, int a2)
{
  int *v2; // r0
  void *v3; // r4

  v2 = *(int **)(a2 + 60);
  *(_DWORD *)(a2 + 528) = sub_3E4B8;
  v3 = (void *)v2[7];
  if ( v2[5] != -1 )
    sub_15FF4(v2);
  if ( v3 )
    free(v3);
}
