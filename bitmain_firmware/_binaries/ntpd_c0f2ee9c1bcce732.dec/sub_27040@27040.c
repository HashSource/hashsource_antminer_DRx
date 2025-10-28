int __fastcall sub_27040(int result, int a2)
{
  int v2; // r3
  int v3; // r4
  unsigned int v4; // r2
  const char *v5; // r0

  v2 = *(_DWORD *)(result + 60);
  v3 = result;
  if ( v2 )
  {
    switch ( a2 )
    {
      case 1:
        ++*(_DWORD *)(v2 + 764);
        break;
      case 2:
        ++*(_DWORD *)(v2 + 768);
        break;
      case 5:
      case 6:
        ++*(_DWORD *)(v2 + 772);
        break;
      default:
        break;
    }
    v4 = *(unsigned __int8 *)(v2 + 34);
    if ( v4 <= 0xE )
      *(_BYTE *)(v2 + 34) = v4 + 1;
    if ( *(unsigned __int8 *)(v2 + 33) != a2 )
    {
      *(_BYTE *)(v2 + 33) = a2;
      v5 = (const char *)sub_51310(a2);
      return sub_1D3D8(139, v3, v5);
    }
  }
  return result;
}
