_DWORD *__fastcall new_iterator_c_map(int a1)
{
  _DWORD *result; // r0

  result = malloc(0x18u);
  result[3] = a1;
  *result = 858116;
  result[2] = 857992;
  result[1] = 858020;
  result[4] = 0;
  result[5] = 0;
  return result;
}
