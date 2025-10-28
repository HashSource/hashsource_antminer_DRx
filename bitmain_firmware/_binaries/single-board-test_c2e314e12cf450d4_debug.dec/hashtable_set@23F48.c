int __fastcall hashtable_set(hashtable_t *a1, char *a2, int a3, int a4)
{
  unsigned int v4; // r4
  size_t v6; // r0
  int pair; // [sp+10h] [bp+10h]
  char *v13; // [sp+10h] [bp+10h]
  bucket_t *v14; // [sp+14h] [bp+14h]
  unsigned int v15; // [sp+1Ch] [bp+1Ch]

  v4 = *(_DWORD *)a1;
  if ( v4 < num_buckets((int)a1) || !hashtable_do_rehash((int)a1) )
  {
    v15 = hash_str(a2);
    v14 = (bucket_t *)(*((_DWORD *)a1 + 1) + 8 * (v15 % num_buckets((int)a1)));
    pair = hashtable_find_pair(a1, v14, a2, v15);
    if ( pair )
    {
      json_decref_0(*(_DWORD *)(pair + 12));
      *(_DWORD *)(pair + 12) = a4;
    }
    else
    {
      v6 = strlen(a2);
      v13 = (char *)jsonp_malloc(v6 + 21);
      if ( !v13 )
        return -1;
      *(_DWORD *)v13 = v15;
      *((_DWORD *)v13 + 4) = a3;
      strcpy(v13 + 20, a2);
      *((_DWORD *)v13 + 3) = a4;
      list_init((_DWORD *)v13 + 1);
      insert_to_bucket(a1, v14, (list_t *)(v13 + 4));
      ++*(_DWORD *)a1;
    }
    return 0;
  }
  return -1;
}
