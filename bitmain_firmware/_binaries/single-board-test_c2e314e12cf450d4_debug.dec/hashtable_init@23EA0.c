int __fastcall hashtable_init(_DWORD *a1)
{
  int v1; // r0
  _DWORD *v3; // r2
  unsigned int i; // [sp+Ch] [bp+Ch]

  *a1 = 0;
  a1[2] = 0;
  v1 = num_buckets((int)a1);
  a1[1] = jsonp_malloc(8 * v1);
  if ( !a1[1] )
    return -1;
  list_init(a1 + 3);
  for ( i = 0; num_buckets((int)a1) > i; ++i )
  {
    v3 = (_DWORD *)(a1[1] + 8 * i);
    v3[1] = a1 + 3;
    *v3 = v3[1];
  }
  return 0;
}
