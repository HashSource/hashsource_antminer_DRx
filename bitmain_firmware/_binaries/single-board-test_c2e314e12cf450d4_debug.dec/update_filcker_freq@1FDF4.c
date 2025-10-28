void __fastcall update_filcker_freq(int a1, int a2, int a3)
{
  _DWORD v5[3]; // [sp+14h] [bp+14h] BYREF
  void *ptr; // [sp+20h] [bp+20h]
  int v7; // [sp+24h] [bp+24h]
  _DWORD *v8; // [sp+28h] [bp+28h]
  int i; // [sp+2Ch] [bp+2Ch]

  if ( a3 )
  {
    v8 = new_iterator_c_map(a3);
    for ( i = ((int (__fastcall *)(_DWORD *))*v8)(v8); i; i = ((int (__fastcall *)(_DWORD *))*v8)(v8) )
    {
      v7 = v8[5];
      if ( ***(_DWORD ***)(v7 + 16) == a1 )
      {
        ptr = (void *)((int (__fastcall *)(int))v8[2])(i);
        v5[0] = a2;
        v5[1] = 0;
        v5[2] = 1;
        ((void (__fastcall *)(_DWORD *, _DWORD *, int))v8[1])(v8, v5, 12);
        printf("%s:%d", "update_filcker_freq", 201);
        printf("update the freq interval of port[%d] from %d to %d\n", a1, *(_DWORD *)ptr, a2);
        free(ptr);
        break;
      }
    }
    delete_iterator_c_map(v8);
  }
}
