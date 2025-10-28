int __fastcall sub_20C80(_DWORD *a1)
{
  int result; // r0
  _DWORD *v3; // r2
  int v4; // r3

  result = sub_2E254(a1 + 8);
  v3 = (_DWORD *)dword_7D728[result];
  if ( v3 == a1 )
  {
    dword_7D728[result] = *v3;
  }
  else
  {
    while ( 1 )
    {
      v4 = *v3;
      if ( (_DWORD *)*v3 == a1 )
        break;
      v3 = (_DWORD *)*v3;
      if ( !v4 )
        return result;
    }
    *v3 = *a1;
  }
  return result;
}
