void __fastcall sub_30474(unsigned int *a1, int a2, char *filename, int a4)
{
  const char *v6; // r4
  FILE *v7; // r0
  FILE *v8; // r6
  char *v9; // r6
  char *v10; // r8
  char v11[4096]; // [sp+8h] [bp-1000h] BYREF

  if ( !filename || (v6 = filename, !*filename) )
  {
    v6 = v11;
    sub_1A918(v11);
  }
  v7 = fopen(v6, "w");
  v8 = v7;
  if ( v7 )
  {
    sub_1A458(v7);
    fclose(v8);
    v9 = (char *)sub_2E618(v6, a4);
    sub_30214(a1, 44, 0, (int)v9, a4);
    if ( v6 != v9 )
      free(v9);
  }
  else
  {
    v10 = (char *)sub_2E618(v6, a4);
    sub_30214(a1, 43, 0, (int)v10, a4);
    if ( v6 != v10 )
      free(v10);
  }
}
