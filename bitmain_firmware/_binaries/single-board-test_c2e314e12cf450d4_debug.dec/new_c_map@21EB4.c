_DWORD *__fastcall new_c_map(int a1, int a2, int a3)
{
  _DWORD *v8; // [sp+14h] [bp+14h]

  v8 = malloc(4u);
  if ( !v8 )
    return 0;
  *v8 = new_c_rb(a1, a2, a3);
  if ( *v8 )
    return v8;
  else
    return 0;
}
