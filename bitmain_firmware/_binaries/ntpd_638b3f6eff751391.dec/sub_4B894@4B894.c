int *__fastcall sub_4B894(unsigned __int8 *a1)
{
  unsigned __int8 *v1; // r4
  unsigned int v2; // r3
  unsigned __int8 *v3; // r1
  unsigned int v4; // r3
  unsigned int v5; // t1
  unsigned __int8 *v6; // r12
  int v7; // r5
  unsigned __int8 *v8; // r1
  unsigned int v9; // r3
  unsigned int v10; // t1
  unsigned __int8 *v11; // lr
  unsigned int v12; // r3
  unsigned int v13; // t1
  int *v14; // r0
  int *v15; // r6
  int v16; // r3
  int *v17; // r5
  unsigned int v18; // r3
  unsigned __int8 *v19; // r1
  unsigned int v20; // r3
  int v22; // r3
  unsigned __int8 *v23; // r2
  int *v24; // r0
  int v25; // r3
  int v26; // t1
  int v27; // t1
  int v28; // r0
  unsigned int v29; // r1
  char v30; // [sp+7h] [bp-1h] BYREF

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( v2 <= 0x7F && (dword_69A0C[v2] & 0x500) != 0 )
    {
      v3 = a1 + 1;
      do
      {
        a1 = v3;
        v5 = *v3++;
        v4 = v5;
      }
      while ( v5 <= 0x7F && (dword_69A0C[v4] & 0x500) != 0 );
      if ( v4 )
      {
LABEL_7:
        v6 = a1;
        v7 = 2;
        do
        {
          ++v7;
          v8 = v6 + 1;
          while ( 1 )
          {
            v6 = v8;
            v10 = *v8++;
            v9 = v10;
            if ( v10 <= 0x7F && (dword_69A0C[v9] & 0x500) != 0 )
              break;
            if ( !v9 )
              goto LABEL_15;
          }
          v11 = v8;
          do
          {
            v6 = v11;
            v13 = *v11++;
            v12 = v13;
          }
          while ( v13 <= 0x7F && (dword_69A0C[v12] & 0x500) != 0 );
        }
        while ( v12 );
LABEL_15:
        v14 = (int *)sub_44484(4 * v7 + 8 + v6 - a1);
        v15 = v14;
        if ( !v14 )
        {
          v15 = 0;
          *_errno_location() = 12;
          return v15;
        }
        v16 = 0;
        v17 = &v14[v7];
        v14[1] = (int)v17;
        while ( 1 )
        {
          *v15 = v16 + 1;
          v15[v16 + 1] = (int)v17;
          v18 = *v1;
          while ( v18 > 0x7F || (dword_69A0C[v18] & 0x500) == 0 )
          {
            switch ( v18 )
            {
              case 0x22u:
                ++v1;
LABEL_40:
                v26 = *v1++;
                v25 = v26;
                v30 = v26;
                if ( v26 != 34 )
                {
                  do
                  {
                    if ( v25 == 92 )
                    {
                      v28 = sub_4717C(v1, &v30, 127);
                      LOBYTE(v25) = v30;
                      v1 += v28;
                      if ( v30 == 127 )
                        goto LABEL_40;
                    }
                    else if ( !v25 )
                    {
                      goto LABEL_38;
                    }
                    *(_BYTE *)v17 = v25;
                    v17 = (int *)((char *)v17 + 1);
                    v27 = *v1++;
                    v25 = v27;
                    v30 = v27;
                  }
                  while ( v27 != 34 );
                }
LABEL_44:
                if ( !v1 )
                {
LABEL_38:
                  v24 = v15;
                  v15 = 0;
                  free(v24);
                  *_errno_location() = 22;
                  return v15;
                }
                v18 = *v1;
                if ( v18 <= 0x7F && (dword_69A0C[v18] & 0x500) != 0 )
                  goto LABEL_20;
                break;
              case 0x27u:
                v22 = v1[1];
                v23 = v1 + 1;
                while ( 1 )
                {
                  v1 = v23 + 1;
                  if ( v22 == 39 )
                    goto LABEL_44;
                  if ( v22 != 92 )
                    break;
                  v29 = v23[1];
                  if ( v29 == 13 )
                  {
                    v22 = v23[2];
                    if ( v22 == 10 )
                    {
                      v22 = v23[3];
                      v23 += 3;
                    }
                    else
                    {
                      v23 += 2;
                    }
                  }
                  else if ( v29 > 0xD )
                  {
                    if ( v29 == 39 )
                    {
                      LOBYTE(v22) = 39;
LABEL_49:
                      v1 = v23 + 2;
                      goto LABEL_50;
                    }
                    if ( v29 == 92 )
                      goto LABEL_49;
                    *(_BYTE *)v17 = 92;
                    v17 = (int *)((char *)v17 + 1);
                    ++v23;
                    v22 = *v1;
                  }
                  else
                  {
                    if ( !v23[1] )
                      goto LABEL_38;
                    if ( v29 == 10 )
                    {
                      v22 = v23[2];
                      v23 += 2;
                    }
                    else
                    {
LABEL_50:
                      *(_BYTE *)v17 = v22;
                      v17 = (int *)((char *)v17 + 1);
                      v23 = v1;
                      v22 = *v1;
                    }
                  }
                }
                if ( !v22 )
                  goto LABEL_38;
                goto LABEL_50;
              case 0u:
                goto LABEL_23;
              default:
                *(_BYTE *)v17 = v18;
                v17 = (int *)((char *)v17 + 1);
                v18 = *++v1;
                break;
            }
          }
LABEL_20:
          v19 = v1;
          do
          {
            v20 = v19[1];
            v19 = ++v1;
          }
          while ( v20 <= 0x7F && (dword_69A0C[v20] & 0x500) != 0 );
LABEL_23:
          *(_BYTE *)v17 = 0;
          v17 = (int *)((char *)v17 + 1);
          if ( !*v1 )
          {
            v15[*v15 + 1] = *v1;
            return v15;
          }
          v16 = *v15;
        }
      }
    }
    else if ( *a1 )
    {
      goto LABEL_7;
    }
  }
  v15 = 0;
  *_errno_location() = 2;
  return v15;
}
