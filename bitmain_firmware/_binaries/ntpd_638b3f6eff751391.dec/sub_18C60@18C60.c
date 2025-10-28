int *sub_18C60()
{
  int *result; // r0
  int *v1; // r4
  int v2; // r5

  result = _errno_location();
  v1 = result;
  v2 = *result;
  if ( dword_7CF4C > 0 )
    result = (int *)sub_4FE78(7, "debug lowered to %d", --dword_7CF4C);
  *v1 = v2;
  return result;
}
