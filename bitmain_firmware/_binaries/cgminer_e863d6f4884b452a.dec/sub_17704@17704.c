const char *__fastcall sub_17704(int a1, float *a2)
{
  const char *result; // r0

  result = (const char *)sub_48B7C();
  if ( !result )
  {
    if ( *a2 >= 125.0 )
    {
      if ( *a2 > 500.0 )
        return "Value out of range";
    }
    else
    {
      return "Value out of range";
    }
  }
  return result;
}
