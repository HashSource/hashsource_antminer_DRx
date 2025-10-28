_DWORD *__fastcall hashtable_clear(_DWORD *a1)
{
  _DWORD *v1; // r2
  _DWORD *result; // r0
  unsigned int i; // [sp+Ch] [bp+Ch]

  hashtable_do_clear((int)a1);
  for ( i = 0; num_buckets((int)a1) > i; ++i )
  {
    v1 = (_DWORD *)(a1[1] + 8 * i);
    v1[1] = a1 + 3;
    *v1 = v1[1];
  }
  result = list_init(a1 + 3);
  *a1 = 0;
  return result;
}
