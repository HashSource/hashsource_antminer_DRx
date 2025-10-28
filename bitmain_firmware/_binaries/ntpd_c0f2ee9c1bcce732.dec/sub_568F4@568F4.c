_DWORD *__fastcall sub_568F4(_DWORD *result, int a2)
{
  if ( *result != 10 )
    off_7C9FC("./../lib/isc/netaddr.c", 325, 0, "netaddr->family == 10");
  result[5] = a2;
  return result;
}
