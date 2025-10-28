void __cdecl insert_to_bucket(hashtable_t *hashtable, bucket_t *bucket, list_t *list)
{
  if ( bucket_is_empty(hashtable, bucket) )
  {
    list_insert((hashtable_t *)((char *)hashtable + 12), list);
    *((_DWORD *)bucket + 1) = list;
    *(_DWORD *)bucket = *((_DWORD *)bucket + 1);
  }
  else
  {
    list_insert(*(list_t **)bucket, list);
    *(_DWORD *)bucket = list;
  }
}
