int __fastcall hashtable_find_pair(hashtable_t *a1, bucket_t *a2, const char *a3, int a4)
{
  int i; // [sp+14h] [bp+14h]

  if ( bucket_is_empty(a1, a2) )
    return 0;
  for ( i = *(_DWORD *)a2; ; i = *(_DWORD *)(i + 4) )
  {
    if ( *(_DWORD *)(i - 4) == a4 && !strcmp((const char *)(i + 16), a3) )
      return i - 4;
    if ( *((_DWORD *)a2 + 1) == i )
      break;
  }
  return 0;
}
