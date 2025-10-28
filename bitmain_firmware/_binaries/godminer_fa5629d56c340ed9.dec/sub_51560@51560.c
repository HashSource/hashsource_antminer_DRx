int __fastcall sub_51560(int a1, int a2)
{
  int v2; // lr
  _DWORD *v4; // r3
  int v5; // r0
  int v6; // r1
  int v7; // r1
  int v8; // t1
  int v9; // r2
  int result; // r0
  _DWORD v11[25]; // [sp+0h] [bp-64h] BYREF

  v2 = a2;
  v11[0] = 65;
  v11[1] = 43;
  v11[2] = 37;
  v11[3] = 32;
  v11[4] = 17;
  v11[5] = 15;
  v11[6] = 12;
  v11[7] = 7;
  v11[8] = -3;
  v11[9] = -8;
  v11[10] = -13;
  v11[11] = -18;
  v11[12] = -10;
  v11[13] = -10;
  v11[14] = -10;
  v11[15] = 0;
  if ( dword_194498 > a2 )
    v2 = a2 + 1;
  v11[16] = 10;
  v11[17] = 20;
  v11[18] = 30;
  v11[19] = 40;
  v11[20] = 60;
  v11[21] = 70;
  v11[22] = 80;
  v11[23] = 100;
  if ( dword_194498 < a2 )
    --v2;
  v4 = v11;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 88);
  dword_194498 = v2;
  v7 = v2 - v6;
  while ( 1 )
  {
    v8 = v4[1];
    ++v4;
    v9 = v5 + 1;
    if ( v8 < v7 && *(v4 - 1) >= v7 )
      break;
    ++v5;
    if ( v9 == 11 )
    {
      result = 0;
      goto LABEL_10;
    }
  }
  result = v11[v5 + 12];
LABEL_10:
  if ( v7 > 65 )
    return -10;
  if ( v7 < -17 )
    return 100;
  if ( result >= 100 )
    result = 100;
  if ( result < -10 )
    return -10;
  return result;
}
