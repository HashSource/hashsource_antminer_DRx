int __fastcall json_object_update(_DWORD *a1, _DWORD *a2)
{
  _BOOL4 v3; // r3
  _DWORD *v4; // r8
  int v6; // r0
  unsigned int v8; // r1
  int v9; // r0
  char *v10; // r5
  _DWORD *v11; // r0
  unsigned int *v12; // r3

  if ( !a1 )
    return -1;
  v3 = a2 == 0;
  if ( *a1 )
    v3 = 1;
  if ( v3 || *a2 )
    return -1;
  v4 = a2 + 2;
  v6 = hashtable_iter((int)(a2 + 2));
  if ( v6 )
  {
    while ( 1 )
    {
      v9 = hashtable_iter_key(v6);
      v10 = (char *)v9;
      if ( !v9 )
        break;
      v11 = (_DWORD *)hashtable_iter_value(v9 - 16);
      v12 = v11 + 1;
      if ( !v11 )
        return 0;
      if ( v11[1] != -1 )
      {
        do
          v8 = __ldrex(v12);
        while ( __strex(v8 + 1, v12) );
        __dmb(0xBu);
      }
      if ( json_object_set_new_nocheck(a1, v10, v11) )
        return -1;
      if ( !*a2 )
      {
        v6 = hashtable_iter_next((int)v4, (int)(v10 - 16));
        if ( v6 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}
