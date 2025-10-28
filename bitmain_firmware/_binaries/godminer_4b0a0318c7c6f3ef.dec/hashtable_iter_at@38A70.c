int __fastcall hashtable_iter_at(int a1, char *s)
{
  size_t v4; // r0
  int v5; // r0
  int result; // r0

  v4 = strlen(s);
  v5 = sub_37F2C((unsigned __int16 *)s, v4, hashtable_seed);
  result = sub_38470(a1, (int *)(*(_DWORD *)(a1 + 4) + 8 * (v5 & ~(-1 << *(_DWORD *)(a1 + 8)))), s, v5);
  if ( result )
    result += 8;
  return result;
}
