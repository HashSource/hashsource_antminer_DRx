int __fastcall sub_117F4(int a1)
{
  int i; // r4
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int result; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  _BYTE v10[64]; // [sp+0h] [bp-ECh] BYREF
  _BYTE v11[136]; // [sp+40h] [bp-ACh] BYREF
  int v12; // [sp+C8h] [bp-24h]
  int v13; // [sp+CCh] [bp-20h]
  int v14; // [sp+D0h] [bp-1Ch]
  int v15; // [sp+D4h] [bp-18h]
  int v16; // [sp+D8h] [bp-14h]
  int v17; // [sp+DCh] [bp-10h]
  int v18; // [sp+E0h] [bp-Ch]
  int v19; // [sp+E4h] [bp-8h]

  for ( i = 0; i != 64; i += 4 )
    *(_DWORD *)&v10[i] = bswap32(*(_DWORD *)(a1 + i));
  v2 = (_DWORD *)(a1 + 128);
  sub_30210(v11);
  sub_30244((int)v11, (int)v10, 0x40u);
  v3 = v13;
  v4 = v14;
  v5 = v15;
  *v2 = v12;
  v2[1] = v3;
  v2[2] = v4;
  v2[3] = v5;
  v2 += 4;
  result = v16;
  v7 = v17;
  v8 = v18;
  v9 = v19;
  *v2 = v16;
  v2[1] = v7;
  v2[2] = v8;
  v2[3] = v9;
  return result;
}
