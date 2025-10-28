int __fastcall sub_B250(unsigned __int8 **a1, _DWORD *a2, _DWORD *a3)
{
  unsigned __int8 *v4; // r4
  const unsigned __int16 **v6; // r0
  unsigned __int8 *v7; // r3
  unsigned __int8 *v8; // r2
  int v9; // r12
  int v10; // t1
  unsigned __int8 *v11; // r12
  _BYTE *v12; // r4
  int v13; // r3
  int v14; // t1
  int v15; // r1
  _BYTE *v17; // r3
  int v18; // r1
  int v19; // r4
  char *v20; // r3

  v4 = *a1;
  if ( *a1 )
  {
    v6 = _ctype_b_loc();
    v7 = v4;
    do
    {
      v8 = v7;
      v10 = *v7++;
      v9 = v10;
    }
    while ( ((*v6)[v10] & 0x2000) != 0 );
    if ( v9 )
    {
      v11 = v7;
      *a2 = v8;
      while ( 1 )
      {
        v12 = v11;
        v14 = *v11++;
        v13 = v14;
        v15 = v14;
        if ( !v14 )
          break;
        if ( ((*v6)[v15] & 0x2000) != 0 || v13 == 61 )
        {
          v17 = v12;
          *v12 = 0;
          while ( 1 )
          {
            v18 = (unsigned __int8)v17[1];
            if ( !v17[1] )
              break;
            v19 = (*v6)[v18] & 0x2000;
            if ( ((*v6)[v18] & 0x2000) == 0 && v18 != 61 )
            {
              if ( v18 == 34 )
              {
                *a3 = v17 + 2;
                v20 = strchr(v17 + 2, 34);
                if ( v20 )
                {
                  *v20 = v19;
                  return v19;
                }
              }
              return -1;
            }
            ++v17;
          }
          return -1;
        }
      }
    }
  }
  return -1;
}
