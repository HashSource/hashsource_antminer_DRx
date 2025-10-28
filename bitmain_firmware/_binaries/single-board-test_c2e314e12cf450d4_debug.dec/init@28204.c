int __fastcall init(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r9
  unsigned int v8; // r5
  int i; // r4
  int (__fastcall *v10)(int, int, int); // t1

  result = init_proc();
  v7 = &_do_global_dtors_aux_fini_array_entry - &_frame_dummy_init_array_entry;
  if ( v7 )
  {
    v8 = 0x35320u;
    for ( i = 0; i != v7; ++i )
    {
      v10 = *(int (__fastcall **)(int, int, int))(v8 + 4);
      v8 += 4;
      result = v10(a1, a2, a3);
    }
  }
  return result;
}
