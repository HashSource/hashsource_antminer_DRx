_DWORD *__fastcall find_c_rb(int a1, int a2)
{
  _DWORD *v2; // r3
  void *ptr; // [sp+Ch] [bp+Ch] BYREF
  int v8; // [sp+10h] [bp+10h]
  _DWORD *i; // [sp+14h] [bp+14h]

  for ( i = *(_DWORD **)a1; (_DWORD *)(a1 + 4) != i; i = v2 )
  {
    v8 = 0;
    get_raw_clib_object(i[4], &ptr);
    v8 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, ptr);
    free(ptr);
    if ( !v8 )
      break;
    if ( v8 >= 0 )
      v2 = (_DWORD *)i[1];
    else
      v2 = (_DWORD *)*i;
  }
  if ( (_DWORD *)(a1 + 4) == i )
    return 0;
  else
    return i;
}
