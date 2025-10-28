_DWORD *__fastcall sub_4701C(int a1, char *s2, int a3)
{
  _DWORD *v5; // r6
  int v6; // r4
  _DWORD **v7; // r5
  _DWORD *v8; // t1

  if ( a1 && (unsigned __int16)*(_DWORD *)(a1 + 16) >> 12 == 6 )
  {
    v5 = *(_DWORD **)(a1 + 28);
    if ( !v5 )
    {
      *_errno_location() = 2;
      return v5;
    }
    v7 = (_DWORD **)(v5 + 2);
    v6 = *v5;
    if ( !*v5 )
    {
      v5 = 0;
      *_errno_location() = 2;
      return v5;
    }
    if ( !s2 )
      return (_DWORD *)v5[2];
    while ( --v6 >= 0 )
    {
      v8 = *v7++;
      v5 = v8;
      if ( sub_46F84(v8, s2) && !a3 )
      {
        if ( v5 )
          return v5;
        break;
      }
    }
    *_errno_location() = 2;
    return 0;
  }
  else
  {
    *_errno_location() = 22;
    return 0;
  }
}
