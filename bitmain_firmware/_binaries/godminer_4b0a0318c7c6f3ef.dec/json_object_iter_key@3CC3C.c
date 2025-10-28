int __fastcall json_object_iter_key(int a1)
{
  if ( a1 )
    return hashtable_iter_key(a1);
  return a1;
}
