const char *__fastcall sub_176B8(int a1, float *a2)
{
  const char *result; // r0

  result = (const char *)sub_48B7C();
  if ( !result )
  {
    if ( *a2 >= 100.0 )
    {
      if ( *a2 > 250.0 )
        return "Value out of range";
    }
    else
    {
      return "Value out of range";
    }
  }
  return result;
}
