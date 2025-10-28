char *__fastcall sub_423AC(char *result, _BYTE *a2)
{
  unsigned int v2; // r3
  int v3; // r10
  _DWORD *i; // r7
  int v5; // r8
  _BYTE *v6; // r3
  int v7; // r2
  int v8; // t1
  int v9; // t1
  _BYTE *v10; // r1
  unsigned int v11; // r3
  unsigned int v12; // t1
  int v13; // r0
  unsigned int v14; // r3
  unsigned int v15; // t1
  unsigned __int8 *v16; // r2
  unsigned int v17; // r3
  unsigned int v18; // t1
  unsigned int v19; // r3
  int v20; // r1
  int v21; // r12
  int v22; // r1
  unsigned int v23; // t1
  char *v24; // [sp+8h] [bp-Ch]
  int v25; // [sp+Ch] [bp-8h]

  v24 = result;
  if ( a2 || (result = getenv("AUTOOPTS_USAGE"), (a2 = result) != 0) )
  {
    v2 = (unsigned __int8)*a2;
    if ( v2 <= 0x7F && (dword_69A0C[v2] & 0x500) != 0 )
    {
      result = a2 + 1;
      do
      {
        a2 = result;
        v23 = (unsigned __int8)*result++;
        v2 = v23;
      }
      while ( v23 <= 0x7F && (dword_69A0C[v2] & 0x500) != 0 );
    }
    if ( v2 )
    {
      v25 = 0;
      while ( 1 )
      {
        v3 = 0;
        for ( i = &unk_69C30; ; i += 3 )
        {
          v5 = *(i - 3);
          result = (char *)*(i - 1);
          if ( v5 <= 0 )
            break;
          if ( *((unsigned __int8 *)&unk_7B7B0 + (unsigned __int8)*result + 704) == *((unsigned __int8 *)&unk_7B7B0
                                                                                    + (unsigned __int8)*a2
                                                                                    + 704) )
          {
            if ( *a2 )
            {
              v6 = a2;
              do
              {
                if ( v6 == &a2[v5 - 1] )
                  break;
                v8 = (unsigned __int8)*++v6;
                v7 = v8;
                v9 = (unsigned __int8)*++result;
                if ( *((unsigned __int8 *)&unk_7B7B0 + v7 + 704) != *((unsigned __int8 *)&unk_7B7B0 + v9 + 704) )
                  goto LABEL_34;
              }
              while ( v7 );
            }
            break;
          }
LABEL_34:
          if ( ++v3 == 4 )
            return result;
        }
        v12 = (unsigned __int8)a2[v5];
        v10 = &a2[v5];
        v11 = v12;
        if ( v12 > 0x7F )
          break;
        result = (char *)dword_69A0C[v11];
        if ( ((unsigned int)result & 0x300500) == 0 )
          break;
        v13 = v25 | (1 << v3);
        v25 = v13;
        result = v10 + 1;
        do
        {
          a2 = result;
          v15 = (unsigned __int8)*result++;
          v14 = v15;
        }
        while ( v15 <= 0x7F && (dword_69A0C[v14] & 0x500) != 0 );
        if ( v14 )
        {
          if ( v14 != 44 )
            continue;
          v16 = a2 + 1;
          do
          {
            a2 = v16;
            v18 = *v16++;
            v17 = v18;
            if ( v18 > 0x7F )
              break;
            result = (char *)dword_69A0C[v17];
          }
          while ( ((unsigned __int16)result & 0x500) != 0 );
          if ( v17 )
            continue;
        }
        if ( v25 )
        {
          result = (char *)&unk_69C30;
          v19 = v25;
          do
          {
            if ( (v19 & 1) != 0 )
            {
              v20 = *((_DWORD *)result - 2);
              v21 = *((_DWORD *)v24 + 3);
              if ( (v20 & 1) != 0 )
                v22 = v21 & v20;
              else
                v22 = v21 | v20;
              *((_DWORD *)v24 + 3) = v22;
            }
            v19 >>= 1;
            result += 12;
          }
          while ( v19 );
        }
        return result;
      }
    }
  }
  return result;
}
