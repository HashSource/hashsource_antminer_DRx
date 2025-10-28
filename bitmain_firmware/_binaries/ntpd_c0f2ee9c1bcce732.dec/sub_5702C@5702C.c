int __fastcall sub_5702C(FILE *a1)
{
  int result; // r0
  int *v2; // r0

  result = fflush(a1);
  if ( result )
  {
    v2 = _errno_location();
    return sub_598C0(*v2);
  }
  return result;
}
