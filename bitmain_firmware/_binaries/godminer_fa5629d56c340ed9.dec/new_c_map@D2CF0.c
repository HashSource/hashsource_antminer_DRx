_DWORD *__fastcall new_c_map(int a1, int a2, int a3)
{
  _DWORD *v6; // r4
  _DWORD *v7; // r0

  v6 = malloc(4u);
  if ( v6 && (v7 = new_c_rb(a1, a2, a3), (*v6 = v7) != 0) )
    return v6;
  else
    return 0;
}
