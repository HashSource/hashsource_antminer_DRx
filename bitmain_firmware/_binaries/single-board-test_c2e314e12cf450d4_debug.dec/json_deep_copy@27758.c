json_t *__fastcall json_deep_copy(const json_t *a1)
{
  if ( !a1 )
    return 0;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      return json_object_deep_copy(a1);
    case 1:
      return json_array_deep_copy(a1);
    case 2:
      return (json_t *)json_string_copy(a1);
    case 3:
      return json_integer_copy(a1);
    case 4:
      return json_real_copy(a1);
    case 5:
    case 6:
    case 7:
      return a1;
  }
  return 0;
}
