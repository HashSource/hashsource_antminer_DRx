int __fastcall sub_BFC8(int result)
{
  if ( *(_DWORD *)(result + 100) != 1 )
  {
    ++dword_8078C;
    *(_DWORD *)(result + 100) = 1;
  }
  return result;
}
