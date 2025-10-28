int __fastcall sub_B340(unsigned __int8 **a1, _DWORD *a2, const char **a3)
{
  unsigned __int8 *v4; // r4
  const unsigned __int16 **v6; // r0
  unsigned __int8 *v7; // r3
  const unsigned __int16 *v8; // r4
  const unsigned __int16 **v9; // r8
  unsigned __int8 *v10; // r10
  int v11; // r12
  int v12; // t1
  int v13; // r2
  unsigned __int8 *v14; // r0
  unsigned __int8 *v15; // r3
  int v16; // t1
  unsigned __int8 *v17; // r3
  _BYTE *v18; // r0
  int v19; // t1
  int v20; // r1
  const char *v22; // r0
  int v23; // r1
  int v24; // t1
  int v25; // r3
  int v26; // r4
  char *v27; // r3

  v4 = *a1;
  if ( *a1 )
  {
    v6 = _ctype_b_loc();
    v7 = v4;
    v8 = *v6;
    v9 = v6;
    do
    {
      v10 = v7;
      v12 = *v7++;
      v11 = v12;
    }
    while ( (v8[v12] & 0x2000) != 0 );
    if ( v11 && !strncmp((const char *)v10, "option", 6u) )
    {
      v13 = v10[6];
      v14 = v10 + 6;
      if ( (v8[v13] & 0x2000) != 0 )
      {
        v15 = v10 + 7;
        do
        {
          v14 = v15;
          v16 = *v15++;
          v13 = v16;
        }
        while ( (v8[v16] & 0x2000) != 0 );
      }
      if ( v13 )
      {
        v17 = v14 + 1;
        *a2 = v14;
        while ( 1 )
        {
          v18 = v17;
          v19 = *v17++;
          v20 = v19;
          if ( !v19 )
            break;
          if ( ((*v9)[v20] & 0x2000) != 0 )
          {
            *v18 = 0;
            v22 = v18 + 1;
            while ( 1 )
            {
              v24 = *(unsigned __int8 *)v22++;
              v23 = v24;
              v25 = v24;
              if ( !v24 )
                break;
              v26 = (*v9)[v25] & 0x2000;
              if ( ((*v9)[v25] & 0x2000) == 0 )
              {
                if ( v23 == 39 )
                {
                  *a3 = v22;
                  v27 = strchr(v22, 39);
                  if ( v27 )
                  {
                    *v27 = v26;
                    return v26;
                  }
                }
                return -1;
              }
            }
            return -1;
          }
        }
      }
    }
  }
  return -1;
}
