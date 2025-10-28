int __fastcall update_str_and_flag(int result, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r4
  _BYTE *v5; // lr
  int v6; // r3

  v3 = *(_DWORD *)(result + 352);
  v4 = 0;
  *(_DWORD *)(a2 + 64) = 0;
  v5 = *(_BYTE **)(a2 + 68);
  if ( v3 > 0 )
  {
    v6 = 0;
    do
    {
      switch ( *(_DWORD *)(*(_DWORD *)(result + 544) + v4 + 16) )
      {
        case 0:
          ++*(_DWORD *)(a2 + 64);
          *v5 = 111;
          break;
        case 1:
          *v5 = 35;
          *a3 |= 1u;
          break;
        case 2:
          *v5 = 88;
          *a3 |= 2u;
          break;
        case 3:
          *v5 = 120;
          *a3 |= 4u;
          break;
        default:
          *v5 = 42;
          break;
      }
      if ( !v6 || (v6 & 7) != 0 )
      {
        ++v5;
      }
      else
      {
        v5[1] = 32;
        v5 += 2;
      }
      ++v6;
      v4 += 44;
    }
    while ( *(_DWORD *)(result + 352) > v6 );
  }
  *v5 = 0;
  return result;
}
