int __fastcall sub_39F10(int a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r0
  int v4; // r0
  int result; // r0

  v1 = *(_DWORD *)(*(_DWORD *)(a1 + 60) + 28);
  v2 = *(_DWORD *)(v1 + 2124);
  v3 = *(_DWORD *)(v1 + 2116);
  if ( v2 )
  {
    if ( v2 <= 100 )
      goto LABEL_5;
    v4 = v3 - 4;
    if ( v4 < 0 )
      v4 = 0;
  }
  else
  {
    v4 = v3 + 4;
    if ( v4 > 255 )
    {
      *(_DWORD *)(v1 + 2116) = 255;
      goto LABEL_5;
    }
  }
  *(_DWORD *)(v1 + 2116) = v4;
LABEL_5:
  result = sub_4D950();
  *(_DWORD *)(v1 + 2124) = 0;
  if ( dword_7CF4C > 1 )
    return sub_4DBE8(result);
  return result;
}
