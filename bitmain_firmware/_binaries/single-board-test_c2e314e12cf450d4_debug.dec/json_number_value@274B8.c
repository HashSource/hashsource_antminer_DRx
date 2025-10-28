// local variable allocation has failed, the output may be wrong!
double __cdecl json_number_value(const json_t *json)
{
  double result; // r0

  if ( json && *(_DWORD *)json == 3 )
  {
    *(double *)&json = (double)json_integer_value((int)json);
  }
  else if ( json && *(_DWORD *)json == 4 )
  {
    *(double *)&json = json_real_value(json);
  }
  LODWORD(result) = json;
  return result;
}
