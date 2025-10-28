_DWORD *__fastcall hs_sha3_256_init(void *a1)
{
  _DWORD *result; // r0

  result = memset(a1, 0, 0x190u);
  result[99] = 136;
  return result;
}
