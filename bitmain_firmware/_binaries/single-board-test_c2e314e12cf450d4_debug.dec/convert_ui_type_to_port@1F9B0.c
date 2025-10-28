int __fastcall convert_ui_type_to_port(unsigned int a1)
{
  int v2; // [sp+Ch] [bp+Ch]

  v2 = 0;
  if ( a1 == 2 )
    return 942;
  if ( a1 > 2 )
  {
    if ( a1 == 256 )
    {
      return 921;
    }
    else if ( a1 == 257 )
    {
      return 943;
    }
  }
  else if ( a1 == 1 )
  {
    return 941;
  }
  return v2;
}
