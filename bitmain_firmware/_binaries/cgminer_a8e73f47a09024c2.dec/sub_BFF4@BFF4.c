int __fastcall sub_BFF4(int result)
{
  if ( *(_DWORD *)(result + 100) == 1 )
    --dword_8078C;
  *(_DWORD *)(result + 100) = 0;
  return result;
}
