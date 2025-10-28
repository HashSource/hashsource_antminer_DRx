int gpio_thread_function()
{
  _DWORD v1[2]; // [sp+Ch] [bp+Ch] BYREF
  unsigned __int8 v2; // [sp+17h] [bp+17h] BYREF
  int v3; // [sp+18h] [bp+18h]
  void *ptr; // [sp+1Ch] [bp+1Ch]
  int v5; // [sp+20h] [bp+20h]
  _DWORD *v6; // [sp+24h] [bp+24h]
  int v7; // [sp+28h] [bp+28h]
  int i; // [sp+2Ch] [bp+2Ch]

  v7 = 0;
  while ( gpio_thread )
  {
    if ( !pthread_mutex_lock(&gpio_ctrl_map) )
    {
      v6 = new_iterator_c_map(dword_235DC8);
      for ( i = ((int (__fastcall *)(_DWORD *))*v6)(v6); i; i = ((int (__fastcall *)(_DWORD *))*v6)(v6) )
      {
        v5 = v6[5];
        ptr = (void *)((int (__fastcall *)(int))v6[2])(i);
        v3 = ***(_DWORD ***)(v5 + 16);
        v2 = 0;
        v7 = gpio_read(v3, &v2);
        if ( v7 )
        {
          printf("%s:%d", "gpio_thread_function", 50);
          printf("failed to read gpio port %d\n", v3);
          free(ptr);
          break;
        }
        if ( *((_DWORD *)ptr + 1) != v2 )
        {
          printf("%s:%d", "gpio_thread_function", 55);
          printf("gpio port %d, last val = %d, new val = %d\n", ***(_DWORD ***)(v5 + 16), *((_DWORD *)ptr + 1), v2);
          (*(void (__fastcall **)(int, _DWORD))ptr)(v3, v2);
          v1[0] = *(_DWORD *)ptr;
          v1[1] = v2;
          ((void (__fastcall *)(_DWORD *, _DWORD *, int))v6[1])(v6, v1, 8);
        }
        free(ptr);
      }
      delete_iterator_c_map(v6);
      pthread_mutex_unlock(&gpio_ctrl_map);
    }
    usleep(0x30D40u);
  }
  return 0;
}
