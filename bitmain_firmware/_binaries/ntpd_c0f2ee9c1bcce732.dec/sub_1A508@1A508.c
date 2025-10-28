size_t __fastcall sub_1A508(int a1)
{
  size_t result; // r0
  char *v2; // r4
  __int16 v3; // r3
  int v4; // r5
  unsigned __int8 *v5; // r1
  int v6; // r2
  bool v7; // zf
  int v8; // r2
  unsigned __int8 *v9; // r3
  unsigned __int8 *v10; // r2
  int v11; // r12
  int v12; // t1
  bool v13; // zf
  size_t v14; // r3
  int v15; // r2
  bool v16; // zf
  char *v17; // r0
  __int16 v18; // r3
  char *v19; // r6
  const char **v20; // r5
  size_t v21; // r0
  const void *v22; // r1
  size_t v23; // r3
  size_t v24; // r2
  char *v25; // r0
  _BYTE *v26; // r0
  _BYTE *v27; // r0
  _BYTE *v28; // r0
  int v29; // r1
  char s[468]; // [sp+Ch] [bp-1D4h] BYREF
  _BYTE vars0[24]; // [sp+1E0h] [bp+0h] BYREF

  result = a1 - 1;
  switch ( result )
  {
    case 0u:
      result = (size_t)sub_1A444(off_79E5C, (unsigned __int8)byte_CB4B0);
      break;
    case 1u:
      result = (size_t)sub_1A444(off_79E64, (unsigned __int8)byte_CB4FC);
      break;
    case 2u:
      result = (size_t)sub_19E64(off_79E6C, byte_CB478);
      break;
    case 3u:
      result = (size_t)sub_1A270(off_79E74);
      break;
    case 4u:
      result = (size_t)sub_1A270(off_79E7C);
      break;
    case 5u:
      if ( (unsigned int)(unsigned __int8)byte_CB4FC - 2 > 0xD )
        result = (size_t)sub_1A010((unsigned __int8 *)off_79E84, dword_CB4E0);
      else
        result = (size_t)sub_19F28(off_79E84, dword_CB4E0, 0);
      break;
    case 6u:
      result = (size_t)sub_1A104(off_79E8C, &dword_CB500);
      break;
    case 7u:
      result = (size_t)sub_1A444(off_79E94, (unsigned __int8)byte_CABC8);
      break;
    case 8u:
      v29 = dword_CB470;
      if ( dword_CB470 )
        v29 = *(unsigned __int16 *)(dword_CB470 + 44);
      result = (size_t)sub_1A444((char *)off_79E9C, v29);
      break;
    case 9u:
      result = (size_t)sub_1A270(off_79EA4);
      break;
    case 0xAu:
      result = (size_t)sub_1A270(off_79EAC);
      break;
    case 0xBu:
      result = (size_t)sub_1A270(off_79EB4);
      break;
    case 0xCu:
      result = (size_t)sub_1A270(off_79EBC);
      break;
    case 0xDu:
      sub_4CBA8(s);
      result = (size_t)sub_1A104((char *)off_79EC4, s);
      break;
    case 0xEu:
      v28 = (_BYTE *)strlen(byte_7D29C);
      result = (size_t)sub_1A1D0(off_79ECC, byte_7D29C, v28);
      break;
    case 0xFu:
      snprintf(s, 0x100u, "%s/%s", byte_7D198, byte_7D21A);
      v27 = (_BYTE *)strlen(s);
      result = (size_t)sub_1A1D0(off_79ED4, s, v27);
      break;
    case 0x10u:
      v26 = (_BYTE *)strlen(off_79E4C);
      result = (size_t)sub_1A1D0(off_79EDC, off_79E4C, v26);
      break;
    case 0x11u:
      result = (size_t)sub_1A270(off_79EE4);
      break;
    case 0x12u:
      result = strlen(off_79EEC) + 4;
      if ( vars0 >= &s[result] )
      {
        snprintf(s, 0x1D4u, "%s=\"", off_79EEC);
        result = strlen(s);
        LOBYTE(v18) = word_79E52;
        v19 = &s[result];
        if ( (word_79E52 & 0x80) != 0 )
        {
          v2 = &s[result];
        }
        else
        {
          v20 = (const char **)&unk_79E58;
          v2 = &s[result];
          do
          {
            if ( (v18 & 0x40) == 0 )
            {
              v21 = strlen(*(v20 - 1));
              v22 = *(v20 - 1);
              v23 = v21;
              v24 = v21;
              result = (size_t)&v2[v21 + 1];
              if ( (unsigned int)vars0 <= result )
                break;
              if ( v2 != v19 )
                *v2++ = 44;
              v25 = v2;
              v2 += v23;
              result = (size_t)memcpy(v25, v22, v24);
            }
            v18 = *((_WORD *)v20 + 1);
            v20 += 2;
          }
          while ( (v18 & 0x80) == 0 );
        }
        if ( dword_7D320 )
        {
          v3 = *(_WORD *)(dword_7D320 + 2);
          if ( (v3 & 0x80) == 0 )
          {
            v4 = dword_7D320 + 8;
            while ( 1 )
            {
              if ( (v3 & 0x40) == 0 )
              {
                v5 = *(unsigned __int8 **)(v4 - 4);
                if ( v5 )
                {
                  v6 = *v5;
                  v7 = v6 == 0;
                  if ( *v5 )
                    v7 = v6 == 61;
                  v8 = !v7;
                  if ( v7 )
                  {
                    v14 = v8;
                    v15 = 1;
                  }
                  else
                  {
                    v9 = v5 + 1;
                    do
                    {
                      v10 = v9;
                      v12 = *v9++;
                      v11 = v12;
                      v13 = v12 == 61;
                      if ( v12 != 61 )
                        v13 = v11 == 0;
                    }
                    while ( !v13 );
                    v14 = v10 - v5;
                    v15 = v10 - v5 + 1;
                  }
                  result = (size_t)vars0;
                  if ( vars0 <= &v2[v15] )
                    break;
                  v16 = v2 == v19;
                  if ( v2 != v19 )
                    *v2++ = 44;
                  v17 = v2;
                  if ( !v16 )
                    v5 = *(unsigned __int8 **)(v4 - 4);
                  v2 += v14;
                  result = (size_t)memcpy(v17, v5, v14);
                }
              }
              if ( v4 )
              {
                v3 = *(_WORD *)(v4 + 2);
                v4 += 8;
                if ( (v3 & 0x80) == 0 )
                  continue;
              }
              break;
            }
          }
        }
        if ( vars0 > v2 + 2 )
        {
          *v2 = 34;
          v2[1] = 0;
          result = (size_t)sub_19D60(s, v2 + 1 - s, 0);
        }
      }
      break;
    case 0x13u:
      if ( dword_CABCC )
        result = (size_t)sub_1A444(off_79EF4, dword_CABCC);
      break;
    case 0x14u:
      if ( dword_CB4D8 )
        result = (size_t)sub_1A33C(off_79EFC, dword_CB4D8);
      break;
    case 0x15u:
      if ( dword_CB4F0 )
        result = (size_t)sub_1A33C(off_79F04, dword_CB4F0);
      break;
    case 0x16u:
      result = (size_t)sub_1A444(off_79F0C, dword_7A1C8);
      break;
    default:
      return result;
  }
  return result;
}
