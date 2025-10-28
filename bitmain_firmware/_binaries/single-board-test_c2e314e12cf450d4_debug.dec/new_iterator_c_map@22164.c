_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0

  result = malloc(0x18u);
  *result = get_next_c_map;
  result[2] = get_value_c_map;
  result[1] = replace_value_c_map;
  result[3] = a1;
  result[4] = 0;
  result[5] = 0;
  return result;
}
