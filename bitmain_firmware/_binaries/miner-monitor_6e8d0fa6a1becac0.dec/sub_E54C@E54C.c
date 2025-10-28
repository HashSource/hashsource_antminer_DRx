int __fastcall sub_E54C(int a1, int a2, int a3, void *dest)
{
  if ( a3 == a2 )
    return 0;
  memcpy(dest, (const void *)(a1 + 4111 * a2), 0x100Fu);
  return 1;
}
