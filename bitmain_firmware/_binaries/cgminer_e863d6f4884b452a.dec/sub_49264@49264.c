void *__fastcall sub_49264(_DWORD *a1, int a2, int a3)
{
  void *result; // r0

  result = memmove((void *)(4 * a3 + a2), (const void *)(a2 + 4 * a3 + 4), 4 * (*a1 - a3));
  --*a1;
  return result;
}
