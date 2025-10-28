int sub_302F4()
{
  int v0; // r3

  v0 = ++dword_17A098;
  if ( dword_17A098 > total_pools )
  {
    add_pool();
    v0 = dword_17A098;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
