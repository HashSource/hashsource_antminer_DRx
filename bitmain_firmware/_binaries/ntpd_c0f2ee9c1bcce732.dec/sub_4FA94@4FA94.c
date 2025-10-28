char *__fastcall sub_4FA94(signed int a1, unsigned int a2, unsigned int a3)
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
  return sub_4F124(a1, a2, (_BYTE *)v4, a3, 0);
}
