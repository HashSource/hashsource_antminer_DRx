int __fastcall sub_BE2C(int result)
{
  if ( *(_DWORD *)(result + 100) == 1 )
    --dword_796AC;
  *(_DWORD *)(result + 100) = 0;
  return result;
}
