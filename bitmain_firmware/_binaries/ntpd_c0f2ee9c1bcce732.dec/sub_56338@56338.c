bool __fastcall sub_56338(int *a1, _DWORD *a2)
{
  bool v2; // zf
  int v3; // r2
  int v6; // r3

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  v3 = !v2;
  if ( v2 )
    off_7C9FC("./../lib/isc/netaddr.c", 37, v3, "a != ((void *)0) && b != ((void *)0)");
  v6 = *a1;
  if ( *a1 != *a2 || a1[5] != a2[5] )
    return 0;
  if ( v6 != 2 )
    return v6 == 10 && !memcmp(a1 + 1, a2 + 1, 0x10u);
  return a1[1] == a2[1];
}
