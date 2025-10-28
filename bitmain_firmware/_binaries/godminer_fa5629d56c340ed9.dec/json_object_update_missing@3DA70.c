int __fastcall json_object_update_missing(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  _DWORD *v4; // r9
  int i; // r0
  unsigned int *v8; // r3
  unsigned int v9; // r2
  int v10; // r0
  char *v11; // r4
  _DWORD *v12; // r8

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 || *a2 )
    return -1;
  v4 = a2 + 2;
  for ( i = hashtable_iter((int)(a2 + 2)); i; i = hashtable_iter_next((int)v4, (int)(v11 - 16)) )
  {
    v10 = hashtable_iter_key(i);
    v11 = (char *)v10;
    if ( !v10 )
      break;
    v12 = (_DWORD *)hashtable_iter_value(v10 - 16);
    if ( !v12 )
      break;
    if ( !json_object_get(a1, v11) )
    {
      v8 = v12 + 1;
      if ( v12[1] != -1 )
      {
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 + 1, v8) );
        __dmb(0xBu);
      }
      json_object_set_new_nocheck(a1, v11, v12);
    }
    if ( *a2 )
      break;
  }
  return 0;
}
