bool __fastcall sub_128BC(_BOOL4 result, int a2)
{
  int v2; // r3

  if ( result )
  {
    v2 = *(_DWORD *)(result + 32);
    return v2 && (*(_DWORD *)(v2 + 28) >= a2 || *(_DWORD *)(v2 + 36) && a2 <= *(_DWORD *)(result + 24));
  }
  return result;
}
