int __fastcall json_object_set_new_nocheck(_DWORD *a1, char *a2, _DWORD *a3)
{
  int v4; // r2

  if ( !a3 )
    return -1;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( !*a1 && a1 != a3 )
      {
        v4 = a1[7];
        a1[7] = v4 + 1;
        if ( !hashtable_set((hashtable_t *)(a1 + 2), a2, v4, (int)a3) )
          return 0;
      }
    }
  }
  json_decref_2((int)a3);
  return -1;
}
