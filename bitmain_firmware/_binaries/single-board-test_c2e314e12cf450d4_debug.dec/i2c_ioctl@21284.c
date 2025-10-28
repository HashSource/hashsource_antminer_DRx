int __fastcall i2c_ioctl(int a1, __int16 a2, int a3)
{
  _DWORD v8[2]; // [sp+10h] [bp+10h] BYREF
  void *ptr; // [sp+18h] [bp+18h]
  int v10; // [sp+1Ch] [bp+1Ch]
  _DWORD *v11; // [sp+20h] [bp+20h]
  int i; // [sp+24h] [bp+24h]

  if ( pthread_mutex_lock(&i2c_mutex) )
  {
    printf("%s:%d", "i2c_ioctl", 346);
    puts("failed to i2c lock");
    return -4;
  }
  else
  {
    v11 = new_iterator_c_map(i2c_ctx_map);
    for ( i = ((int (__fastcall *)(_DWORD *))*v11)(v11); i; i = ((int (__fastcall *)(_DWORD *))*v11)(v11) )
    {
      v10 = v11[5];
      if ( a1 == ***(_DWORD ***)(v10 + 16) )
      {
        ptr = (void *)((int (__fastcall *)(int))v11[2])(i);
        if ( a2 == 1795 )
        {
          v8[0] = *(_DWORD *)ptr;
          v8[1] = a3;
          ((void (__fastcall *)(_DWORD *, _DWORD *, int))v11[1])(v11, v8, 8);
          printf("%s:%d", "i2c_ioctl", 360);
          printf("update the slave address to %d\n", a3);
          free(ptr);
        }
        break;
      }
    }
    delete_iterator_c_map(v11);
    pthread_mutex_unlock(&i2c_mutex);
    return 0;
  }
}
