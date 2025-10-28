int __fastcall remove_c_map(int *a1, int a2)
{
  int *v2; // r0
  int *v3; // r4
  void *ptr[3]; // [sp+4h] [bp-Ch] BYREF

  if ( !a1 )
    return 501;
  v2 = remove_c_rb(*a1, a2);
  v3 = v2;
  if ( v2 )
  {
    get_raw_clib_object(v2[4], ptr);
    free(ptr[0]);
    destroy_sample_buffer((void **)v3[4]);
    get_raw_clib_object(v3[5], ptr);
    free(ptr[0]);
    destroy_sample_buffer((void **)v3[5]);
    free(v3);
  }
  return 0;
}
