const char *__fastcall sub_17A88(int a1)
{
  const char *result; // r0

  dword_6DB74 = 2;
  result = (const char *)sub_48C1C(a1, &dword_73000);
  if ( !result && (unsigned int)dword_73000 > 0x270F )
    return "Value out of range";
  return result;
}
