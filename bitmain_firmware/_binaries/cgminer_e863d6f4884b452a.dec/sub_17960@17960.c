const char *__fastcall sub_17960(int a1, _DWORD *a2)
{
  const char *result; // r0

  result = (const char *)sub_48C1C();
  if ( !result && (unsigned int)(*a2 - 32) > 0x1F )
    return "Value out of range";
  return result;
}
