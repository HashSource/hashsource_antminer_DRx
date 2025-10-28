int __fastcall sub_16160(int result, int a2)
{
  const char *v3; // r2

  v3 = "Deleting";
  if ( result )
    v3 = (const char *)result;
  if ( dword_CA664 )
  {
    fprintf((FILE *)stderr, "%s ", v3);
    sub_16120((FILE *)stderr, a2);
    return fputc(10, (FILE *)stderr);
  }
  return result;
}
