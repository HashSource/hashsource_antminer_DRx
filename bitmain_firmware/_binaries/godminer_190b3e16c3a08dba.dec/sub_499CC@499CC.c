int __fastcall sub_499CC(int a1, int a2)
{
  int v2; // r12
  int v3; // r4
  _DWORD *v4; // r12
  int v5; // lr
  int v6; // t1
  int result; // r0
  _DWORD v8[15]; // [sp+0h] [bp+0h] BYREF

  v2 = *(_DWORD *)(a1 + 80);
  v8[0] = 15;
  v8[1] = 8;
  v8[2] = 3;
  v8[3] = -2;
  v3 = a2 - v2;
  v4 = v8;
  v5 = 0;
  v8[4] = -8;
  v8[5] = -13;
  v8[6] = -18;
  v8[7] = 10;
  v8[8] = 20;
  v8[9] = 30;
  v8[10] = 40;
  v8[11] = 60;
  v8[12] = 80;
  v8[13] = 100;
  while ( 1 )
  {
    v6 = v4[1];
    ++v4;
    if ( v6 < v3 && *(v4 - 1) >= v3 )
      break;
    ++v5;
  }
  result = v8[v5 + 7];
  if ( v3 > 15 )
    return 0;
  if ( v3 < -17 )
    return 100;
  if ( result <= 0 )
    return 0;
  if ( result >= 100 )
    return 100;
  return result;
}
