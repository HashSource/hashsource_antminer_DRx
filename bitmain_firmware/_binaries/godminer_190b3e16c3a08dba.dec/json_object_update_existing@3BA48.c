int __fastcall json_object_update_existing(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  _DWORD *v4; // r9
  int i; // r0
  unsigned int *v7; // r3
  unsigned int v8; // r2
  int v9; // r0
  char *v10; // r4
  _DWORD *v11; // r6

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 || *a2 )
    return -1;
  v4 = a2 + 2;
  for ( i = hashtable_iter((int)(a2 + 2)); i; i = hashtable_iter_next((int)v4, (int)(v10 - 16)) )
  {
    v9 = hashtable_iter_key(i);
    v10 = (char *)v9;
    if ( !v9 )
      break;
    v11 = (_DWORD *)hashtable_iter_value(v9 - 16);
    if ( !v11 )
      break;
    if ( json_object_get(a1, v10) )
    {
      v7 = v11 + 1;
      if ( v11[1] != -1 )
      {
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
        __dmb(0xBu);
      }
      json_object_set_new_nocheck(a1, v10, v11);
    }
    if ( *a2 )
      break;
  }
  return 0;
}
