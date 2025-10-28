const char *__fastcall sub_17940(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_48C1C();
  if ( !result && (unsigned int)(*a2 - 22) > 0x21 )
    return "Value out of range";
  return result;
}
