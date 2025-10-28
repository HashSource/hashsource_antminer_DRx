int __fastcall sub_51EF8(int result)
{
  if ( result != -64 )
  {
    if ( result < -10 )
    {
      return 40;
    }
    else if ( result >= 35 )
    {
      return 80;
    }
    else
    {
      return 60;
    }
  }
  return result;
}
