_DWORD *__fastcall sub_46ED0(int a1, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r3
  _BOOL4 i; // r2
  bool v5; // zf
  _DWORD *v6; // r2
  _DWORD *v7; // t1
  int *v9; // r0

  if ( a1 && (unsigned __int16)*(_DWORD *)(a1 + 16) >> 12 == 6 )
  {
    v2 = *(_DWORD **)(a1 + 28);
    if ( v2 && (v3 = v2 + 2, (v2 = (_DWORD *)*v2) != 0) )
    {
      for ( i = 0; ; i = v6 == a2 )
      {
        v2 = (_DWORD *)((char *)v2 - 1);
        if ( (int)v2 < 0 )
          goto LABEL_11;
        v5 = !i;
        v7 = (_DWORD *)*v3++;
        v6 = v7;
        if ( !v5 )
          break;
      }
      if ( !v6 )
      {
LABEL_11:
        *_errno_location() = 2;
        return 0;
      }
    }
    else
    {
      v9 = _errno_location();
      v6 = v2;
      *v9 = 2;
    }
    return v6;
  }
  else
  {
    *_errno_location() = 22;
    return 0;
  }
}
