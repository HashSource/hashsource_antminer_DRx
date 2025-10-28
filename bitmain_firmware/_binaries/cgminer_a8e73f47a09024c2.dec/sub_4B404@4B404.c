int __fastcall sub_4B404(int a1)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 4; ++i )
    result = sub_4B2EC(i, a1);
  return result;
}
