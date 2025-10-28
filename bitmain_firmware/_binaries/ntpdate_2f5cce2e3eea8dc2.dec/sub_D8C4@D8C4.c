int __fastcall sub_D8C4(const char *a1, int a2)
{
  fputs(off_212F0, (FILE *)stderr);
  fputs(a1, (FILE *)stderr);
  IO_putc(a2, (_IO_FILE *)stderr);
  return IO_putc(10, (_IO_FILE *)stderr);
}
