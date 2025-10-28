int __fastcall json_equal(json_t *a1, json_t *a2)
{
  if ( !a1 || !a2 )
    return 0;
  if ( *(_DWORD *)a1 != *(_DWORD *)a2 )
    return 0;
  if ( a1 == a2 )
    return 1;
  switch ( *(_DWORD *)a1 )
  {
    case 0:
      return json_object_equal(a1, a2);
    case 1:
      return json_array_equal(a1, a2);
    case 2:
      return json_string_equal(a1, a2);
    case 3:
      return json_integer_equal(a1, a2);
    case 4:
      return json_real_equal(a1, a2);
  }
  return 0;
}
