const char *__fastcall sub_11D08(int a1, float *a2)
{
  const char *result; // r0

  result = (const char *)sub_47A58();
  if ( !result && (*a2 < 100.0 || *a2 > 250.0) )
    return "Value out of range";
  return result;
}
