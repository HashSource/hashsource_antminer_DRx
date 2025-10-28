int __fastcall sub_3D854(int result)
{
  unsigned int v1; // r6
  int v2; // r10
  float v3; // s0
  __int64 v4; // d8
  __int64 v5; // d9
  __int64 v6; // d10
  __int64 v7; // d11
  __int64 v8; // d12
  __int64 v9; // d13
  __int64 v10; // d14
  int v11; // r11
  float v12; // s18
  float v13; // s13
  float v14; // s15
  int v15; // r5
  float v16; // s19
  unsigned int v17; // r4
  float v18; // s14
  _BOOL4 v19; // r7
  int v20; // r3
  int v21; // r5
  unsigned int v22; // r2
  float v23; // s15
  int v24; // r3
  int v25; // r7
  int v26; // r2
  int v27; // r6
  float v28; // s15
  int v29; // r6
  unsigned int v30; // r8
  float v31; // s13
  float v32; // s16
  int v33; // r3
  int v34; // r4
  unsigned int v35; // [sp+18h] [bp-868h]
  unsigned int v36; // [sp+18h] [bp-868h]
  char s[2052]; // [sp+20h] [bp-860h] BYREF
  __int64 v38; // [sp+824h] [bp-5Ch]
  __int64 v39; // [sp+82Ch] [bp-54h]
  __int64 v40; // [sp+834h] [bp-4Ch]
  __int64 v41; // [sp+83Ch] [bp-44h]
  __int64 v42; // [sp+844h] [bp-3Ch]
  __int64 v43; // [sp+84Ch] [bp-34h]
  __int64 v44; // [sp+854h] [bp-2Ch]
  unsigned int v45; // [sp+864h] [bp-1Ch]
  int v46; // [sp+874h] [bp-Ch]

  if ( *((_BYTE *)&unk_73ED8 + result + 24) != 1 )
    return result;
  v45 = v1;
  v46 = v2;
  v38 = v4;
  v39 = v5;
  v40 = v6;
  v41 = v7;
  v42 = v8;
  v43 = v9;
  v44 = v10;
  v11 = result;
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "\n%s: chian = %d freq = %f\n", "set_frequency_chain", result, v3);
    sub_343C4(5, s, 0);
  }
  v12 = 2500.0;
  v13 = 12.5;
  HIDWORD(v8) = 25.0;
  while ( 1 )
  {
    v35 = (unsigned int)(float)(v12 / v3);
    v14 = (float)(v12 / v3) - (float)v35;
    if ( v14 < *((float *)&v8 + 1) )
    {
      v1 = (unsigned __int8)v35;
      *((float *)&v8 + 1) = (float)(v12 / v3) - (float)v35;
      LODWORD(v8) = (unsigned __int8)(unsigned int)(float)(25.0 / v13);
      v2 = (unsigned __int8)(unsigned int)(float)((float)((float)(int)v8 * v12) / 25.0);
      if ( v14 < 0.000001 )
        goto LABEL_11;
      *(float *)&v4 = v12;
    }
    v12 = v12 - v13;
    if ( v12 >= 1400.0 )
    {
      v19 = 0;
      goto LABEL_20;
    }
    v12 = *(float *)&v4;
LABEL_11:
    if ( v1 <= 0x10 )
    {
      v26 = 1;
      v17 = v1;
      v25 = 1;
      v21 = 1;
      v27 = 16;
      v28 = 1.0;
LABEL_31:
      v29 = v27 | v25 | (v2 << 16) | ((_DWORD)v8 << 8);
      v30 = v29 | 0xC0000000;
      v31 = (float)(25.0 / (float)(int)v8) * (float)v2;
      v32 = v31 / v28;
      printf("--- %s: Want freq %f  real freq %f", "get_pllparam_divider", v3, (float)(v31 / (float)(int)(v26 * v17)));
      printf(
        "--- %s: pll_vco %f, fbdiv %#x refdiv %#x postdiv1 %#x postdiv2 %#x, pll_divider %d ,{pll_value %#x}",
        "get_pllparam_divider",
        v12,
        v2,
        (_DWORD)v8,
        v21,
        v25,
        v17,
        v29);
      v33 = (unsigned __int8)(v17 - 1);
      v34 = v33;
      goto LABEL_32;
    }
    v15 = 15;
    v16 = (float)v1;
    while ( 1 )
    {
      v18 = (float)v15;
      v17 = (unsigned __int8)v15--;
      printf(
        "--- %s: pll_div decimals %f postdiv_f %f",
        "get_pllparam_divider",
        (float)((float)(v16 / v18) - (float)(unsigned int)(float)(v16 / v18)),
        (float)(v16 / v18));
      if ( (float)((float)(v16 / v18) - (float)(unsigned int)(float)(v16 / v18)) < 0.0001 )
        break;
      v17 = (unsigned __int8)(v17 - 1);
      if ( v15 == 1 )
        goto LABEL_16;
    }
    v1 = (unsigned __int8)sub_49878(v1, v17);
LABEL_16:
    if ( v17 != 2 || (v1 & 1) == 0 )
      break;
    printf("--- %s: need recal 1", "get_pllparam_divider");
    if ( v12 <= 1400.0 )
    {
      v34 = 14;
      v30 = -1065877231;
      v32 = 0.0;
      printf("--- %s: !!!!!!!!!!!!!!!Set freq don't ok!!!!!!!!!! using 200M pll", "get_pllparam_divider");
      v33 = 14;
      goto LABEL_32;
    }
    *(float *)&v4 = v12;
    v19 = 1;
LABEL_20:
    v13 = 12.5;
    if ( v12 >= 3125.0 )
      v13 = 25.0;
    if ( v19 )
    {
      v12 = *(float *)&v4 - v13;
      HIDWORD(v8) = 25.0;
    }
  }
  if ( v1 <= 7 )
  {
    v21 = v1;
    v25 = 1;
    v27 = 16 * v1;
    v26 = v21;
    v28 = (float)v21;
    goto LABEL_31;
  }
  v20 = 6;
  while ( 1 )
  {
    v21 = v20;
    v22 = (unsigned __int8)v20--;
    v23 = (float)v1 / (float)v21;
    v36 = (unsigned int)v23;
    if ( (float)(v23 - (float)(unsigned int)v23) < 0.0001 )
      break;
    if ( !v21 )
    {
      v24 = 255;
      v25 = 1;
      v21 = 255;
      goto LABEL_29;
    }
  }
  v19 = v22 < (unsigned __int8)v36 || (unsigned __int8)v36 > 7u;
  if ( v19 )
  {
    printf("--- %s: need recal 2", "get_pllparam_divider");
    if ( v12 > 1400.0 )
    {
      *(float *)&v4 = v12;
      goto LABEL_20;
    }
    v25 = (unsigned __int8)v36;
    v24 = (unsigned __int8)v36 * v21;
  }
  else
  {
    v25 = (unsigned __int8)v36;
    v24 = (unsigned __int8)v36 * v21;
  }
