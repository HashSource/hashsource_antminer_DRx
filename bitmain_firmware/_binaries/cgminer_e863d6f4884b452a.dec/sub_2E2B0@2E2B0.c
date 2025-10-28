void *__fastcall sub_2E2B0(unsigned __int8 *a1, char *a2, size_t n)
{
  int v4; // r0
  size_t v7; // r6
  unsigned __int8 *v8; // r0
  void *result; // r0
  unsigned int v10; // r3
  size_t v11; // r5
  unsigned __int8 *v12; // r6
  int v13; // r3

  v4 = *((_DWORD *)a1 + 1);
  v7 = 64 - v4;
  v8 = &a1[v4 + 8];
  if ( v7 >= n )
    v7 = n;
  result = memcpy(v8, a2, v7);
  v10 = *((_DWORD *)a1 + 1) + n;
  if ( v10 > 0x3F )
  {
    v11 = n - v7;
    v12 = (unsigned __int8 *)&a2[v7];
    sub_2E130((int)a1, a1 + 8, 1);
    sub_2E130((int)a1, v12, v11 >> 6);
    result = memcpy(a1 + 8, &v12[v11 & 0xFFFFFFC0], v11 & 0x3F);
    v13 = *(_DWORD *)a1;
    *((_DWORD *)a1 + 1) = v11 & 0x3F;
    *(_DWORD *)a1 = v13 + (((v11 >> 6) + 1) << 6);
  }
  else
  {
    *((_DWORD *)a1 + 1) = v10;
  }
  return result;
}
