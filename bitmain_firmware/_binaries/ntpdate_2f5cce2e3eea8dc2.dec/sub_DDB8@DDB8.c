int __fastcall sub_DDB8(int a1, int a2, int a3)
{
  int v4; // r2

  if ( a1 < 0 )
  {
    v4 = 1;
    if ( a2 )
    {
      a2 = -a2;
      a1 = ~a1;
    }
    else
    {
      a1 = -a1;
    }
  }
  else
  {
    v4 = 0;
  }
  return sub_F9F4(a1, a2, v4, a3, 0);
}
