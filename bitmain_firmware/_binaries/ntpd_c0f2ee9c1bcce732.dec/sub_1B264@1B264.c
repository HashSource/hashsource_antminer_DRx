size_t __fastcall sub_1B264(int a1, unsigned __int8 *a2, int a3)
{
  size_t result; // r0
  char *v5; // r5
  int v6; // r4
  __int16 v7; // r3
  char v8; // r6
  int v9; // r4
  unsigned __int8 *v10; // r1
  int v11; // r2
  bool v12; // zf
  int v13; // r2
  unsigned __int8 *v14; // r3
  unsigned __int8 *v15; // r2
  int v16; // r12
  int v17; // t1
  bool v18; // zf
  size_t v19; // r10
  int v20; // r3
  __int16 v21; // r3
  char *v22; // r7
  const char **v23; // r6
  size_t v24; // r0
  const void *v25; // r1
  size_t v26; // r3
  size_t v27; // r2
  char *v28; // r0
  _BYTE *v29; // r3
  _BYTE *v30; // r4
  _BYTE *v31; // r0
  char s[468]; // [sp+4h] [bp-1D8h] BYREF
  char v33; // [sp+1D8h] [bp-4h] BYREF

  result = a1 - 1;
  switch ( result )
  {
    case 0u:
      if ( a3 || (v29 = (_BYTE *)*((_DWORD *)a2 + 8)) == 0 || !*v29 )
        result = (size_t)sub_1A444((char *)off_7A07C, *a2);
      break;
    case 1u:
      result = (size_t)sub_1A1D0(off_7A084, *((const void **)a2 + 2), (_BYTE *)*((unsigned __int16 *)a2 + 2));
      break;
    case 2u:
      result = (size_t)sub_1A444(off_7A08C, *((_DWORD *)a2 + 3));
      break;
    case 3u:
      result = (size_t)sub_1A444(off_7A094, *((_DWORD *)a2 + 4));
      break;
    case 4u:
      result = (size_t)sub_1A444(off_7A09C, *((_DWORD *)a2 + 5));
      break;
    case 5u:
      result = (size_t)sub_1A444(off_7A0A4, *((_DWORD *)a2 + 6));
      break;
    case 6u:
      if ( a3 || (a2[2] & 1) != 0 )
        result = (size_t)sub_1A270(off_7A0AC);
      break;
    case 7u:
      if ( a3 || (a2[2] & 2) != 0 )
        result = (size_t)sub_1A270(off_7A0B4);
      break;
    case 8u:
      if ( a3 || (a2[2] & 4) != 0 )
        result = (size_t)sub_19E64(off_7A0BC, *((_DWORD *)a2 + 14));
      break;
    case 9u:
      if ( a3 || (a2[2] & 8) != 0 )
      {
        if ( *((int *)a2 + 14) <= 1 )
          result = (size_t)sub_1A010((unsigned __int8 *)off_7A0C4, *((_DWORD *)a2 + 15));
        else
          result = (size_t)sub_19F28(off_7A0C4, *((_DWORD *)a2 + 15), 0);
      }
      break;
    case 0xAu:
      if ( a3 || (a2[2] & 0xF0) != 0 )
        result = (size_t)sub_1A444(off_7A0CC, a2[1]);
      break;
    case 0xBu:
      v30 = (_BYTE *)*((_DWORD *)a2 + 8);
      if ( v30 && *v30 )
      {
        v31 = (_BYTE *)strlen(*((const char **)a2 + 8));
        result = (size_t)sub_1A1D0(off_7A0D4, v30, v31);
      }
      else if ( a3 )
      {
        result = (size_t)sub_1A1D0(off_7A0D4, &unk_665CC, 0);
      }
      break;
    case 0xCu:
      result = strlen(off_7A0DC) + 4;
      if ( &v33 >= &s[result] )
      {
        snprintf(s, 0x1D4u, "%s=\"", off_7A0DC);
        result = strlen(s);
        LOBYTE(v21) = word_7A072;
        v22 = &s[result];
        if ( (word_7A072 & 0x80) != 0 )
        {
          v5 = &s[result];
        }
        else
        {
          v23 = (const char **)&unk_7A078;
          v5 = &s[result];
          do
          {
            if ( (v21 & 0x40) == 0 )
            {
              v24 = strlen(*(v23 - 1));
              v25 = *(v23 - 1);
              v26 = v24;
              v27 = v24;
              result = (size_t)&v5[v24 + 1];
              if ( (unsigned int)&v33 <= result )
                break;
              if ( v5 != v22 )
                *v5++ = 44;
              v28 = v5;
              v5 += v26;
              result = (size_t)memcpy(v28, v25, v27);
            }
            v21 = *((_WORD *)v23 + 1);
            v23 += 2;
          }
          while ( (v21 & 0x80) == 0 );
        }
        v6 = *((_DWORD *)a2 + 17);
        if ( v6 )
        {
          v7 = *(_WORD *)(v6 + 2);
          v8 = v7 & 0x80;
          if ( (v7 & 0x80) == 0 )
          {
            v9 = v6 + 8;
            while ( 1 )
            {
              if ( (v7 & 0x40) == 0 )
              {
                v10 = *(unsigned __int8 **)(v9 - 4);
                if ( v10 )
                {
                  v11 = *v10;
                  v12 = v11 == 0;
                  if ( *v10 )
                    v12 = v11 == 61;
                  v13 = !v12;
                  if ( v12 )
                  {
                    v19 = v13;
                    v20 = 1;
                  }
                  else
                  {
                    v14 = v10 + 1;
                    do
                    {
                      v15 = v14;
                      v17 = *v14++;
                      v16 = v17;
                      v18 = v17 == 61;
                      if ( v17 != 61 )
                        v18 = v16 == 0;
                    }
                    while ( !v18 );
                    v19 = v15 - v10;
                    v20 = v15 - v10 + 1;
                  }
                  if ( &v33 <= &v5[v20] )
                    break;
                  if ( v5 != v22 )
                  {
                    *v5++ = 44;
                    v10 = *(unsigned __int8 **)(v9 - 4);
                  }
                  result = (size_t)memcpy(v5, v10, v19);
                  v5[v19] = v8;
                  v5 += v19;
                }
              }
              if ( v9 )
              {
                v7 = *(_WORD *)(v9 + 2);
                v9 += 8;
                if ( (v7 & 0x80) == 0 )
                  continue;
              }
              break;
            }
          }
        }
        if ( &v33 > v5 + 2 )
        {
          *v5 = 34;
          v5[1] = 0;
          result = (size_t)sub_19D60(s, v5 + 1 - s, 0);
        }
      }
      break;
    default:
      return result;
  }
  return result;
}
