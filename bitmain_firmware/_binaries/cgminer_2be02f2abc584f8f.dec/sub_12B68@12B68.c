unsigned int *__fastcall sub_12B68(unsigned int *result)
{
  int v1; // r12
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r3

  v1 = (unsigned __int16)*result;
  v2 = HIWORD(*result);
  v3 = v1 + 1;
  if ( (v1 + 1) % 0xBB8u > 0x77 )
    v3 = v1 + 2881;
  if ( v3 > 0x8CA0 )
  {
    ++v2;
    v3 = 0;
  }
  v4 = v3 | (v2 << 16);
  if ( v4 > 0x650000 )
    v4 = 0;
  *result = v4;
  return result;
}
