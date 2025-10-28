const char *__fastcall sub_118E8(int a1, _DWORD *a2, int a3, int a4)
{
  const char *result; // r0

  result = (const char *)sub_58B70();
  if ( !result )
  {
    if ( *a2 < a3 )
    {
      return "Value out of range";
    }
    else if ( *a2 > a4 )
    {
      return "Value out of range";
    }
  }
  return result;
}
