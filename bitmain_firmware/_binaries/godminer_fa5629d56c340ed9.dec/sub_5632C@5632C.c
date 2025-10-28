unsigned int __fastcall sub_5632C(int a1, int a2)
{
  int v2; // lr
  int v3; // r3
  _DWORD *v4; // r2
  unsigned int result; // r0
  int v6; // t1
  _DWORD v7[8]; // [sp+0h] [bp-44h] BYREF
  _DWORD v8[9]; // [sp+20h] [bp-24h]

  v2 = a2;
  v7[0] = *(_DWORD *)"&";
  v7[1] = *(_DWORD *)"\"";
  v7[2] = 30;
  v7[3] = 27;
  v7[4] = 24;
  v7[5] = 22;
  v7[6] = 20;
  v7[7] = 18;
  v8[0] = 10;
  v8[1] = 20;
  v8[2] = 30;
  v8[3] = 40;
  v8[4] = 60;
  v8[5] = 80;
  v8[6] = 100;
  v8[7] = 120;
  if ( dword_194704 <= a2 )
  {
    if ( dword_194704 < a2 )
      v2 = a2 - 1;
  }
  else
  {
    v2 = a2 + 1;
  }
  v3 = 0;
  v4 = &v7[-1];
  result = 0;
  dword_194704 = v2;
  do
  {
    v6 = v4[1];
    ++v4;
    if ( v6 >= v2 )
      result = v8[v3];
    ++v3;
  }
  while ( v3 != 8 );
  if ( result >= 0x78 )
    return 120;
  return result;
}
