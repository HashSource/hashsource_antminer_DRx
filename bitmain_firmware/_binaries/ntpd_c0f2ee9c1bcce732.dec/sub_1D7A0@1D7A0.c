void sub_1D7A0()
{
  int v0; // r0
  int v1; // r2
  void **v2; // r3
  __int16 v3; // r1
  size_t v4; // r6
  int v5; // r5
  unsigned __int8 *v6; // r4
  unsigned __int16 *v7; // r0
  unsigned __int16 *v8; // r0
  int *v9; // r2
  int v10; // t1
  unsigned __int8 *v11; // r6
  int i; // r5
  int v14; // r0
  void **v15; // r3
  void **v16; // r2
  int v17; // r1
  int v18; // r5
  char *v19; // r6
  size_t v20; // r0
  int v21; // r0
  char *v22; // r5
  int v23; // t1
  __int16 v24; // r3
  void **v25; // r5
  size_t v26; // r0
  int v27; // [sp+4h] [bp-4Ch] BYREF
  unsigned __int8 v28[68]; // [sp+8h] [bp-48h] BYREF
  void **v29; // [sp+4Ch] [bp-4h]

  if ( word_7D3AC )
  {
    v0 = sub_21604((unsigned __int16)word_7D3AC);
    if ( !v0 || (*(_DWORD *)(v0 + 52) & 8) == 0 )
    {
LABEL_28:
      sub_1B684(4);
      return;
    }
  }
  else
  {
    v0 = dword_CB470;
    if ( !dword_CB470 || (*(_DWORD *)(dword_CB470 + 52) & 8) == 0 )
    {
      v9 = &dword_CB038;
      while ( 1 )
      {
        v10 = v9[1];
        ++v9;
        v0 = v10;
        if ( v10 )
          break;
LABEL_23:
        if ( v9 == (int *)&unk_CB238 )
          goto LABEL_28;
      }
      while ( (*(_DWORD *)(v0 + 52) & 8) == 0 )
      {
        v0 = *(_DWORD *)(v0 + 4);
        if ( !v0 )
          goto LABEL_23;
      }
    }
  }
  v29 = 0;
  sub_27E00(v0 + 12, 0, v28);
  word_7CF78 = (v28[64] & 0xF | (unsigned __int8)(16 * v28[65])) << 8;
  if ( !v29 || (v1 = *((_WORD *)v29 + 1) & 0x80, (*((_WORD *)v29 + 1) & 0x80) != 0) )
  {
    v4 = 14;
  }
  else
  {
    v2 = v29 + 4;
    do
    {
      v3 = *((_WORD *)v2 - 3);
      ++v1;
      v2 += 2;
    }
    while ( (v3 & 0x80) == 0 );
    v4 = v1 + 14;
  }
  v5 = 0;
  v6 = (unsigned __int8 *)sub_4F524(v4);
  memset(v6, 0, v4);
  while ( 1 )
  {
    v7 = (unsigned __int16 *)sub_1B77C((int)&unk_7A070, &v27);
    if ( !v7 )
      break;
    if ( (v7[1] & 0x80) != 0 )
    {
      v8 = (unsigned __int16 *)sub_1B77C((int)v29, &v27);
      if ( !v8 )
        break;
      if ( (v8[1] & 0x80) != 0 )
      {
        sub_1B684(5);
        free(v6);
        sub_1D394(v29);
        return;
      }
      v6[*v8 + 14] = 1;
    }
    else
    {
      v6[*v7] = 1;
    }
    v5 = 1;
  }
  if ( v5 )
  {
    v11 = v6;
    for ( i = 1; i != 14; ++i )
    {
      while ( !*++v11 )
      {
        if ( ++i == 14 )
          goto LABEL_34;
      }
      v14 = i;
      sub_1B264(v14, v28, 1);
    }
LABEL_34:
    v15 = v29;
    v16 = v29;
    if ( v29 )
    {
      v17 = *((_WORD *)v29 + 1) & 0x80;
      if ( (*((_WORD *)v29 + 1) & 0x80) == 0 )
      {
        v18 = *((_WORD *)v29 + 1) & 0x80;
        do
        {
          ++v18;
          if ( v6[v17 + 14] )
          {
            v19 = (char *)v16[1];
            v20 = strlen(v19);
            sub_19D60(v19, v20, 0);
            v15 = v29;
          }
          v17 = v18;
          v16 = &v15[2 * v18];
        }
        while ( v15 && (*((_WORD *)v16 + 1) & 0x80) == 0 );
      }
    }
  }
  else
  {
    v21 = (unsigned __int8)byte_7A184;
    if ( byte_7A184 )
    {
      v22 = &byte_7A184;
      do
      {
        sub_1B264(v21, v28, 0);
        v23 = (unsigned __int8)*++v22;
        v21 = v23;
      }
      while ( v23 );
    }
    if ( v29 )
    {
      v24 = *((_WORD *)v29 + 1);
      if ( (v24 & 0x80) == 0 )
      {
        v25 = v29 + 2;
        do
        {
          if ( (v24 & 0x20) != 0 )
          {
            v26 = strlen((const char *)*(v25 - 1));
            sub_19D60(*(v25 - 1), v26, 0);
          }
          if ( !v25 )
            break;
          v24 = *((_WORD *)v25 + 1);
          v25 += 2;
        }
        while ( (v24 & 0x80) == 0 );
      }
    }
  }
  free(v6);
  sub_1D394(v29);
  sub_19AF8(0);
}
