int __fastcall sub_E62C(_DWORD *a1, void *dest)
{
  int v2; // r3

  v2 = a1[1];
  if ( v2 == a1[2] )
    return 0;
  memcpy(dest, (const void *)(*a1 + 4111 * v2), 0x100Fu);
  a1[1] = (a1[1] + 1) % 9;
  return 1;
}
