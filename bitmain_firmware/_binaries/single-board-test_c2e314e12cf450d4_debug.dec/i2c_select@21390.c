int __fastcall i2c_select(int a1, int a2)
{
  _DWORD v6[2]; // [sp+8h] [bp+8h] BYREF
  void *ptr; // [sp+10h] [bp+10h]
  int v8; // [sp+14h] [bp+14h]
  _DWORD *v9; // [sp+18h] [bp+18h]
  int i; // [sp+1Ch] [bp+1Ch]

  if ( pthread_mutex_lock(&i2c_mutex) )
  {
    printf("%s:%d", "i2c_select", 379);
    puts("failed to i2c lock");
    return -4;
  }
  else
  {
    v9 = new_iterator_c_map(i2c_ctx_map);
    for ( i = ((int (__fastcall *)(_DWORD *))*v9)(v9); i; i = ((int (__fastcall *)(_DWORD *))*v9)(v9) )
    {
      v8 = v9[5];
      if ( a1 == ***(_DWORD ***)(v8 + 16) )
      {
        ptr = (void *)((int (__fastcall *)(int))v9[2])(i);
        v6[0] = a2;
        v6[1] = *((_DWORD *)ptr + 1);
        ((void (__fastcall *)(_DWORD *, _DWORD *, int))v9[1])(v9, v6, 8);
        printf("%s:%d", "i2c_select", 390);
        printf("update the master address to %d\n", a2);
        free(ptr);
        break;
      }
    }
    delete_iterator_c_map(v9);
    pthread_mutex_unlock(&i2c_mutex);
    return 0;
  }
}
