_DWORD *__fastcall sub_4DC6C(int a1)
{
  _DWORD *i; // r3

  for ( i = (_DWORD *)dword_CB754[a1 & 0x3F]; i; i = (_DWORD *)*i )
  {
    if ( i[17] == a1 )
      break;
  }
  return i;
}
