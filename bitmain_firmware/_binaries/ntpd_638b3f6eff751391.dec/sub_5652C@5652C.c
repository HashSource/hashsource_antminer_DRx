int __fastcall sub_5652C(int *a1, int a2)
{
  int v4; // r0
  size_t v6; // r6
  size_t v7; // r4
  int v8; // r3
  int v9; // r0
  char s[12]; // [sp+4h] [bp-3Ch] BYREF
  char buf[48]; // [sp+10h] [bp-30h] BYREF

  if ( !a1 )
    off_7C9FC("./../lib/isc/netaddr.c", 137, 0, "netaddr != ((void *)0)");
  v4 = *a1;
  if ( *a1 != 2 && v4 != 10 || !inet_ntop(v4, a1 + 1, buf, 0x2Eu) )
    return 25;
  v6 = strlen(buf);
  if ( v6 > 0x2D )
    off_7C9FC("./../lib/isc/netaddr.c", 164, 2, "alen < sizeof(abuf)");
  if ( *a1 != 10 )
  {
    v7 = 0;
    goto LABEL_10;
  }
  v8 = a1[5];
  if ( v8 )
  {
    v9 = snprintf(s, 0xCu, "%%%u", v8);
    if ( v9 >= 0 )
    {
      v7 = v9;
      if ( (unsigned int)v9 > 0xB )
        off_7C9FC("./../lib/isc/netaddr.c", 171, 2, "(unsigned int)zlen < sizeof(zbuf)");
      goto LABEL_10;
    }
    return 25;
  }
  v7 = 0;
LABEL_10:
  if ( v7 + v6 > *(_DWORD *)(a2 + 8) - *(_DWORD *)(a2 + 12) )
    return 19;
  sub_58FD4(a2, buf, v6);
  sub_58FD4(a2, s, v7);
  return 0;
}
