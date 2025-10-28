int __fastcall sub_46530(int result)
{
  int v1; // r6
  int v2; // r4
  int v3; // r0
  int v4; // r5
  int v5; // r3
  bool v6; // zf
  int v7; // r3

  v1 = result + 12;
  v2 = *(_DWORD *)(result + 16);
  if ( v2 != result + 12 )
  {
    do
    {
      v3 = *(_DWORD *)(v2 + 8);
      v4 = v2 - 4;
      v2 = *(_DWORD *)(v2 + 4);
      if ( v3 )
      {
        v5 = *(_DWORD *)(v3 + 4);
        v6 = v5 == -1;
        v7 = v5 - 1;
        if ( !v6 )
        {
          *(_DWORD *)(v3 + 4) = v7;
          if ( !v7 )
            sub_482FC(v3);
        }
      }
      result = sub_47860(v4);
    }
    while ( v2 != v1 );
  }
  return result;
}
