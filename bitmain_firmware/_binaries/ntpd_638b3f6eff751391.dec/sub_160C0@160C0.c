int __fastcall sub_160C0(__int16 *a1, unsigned int a2)
{
  int v4; // t1

  fwrite("Stack now", 1u, 9u, (FILE *)stderr);
  while ( a2 >= (unsigned int)a1 )
  {
    v4 = *a1++;
    fprintf((FILE *)stderr, " %d", v4);
  }
  return fputc(10, (FILE *)stderr);
}
