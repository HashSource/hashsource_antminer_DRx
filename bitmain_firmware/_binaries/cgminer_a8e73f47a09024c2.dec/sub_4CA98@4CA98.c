int __fastcall sub_4CA98(int result)
{
  unsigned int v1; // r6
  int v2; // r8
  float v3; // s0
  float v4; // s16
  int v5; // s26
  int v6; // r10
  float v7; // s14
  int v8; // r3
  float v9; // s23
  float v10; // s22
  float v11; // s15
  int v12; // r5
  unsigned int v13; // r4
  float v14; // s15
  unsigned int v15; // r5
  float v16; // s15
  int v17; // r7
  bool v18; // cc
  int v19; // r11
  int v20; // r9
  float v21; // s15
  float v22; // s16
  int v23; // r5
  unsigned int v24; // r5
  int v25; // r4
  unsigned int v26; // [sp+1Ch] [bp-808h]
  unsigned int v27; // [sp+1Ch] [bp-808h]
  char s[2052]; // [sp+20h] [bp-804h] BYREF

  v6 = result;
  if ( *((_BYTE *)&unk_B3AFC + result + 24) != 1 )
    return result;
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "\n%s: chian = %d freq = %f\n", "set_frequency_chain", result, v3);
    sub_3F178(5, s, 0);
  }
  v7 = 12.5;
  v8 = 0;
  v9 = 25.0;
  v10 = 2500.0;
  while ( 1 )
  {
    v26 = (unsigned int)(float)(v10 / v3);
    v11 = (float)(v10 / v3) - (float)v26;
    if ( v11 < v9 )
    {
      v5 = (unsigned __int8)(unsigned int)(float)(25.0 / v7);
      v2 = (unsigned __int8)(unsigned int)(float)((float)((float)v5 * v10) / 25.0);
      v1 = (unsigned __int8)v26;
      if ( v11 < 0.000001 )
      {
        v9 = (float)(v10 / v3) - (float)v26;
        goto LABEL_20;
      }
      v9 = (float)(v10 / v3) - (float)v26;
      v4 = v10;
    }
    v10 = v10 - v7;
    if ( v10 >= 1400.0 )
      goto LABEL_9;
    v10 = v4;
LABEL_20:
    if ( v1 <= 0x10 )
    {
      v13 = v1;
      v20 = 1;
      v19 = 1;
      goto LABEL_45;
    }
    v12 = 15;
    while ( 1 )
    {
      v13 = (unsigned __int8)v12;
      v14 = (float)v1 / (float)v12;
      printf(
        "--- %s: pll_div decimals %f postdiv_f %f",
        "get_pllparam_divider",
        (float)(v14 - (float)(unsigned int)v14),
        v14);
      if ( (float)(v14 - (float)(unsigned int)v14) < 0.0001 )
        break;
      v13 = (unsigned __int8)--v12;
      if ( v12 == 1 )
        goto LABEL_25;
    }
    v1 = (unsigned __int8)sub_5E818(v1, (unsigned __int8)v12);
LABEL_25:
    if ( v13 != 2 || (v1 & 1) == 0 )
      break;
    printf("--- %s: need recal 1", "get_pllparam_divider");
    if ( v10 <= 1400.0 )
    {
      printf("--- %s: !!!!!!!!!!!!!!!Set freq don't ok!!!!!!!!!! using 200M pll", "get_pllparam_divider");
      v22 = 0.0;
      LOBYTE(v13) = 15;
      v23 = 7864593;
      goto LABEL_46;
    }
    v4 = v10;
    v8 = 1;
LABEL_9:
    v7 = 12.5;
    if ( v10 >= 3125.0 )
      v7 = 25.0;
    if ( v8 )
    {
      v10 = v4 - v7;
      v8 = 0;
      v9 = 25.0;
    }
  }
  if ( v1 <= 7 )
  {
    v19 = v1;
    v20 = 1;
  }
  else
  {
    v15 = 6;
    while ( 1 )
    {
      v16 = (float)v1 / (float)(int)v15;
      v27 = (unsigned int)v16;
      if ( (float)(v16 - (float)(unsigned int)v16) < 0.0001 )
        break;
      v15 = (unsigned __int8)(v15 - 1);
      if ( v15 == 255 )
      {
        v17 = 1;
LABEL_38:
        v19 = v15;
        v20 = v17;
        goto LABEL_41;
      }
    }
    v17 = (unsigned __int8)v27;
    v18 = (unsigned __int8)v27 > v15;
    if ( (unsigned __int8)v27 <= v15 )
      v18 = (unsigned __int8)v27 > 7u;
    if ( !v18 )
      goto LABEL_38;
    printf("--- %s: need recal 2", "get_pllparam_divider");
    if ( v10 > 1400.0 )
    {
      v4 = v10;
      v8 = 1;
      goto LABEL_9;
    }
    v19 = v15;
    v20 = (unsigned __int8)v27;
LABEL_41:
    if ( v1 != v17 * v15 )
    {
      printf("--- %s: Don't find postdiv1 %d * postdiv2 %d = postdiv %d", "get_pllparam_divider", v15, v17, v1);
      printf("--- %s: !!!!!!!!!!!!!!!Set freq don't ok!!!!!!!!!! using 200M pll", "get_pllparam_divider");
      v22 = 0.0;
      LOBYTE(v13) = 15;
      v23 = 7864593;
      goto LABEL_46;
    }
  }
LABEL_45:
  v21 = (float)(25.0 / (float)v5) * (float)v2;
  v22 = v21 / (float)(v20 * v19);
  v23 = (v5 << 8) | (v2 << 16) | v20 | (16 * v19);
  printf("--- %s: Want freq %f  real freq %f", "get_pllparam_divider", v3, (float)(v21 / (float)(int)(v13 * v20 * v19)));
  printf(
    "--- %s: pll_vco %f, fbdiv %#x refdiv %#x postdiv1 %#x postdiv2 %#x, pll_divider %d ,{pll_value %#x}",
    "get_pllparam_divider",
    v10,
    v2,
    v5,
    v19,
    v20,
    v13,
    v23);
LABEL_46:
  v24 = v23 | 0xC0000000;
  v25 = (unsigned __int8)(v13 - 1);
  if ( byte_7FE78 || byte_7CC60 || dword_7A52C > 4 )
  {
    snprintf(s, 0x800u, "\n%s: pll_param = %08x, divider = %02x, pll_freq = %f\n", "set_frequency_chain", v24, v25, v22);
    sub_3F178(5, s, 0);
  }
  sub_4B140(v6, 1, 0, 12, v24);
  sub_30168();
  sub_4B140(v6, 1, 0, 112, v25);
  sub_30168();
  sub_4B140(v6, 1, 0, 12, v24);
  sub_30168();
  sub_4B140(v6, 1, 0, 96, -2141454063);
  sub_30168();
  sub_4B140(v6, 1, 0, 100, -2141191919);
  sub_30168();
  sub_4B140(v6, 1, 0, 104, -2140929775);
  return sub_30168();
}