LABEL_29:
  v26 = v1;
  if ( v1 == v24 )
  {
    v27 = 16 * v21;
    v28 = (float)v24;
    goto LABEL_31;
  }
  printf("--- %s: Don't find postdiv1 %d * postdiv2 %d = postdiv %d", "get_pllparam_divider", v21, v25, v1);
  v34 = 14;
  v30 = -1065877231;
  v32 = 0.0;
  printf("--- %s: !!!!!!!!!!!!!!!Set freq don't ok!!!!!!!!!! using 200M pll", "get_pllparam_divider");
  v33 = 14;
LABEL_32:
  if ( byte_73320 || byte_6FA70 || dword_6D35C > 4 )
  {
    snprintf(s, 0x800u, "\n%s: pll_param = %08x, divider = %02x, pll_freq = %f\n", "set_frequency_chain", v30, v33, v32);
    sub_343C4(5, s, 0);
  }
  sub_3C790(v11, 1, 0, 12, v30);
  sub_2A810();
  sub_3C790(v11, 1, 0, 112, v34);
  sub_2A810();
  sub_3C790(v11, 1, 0, 12, v30);
  sub_2A810();
  sub_3C790(v11, 1, 0, 96, -2141454063);
  sub_2A810();
  sub_3C790(v11, 1, 0, 100, -2141191919);
  sub_2A810();
  sub_3C790(v11, 1, 0, 104, -2140929775);
  return sub_2A810();
}
