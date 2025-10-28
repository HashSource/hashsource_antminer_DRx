void *__fastcall sub_56894(_DWORD *a1, int *a2)
{
  void *result; // r0
  int v5; // r3

  result = memset(a1, 0, 0x18u);
  v5 = *a2;
  *a1 = 2;
  a1[1] = v5;
  return result;
}
