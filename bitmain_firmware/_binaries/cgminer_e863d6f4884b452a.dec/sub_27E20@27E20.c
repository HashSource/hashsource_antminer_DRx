int __fastcall sub_27E20(_DWORD *a1, unsigned int a2)
{
  _DWORD *v4; // r0

  if ( !a1 )
    return 0;
  if ( *a1 == 1 && sub_48034(a1) >= a2 )
  {
    v4 = (_DWORD *)sub_48048(a1, a2);
    if ( v4 )
    {
      if ( *v4 == 2 )
        return sub_4813C(v4);
    }
  }
  return 0;
}
