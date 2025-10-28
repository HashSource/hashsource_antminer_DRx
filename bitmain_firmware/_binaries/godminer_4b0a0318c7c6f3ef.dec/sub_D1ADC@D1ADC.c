int __fastcall sub_D1ADC(int result, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v3; // r6
  _DWORD *v4; // r4

  v2 = (_DWORD *)(result + 4);
  if ( (_DWORD *)(result + 4) != a2 )
  {
    v3 = result;
    v4 = a2;
    do
    {
      result = sub_D1ADC(v3, (_DWORD *)*v4);
      v4 = (_DWORD *)v4[1];
    }
    while ( v4 != v2 );
  }
  return result;
}
