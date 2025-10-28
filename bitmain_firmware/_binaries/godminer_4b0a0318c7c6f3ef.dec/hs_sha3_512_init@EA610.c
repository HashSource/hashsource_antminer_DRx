_DWORD *__fastcall hs_sha3_512_init(void *a1)
{
  _DWORD *result; // r0

  result = memset(a1, 0, 0x190u);
  result[99] = 72;
  return result;
}
