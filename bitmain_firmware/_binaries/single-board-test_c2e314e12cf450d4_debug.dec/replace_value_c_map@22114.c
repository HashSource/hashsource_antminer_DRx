void *__fastcall replace_value_c_map(int a1, const void *a2, size_t a3)
{
  void *v7; // [sp+10h] [bp+10h] BYREF
  int v8; // [sp+14h] [bp+14h]

  v8 = *(_DWORD *)(a1 + 12);
  if ( *(_DWORD *)(*(_DWORD *)v8 + 32) )
  {
    get_raw_clib_object(*(_DWORD *)(a1 + 20), &v7);
    (*(void (__fastcall **)(void *))(*(_DWORD *)v8 + 32))(v7);
  }
  return replace_raw_clib_object(*(void ***)(*(_DWORD *)(a1 + 20) + 20), a2, a3);
}
