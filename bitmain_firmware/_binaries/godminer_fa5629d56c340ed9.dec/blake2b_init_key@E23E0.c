int __fastcall blake2b_init_key(char *a1, int a2, const void *a3, size_t a4)
{
  _BYTE v9[2]; // [sp+0h] [bp-D8h] BYREF
  __int16 v10; // [sp+2h] [bp-D6h]
  __int16 v11; // [sp+4h] [bp-D4h]
  __int16 v12; // [sp+6h] [bp-D2h]
  __int16 v13; // [sp+8h] [bp-D0h]
  __int16 v14; // [sp+Ah] [bp-CEh]
  __int16 v15; // [sp+Ch] [bp-CCh]
  __int16 v16; // [sp+Eh] [bp-CAh]
  __int16 v17; // [sp+10h] [bp-C8h]
  int v18; // [sp+12h] [bp-C6h]
  int v19; // [sp+16h] [bp-C2h]
  int v20; // [sp+1Ah] [bp-BEh]
  __int16 v21; // [sp+1Eh] [bp-BAh]
  int v22; // [sp+20h] [bp-B8h]
  int v23; // [sp+24h] [bp-B4h]
  int v24; // [sp+28h] [bp-B0h]
  int v25; // [sp+2Ch] [bp-ACh]
  int v26; // [sp+30h] [bp-A8h]
  int v27; // [sp+34h] [bp-A4h]
  int v28; // [sp+38h] [bp-A0h]
  int v29; // [sp+3Ch] [bp-9Ch]
  char s[152]; // [sp+40h] [bp-98h] BYREF

  if ( (unsigned int)(a2 - 1) > 0x3F )
    return -1;
  if ( a4 - 1 > 0x3F || a3 == 0 )
    return -1;
  v9[0] = a2;
  v9[1] = a4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v22 = 0;
  v26 = 0;
  v10 = 257;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( blake2b_init_param(a1, (int)v9) < 0 )
    return -1;
  memset(s, 0, 0x80u);
  memcpy(s, a3, a4);
  equihash_blake2b_update((int)a1, s, 128);
  off_196538(s, 0, 0x80u);
  return 0;
}
