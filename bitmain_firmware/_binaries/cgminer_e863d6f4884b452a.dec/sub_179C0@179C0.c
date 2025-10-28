const char *__fastcall sub_179C0(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_48C1C();
  if ( !result && *a2 > 0xFFu )
    return "Value out of range";
  return result;
}
