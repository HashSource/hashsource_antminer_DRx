int __fastcall sub_5D798(int a1, _DWORD *a2)
{
  _BYTE *v2; // r2
  int v3; // r3
  bool v4; // zf

  v2 = (_BYTE *)(a1 + *a2);
  v3 = (unsigned __int8)*v2;
  v4 = v3 == 32;
  if ( v3 != 32 )
    v4 = v3 == 61;
  if ( v4 )
    return 0;
  if ( *v2 )
    return sub_5D714((int)(v2 + 1), a2);
  return 0;
}
