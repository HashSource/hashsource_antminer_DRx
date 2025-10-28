int __fastcall json_object_clear(_DWORD *a1)
{
  if ( !a1 || *a1 )
    return -1;
  hashtable_clear(a1 + 2);
  a1[7] = 0;
  return 0;
}
