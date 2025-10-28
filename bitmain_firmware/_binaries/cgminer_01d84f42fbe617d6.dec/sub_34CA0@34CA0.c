void __fastcall sub_34CA0(unsigned int *a1, int a2, char *a3, int a4)
{
  char *v4; // r4
  FILE *v7; // r0
  FILE *v8; // r5
  char *v9; // r5
  char *v10; // r8
  char v11[4096]; // [sp+8h] [bp-1000h] BYREF

  v4 = a3;
  if ( !a3 || !*a3 )
  {
    v4 = v11;
    sub_15C88(v11);
  }
  v7 = fopen(v4, "w");
  v8 = v7;
  if ( v7 )
  {
    sub_1569C(v7);
    fclose(v8);
    v9 = sub_30440(v4, a4);
    sub_32F3C(a1, 44, 0, (int)v9, a4);
    if ( v9 != v4 )
      free(v9);
  }
  else
  {
    v10 = sub_30440(v4, a4);
    sub_32F3C(a1, 43, 0, (int)v10, a4);
    if ( v10 != v4 )
      free(v10);
  }
}
