int __fastcall json_incref_0(int result)
{
  if ( result )
  {
    if ( *(_DWORD *)(result + 4) != -1 )
      ++*(_DWORD *)(result + 4);
  }
  return result;
}
