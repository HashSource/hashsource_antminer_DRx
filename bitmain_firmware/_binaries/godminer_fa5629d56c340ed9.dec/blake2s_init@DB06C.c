int __fastcall blake2s_init(int *a1, int a2)
{
  int v3; // [sp+0h] [bp-28h] BYREF
  char v4; // [sp+4h] [bp-24h]
  char v5; // [sp+5h] [bp-23h]
  char v6; // [sp+6h] [bp-22h]
  char v7; // [sp+7h] [bp-21h]
  char v8; // [sp+8h] [bp-20h]
  char v9; // [sp+9h] [bp-1Fh]
  char v10; // [sp+Ah] [bp-1Eh]
  char v11; // [sp+Bh] [bp-1Dh]
  char v12; // [sp+Ch] [bp-1Ch]
  char v13; // [sp+Dh] [bp-1Bh]
  char v14; // [sp+Eh] [bp-1Ah]
  char v15; // [sp+Fh] [bp-19h]
  int v16; // [sp+10h] [bp-18h]
  int v17; // [sp+14h] [bp-14h]
  int v18; // [sp+18h] [bp-10h]
  int v19; // [sp+1Ch] [bp-Ch]

  if ( (unsigned int)(a2 - 1) > 0x1F )
    return -1;
  v3 = (unsigned __int8)a2 | 0x1010000;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v18 = 0;
  v17 = 0;
  v19 = 0;
  return blake2s_init_param(a1, &v3);
}
