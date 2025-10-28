void sub_1C2A8()
{
  char v0; // r4
  unsigned int v1; // r0
  int v2; // r2
  int v3; // r3
  __int16 v4; // r1
  size_t v5; // r4
  int v6; // r7
  unsigned __int8 *v7; // r6
  unsigned __int16 *v8; // r0
  unsigned __int16 *v9; // r0
  int v10; // r0
  int v11; // r6
  unsigned int v12; // r0
  int v13; // r8
  unsigned __int8 *v14; // r7
  unsigned __int16 *v15; // r0
  int v16; // r0
  char *v17; // r5
  int v18; // t1
  unsigned __int8 *v19; // r7
  int i; // r4
  int v22; // r0
  int v23; // r2
  int v24; // r1
  int v25; // r4
  char *v26; // r7
  size_t v27; // r0
  int v28; // r0
  char *v29; // r4
  int v30; // t1
  __int16 v31; // r3
  int v32; // r4
  size_t v33; // r0
  unsigned __int8 *v34; // r5
  int j; // r4
  _DWORD v37[2]; // [sp+4h] [bp-8h] BYREF

  v0 = word_7D3AC;
  if ( !word_7D3AC )
  {
    v1 = sub_1C21C();
    if ( byte_7D3AF )
      byte_7D3B0 = v0;
    word_7CF78 = ((_WORD)v1 << 8) | (v1 >> 8);
    if ( !dword_7D320 || (v2 = *(_WORD *)(dword_7D320 + 2) & 0x80, (*(_WORD *)(dword_7D320 + 2) & 0x80) != 0) )
    {
      v5 = 42;
    }
    else
    {
      v3 = dword_7D320 + 16;
      do
      {
        v4 = *(_WORD *)(v3 - 6);
        ++v2;
        v3 += 8;
      }
      while ( (v4 & 0x80) == 0 );
      v5 = v2 + 42;
    }
    v6 = 0;
    v7 = (unsigned __int8 *)sub_4F524(v5);
    memset(v7, 0, v5);
    while ( 1 )
    {
      v8 = (unsigned __int16 *)sub_1B77C((int)&unk_79E50, v37);
      if ( !v8 )
        break;
      if ( (v8[1] & 0x80) != 0 )
      {
        v9 = (unsigned __int16 *)sub_1B77C(dword_7D320, v37);
        if ( !v9 )
          break;
        if ( (v9[1] & 0x80) != 0 )
        {
          sub_1B684(5);
          free(v7);
          return;
        }
        v7[*v9 + 24] = 1;
      }
      else
      {
        v7[*v8] = 1;
      }
      v6 = 1;
    }
    if ( v6 )
    {
      v19 = v7;
      for ( i = 1; i != 24; ++i )
      {
        while ( !*++v19 )
        {
          if ( ++i == 24 )
            goto LABEL_37;
        }
        v22 = i;
        sub_1A508(v22);
      }
LABEL_37:
      v23 = dword_7D320;
      if ( dword_7D320 )
      {
        v24 = *(_WORD *)(dword_7D320 + 2) & 0x80;
        if ( (*(_WORD *)(dword_7D320 + 2) & 0x80) == 0 )
        {
          v25 = *(_WORD *)(dword_7D320 + 2) & 0x80;
          do
          {
            ++v25;
            if ( v7[v24 + 24] )
            {
              v26 = *(char **)(v23 + 4);
              v27 = strlen(v26);
              sub_19D60(v26, v27, 0);
            }
            v24 = v25;
            v23 = dword_7D320 + 8 * v25;
          }
          while ( dword_7D320 && (*(_WORD *)(v23 + 2) & 0x80) == 0 );
        }
      }
    }
    else
    {
      v28 = (unsigned __int8)byte_7A148;
      if ( byte_7A148 )
      {
        v29 = &byte_7A148;
        do
        {
          sub_1A508(v28);
          v30 = (unsigned __int8)*++v29;
          v28 = v30;
        }
        while ( v30 );
      }
      if ( dword_7D320 )
      {
        v31 = *(_WORD *)(dword_7D320 + 2);
        if ( (v31 & 0x80) == 0 )
        {
          v32 = dword_7D320 + 8;
          do
          {
            if ( (v31 & 0x20) != 0 )
            {
              v33 = strlen(*(const char **)(v32 - 4));
              sub_19D60(*(void **)(v32 - 4), v33, 0);
            }
            if ( !v32 )
              break;
            v31 = *(_WORD *)(v32 + 2);
            v32 += 8;
          }
          while ( (v31 & 0x80) == 0 );
        }
      }
    }
    free(v7);
LABEL_31:
    sub_19AF8(0);
    return;
  }
  v10 = sub_21604((unsigned __int16)word_7D3AC);
  v11 = v10;
  if ( v10 )
  {
    v12 = sub_1C1BC(v10);
    v13 = 0;
    word_7CF78 = ((_WORD)v12 << 8) | (v12 >> 8);
    if ( byte_7D3AF )
      *(_BYTE *)(v11 + 58) = 0;
    v14 = (unsigned __int8 *)sub_4F524(42);
    memset(v14, 0, 0x2Au);
    while ( 1 )
    {
      v15 = (unsigned __int16 *)sub_1B77C((int)&unk_79F18, v37);
      if ( !v15 )
        break;
      v13 = 1;
      if ( (v15[1] & 0x80) != 0 )
      {
        sub_1B684(5);
        free(v14);
        return;
      }
      v14[*v15] = 1;
    }
    if ( v13 )
    {
      v34 = v14;
      for ( j = 1; j != 42; ++j )
      {
        if ( *++v34 )
          sub_1AC4C(j, v11);
      }
    }
    else
    {
      v16 = (unsigned __int8)byte_7A160;
      if ( byte_7A160 )
      {
        v17 = &byte_7A160;
        do
        {
          sub_1AC4C(v16, v11);
          v18 = (unsigned __int8)*++v17;
          v16 = v18;
        }
        while ( v18 );
      }
    }
    free(v14);
    goto LABEL_31;
  }
  sub_1B684(4);
}
