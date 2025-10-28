int __fastcall sub_E8A54(const void **a1, _DWORD *a2, void *dest, size_t n)
{
  size_t v8; // r3

  memcpy(dest, *a1, n);
  v8 = *a2 - n;
  *a1 = (char *)*a1 + n;
  *a2 = v8;
  return 1;
}
