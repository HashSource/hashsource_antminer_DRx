int *__fastcall _remove_c_rb(int *a1, int **a2)
{
  int *v4; // [sp+Ch] [bp+Ch]
  int *v5; // [sp+Ch] [bp+Ch]
  int *i; // [sp+10h] [bp+10h]
  int v7; // [sp+14h] [bp+14h]

  if ( *a2 == a1 + 1 || a2[1] == a1 + 1 )
  {
    i = (int *)a2;
  }
  else
  {
    for ( i = a2[1]; (int *)*i != a1 + 1; i = (int *)*i )
      ;
  }
  if ( (int *)*i == a1 + 1 )
    v7 = i[1];
  else
    v7 = *i;
  *(_DWORD *)(v7 + 8) = i[2];
  if ( i[2] )
  {
    if ( *(int **)i[2] == i )
      *(_DWORD *)i[2] = v7;
    else
      *(_DWORD *)(i[2] + 4) = v7;
  }
  else
  {
    *a1 = v7;
  }
  if ( i != (int *)a2 )
  {
    v4 = a2[4];
    a2[4] = (int *)i[4];
    i[4] = (int)v4;
    v5 = a2[5];
    a2[5] = (int *)i[5];
    i[5] = (int)v5;
  }
  if ( !i[3] )
    _rb_remove_fixup(a1, v7);
  debug_verify_properties(a1);
  return i;
}
