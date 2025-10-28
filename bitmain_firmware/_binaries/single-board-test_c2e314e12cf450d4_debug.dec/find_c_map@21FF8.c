int __fastcall find_c_map(int *a1, int a2, void **a3)
{
  _DWORD *c_rb; // [sp+14h] [bp+14h]

  if ( !a1 )
    return 0;
  c_rb = find_c_rb(*a1, a2);
  if ( !c_rb )
    return 0;
  get_raw_clib_object(c_rb[5], a3);
  return 1;
}
