unsigned int __fastcall sub_48490(unsigned int result, _DWORD *a2, const char **a3, unsigned int a4)
{
  unsigned int v4; // r8
  const char *v8; // r5
  int v9; // r10
  const char *v10; // r7
  size_t v11; // r0
  int v12; // r11
  const char *v13; // r5
  _BOOL4 v14; // r11
  signed int v15; // r6
  const char *v16; // r0
  int v17; // r5
  size_t v18; // r10
  unsigned int v19; // r6
  int v20; // r8
  _DWORD *v21; // r10
  _DWORD *v22; // r10
  unsigned int v23; // r5
  int v24; // r8
  unsigned int v25; // r6
  size_t v26; // r0
  size_t v27; // r0
  unsigned int v28; // r5
  int v29; // r6
  int v30; // r3
  int v31; // r8
  char *endptr; // [sp+14h] [bp-88h] BYREF
  _BYTE dest[132]; // [sp+18h] [bp-84h] BYREF

  v4 = result;
  switch ( result )
  {
    case 2u:
      v28 = a2[7] & ~(-1 << a4);
      if ( v28 )
      {
        v29 = 0;
        v30 = 0;
        do
        {
          v31 = v30 + 1;
          if ( (v28 & 1) != 0 )
          {
            if ( v30 )
              fwrite(" | ", 1u, 3u, (FILE *)stdout);
            result = fputs(a3[v29], (FILE *)stdout);
            v30 = v31;
          }
          if ( a4 <= ++v29 )
            break;
          v28 >>= 1;
        }
        while ( v28 );
      }
      break;
    case 3u:
      v17 = ~(-1 << a4);
      v18 = 5;
      v19 = v17 & a2[7];
      if ( v19 )
      {
        v20 = 0;
        do
        {
          if ( (v19 & 1) != 0 )
            v18 += 3 + strlen(a3[v20]);
          if ( a4 <= ++v20 )
            break;
          v19 >>= 1;
        }
        while ( v19 );
      }
      v21 = sub_44484(v18);
      a2[6] = v21;
      result = *(_DWORD *)"none";
      *v21 = *(_DWORD *)"none";
      v22 = v21 + 1;
      v23 = v17 & a2[7];
      if ( v23 )
      {
        v24 = 0;
        v25 = 0;
        do
        {
          ++v25;
          if ( (v23 & 1) != 0 )
          {
            v26 = strlen(a3[v24]);
            *(_WORD *)v22 = 11040;
            *((_BYTE *)v22 + 2) = 32;
            memcpy((char *)v22 + 3, a3[v24], v26);
            v27 = strlen(a3[v24++]);
            result = v27 + 3;
            v22 = (_DWORD *)((char *)v22 + result);
            if ( a4 <= v25 )
              break;
          }
          else
          {
            ++v24;
            if ( a4 <= v25 )
              break;
          }
          v23 >>= 1;
        }
        while ( v23 );
      }
      *(_BYTE *)v22 = 0;
      return result;
    case 1u:
      return sub_426A4(1u, a2, a3, a4);
    default:
      if ( (a2[4] & 8) == 0 )
      {
        v8 = (const char *)a2[6];
        if ( !v8 || !*v8 )
        {
LABEL_58:
          a2[7] = 0;
          return result;
        }
        v9 = a2[7];
        while ( 1 )
        {
          v11 = strspn(v8, accept);
          v12 = (unsigned __int8)v8[v11];
          v13 = &v8[v11];
          v14 = v12 == 33;
          if ( v14 )
            v13 += strspn(v13 + 1, accept) + 1;
          result = strcspn(v13, accept);
          v15 = result;
          switch ( result )
          {
            case 0u:
LABEL_27:
              if ( a4 <= 0x1F )
                v9 &= ~(-1 << a4);
              a2[7] = v9;
              return result;
            case 3u:
              result = strncmp(v13, off_7B87C[0], 3u);
              if ( !result )
              {
                v10 = v13 + 3;
                if ( v14 )
                  v9 = 0;
                else
                  v9 = -1;
                goto LABEL_11;
              }
              break;
            case 4u:
              result = strncmp(v13, off_7B984[0], 4u);
              if ( !result )
              {
                v10 = v13 + 4;
                if ( !v14 )
                  v9 = 0;
                goto LABEL_11;
              }
              break;
          }
          v10 = &v13[v15];
          result = strtoul(v13, &endptr, 0);
          if ( &v13[v15] != endptr )
          {
            if ( *endptr )
            {
              if ( v15 > 126 )
                goto LABEL_11;
              memcpy(dest, v13, v15);
              v16 = dest;
              dest[v15] = 0;
            }
            else
            {
              v16 = v13;
            }
            result = sub_43F28(v16, v4, a2, a3, a4);
            if ( a4 <= result )
              goto LABEL_58;
            result = 1 << result;
          }
          if ( v14 )
            v9 &= ~result;
          else
            v9 |= result;
LABEL_11:
          if ( !*v10 )
            goto LABEL_27;
          v8 = &v13[v15 + 1];
        }
      }
      break;
  }
  return result;
}
