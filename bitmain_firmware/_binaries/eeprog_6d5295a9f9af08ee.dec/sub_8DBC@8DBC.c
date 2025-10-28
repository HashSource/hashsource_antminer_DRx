int __fastcall sub_8DBC(int result, const char *a2, int a3)
{
  if ( result )
  {
    fprintf((FILE *)stderr, "Error at line %d: %s\n", a3, a2);
    exit(1);
  }
  return result;
}
