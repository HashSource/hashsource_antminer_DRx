void __fastcall _delete_c_rb_node(int a1, int a2)
{
  void *v4; // [sp+8h] [bp+8h] BYREF
  void *v5; // [sp+Ch] [bp+Ch] BYREF

  if ( *(_DWORD *)(a1 + 28) )
  {
    get_raw_clib_object(*(_DWORD *)(a2 + 16), &v5);
    (*(void (__fastcall **)(void *))(a1 + 28))(v5);
  }
  delete_clib_object(*(void ***)(a2 + 16));
  if ( *(_DWORD *)(a2 + 20) )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      get_raw_clib_object(*(_DWORD *)(a2 + 20), &v4);
      (*(void (__fastcall **)(void *))(a1 + 32))(v4);
    }
    delete_clib_object(*(void ***)(a2 + 20));
  }
}
