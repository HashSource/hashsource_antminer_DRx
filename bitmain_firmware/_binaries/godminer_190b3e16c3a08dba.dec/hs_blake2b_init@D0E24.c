int __fastcall hs_blake2b_init(_DWORD *a1, int a2)
{
  unsigned __int8 v3[4]; // [sp+0h] [bp-48h] BYREF
  int v4; // [sp+4h] [bp-44h]
  int v5; // [sp+8h] [bp-40h]
  int v6; // [sp+Ch] [bp-3Ch]
  char v7; // [sp+10h] [bp-38h]
  char v8; // [sp+11h] [bp-37h]
  int v9; // [sp+12h] [bp-36h]
  int v10; // [sp+16h] [bp-32h]
  int v11; // [sp+1Ah] [bp-2Eh]
  __int16 v12; // [sp+1Eh] [bp-2Ah]
  int v13; // [sp+20h] [bp-28h]
  int v14; // [sp+24h] [bp-24h]
  int v15; // [sp+28h] [bp-20h]
  int v16; // [sp+2Ch] [bp-1Ch]
  int v17; // [sp+30h] [bp-18h]
  int v18; // [sp+34h] [bp-14h]
  int v19; // [sp+38h] [bp-10h]
  int v20; // [sp+3Ch] [bp-Ch]

  if ( (unsigned int)(a2 - 1) > 0x3F )
    return -1;
  v3[0] = a2;
  v3[1] = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v13 = 0;
  v17 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v3[2] = 1;
  v3[3] = 1;
  return hs_blake2b_init_param(a1, v3);
}
