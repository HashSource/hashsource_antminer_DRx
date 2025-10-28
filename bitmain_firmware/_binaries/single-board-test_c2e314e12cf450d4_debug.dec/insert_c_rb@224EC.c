int __fastcall insert_c_rb(int a1, const void *a2, size_t a3, const void *a4, size_t a5)
{
  void *v11; // [sp+10h] [bp+10h] BYREF
  void *v12; // [sp+14h] [bp+14h] BYREF
  void *v13; // [sp+18h] [bp+18h] BYREF
  void *ptr; // [sp+1Ch] [bp+1Ch] BYREF
  int v15; // [sp+20h] [bp+20h]
  int v16; // [sp+24h] [bp+24h]
  _DWORD *v17; // [sp+28h] [bp+28h]
  int v18; // [sp+2Ch] [bp+2Ch]
  _DWORD *v19; // [sp+30h] [bp+30h]
  _DWORD *v20; // [sp+34h] [bp+34h]

  v18 = 0;
  v17 = malloc(0x18u);
  if ( !v17 )
    return 2;
  *v17 = a1 + 4;
  v17[1] = a1 + 4;
  v17[3] = 1;
  v17[4] = new_clib_object(a2, a3);
  if ( a4 )
    v17[5] = new_clib_object(a4, a5);
  else
    v17[5] = 0;
  v20 = *(_DWORD **)a1;
  v19 = 0;
  while ( (_DWORD *)(a1 + 4) != v20 )
  {
    v16 = 0;
    get_raw_clib_object(v20[4], &ptr);
    get_raw_clib_object(v17[4], &v13);
    v16 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v13, ptr);
    free(ptr);
    free(v13);
    if ( !v16 )
      return 401;
    v19 = v20;
    if ( v16 >= 0 )
      v20 = (_DWORD *)v20[1];
    else
      v20 = (_DWORD *)*v20;
  }
  v17[2] = v19;
  if ( v19 )
  {
    v15 = 0;
    get_raw_clib_object(v19[4], &v12);
    get_raw_clib_object(v17[4], &v11);
    v15 = (*(int (__fastcall **)(void *, void *))(a1 + 36))(v11, v12);
    free(v12);
    free(v11);
    if ( v15 >= 0 )
      v19[1] = v17;
    else
      *v19 = v17;
  }
  else
  {
    *(_DWORD *)a1 = v17;
  }
  _rb_insert_fixup((_DWORD *)a1, v17);
  debug_verify_properties((int *)a1);
  return v18;
}
