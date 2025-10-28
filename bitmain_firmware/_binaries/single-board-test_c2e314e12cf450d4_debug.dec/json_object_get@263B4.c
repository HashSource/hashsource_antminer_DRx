int __fastcall json_object_get(_DWORD *a1, char *a2)
{
  if ( a1 && !*a1 )
    return hashtable_get((int)(a1 + 2), a2);
  else
    return 0;
}
