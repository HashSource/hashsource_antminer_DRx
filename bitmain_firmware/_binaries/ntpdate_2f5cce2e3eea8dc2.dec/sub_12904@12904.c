unsigned __int8 *__fastcall sub_12904(unsigned __int8 *result, int a2)
{
  do
  {
    --a2;
    *(_DWORD *)result = *result | (result[1] << 8) | ((result[2] | (result[3] << 8)) << 16);
    result += 4;
  }
  while ( a2 );
  return result;
}
