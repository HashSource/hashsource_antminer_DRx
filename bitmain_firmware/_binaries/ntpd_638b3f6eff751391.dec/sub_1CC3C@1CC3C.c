int __fastcall sub_1CC3C(int *a1, int a2, __int16 a3)
{
  _WORD *v4; // r6
  int v7; // r12
  _WORD *v8; // r3
  __int16 v9; // lr
  size_t v10; // r5
  __int16 v11; // r9
  int v12; // r0
  int v13; // r8
  _WORD *v14; // r0
  int v15; // r3
  _WORD *v16; // r12
  _WORD *v17; // r0
  int v18; // r3

  v4 = (_WORD *)*a1;
  if ( *a1 )
  {
    v7 = v4[1] & 0x80;
    if ( (v4[1] & 0x80) != 0 )
    {
      v11 = 0;
      v13 = 8;
      v10 = 0;
      v12 = 16;
    }
    else
    {
      v8 = v4 + 8;
      do
      {
        v9 = *(v8 - 3);
        ++v7;
        v8 += 4;
      }
      while ( (v9 & 0x80) == 0 );
      v10 = 8 * v7;
      v11 = v7;
      v12 = 8 * (v7 + 2);
      v13 = 8 * (v7 + 1);
    }
    v14 = (_WORD *)sub_4F524(v12);
    *a1 = (int)v14;
    memmove(v14, v4, v10);
    free(v4);
    v15 = *a1;
  }
  else
  {
    v11 = 0;
    v10 = 0;
    v13 = 8;
    v15 = sub_4F524(16);
    *a1 = v15;
  }
  *(_WORD *)(v15 + v10) = v11;
  *(_DWORD *)(v15 + v10 + 4) = sub_4F524(a2);
  v16 = (_WORD *)(*a1 + v13);
  v17 = (_WORD *)(*a1 + v10);
  *v16 = 0;
  *((_DWORD *)v16 + 1) = 0;
  v18 = *a1;
  v17[1] = a3;
  *(_WORD *)(v18 + v13 + 2) = 128;
  return *(_DWORD *)(v18 + v10 + 4);
}
