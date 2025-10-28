int __fastcall remove_c_map(int *a1, int a2)
{
  void *ptr; // [sp+Ch] [bp+Ch] BYREF
  void *v5; // [sp+10h] [bp+10h]
  int v6; // [sp+14h] [bp+14h]

  v6 = 0;
  if ( !a1 )
    return 501;
  v5 = remove_c_rb(*a1, a2);
  if ( v5 )
  {
    get_raw_clib_object(*((_DWORD *)v5 + 4), &ptr);
    free(ptr);
    delete_clib_object(*((void ***)v5 + 4));
    get_raw_clib_object(*((_DWORD *)v5 + 5), &ptr);
    free(ptr);
    delete_clib_object(*((void ***)v5 + 5));
    free(v5);
  }
  return v6;
}
