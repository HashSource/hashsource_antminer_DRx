char *__fastcall hs_sha3_final(int *a1, void *a2)
{
  char *result; // r0
  unsigned int v5; // r6
  int *v6; // r5

  result = (char *)a1[98];
  v5 = a1[99];
  if ( (int)result >= 0 )
  {
    v6 = a1 + 50;
    memset(&result[(_DWORD)(a1 + 50)], 0, v5 - (_DWORD)result);
    *((_BYTE *)v6 + a1[98]) |= 6u;
    *((_BYTE *)v6 + v5 - 1) = ~((unsigned int)~(*((unsigned __int8 *)v6 + v5 - 1) << 25) >> 25);
    result = (char *)sub_E9B88(a1, (int)(a1 + 50), v5);
    a1[98] = 0x80000000;
  }
  if ( a2 )
    return (char *)memcpy(a2, a1, 100 - (v5 >> 1));
  return result;
}
