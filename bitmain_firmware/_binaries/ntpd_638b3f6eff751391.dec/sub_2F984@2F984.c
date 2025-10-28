int *__fastcall sub_2F984(int a1, int a2)
{
  int *result; // r0

  result = *(int **)(a2 + 60);
  if ( result[5] != -1 )
    return sub_15FF4(result);
  return result;
}
