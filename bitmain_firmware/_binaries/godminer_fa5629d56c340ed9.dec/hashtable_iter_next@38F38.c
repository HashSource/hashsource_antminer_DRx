int __fastcall hashtable_iter_next(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 4) == a1 + 20 )
    return 0;
  else
    return *(_DWORD *)(a2 + 4);
}
