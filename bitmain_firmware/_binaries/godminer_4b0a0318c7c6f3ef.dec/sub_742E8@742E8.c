int __fastcall sub_742E8(int a1)
{
  int v1; // r9
  int v2; // r5
  int v4; // r12
  _DWORD v6[2]; // [sp+20h] [bp-14h] BYREF
  int v7; // [sp+28h] [bp-Ch]
  int v8; // [sp+2Ch] [bp-8h]

  v1 = *(_DWORD *)(a1 + 352);
  if ( v1 > 0 )
  {
    v2 = 0;
    do
    {
      v4 = *(_DWORD *)(a1 + 444);
      v7 = 0;
      LOBYTE(v4) = v4 * v2;
      v6[0] = 0;
      ++v2;
      v6[1] = 0;
      v8 = 0;
      BYTE1(v7) = v4;
      (*(void (__fastcall **)(int, _DWORD *))(a1 + 296))(a1, v6);
    }
    while ( v1 != v2 );
  }
  return 12;
}
