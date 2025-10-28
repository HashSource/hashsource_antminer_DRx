void *__fastcall sub_121A8(int a1, unsigned int a2)
{
  int v3; // r5
  void *result; // r0

  v3 = a1 + 68;
  *(_DWORD *)(a1 + 68) = bswap32(a2);
  result = *(void **)(a1 + 364);
  if ( result )
  {
    free(result);
    result = (void *)sub_2D0B4(v3, 4);
    *(_DWORD *)(a1 + 364) = result;
  }
  return result;
}
