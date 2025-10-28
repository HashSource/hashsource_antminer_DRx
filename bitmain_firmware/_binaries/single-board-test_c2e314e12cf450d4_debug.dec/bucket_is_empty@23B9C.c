int __cdecl bucket_is_empty(hashtable_t *hashtable, bucket_t *bucket)
{
  return *(hashtable_t **)bucket == (hashtable_t *)((char *)hashtable + 12)
      && *(_DWORD *)bucket == *((_DWORD *)bucket + 1);
}
