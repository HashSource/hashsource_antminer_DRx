void *__fastcall sub_1A1D0(_BYTE *a1, const void *a2, _BYTE *n)
{
  char v3; // r12
  char *v4; // r3
  _BYTE *v5; // lr
  char *v6; // r4
  int v7; // t1
  _BYTE *v8; // r6
  _BYTE *v9; // r7
  void *v10; // r0
  char v12; // [sp+0h] [bp-190h] BYREF
  char v13; // [sp+1h] [bp-18Fh] BYREF

  v3 = *a1;
  if ( *a1 )
  {
    v4 = &v13;
    v5 = a1;
    do
    {
      *(v4 - 1) = v3;
      v6 = v4;
      v7 = (unsigned __int8)*++v5;
      v3 = v7;
      ++v4;
    }
    while ( v7 );
  }
  else
  {
    v6 = &v12;
  }
  if ( n )
  {
    v8 = v6 + 2;
    *v6 = 61;
    v9 = (_BYTE *)(&v12 - (v6 + 2) + 399);
    v6[1] = 34;
    if ( v9 >= n )
      v9 = n;
    v10 = v6 + 2;
    v6 = &v9[(_DWORD)v8 + 1];
    memcpy(v10, a2, (size_t)v9);
    v9[(_DWORD)v8] = 34;
  }
  return sub_19D60(&v12, v6 - &v12, 0);
}
