int sub_3202C()
{
  int v0; // r3

  v0 = ++dword_195A68;
  if ( dword_195A68 > total_pools )
  {
    add_pool();
    v0 = dword_195A68;
  }
  return *(_DWORD *)(pools + 4 * (v0 + 0x3FFFFFFF));
}
