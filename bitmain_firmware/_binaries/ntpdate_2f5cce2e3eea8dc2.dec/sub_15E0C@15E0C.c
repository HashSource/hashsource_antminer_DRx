int __fastcall sub_15E0C(int a1, unsigned int a2)
{
  bool v2; // nf

  if ( a2 )
    return sub_15D38(a1, a2);
  v2 = a1 < 0;
  if ( a1 > 0 )
    a1 = 0x7FFFFFFF;
  if ( v2 )
    a1 = 0x80000000;
  return sub_15E68(a1);
}
