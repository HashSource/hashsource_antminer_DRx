size_t __fastcall sub_29EF0(_BYTE *a1, char *s)
{
  unsigned int v2; // r4
  size_t result; // r0
  char v6; // r1
  char *v7; // lr
  char *v8; // r12
  int v9; // t1
  unsigned int *v10; // r2
  int v11; // r0
  __int64 v12; // r0
  size_t *v13; // r3
  unsigned int *v14; // r2
  size_t *v15; // r7
  unsigned int v16; // t1
  int v17; // [sp+0h] [bp-20h] BYREF
  int v18; // [sp+4h] [bp-1Ch]
  unsigned int v19[5]; // [sp+8h] [bp-18h] BYREF
  unsigned int v20; // [sp+1Ch] [bp-4h] BYREF

  v2 = 0;
  v18 = 0;
  memset(v19, 0, sizeof(v19));
  v20 = 0;
  result = strlen(s);
  v6 = result;
  if ( result )
  {
    v7 = s - 1;
    v8 = &s[result - 1];
    while ( 1 )
    {
      v9 = (unsigned __int8)*++v7;
      v10 = &v20;
      v11 = dword_5142C[v9 + 293];
      while ( 1 )
      {
        v12 = 58LL * v2 + (unsigned int)v11;
        *v10-- = v12;
        v11 = HIDWORD(v12);
        if ( &v17 == (int *)v10 )
          break;
        v2 = *v10;
      }
      if ( v8 == v7 )
        break;
      v2 = v20;
    }
    v6 = v18;
    result = bswap32(v19[0]);
  }
  v13 = (size_t *)(a1 + 1);
  v14 = v19;
  *a1 = v6;
  v15 = (size_t *)(a1 + 25);
  while ( 1 )
  {
    *v13++ = result;
    if ( v13 == v15 )
      break;
    v16 = v14[1];
    ++v14;
    result = bswap32(v16);
  }
  return result;
}
