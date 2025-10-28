void __fastcall sub_39958(int a1, int a2)
{
  int *v2; // r0
  _DWORD *v3; // r4
  int v4; // r0

  v2 = *(int **)(a2 + 60);
  v3 = (_DWORD *)v2[7];
  if ( v3 )
  {
    sub_15FF4(v2);
    v4 = v3[12];
    if ( v4 > 0 )
      close(v4);
    free(v3);
  }
}
