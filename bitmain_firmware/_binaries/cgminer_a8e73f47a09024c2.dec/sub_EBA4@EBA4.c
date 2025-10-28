const char *__fastcall sub_EBA4(int a1, float *a2)
{
  const char *result; // r0

  result = (const char *)sub_5D388();
  if ( !result )
  {
    if ( *a2 < 125.0 )
    {
      return "Value out of range";
    }
    else if ( *a2 > 500.0 )
    {
      return "Value out of range";
    }
  }
  return result;
}
