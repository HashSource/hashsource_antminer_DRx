_QWORD *__fastcall sub_DFD8(int a1, int a2)
{
  _QWORD *v4; // r6
  const char *v5; // r0
  int v6; // r1
  int v7; // r3
  _QWORD *v8; // r3
  const char *v9; // r0
  _DWORD *v10; // r4
  int *v11; // r5
  bool v12; // zf
  int v13; // r0
  _DWORD *v14; // r0

  if ( !a1 )
    return 0;
  v4 = sub_C540();
  if ( !v4 )
    return 0;
  v5 = *(const char **)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 20);
  v4[3] = *(_QWORD *)(a1 + 24);
  v7 = *(_DWORD *)(a1 + 12);
  *((_DWORD *)v4 + 5) = v6;
  *((_DWORD *)v4 + 3) = v7 & 0xFFFFFEFF;
  if ( v5 )
  {
    v8 = sub_C574(v5);
    *((_DWORD *)v4 + 4) = v8;
    if ( !v8 )
      goto LABEL_18;
  }
  v9 = *(const char **)(a1 + 32);
  if ( v9 )
  {
    v8 = sub_C574(v9);
    *((_DWORD *)v4 + 8) = v8;
    if ( !v8 )
      goto LABEL_18;
  }
  if ( a2 )
  {
    v10 = *(_DWORD **)(a1 + 8);
    if ( v10 )
    {
      v11 = 0;
      while ( 1 )
      {
        v13 = sub_DFD8(v10, 1);
        v8 = (_QWORD *)v13;
        if ( !v13 )
          break;
        v12 = v11 == 0;
        if ( v11 )
          *v11 = v13;
        v10 = (_DWORD *)*v10;
        if ( v11 )
          *(_DWORD *)(v13 + 4) = v11;
        v11 = (int *)v13;
        if ( v12 )
          *((_DWORD *)v4 + 2) = v13;
        if ( !v10 )
          return v4;
      }
LABEL_18:
      v14 = v4;
      v4 = v8;
      sub_D864(v14);
    }
  }
  return v4;
}
