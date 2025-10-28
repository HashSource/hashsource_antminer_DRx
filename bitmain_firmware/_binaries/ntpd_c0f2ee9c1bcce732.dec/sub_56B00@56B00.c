void *__fastcall sub_56B00(_DWORD *a1, _DWORD *a2)
{
  void *result; // r0

  if ( *a2 != 10 )
    off_7C9FC("./../lib/isc/netaddr.c", 429, 0, "s->family == 10");
  if ( a2[1] || a2[2] || a2[3] != -65536 )
    off_7C9FC(
      "./../lib/isc/netaddr.c",
      430,
      0,
      "(__extension__ ({ const struct in6_addr *__a = (const struct in6_addr *) (&src->type.in6); __a->__in6_u.__u6_addr3"
      "2[0] == 0 && __a->__in6_u.__u6_addr32[1] == 0 && __a->__in6_u.__u6_addr32[2] == __bswap_32 (0xffff); }))");
  result = memset(a1, 0, 0x18u);
  *a1 = 2;
  a1[1] = a2[4];
  return result;
}
