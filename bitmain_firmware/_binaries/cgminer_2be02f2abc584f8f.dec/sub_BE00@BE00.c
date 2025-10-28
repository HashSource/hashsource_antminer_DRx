int __fastcall sub_BE00(int result)
{
  if ( *(_DWORD *)(result + 100) != 1 )
  {
    ++dword_796AC;
    *(_DWORD *)(result + 100) = 1;
  }
  return result;
}
