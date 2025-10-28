void __fastcall sub_384E4(int a1)
{
  _DWORD *v1; // r6
  _DWORD *v2; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r5
  unsigned int *v5; // r3
  unsigned int v6; // r2
  unsigned int v7; // r2
  void *v8; // r0

  v1 = (_DWORD *)(a1 + 12);
  v2 = *(_DWORD **)(a1 + 16);
  if ( v2 != (_DWORD *)(a1 + 12) )
  {
    do
    {
      v3 = (_DWORD *)v2[5];
      v4 = (_DWORD *)v2[1];
      if ( v3 )
      {
        v5 = v3 + 1;
        if ( v3[1] != -1 )
        {
          __dmb(0xBu);
          do
          {
            v6 = __ldrex(v5);
            v7 = v6 - 1;
          }
          while ( __strex(v7, v5) );
          if ( !v7 )
            json_delete(v3);
        }
      }
      v8 = v2;
      v2 = v4;
      jsonp_free(v8);
    }
    while ( v4 != v1 );
  }
}
