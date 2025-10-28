int __fastcall json_object_del(_DWORD *a1, char *a2)
{
  if ( a1 && !*a1 )
    return hashtable_del((hashtable_t *)(a1 + 2), a2);
  else
    return -1;
}
