int __fastcall lex_steal_string(int a1)
{
  int v2; // [sp+Ch] [bp+Ch]

  v2 = 0;
  if ( *(_DWORD *)(a1 + 52) == 256 )
  {
    v2 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 56) = 0;
  }
  return v2;
}
