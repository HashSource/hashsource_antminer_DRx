int sub_BFF0()
{
  int result; // r0

  if ( dword_C9D6C )
    fclose((FILE *)dword_C9D6C);
  dword_C9D6C = 0;
  result = unlink(name);
  if ( result )
    return sub_4FE78(4, "Unable to remove temporary resolver file %s, %m", name);
  return result;
}
