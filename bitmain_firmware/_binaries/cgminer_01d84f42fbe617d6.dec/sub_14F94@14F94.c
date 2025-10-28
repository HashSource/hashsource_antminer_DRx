const char *__fastcall sub_14F94(int a1, _DWORD *a2, int a3, int a4)
{
  const char *result; // r0

  result = (const char *)sub_47B60();
  if ( !result && (*a2 < a3 || *a2 > a4) )
    return "Value out of range";
  return result;
}
