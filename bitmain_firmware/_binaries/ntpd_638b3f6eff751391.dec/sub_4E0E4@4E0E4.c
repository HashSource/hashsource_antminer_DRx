void *__fastcall sub_4E0E4(int a1, int a2, unsigned __int8 *src, unsigned int a4)
{
  int v4; // r8
  _DWORD *v9; // r0
  int v10; // r3
  size_t v11; // lr
  int v12; // r5
  void *v13; // r0
  int v14; // r4
  void *result; // r0
  int v16; // r3
  int v17; // r4
  unsigned int v18; // r3
  size_t v19; // r2
  char v20[24]; // [sp+4h] [bp-18h] BYREF

  v4 = a1 & 0x3F;
  v9 = (_DWORD *)dword_CB754[v4];
  if ( v9 )
  {
    if ( v9[17] == a1 )
    {
LABEL_20:
      if ( a4 >= 0x40 )
        v19 = 64;
      else
        v19 = a4;
      v9[18] = a2;
      v9[21] = v19;
      result = memcpy(v9 + 1, src, v19);
      if ( dword_CB738 == a1 )
      {
        dword_CB738 = 0;
        word_CB734 = 0;
      }
      return result;
    }
    while ( 1 )
    {
      v9 = (_DWORD *)*v9;
      if ( !v9 )
        break;
      if ( v9[17] == a1 )
        goto LABEL_20;
    }
  }
  v10 = dword_CB860;
  if ( !dword_CB860 )
  {
    result = sub_4DE24();
    if ( !result )
      return result;
    v10 = dword_CB860;
  }
  if ( a4 >= 0x40 )
    v11 = 64;
  else
    v11 = a4;
  v12 = dword_CB858;
  v13 = (void *)(dword_CB858 + 4);
  *(_DWORD *)(dword_CB858 + 68) = a1;
  v14 = *(_DWORD *)v12;
  *(_DWORD *)(v12 + 72) = a2;
  *(_DWORD *)(v12 + 84) = v11;
  *(_WORD *)(v12 + 76) = 0;
  *(_DWORD *)(v12 + 80) = 0;
  dword_CB860 = v10 - 1;
  dword_CB858 = v14;
  result = memcpy(v13, src, v11);
  v16 = dword_7CF4C;
  *(_DWORD *)v12 = dword_CB754[v4];
  dword_CB754[v4] = v12;
  if ( v16 > 1 )
  {
    strcpy(v20, "0123456789abcdef");
    printf("auth_setkey: key %d type %d len %d ", *(_DWORD *)(v12 + 68), *(_DWORD *)(v12 + 72), *(_DWORD *)(v12 + 84));
    if ( *(int *)(v12 + 84) > 0 )
    {
      v17 = 0;
      do
      {
        v18 = src[v17++];
        printf("%c%c", (unsigned __int8)v20[v18 >> 4], (unsigned __int8)v20[v18 & 0xF]);
      }
      while ( *(_DWORD *)(v12 + 84) > v17 );
    }
    result = (void *)putchar(10);
  }
  ++dword_CB744;
  return result;
}
