int __fastcall sub_595AC(int result)
{
  int v1; // r3
  int v2; // r6
  int v3; // r4
  int v4; // r5
  int v5; // r0
  int v6; // r2
  int v7; // r2

  v1 = *(_DWORD *)(result + 16);
  v2 = result + 12;
  if ( v1 != result + 12 )
  {
    do
    {
      v3 = *(_DWORD *)(v1 + 4);
      v4 = v1 - 4;
      v5 = *(_DWORD *)(v1 + 8);
      if ( v5 )
      {
        v6 = *(_DWORD *)(v5 + 4);
        if ( v6 != -1 )
        {
          v7 = v6 - 1;
          *(_DWORD *)(v5 + 4) = v7;
          if ( !v7 )
            sub_5C394(v5);
        }
      }
      result = sub_5B2D0(v4);
      v1 = v3;
    }
    while ( v3 != v2 );
  }
  return result;
}
