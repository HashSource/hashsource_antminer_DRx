int __fastcall sub_138FC(FILE *a1)
{
  int result; // r0
  int *v2; // r0

  result = fclose(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_14CC8(*v2);
  }
  return result;
}
