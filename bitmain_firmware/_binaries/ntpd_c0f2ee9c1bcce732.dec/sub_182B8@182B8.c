const char *__fastcall sub_182B8(int a1)
{
  unsigned int v1; // r0
  const char *result; // r0

  v1 = a1 - 258;
  if ( v1 > 0xA2 )
    return "(keyword not found)";
  result = (const char *)*(&off_61628 + v1);
  if ( !result )
    return "(keyword not found)";
  return result;
}
