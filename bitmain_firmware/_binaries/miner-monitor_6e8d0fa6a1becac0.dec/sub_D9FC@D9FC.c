int __fastcall sub_D9FC(int a1)
{
  _DWORD *v1; // r3
  int result; // r0

  v1 = *(_DWORD **)(a1 + 8);
  if ( !v1 )
    return 0;
  result = 0;
  do
  {
    v1 = (_DWORD *)*v1;
    ++result;
  }
  while ( v1 );
  return result;
}
