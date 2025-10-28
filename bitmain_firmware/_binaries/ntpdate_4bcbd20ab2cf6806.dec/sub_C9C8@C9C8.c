_DWORD *__fastcall sub_C9C8(int a1)
{
  _DWORD *i; // r3

  for ( i = (_DWORD *)dword_240BC[a1 & 0x3F]; i; i = (_DWORD *)*i )
  {
    if ( i[17] == a1 )
      break;
  }
  return i;
}
