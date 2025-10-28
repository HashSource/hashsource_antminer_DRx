_DWORD *__fastcall sub_51160(int a1, int a2)
{
  int v2; // lr
  _DWORD *v4; // r3
  _DWORD *result; // r0
  int v6; // r1
  int v7; // r1
  int v8; // t1
  char *v9; // r2
  _DWORD v10[9]; // [sp+0h] [bp-24h] BYREF

  v2 = a2;
  v10[0] = 65;
  v10[1] = 43;
  v10[2] = 37;
  v10[3] = 32;
  if ( dword_193498 > a2 )
    v2 = a2 + 1;
  v10[4] = -1046478848;
  v10[5] = -1054867456;
  v10[6] = 0;
  v10[7] = 0;
  if ( dword_193498 <= a2 )
    --v2;
  v4 = v10;
  result = 0;
  v6 = *(_DWORD *)(a1 + 88);
  dword_193498 = v2;
  v7 = v2 - v6;
  while ( 1 )
  {
    v8 = v4[1];
    ++v4;
    v9 = (char *)result + 1;
    if ( v8 < v7 && *(v4 - 1) >= v7 )
      break;
    result = (_DWORD *)((char *)result + 1);
    if ( v9 == (char *)3 )
      return result;
  }
  return &v10[(_DWORD)result + 8];
}
