unsigned __int16 *sub_1D200()
{
  unsigned int v0; // r0
  _WORD *v1; // r0
  __int16 v2; // r3
  const char **v4; // r0
  const char **v5; // r5
  __int16 v6; // r3
  size_t v7; // r4
  size_t v8; // r0
  int v9; // r0
  const char *v10; // r1
  int v11; // r3
  bool v12; // zf
  char *v13; // r4
  _BYTE *v14; // r2
  _BYTE *v15; // r12
  int v16; // t1
  bool v17; // zf
  size_t v18; // r0
  char *s; // [sp+0h] [bp-Ch] BYREF
  int v20; // [sp+4h] [bp-8h]

  v20 = 0;
  if ( word_7D3AC )
    return sub_1B684(1);
  v0 = sub_1C21C();
  word_7CF78 = ((_WORD)v0 << 8) | (v0 >> 8);
  while ( 1 )
  {
    v1 = sub_1B77C((int)&unk_79E50, &s);
    if ( !v1 )
      return sub_19AF8(0);
    v2 = v1[1];
    if ( (v2 & 0x80) == 0 )
      break;
    v4 = (const char **)sub_1B77C(dword_7D320, &s);
    v5 = v4;
    if ( !v4 )
      return sub_19AF8(0);
    v6 = *((_WORD *)v4 + 1);
    if ( (v6 & 0x80) != 0 )
      return sub_1B684(5);
    if ( (v6 & 2) == 0 )
      return sub_1B684(1);
    v7 = strlen(v4[1]);
    v8 = strlen(s);
    v9 = sub_4F524(v7 + v8 + 2);
    v10 = v5[1];
    v11 = *(unsigned __int8 *)v10;
    v12 = v11 == 0;
    if ( *v10 )
      v12 = v11 == 61;
    v13 = (char *)v9;
    if ( v12 )
    {
      v15 = (_BYTE *)v9;
    }
    else
    {
      v14 = (_BYTE *)v9;
      do
      {
        *v14++ = v11;
        v15 = v14;
        v16 = *(unsigned __int8 *)++v10;
        v11 = v16;
        v17 = v16 == 61;
        if ( v16 != 61 )
          v17 = v11 == 0;
      }
      while ( !v17 );
    }
    *v15 = 61;
    strcat(v15 + 1, s);
    v18 = strlen(v13);
    sub_1CE68((unsigned __int8 *)v13, v18 + 1, *((_WORD *)v5 + 1));
    free(v13);
  }
  if ( (v2 & 2) == 0 )
    return sub_1B684(1);
  if ( !*s || !sub_4D104() )
    return sub_1B684(2);
  if ( (v20 & 0xFFFFFFFC) != 0 )
    return sub_1B684(6);
  return sub_1B684(0);
}
