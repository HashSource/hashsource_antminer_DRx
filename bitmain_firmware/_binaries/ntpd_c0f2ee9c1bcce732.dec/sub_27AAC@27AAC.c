_BYTE *__fastcall sub_27AAC(_DWORD *a1, _BYTE *a2, int a3, _DWORD *a4)
{
  int v6; // r0
  bool v7; // cc
  char *v8; // r0
  char *v9; // r3
  _BYTE *v10; // r4
  char v11; // t1
  int v12; // r2
  _BYTE *result; // r0
  char v14[128]; // [sp+0h] [bp-80h] BYREF

  v6 = sub_27824(a1, v14, 127, a4);
  v7 = v6 < a3;
  v8 = &v14[v6];
  if ( !v7 )
    v8 = &v14[a3 - 1];
  if ( v8 <= v14 )
    return 0;
  v9 = &v14[-1];
  v10 = a2;
  do
  {
    v11 = *++v9;
    v12 = v11 & 0x7F;
    if ( (unsigned int)(v12 - 32) <= 0x5E )
      *v10++ = v12;
  }
  while ( v9 != v8 - 1 );
  if ( v10 == a2 )
    return 0;
  result = (_BYTE *)(v10 - a2);
  *v10 = 0;
  return result;
}
