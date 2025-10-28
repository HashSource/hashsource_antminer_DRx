void __fastcall __noreturn sub_EF08(const char *a1, int a2, unsigned int a3, char **a4)
{
  const char *v4; // r8
  const char *v7; // r10
  FILE *v8; // r5
  const char *v9; // r0

  v4 = (const char *)a4;
  if ( a3 <= 3 )
    a4 = off_176AC;
  if ( a3 > 3 )
    v7 = 0;
  else
    v7 = a4[a3];
  v8 = (FILE *)stderr;
  v9 = (const char *)sub_F118(dword_2400C, 1, 101, "failed");
  fprintf(v8, "%s:%d: %s(%s) %s.\n", a1, a2, v7, v4, v9);
  fflush((FILE *)stderr);
  abort();
}
