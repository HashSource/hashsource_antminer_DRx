_DWORD *__fastcall list_init(_DWORD *result)
{
  result[1] = result;
  *result = result;
  return result;
}
