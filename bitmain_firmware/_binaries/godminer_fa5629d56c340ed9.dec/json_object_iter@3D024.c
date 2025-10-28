int __fastcall json_object_iter(_DWORD *a1)
{
  if ( !a1 || *a1 )
    return 0;
  else
    return hashtable_iter((int)(a1 + 2));
}
