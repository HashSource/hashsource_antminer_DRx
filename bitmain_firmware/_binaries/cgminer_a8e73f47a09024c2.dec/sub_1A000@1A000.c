int __fastcall sub_1A000(int a1)
{
  int result; // r0

  result = sub_149B0(a1, (_BYTE *)(a1 + 97));
  if ( !result )
  {
    sub_30050(a1 + 140);
    result = sub_14A18();
    if ( a1 == result )
      return sub_199D4(0);
  }
  return result;
}
