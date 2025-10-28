int __fastcall sub_10DB4(int result)
{
  if ( result )
  {
    result = *(_DWORD *)(result + 4);
    if ( result )
      result += 8;
  }
  return result;
}
