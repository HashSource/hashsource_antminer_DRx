_DWORD *dhash_content_eth_2280()
{
  _DWORD *result; // r0
  int v1; // r3

  result = calloc(1u, 0x18u);
  LOWORD(v1) = 23612;
  HIWORD(v1) = (unsigned int)&unk_136284 >> 16;
  *result = 321616;
  result[1] = 321716;
  result[2] = 322084;
  result[3] = 0;
  result[4] = v1;
  result[5] = 60;
  return result;
}
