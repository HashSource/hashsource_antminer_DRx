int *__fastcall sub_9C40(struct sockaddr *addr, const void *a2, size_t a3)
{
  int sa_family; // r3
  int v5; // r0
  int v6; // r0
  socklen_t addr_len; // r3
  int *result; // r0
  bool v9; // zf
  const char *v10; // r0

  sa_family = addr->sa_family;
  if ( sa_family == dword_24068 )
  {
    v5 = 0;
  }
  else
  {
    if ( sa_family != dword_2406C )
      goto LABEL_4;
    v5 = 1;
  }
  v6 = dword_24060[v5];
  if ( v6 == -1 )
  {
LABEL_4:
    sub_E15C(3, "cannot find family compatible socket to send ntp packet");
    exit(1);
  }
  if ( sa_family == 2 )
    addr_len = 16;
  else
    addr_len = 28;
  result = (int *)sendto(v6, a2, a3, 0, addr, addr_len);
  if ( result == (int *)-1 )
  {
    result = _errno_location();
    v9 = *result == 105;
    if ( *result != 105 )
      v9 = *result == 11;
    if ( !v9 )
    {
      v10 = (const char *)sub_ED9C(addr);
      return (int *)sub_E15C(3, "sendto(%s): %m", v10);
    }
  }
  return result;
}
