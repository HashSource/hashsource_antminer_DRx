int __fastcall sub_FE28(const char *a1, int a2, const char *a3, void *a4)
{
  FILE *v8; // r7
  const char *v9; // r0

  v8 = (FILE *)stderr;
  v9 = (const char *)sub_F118((_DWORD *)dword_2400C, 1, 110, (int)"fatal error");
  fprintf(v8, "%s:%d: %s: ", a1, a2, v9);
  vfprintf((FILE *)stderr, a3, a4);
  fputc(10, (FILE *)stderr);
  return fflush((FILE *)stderr);
}
