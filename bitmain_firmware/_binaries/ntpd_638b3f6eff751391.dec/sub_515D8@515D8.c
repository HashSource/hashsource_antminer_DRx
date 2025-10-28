int __fastcall sub_515D8(const char *a1, int a2, const char *a3, void *a4)
{
  fprintf((FILE *)stderr, "%s:%d: ", a1, a2);
  vfprintf((FILE *)stderr, a3, a4);
  fputc(10, (FILE *)stderr);
  return fflush((FILE *)stderr);
}
