const char *__fastcall sub_17920(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_48C1C();
  if ( !result && (unsigned int)(*a2 - 42) > 0x14 )
    return "Value out of range";
  return result;
}
