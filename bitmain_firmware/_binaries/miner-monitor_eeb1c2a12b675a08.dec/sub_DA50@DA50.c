_DWORD *__fastcall sub_DA50(int a1, int a2)
{
  _DWORD *i; // r4

  for ( i = *(_DWORD **)(a1 + 8); i; i = (_DWORD *)*i )
  {
    if ( !sub_C634(i[8], a2) )
      break;
  }
  return i;
}
