void __fastcall json_decref_2(int a1)
{
  if ( a1 && *(_DWORD *)(a1 + 4) != -1 && !--*(_DWORD *)(a1 + 4) )
    json_delete((void **)a1);
}
