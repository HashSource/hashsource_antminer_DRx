int __fastcall sub_13A2C(FILE *a1)
{
  int v1; // r0
  int result; // r0
  int *v3; // r0

  v1 = fileno(a1);
  result = fsync(v1);
  if ( result )
  {
    v3 = _errno_location();
    return sub_14CC8(*v3);
  }
  return result;
}
