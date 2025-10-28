int __fastcall sub_2C8B4(_DWORD *a1, unsigned int a2)
{
  _DWORD *v4; // r0

  if ( !a1 )
    return 0;
  if ( *a1 == 7 )
    return 0;
  if ( *a1 != 1 )
    return 0;
  if ( sub_5755C(a1) < a2 )
    return 0;
  v4 = (_DWORD *)sub_57588(a1, a2);
  if ( !v4 )
    return 0;
  if ( *v4 == 2 )
    return sub_57754(v4);
  return 0;
}
