_DWORD *__fastcall hs_sha3_224_init(void *a1)
{
  _DWORD *result; // r0

  result = memset(a1, 0, 0x190u);
  result[99] = 144;
  return result;
}
