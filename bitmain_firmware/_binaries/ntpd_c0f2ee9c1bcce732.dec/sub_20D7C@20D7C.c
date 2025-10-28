int __fastcall sub_20D7C(int result)
{
  int v1; // [sp+4h] [bp-8h]

  if ( dword_CAC24 )
  {
    dword_CAC24 |= result;
  }
  else if ( result )
  {
    if ( !dword_7D934 )
    {
      dword_7D92C = 0;
      dword_7D930 = 0;
      dword_7D928 = 0;
      v1 = result;
      sub_20CD0();
      result = v1;
      dword_7D934 = 1;
    }
    dword_CAC24 = result;
    dword_CABE0 = (int)&unk_CABDC;
    dword_CABE4 = (int)&unk_CABDC;
  }
  return result;
}
