int __fastcall debug_node_color(int a1, int a2)
{
  if ( a1 + 4 == a2 )
    return 0;
  else
    return *(_DWORD *)(a2 + 12);
}
