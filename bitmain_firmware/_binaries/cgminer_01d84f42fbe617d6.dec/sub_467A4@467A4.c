int __fastcall sub_467A4(_DWORD *a1, int a2, int a3)
{
  bool v3; // zf

  if ( !a1 || *a1 )
    return -1;
  v3 = a2 == 0;
  if ( a2 )
    v3 = a3 == 0;
  if ( v3 )
    return -1;
  sub_447C4(a2, a3);
  return 0;
}
