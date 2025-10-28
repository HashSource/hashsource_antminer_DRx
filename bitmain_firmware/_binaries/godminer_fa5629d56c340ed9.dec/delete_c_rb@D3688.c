int __fastcall delete_c_rb(void (__fastcall **ptr)(_DWORD))
{
  _DWORD *v2; // r4
  void (__fastcall **v3)(_DWORD); // r5
  _DWORD *v5; // r7
  void **v6; // r0
  void **v7; // r0
  int v8; // r8
  _DWORD *v9; // r0
  void *v10; // r0
  int v11; // [sp+0h] [bp-8h] BYREF
  int v12; // [sp+4h] [bp-4h] BYREF

  v3 = ptr + 1;
  v2 = *ptr;
  while ( v2 != v3 )
  {
    if ( (void (__fastcall **)(_DWORD))*v2 == v3 )
    {
      v5 = (_DWORD *)v2[1];
      if ( v3 == v5 )
      {
        v6 = (void **)v2[4];
        if ( ptr[7] )
        {
          get_raw_clib_object((int)v6, &v11);
          ptr[7](v11);
          v6 = (void **)v2[4];
        }
        destroy_sample_buffer(v6);
        v7 = (void **)v2[5];
        if ( v7 )
        {
          if ( ptr[8] )
          {
            get_raw_clib_object((int)v7, &v12);
            ptr[8](v12);
            v7 = (void **)v2[5];
          }
          destroy_sample_buffer(v7);
        }
        v8 = v2[2];
        if ( v8 )
        {
          if ( v5 == *(_DWORD **)v8 )
          {
            v9 = *(_DWORD **)(v8 + 4);
            v2 = (_DWORD *)v2[2];
            if ( v5 != v9 )
            {
              free(v9);
              *(_DWORD *)(v8 + 4) = v5;
            }
          }
          else
          {
            free(*(void **)v8);
            v2 = (_DWORD *)v8;
            *(_DWORD *)v8 = v5;
          }
        }
        else
        {
          v10 = v2;
          v2 = v5;
          free(v10);
        }
      }
      else
      {
        v2 = (_DWORD *)v2[1];
      }
    }
    else
    {
      v2 = (_DWORD *)*v2;
    }
  }
  free(ptr);
  return 0;
}
