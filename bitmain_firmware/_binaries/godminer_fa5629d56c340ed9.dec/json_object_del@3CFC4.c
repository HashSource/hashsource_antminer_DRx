int __fastcall json_object_del(_DWORD *a1, char *a2)
{
  bool v2; // zf

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 || *a1 )
    return -1;
  else
    return hashtable_del(a1 + 2, a2);
}
