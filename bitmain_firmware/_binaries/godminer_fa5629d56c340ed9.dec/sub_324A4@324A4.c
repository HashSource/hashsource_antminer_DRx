int sub_324A4()
{
  int v0; // r3

  v0 = ++dword_196A78;
  if ( dword_196A78 > total_pools )
  {
    add_pool();
    v0 = dword_196A78;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
