const char *__fastcall sub_EB50(int a1, float *a2)
{
  const char *result; // r0

  result = (const char *)sub_5D388();
  if ( !result )
  {
    if ( *a2 < 100.0 )
    {
      return "Value out of range";
    }
    else if ( *a2 > 250.0 )
    {
      return "Value out of range";
    }
  }
  return result;
}
