int __fastcall i2c_uninit(int a1)
{
  int result; // r0
  _DWORD v2[2]; // [sp+4h] [bp+4h] BYREF
  int (__fastcall **v3)(_DWORD); // [sp+Ch] [bp+Ch]
  int i; // [sp+10h] [bp+10h]
  int v5; // [sp+14h] [bp+14h]

  v2[0] = a1;
  v5 = 0;
  if ( pthread_mutex_lock(&i2c_mutex) )
  {
    printf("%s:%d", "i2c_uninit", 62);
    return puts("failed to i2c lock");
  }
  else
  {
    if ( exists_c_map((int *)i2c_ctx_map, (int)v2) )
    {
      printf("%s:%d", "i2c_uninit", 66);
      printf("remove %d from callback list\n", v2[0]);
      remove_c_map((int *)i2c_ctx_map, (int)v2);
    }
    else
    {
      printf("%s:%d", "i2c_uninit", 69);
      printf("ctx(%d) is not inited\n", v2[0]);
    }
    v3 = (int (__fastcall **)(_DWORD))new_iterator_c_map(i2c_ctx_map);
    for ( i = (*v3)(v3); i; i = (*v3)(v3) )
      ++v5;
    delete_iterator_c_map(v3);
    pthread_mutex_unlock(&i2c_mutex);
    if ( v5 )
    {
      printf("%s:%d", "i2c_uninit", 85);
      return printf("still have %d nodes\n", v5);
    }
    else
    {
      printf("%s:%d", "i2c_uninit", 80);
      puts("all i2c uninited");
      i2c_index = 0;
      result = delete_c_map((void ****)i2c_ctx_map);
      i2c_ctx_map = 0;
    }
  }
  return result;
}
