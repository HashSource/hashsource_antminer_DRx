int __fastcall hashtable_do_del(hashtable_t *a1, const char *a2, unsigned int a3)
{
  int pair; // [sp+14h] [bp+14h]
  unsigned int v9; // [sp+18h] [bp+18h]

  v9 = *((_DWORD *)a1 + 1) + 8 * (a3 % num_buckets((int)a1));
  pair = hashtable_find_pair(a1, (bucket_t *)v9, a2, a3);
  if ( !pair )
    return -1;
  if ( pair + 4 == *(_DWORD *)v9 && pair + 4 == *(_DWORD *)(v9 + 4) )
  {
    *(_DWORD *)(v9 + 4) = (char *)a1 + 12;
    *(_DWORD *)v9 = *(_DWORD *)(v9 + 4);
  }
  else if ( pair + 4 == *(_DWORD *)v9 )
  {
    *(_DWORD *)v9 = *(_DWORD *)(pair + 8);
  }
  else if ( pair + 4 == *(_DWORD *)(v9 + 4) )
  {
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(pair + 4);
  }
  list_remove((list_t *)(pair + 4));
  json_decref_0(*(_DWORD *)(pair + 12));
  jsonp_free((void *)pair);
  --*(_DWORD *)a1;
  return 0;
}
