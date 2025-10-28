int __fastcall sub_3FC94(int a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  int v6; // r3

  result = *(_DWORD *)(a1 + 12);
  if ( result || !*(_BYTE *)(a1 + 4) && (sub_3F5EC((const char **)a1, a2, a3, a4), (result = *(_DWORD *)(a1 + 12)) != 0) )
  {
    v6 = *(_DWORD *)(result + 8);
    *(_DWORD *)(a1 + 12) = v6;
    if ( v6 )
    {
      *(_DWORD *)(v6 + 4) = 0;
    }
    else if ( *(_BYTE *)(a1 + 44) )
    {
      *(_DWORD *)(a1 + 16) = 0;
    }
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 4) = 0;
    --*(_DWORD *)(a1 + 28);
  }
  return result;
}
