unsigned __int16 *__fastcall sub_2B004(unsigned __int16 *a1, int a2, int a3)
{
  unsigned int v3; // r12
  int v7; // r6
  int v8; // r5
  _BYTE *v9; // r4
  unsigned int *v10; // r6
  unsigned int v11; // r3
  unsigned int v12; // s13
  unsigned int v13; // r3
  unsigned int v14; // s13
  unsigned int v15; // r3
  void **v16; // r0
  unsigned int v17; // r3
  unsigned int v18; // t1
  char v19; // r3
  double v20; // d16
  bool v21; // fnf
  unsigned int v22; // r1
  unsigned int v23; // r0
  unsigned int v24; // r2
  unsigned int v25; // r3
  double v26; // d16
  int v27; // s13
  int v28; // s13
  unsigned __int16 v30[2]; // [sp+Ch] [bp-68h] BYREF
  unsigned int v31; // [sp+10h] [bp-64h]
  int v32; // [sp+14h] [bp-60h]
  int v33; // [sp+18h] [bp-5Ch]
  int v34; // [sp+1Ch] [bp-58h]
  int v35; // [sp+20h] [bp-54h]
  int v36; // [sp+24h] [bp-50h]
  _BYTE v37[12]; // [sp+28h] [bp-4Ch] BYREF
  unsigned int v38; // [sp+34h] [bp-40h]
  unsigned int v39; // [sp+38h] [bp-3Ch]
  unsigned int v40; // [sp+3Ch] [bp-38h]
  unsigned int v41; // [sp+40h] [bp-34h]
  unsigned int v42; // [sp+44h] [bp-30h]
  double v43; // [sp+50h] [bp-24h]
  double v44; // [sp+58h] [bp-1Ch]
  unsigned int v45; // [sp+60h] [bp-14h]
  unsigned int v46; // [sp+64h] [bp-10h]
  char v47; // [sp+68h] [bp-Ch]
  char v48; // [sp+69h] [bp-Bh]
  void **v49; // [sp+6Ch] [bp-8h]

  v3 = *(unsigned __int16 *)(a3 + 4);
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v7 = ((unsigned __int16)((_WORD)v3 << 8) | (unsigned __int16)(v3 >> 8)) & 0xFFF;
  v36 = 0;
  v8 = v7 - 1;
  v30[0] = 2;
  v30[1] = 31488;
  v9 = sub_28654((int)a1, a2, (char *)(a3 + 2), (char *)(a3 + 3), 52);
  if ( !v7 )
    return sub_28778();
  v10 = (unsigned int *)(a3 + 12);
  v11 = *(_DWORD *)(a3 + 8);
  v31 = v11;
  if ( v30[0] == 2 )
  {
    while ( bswap32(v11) >> 16 << 16 == 2139029504 && sub_21500(v30, 0, -1, 0) )
    {
      v49 = 0;
      sub_27E00((unsigned int)v30, (int)v37);
      *(_DWORD *)v9 = v31;
      v19 = v37[1];
      v9[4] = v37[0];
      v9[5] = v19;
      v9[6] = v48;
      v9[7] = v47;
      v20 = v43;
      v21 = v43 < 0.0;
      v22 = v40;
      v23 = v39;
      v24 = bswap32(v41);
      *((_DWORD *)v9 + 2) = bswap32(v38);
      v25 = v42;
      *((_DWORD *)v9 + 3) = bswap32(v23);
      *((_DWORD *)v9 + 4) = bswap32(v22);
      *((_DWORD *)v9 + 5) = v24;
      *((_DWORD *)v9 + 6) = bswap32(v25);
      if ( v21 )
      {
        v26 = -v20;
        v27 = (int)v26;
        v13 = (unsigned int)((v26 - (double)(unsigned int)(int)v26) * 4294967300.0);
        if ( v13 )
        {
          v13 = bswap32(-v13);
          v12 = ~v27;
        }
        else
        {
          v12 = -v27;
        }
      }
      else
      {
        v12 = (int)v20;
        v13 = bswap32((unsigned int)((v20 - (double)(unsigned int)(int)v20) * 4294967300.0));
      }
      *((_DWORD *)v9 + 8) = v13;
      *((_DWORD *)v9 + 7) = bswap32(v12);
      if ( v44 < 0.0 )
      {
        v28 = (int)-v44;
        v15 = (unsigned int)((-v44 - (double)(unsigned int)v28) * 4294967300.0);
        if ( v15 )
        {
          v15 = bswap32(-v15);
          v14 = ~v28;
        }
        else
        {
          v14 = -v28;
        }
      }
      else
      {
        v14 = (int)v44;
        v15 = bswap32((unsigned int)((v44 - (double)(unsigned int)(int)v44) * 4294967300.0));
      }
      --v8;
      *((_DWORD *)v9 + 10) = v15;
      *((_DWORD *)v9 + 9) = bswap32(v14);
      v16 = v49;
      v17 = bswap32(v46);
      *((_DWORD *)v9 + 11) = bswap32(v45);
      *((_DWORD *)v9 + 12) = v17;
      sub_1D394(v16);
      v9 = sub_2824C();
      if ( v8 == -1 )
        return sub_28778();
      v18 = *v10++;
      v11 = v18;
      v31 = v18;
      if ( v30[0] != 2 )
        return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    }
  }
  return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
}
