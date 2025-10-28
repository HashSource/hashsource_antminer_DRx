void *__fastcall sub_580A4(int a1, void *dest, unsigned int a3)
{
  void *result; // r0

  if ( *(_DWORD *)(a1 + 8) > a3 )
  {
    off_7C9FC("./../lib/isc/buffer.c", 63, 0, "b->length <= length");
    if ( dest )
      goto LABEL_3;
LABEL_5:
    off_7C9FC("./../lib/isc/buffer.c", 64, dest, "base != ((void *)0)");
    goto LABEL_3;
  }
  if ( !dest )
    goto LABEL_5;
LABEL_3:
  result = memmove(dest, *(const void **)(a1 + 4), *(_DWORD *)(a1 + 8));
  *(_DWORD *)(a1 + 4) = dest;
  *(_DWORD *)(a1 + 8) = a3;
  return result;
}
