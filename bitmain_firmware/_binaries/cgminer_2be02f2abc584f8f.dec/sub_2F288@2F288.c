int __fastcall sub_2F288(_BYTE *a1, char *s)
{
  int result; // r0
  int v4; // r10
  int v5; // r3
  unsigned int *v6; // r12
  __int64 v7; // r2
  _DWORD *v8; // r2
  _BYTE *v9; // r3
  unsigned int v10; // t1
  char v12; // [sp+8h] [bp-24h] BYREF
  _DWORD v13[6]; // [sp+Ch] [bp-20h] BYREF
  int v14; // [sp+24h] [bp-8h] BYREF

  memset(v13, 0, sizeof(v13));
  v14 = 0;
  result = strlen(s);
  v4 = result;
  if ( result > 0 )
  {
    result = 0;
    do
    {
      v5 = dword_62A98[(unsigned __int8)s[result] + 293];
      v6 = (unsigned int *)&v14;
      do
      {
        v7 = 58LL * *v6 + (unsigned int)v5;
        v5 = BYTE4(v7) & 0x3F;
        *v6-- = v7;
      }
      while ( v6 != (unsigned int *)&v12 );
      ++result;
    }
    while ( v4 != result );
  }
  v8 = v13;
  *a1 = v13[0];
  v9 = a1 + 5;
  do
  {
    v10 = v8[1];
    ++v8;
    *((_DWORD *)v9 - 1) = bswap32(v10);
    v9 += 4;
  }
  while ( v9 != a1 + 29 );
  return result;
}
