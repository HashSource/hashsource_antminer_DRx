int ui_pull_function()
{
  _DWORD v1[3]; // [sp+Ch] [bp+Ch] BYREF
  int v2; // [sp+18h] [bp+18h]
  void *ptr; // [sp+1Ch] [bp+1Ch]
  _DWORD *v4; // [sp+20h] [bp+20h]
  int i; // [sp+24h] [bp+24h]

  while ( ui_pull_thread )
  {
    if ( !pthread_mutex_lock(&ui_api_mutex) )
    {
      v4 = new_iterator_c_map(ui_flicker_map);
      for ( i = ((int (__fastcall *)(_DWORD *))*v4)(v4); i; i = ((int (__fastcall *)(_DWORD *))*v4)(v4) )
      {
        ptr = (void *)((int (__fastcall *)(int))v4[2])(i);
        v2 = v4[5];
        if ( !*((_DWORD *)ptr + 1) )
        {
          gpio_write(***(_DWORD ***)(v2 + 16), *((_DWORD *)ptr + 2));
          *((_DWORD *)ptr + 2) = *((_DWORD *)ptr + 2) != 1;
          *((_DWORD *)ptr + 1) = *(_DWORD *)ptr;
        }
        *((_DWORD *)ptr + 1) -= 200;
        *((_DWORD *)ptr + 1) = *((_DWORD *)ptr + 1);
        v1[0] = *(_DWORD *)ptr;
        v1[1] = *((_DWORD *)ptr + 1);
        v1[2] = *((_DWORD *)ptr + 2);
        ((void (__fastcall *)(_DWORD *, _DWORD *, int))v4[1])(v4, v1, 12);
        free(ptr);
      }
      delete_iterator_c_map(v4);
      pthread_mutex_unlock(&ui_api_mutex);
    }
    usleep(0x30D40u);
  }
  return 0;
}
