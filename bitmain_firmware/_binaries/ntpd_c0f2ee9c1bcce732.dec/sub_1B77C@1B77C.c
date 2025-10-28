void *__fastcall sub_1B77C(int a1, _DWORD *a2)
{
  int v4; // r9
  unsigned int v5; // r5
  int v6; // r11
  unsigned __int8 *v7; // r10
  int v8; // r8
  const unsigned __int16 **v9; // r0
  const unsigned __int16 *v10; // r1
  int v11; // r3
  __int16 v13; // r3
  unsigned __int8 *v14; // r9
  bool v15; // zf
  unsigned __int8 *v16; // r2
  int v17; // r3
  int v18; // t1
  unsigned __int8 *v19; // r12
  bool v20; // zf
  bool v21; // zf
  unsigned __int8 *v22; // r3
  int v23; // t1
  int v24; // r3
  unsigned int v25; // r12
  unsigned __int8 *v26; // r3
  int v27; // r2
  int v28; // t1
  char *v29; // r3
  unsigned __int8 *v30; // r1
  int v31; // r2

  v4 = dword_7D3A4;
  v5 = dword_7D3A8;
  if ( dword_7D3A4 >= (unsigned int)dword_7D3A8 )
    return 0;
  v6 = dword_7D3A4;
  while ( 1 )
  {
    v7 = (unsigned __int8 *)v6++;
    v8 = *v7;
    if ( v8 != 44 )
    {
      v9 = _ctype_b_loc();
      v10 = *v9;
      v11 = (*v9)[v8] & 0x2000;
      if ( ((*v9)[v8] & 0x2000) == 0 )
        break;
    }
    v4 = v6;
    if ( v6 == v5 )
    {
      dword_7D3A4 = v6;
      return 0;
    }
  }
  dword_7D3A4 = v4;
  if ( v5 <= (unsigned int)v7 )
    return (void *)v11;
  if ( !a1 )
    return &unk_7A0E8;
  v13 = *(_WORD *)(a1 + 2);
  if ( (v13 & 0x80) == 0 )
  {
    while ( 1 )
    {
      if ( (v13 & 0x40) == 0 )
      {
        v14 = *(unsigned __int8 **)(a1 + 4);
        if ( *v14 == v8 )
        {
          v15 = v8 == 0;
          if ( v8 )
            v15 = v8 == 61;
          if ( v15 )
          {
            v17 = v8;
            v19 = v7;
          }
          else
          {
            v16 = v7 + 1;
            do
            {
              v18 = *++v14;
              v17 = v18;
              v19 = v16;
              v20 = v18 == 61;
              if ( v18 != 61 )
                v20 = v17 == 0;
              if ( v20 )
                break;
              v15 = v16++ == (unsigned __int8 *)v5;
              if ( v15 )
                break;
            }
            while ( *v19 == v17 );
          }
          v21 = v17 == 0;
          if ( v17 )
            v21 = v17 == 61;
          if ( v21 )
          {
            if ( (unsigned int)v19 < v5 )
            {
              v22 = v19;
              do
              {
                v19 = v22;
                v23 = *v22++;
                if ( (v10[v23] & 0x2000) == 0 )
                  break;
                v19 = v22;
              }
              while ( v22 != (unsigned __int8 *)v5 );
            }
            if ( v19 == (unsigned __int8 *)v5 )
            {
              byte_7D324 = 0;
              *a2 = &byte_7D324;
LABEL_52:
              dword_7D3A4 = (int)v19;
              return (void *)a1;
            }
            v24 = *v19;
            if ( v24 == 44 )
            {
              if ( v5 > (unsigned int)v19 )
                ++v19;
              byte_7D324 = 0;
              *a2 = &byte_7D324;
              goto LABEL_52;
            }
            if ( v24 == 61 )
              break;
          }
        }
      }
      a1 += 8;
      v13 = *(_WORD *)(a1 + 2);
      if ( (v13 & 0x80) != 0 )
        return (void *)a1;
    }
    v25 = (unsigned int)(v19 + 1);
    if ( v25 >= v5 )
      goto LABEL_56;
    v26 = (unsigned __int8 *)v25;
    while ( 1 )
    {
      v25 = (unsigned int)v26;
      v28 = *v26++;
      v27 = v28;
      if ( (v10[v28] & 0x2000) == 0 )
        break;
      v25 = (unsigned int)v26;
      if ( v26 == (unsigned __int8 *)v5 )
        goto LABEL_56;
    }
    if ( v5 <= v25 )
    {
LABEL_56:
      v29 = &byte_7D324;
    }
    else if ( v27 == 44 )
    {
      v29 = &byte_7D324;
LABEL_62:
      ++v25;
    }
    else
    {
      v29 = (char *)&unk_7D325;
      v30 = (unsigned __int8 *)(v25 + 1);
      byte_7D324 = v27;
      while ( 1 )
      {
        v25 = (unsigned int)v30;
        if ( v30 == (unsigned __int8 *)v5 )
          break;
        v31 = *v30++;
        if ( v31 == 44 )
          goto LABEL_62;
        *v29++ = v31;
        if ( v29 >= (char *)&dword_7D3A4 )
        {
          a1 = 0;
          sub_1B684(2);
          ++dword_CAAD0;
          return (void *)a1;
        }
      }
    }
    *v29 = 0;
    if ( v29 - 1 >= &byte_7D324 )
    {
      do
      {
        if ( ((*v9)[(unsigned __int8)*(v29 - 1)] & 0x2000) == 0 )
          break;
        *--v29 = 0;
      }
      while ( v29 != &byte_7D324 );
    }
    dword_7D3A4 = v25;
    *a2 = &byte_7D324;
  }
  return (void *)a1;
}
