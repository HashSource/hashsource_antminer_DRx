int __fastcall sub_19E20(int a1)
{
  int result; // r0

  result = sub_147D0(a1, (_BYTE *)(a1 + 97));
  if ( !result )
  {
    sub_2FE30(a1 + 140);
    result = sub_14838();
    if ( a1 == result )
      return sub_197F4(0);
  }
  return result;
}
