int __fastcall sub_DA90(int result, int a2)
{
  _DWORD *v2; // r2

  v2 = *(_DWORD **)(result + 8);
  if ( a2 )
  {
    if ( v2 )
    {
      while ( *v2 )
        v2 = (_DWORD *)*v2;
      *v2 = a2;
      *(_DWORD *)(a2 + 4) = v2;
    }
    else
    {
      *(_DWORD *)(result + 8) = a2;
    }
  }
  return result;
}
