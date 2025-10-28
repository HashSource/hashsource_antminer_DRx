int __fastcall hashtable_get(int a1, char *a2)
{
  int v2; // r4
  int pair; // [sp+Ch] [bp+Ch]
  bucket_t *v8; // [sp+10h] [bp+10h]
  unsigned int v9; // [sp+14h] [bp+14h]

  v9 = hash_str(a2);
  v2 = *(_DWORD *)(a1 + 4);
  v8 = (bucket_t *)(v2 + 8 * (v9 % num_buckets(a1)));
  pair = hashtable_find_pair((hashtable_t *)a1, v8, a2, v9);
  if ( pair )
    return *(_DWORD *)(pair + 12);
  else
    return 0;
}
