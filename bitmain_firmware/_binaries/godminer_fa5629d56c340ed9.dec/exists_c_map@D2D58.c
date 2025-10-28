int *__fastcall exists_c_map(int *result, int a2)
{
  if ( result )
    return (int *)(find_c_rb(*result, a2) != 0);
  return result;
}
