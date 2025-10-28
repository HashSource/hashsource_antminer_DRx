void __fastcall sub_F69C(const char *a1, int a2)
{
  char *v4; // r4
  _BYTE *v5; // r0
  char *v6; // r0
  char *v7; // r0
  int v8; // r0
  int v9; // r5

  v4 = (char *)calloc(0x3Cu, 1u);
  v5 = sub_E1F8(byte_1E44C);
  v6 = (char *)stpcpy(v4, v5);
  strcpy(v6, "ID=");
  v7 = (char *)stpcpy(v6 + 3, dest);
  qmemcpy(v7, ",result=", 8);
  v8 = stpcpy(v7 + 8, a2);
  v9 = v8 - (_DWORD)v4;
  sub_ECD0(a1, v8 - (_WORD)v4);
  dword_26F90 = off_1D43C(dword_26F98, dword_258BC, v4, v9);
  if ( dword_26F90 == -1 )
    perror("send");
  printf("send cgminer state :%s\n", v4);
  free(v4);
}
