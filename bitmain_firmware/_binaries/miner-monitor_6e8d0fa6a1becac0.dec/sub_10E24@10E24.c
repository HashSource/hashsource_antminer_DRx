void __fastcall sub_10E24(int a1, int a2)
{
  int v2; // r0
  void **v3; // r4
  const char *v4; // r1
  const char *v5; // r2

  v2 = sub_10DDC(a1, a2);
  v3 = *(void ***)(v2 + 4);
  if ( v3 )
  {
    v4 = (char *)*v3 + 3;
    v5 = (char *)*v3 + 4104;
    *(_DWORD *)(v2 + 4) = v3[1];
    printf("delete one cmd:%s,nonce:%s.\n", v4, v5);
    free(*v3);
    free(v3);
    --dword_1D440;
  }
  else
  {
    puts("there is no cmd for this response.");
  }
}
