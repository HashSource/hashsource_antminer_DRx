void __fastcall sub_D864(_DWORD *a1)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v3; // r0
  void *v4; // r0
  void *v5; // r0

  v1 = a1;
  if ( a1 )
  {
    do
    {
      v2 = (_DWORD *)*v1;
      if ( (v1[3] & 0x100) == 0 )
      {
        v3 = v1[2];
        if ( !v3 || (sub_D864(v3), (v1[3] & 0x100) == 0) )
        {
          v4 = (void *)v1[4];
          if ( v4 )
            off_1B378(v4);
        }
      }
      v5 = (void *)v1[8];
      if ( v5 )
        off_1B378(v5);
      off_1B378(v1);
      v1 = v2;
    }
    while ( v2 );
  }
}
