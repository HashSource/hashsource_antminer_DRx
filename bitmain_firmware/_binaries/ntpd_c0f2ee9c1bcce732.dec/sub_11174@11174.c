bool __fastcall sub_11174(unsigned __int16 *a1)
{
  int v1; // r3

  v1 = *a1;
  if ( v1 != 2 )
    return v1 == 10 && !memcmp(a1 + 4, &in6addr_any, 0x10u);
  return !*((_DWORD *)a1 + 1);
}
