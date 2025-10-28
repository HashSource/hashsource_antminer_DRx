bool __fastcall sub_563EC(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  bool v3; // zf
  int v4; // r3
  int v6; // r3
  int v8; // r2
  unsigned __int8 *v9; // r5
  unsigned __int8 *v10; // r4
  unsigned int v11; // r3
  unsigned int v12; // r10

  v3 = a2 == 0;
  if ( a2 )
    v3 = a1 == 0;
  v4 = !v3;
  if ( v3 )
    off_7C9FC("./../lib/isc/netaddr.c", 77, v4, "a != ((void *)0) && b != ((void *)0)");
  v6 = *a1;
  if ( *a1 != *a2 )
    return 0;
  v8 = a2[5];
  if ( a1[5] != v8 )
  {
    if ( v8 )
      return 0;
  }
  if ( v6 == 2 )
  {
    v9 = (unsigned __int8 *)(a1 + 1);
    v10 = (unsigned __int8 *)(a2 + 1);
    v11 = 32;
    v12 = 4;
  }
  else
  {
    if ( v6 != 10 )
      return 0;
    v9 = (unsigned __int8 *)(a1 + 1);
    v10 = (unsigned __int8 *)(a2 + 1);
    v11 = 128;
    v12 = 16;
  }
  if ( v11 < a3 )
    a3 = v11;
  if ( a3 >> 3 && memcmp(v9, v10, a3 >> 3) )
    return 0;
  if ( (a3 & 7) == 0 )
    return 1;
  if ( v12 <= a3 >> 3 )
    off_7C9FC("./../lib/isc/netaddr.c", 117, 2, "nbytes < ipabytes");
  return ((v10[a3 >> 3] ^ v9[a3 >> 3]) & (255 << (8 - (a3 & 7)))) == 0;
}
