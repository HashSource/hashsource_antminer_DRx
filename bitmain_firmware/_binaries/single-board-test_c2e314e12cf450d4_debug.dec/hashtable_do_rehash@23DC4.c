int __fastcall hashtable_do_rehash(int a1)
{
  _DWORD *v2; // r2
  int v5; // [sp+10h] [bp+10h]
  unsigned int v6; // [sp+14h] [bp+14h]
  unsigned int i; // [sp+18h] [bp+18h]
  int v8; // [sp+1Ch] [bp+1Ch]

  jsonp_free(*(void **)(a1 + 4));
  ++*(_DWORD *)(a1 + 8);
  v6 = num_buckets(a1);
  *(_DWORD *)(a1 + 4) = jsonp_malloc(8 * v6);
  if ( !*(_DWORD *)(a1 + 4) )
    return -1;
  for ( i = 0; num_buckets(a1) > i; ++i )
  {
    v2 = (_DWORD *)(*(_DWORD *)(a1 + 4) + 8 * i);
    v2[1] = a1 + 12;
    *v2 = v2[1];
  }
  v8 = *(_DWORD *)(a1 + 16);
  list_init((_DWORD *)(a1 + 12));
  while ( a1 + 12 != v8 )
  {
    v5 = *(_DWORD *)(v8 + 4);
    insert_to_bucket(
      (hashtable_t *)a1,
      (bucket_t *)(*(_DWORD *)(a1 + 4) + 8 * (*(_DWORD *)(v8 - 4) % v6)),
      (list_t *)v8);
    v8 = v5;
  }
  return 0;
}
