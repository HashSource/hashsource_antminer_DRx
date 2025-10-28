unsigned __int8 *__fastcall sub_C244(int a1, _BYTE *a2)
{
  unsigned __int8 *v2; // r8
  _BYTE *v5; // r2
  int v6; // r0
  int v7; // r3
  bool v8; // zf
  bool v9; // zf
  _BYTE *v10; // r0
  _BYTE *v11; // r5
  int v12; // r2
  bool *v13; // r11
  int v14; // r12
  bool v15; // zf
  bool v16; // r3
  unsigned __int8 *v17; // r1
  int v18; // r3
  int v20; // r0
  unsigned int v21; // r6
  bool v22; // cc
  int v23; // r0
  int v24; // r3
  _BYTE *v25; // r11
  int v26; // r0
  char v27; // r2
  _BYTE *v28; // r8
  char v29; // r11
  _BYTE *v30; // r2
  char v31; // r2
  int v32; // [sp+4h] [bp-8h]

  v2 = a2 + 1;
  if ( *a2 != 34 )
  {
    v2 = 0;
    dword_1B3A4 = (int)a2;
    return v2;
  }
  v5 = a2 + 1;
  v6 = 0;
  while ( 1 )
  {
    v7 = (unsigned __int8)*v5;
    v8 = v7 == 0;
    if ( *v5 )
      v8 = v7 == 34;
    if ( v8 )
      break;
    while ( 1 )
    {
      ++v6;
      if ( v7 != 92 )
        break;
      v5 += 2;
      v7 = (unsigned __int8)*v5;
      v9 = v7 == 0;
      if ( *v5 )
        v9 = v7 == 34;
      if ( v9 )
        goto LABEL_13;
    }
    ++v5;
  }
LABEL_13:
  v10 = off_1B374(v6 + 1);
  v11 = v10;
  if ( !v10 )
    return 0;
  v12 = (unsigned __int8)a2[1];
  v13 = v10;
  v14 = 12;
  while ( 1 )
  {
    v15 = v12 == 0;
    if ( v12 )
      v15 = v12 == 34;
    v16 = !v15;
    if ( v15 )
      break;
    if ( v12 == 92 )
    {
      v17 = v2 + 1;
      switch ( v2[1] )
      {
        case 'b':
          *v13++ = 8;
          v12 = v2[2];
          goto LABEL_38;
        case 'f':
          *v13++ = v14;
          v12 = v2[2];
          goto LABEL_38;
        case 'n':
          *v13++ = 10;
          v12 = v2[2];
          goto LABEL_38;
        case 'r':
          *v13++ = 13;
          v12 = v2[2];
          goto LABEL_38;
        case 't':
          *v13++ = 9;
          v12 = v2[2];
          goto LABEL_38;
        case 'u':
          v32 = v14;
          v20 = sub_C130(v2 + 2);
          v17 = v2 + 5;
          v14 = v32;
          v21 = v20;
          v22 = v20 != 0;
          if ( v20 )
            v22 = (unsigned int)(v20 - 56320) > 0x3FF;
          if ( !v22 )
          {
            v12 = v2[6];
            goto LABEL_38;
          }
          if ( (unsigned int)(v20 - 55296) > 0x3FF )
            goto LABEL_45;
          v12 = v2[6];
          if ( v12 == 92 && v2[7] == 117 )
          {
            v23 = sub_C130(v2 + 8);
            v17 = v2 + 11;
            v14 = v32;
            if ( (unsigned int)(v23 - 56320) > 0x3FF )
            {
              v12 = v2[12];
              goto LABEL_38;
            }
            v21 = (v23 & 0x3FF | ((v21 & 0x3FF) << 10)) + 0x10000;
LABEL_45:
            if ( v21 <= 0x7F )
            {
              v24 = 1;
              v30 = v13 + 1;
              v26 = 1;
            }
            else
            {
              if ( v21 <= 0x7FF )
              {
                v24 = 2;
                v28 = v13 + 2;
                v26 = 2;
              }
              else
              {
                if ( v21 > 0xFFFF )
                {
                  v24 = 4;
                  v31 = v21 & 0x3F | 0x80;
                  v21 >>= 6;
                  v13[3] = v31;
                  v26 = 4;
                  v25 = v13 + 3;
                }
                else
                {
                  v24 = 3;
                  v25 = v13 + 3;
                  v26 = 3;
                }
                v27 = v21 & 0x3F;
                v28 = v25 - 1;
                v21 >>= 6;
                *(v25 - 1) = v27 | 0x80;
              }
              v29 = v21 & 0x3F;
              v30 = v28 - 1;
              v21 >>= 6;
              *(v28 - 1) = v29 | 0x80;
            }
            v13 = &v30[v24 - 1];
            *(v30 - 1) = v21 | byte_1190C[v26];
            v12 = v17[1];
          }
LABEL_38:
          v2 = v17 + 1;
          break;
        default:
          *v13++ = v2[1];
          v12 = v2[2];
          goto LABEL_38;
      }
    }
    else
    {
      *v13++ = v12;
      v12 = *++v2;
    }
  }
  *v13 = v16;
  v18 = *v2;
  *(_DWORD *)(a1 + 16) = v11;
  if ( v18 == 34 )
    ++v2;
  *(_DWORD *)(a1 + 12) = 4;
  return v2;
}
