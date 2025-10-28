int __fastcall sub_1F4D0(int a1)
{
  int result; // r0

  result = sub_1C040(a1, (_BYTE *)(a1 + 97));
  if ( !result )
  {
    sub_2A69C(a1 + 140);
    result = sub_1E098();
    if ( a1 == result )
      return sub_1F158(0);
  }
  return result;
}
