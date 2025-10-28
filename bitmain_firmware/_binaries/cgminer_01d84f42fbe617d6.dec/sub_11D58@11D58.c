const char *__fastcall sub_11D58(int a1, float *a2)
{
  const char *result; // r0

  result = (const char *)sub_47A58();
  if ( !result && (*a2 < 125.0 || *a2 > 500.0) )
    return "Value out of range";
  return result;
}
