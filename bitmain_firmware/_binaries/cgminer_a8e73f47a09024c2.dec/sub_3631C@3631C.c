void *__fastcall sub_3631C(_DWORD *a1, const void *a2, size_t n)
{
  int v6; // r0
  size_t v7; // r6
  void *result; // r0
  unsigned int v9; // r3
  size_t v10; // r5
  size_t v11; // r8
  int v12; // r6
  size_t v13; // r5

  v6 = a1[1];
  v7 = 64 - v6;
  if ( n < 64 - v6 )
    v7 = n;
  result = memcpy((char *)a1 + v6 + 8, a2, v7);
  v9 = n + a1[1];
  if ( v9 > 0x3F )
  {
    v10 = n - v7;
    v11 = v10 >> 6;
    v12 = (int)a2 + v7;
    sub_360C8((int)a1, (int)(a1 + 2), 1);
    sub_360C8((int)a1, v12, v10 >> 6);
    v13 = v10 & 0x3F;
    result = memcpy(a1 + 2, (const void *)(v12 + (v11 << 6)), v13);
    a1[1] = v13;
    *a1 += (v11 + 1) << 6;
  }
  else
  {
    a1[1] = v9;
  }
  return result;
}
