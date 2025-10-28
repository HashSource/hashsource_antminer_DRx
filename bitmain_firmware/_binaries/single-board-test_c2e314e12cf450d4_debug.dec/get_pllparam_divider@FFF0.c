int __fastcall get_pllparam_divider(int *a1, unsigned __int8 *a2, float *a3)
{
  float v3; // s0
  float v11; // [sp+34h] [bp+1Ch]
  float v12; // [sp+3Ch] [bp+24h]
  float v13; // [sp+44h] [bp+2Ch]
  unsigned int v14; // [sp+48h] [bp+30h]
  char v15; // [sp+5Fh] [bp+47h]
  float v16; // [sp+60h] [bp+48h]
  unsigned __int8 v17; // [sp+66h] [bp+4Eh]
  unsigned __int8 v18; // [sp+67h] [bp+4Fh]
  unsigned __int8 v19; // [sp+68h] [bp+50h]
  unsigned __int8 v20; // [sp+69h] [bp+51h]
  unsigned __int8 v21; // [sp+6Ah] [bp+52h]
  unsigned __int8 v22; // [sp+6Bh] [bp+53h]
  float v23; // [sp+6Ch] [bp+54h]
  float v24; // [sp+70h] [bp+58h]
  float v25; // [sp+74h] [bp+5Ch]

  v16 = 25.0;
  v15 = 0;
  v25 = 2500.0;
  while ( 1 )
  {
    while ( 1 )
    {
      do
      {
        if ( v25 >= 3125.0 )
          v23 = 25.0;
        else
          v23 = 12.5;
        if ( v15 )
        {
          v25 = v24 - v23;
          v15 = 0;
          v16 = 25.0;
        }
        v14 = (unsigned int)(float)(v25 / v3);
        if ( (float)((float)(v25 / v3) - (float)v14) < v16 )
        {
          v17 = (unsigned int)(float)(v25 / v3);
          v24 = v25;
          v22 = (unsigned int)(float)((float)((float)(unsigned __int8)(unsigned int)(float)(25.0 / v23) * v25) / 25.0);
          v21 = (unsigned int)(float)(25.0 / v23);
          v16 = (float)(v25 / v3) - (float)v14;
          if ( v16 < 0.000001 )
            break;
        }
        v25 = v25 - v23;
      }
      while ( v25 >= 1400.0 );
      if ( v17 <= 0x10u )
      {
        v18 = v17;
        v19 = 1;
        v20 = 1;
        goto LABEL_33;
      }
      v18 = 16;
      while ( v18-- > 2u )
      {
        v12 = (float)v17 / (float)v18;
        v13 = v12 - (float)(unsigned int)v12;
        printf("--- %s: pll_div decimals %f postdiv_f %f", "get_pllparam_divider", v13, v12);
        if ( v13 < 0.0001 )
        {
          v17 /= v18;
          break;
        }
      }
      if ( v18 != 2 || (v17 & 1) == 0 )
        break;
      printf("--- %s: need recal 1", "get_pllparam_divider");
      if ( v24 <= 1400.0 )
      {
        printf("--- %s: !!!!!!!!!!!!!!!Set freq don't ok!!!!!!!!!! using 200M pll", "get_pllparam_divider");
        *a1 = 7864593;
        *a2 = 15;
        return -1;
      }
      v25 = v24;
      v15 = 1;
    }
    if ( v17 <= 7u )
    {
      v20 = v17;
      v19 = 1;
      goto LABEL_33;
    }
    v20 = 7;
    v19 = 1;
    while ( v20-- != 0 )
    {
      v11 = (float)v17 / (float)v20;
      if ( (float)(v11 - (float)(unsigned int)v11) < 0.0001 )
      {
        v19 = (unsigned int)v11;
        break;
      }
    }
    if ( v20 >= (unsigned int)v19 && v19 <= 7u )
      break;
    printf("--- %s: need recal 2", "get_pllparam_divider");
    if ( v24 <= 1400.0 )
      break;
    v25 = v24;
    v15 = 1;
  }
  if ( v17 != v19 * v20 )
  {
    printf("--- %s: Don't find postdiv1 %d * postdiv2 %d = postdiv %d", "get_pllparam_divider", v20, v19, v17);
    *a1 = 7864593;
    *a2 = 15;
    printf("--- %s: !!!!!!!!!!!!!!!Set freq don't ok!!!!!!!!!! using 200M pll", "get_pllparam_divider");
    return -1;
  }
LABEL_33:
  if ( a3 )
    *a3 = (float)((float)(25.0 / (float)v21) * (float)v22) / (float)(v19 * v20);
  *a1 = v19 | (v22 << 16) | (v21 << 8) | (16 * v20);
  *a2 = v18;
  printf(
    "--- %s: Want freq %f  real freq %f",
    "get_pllparam_divider",
    v3,
    (float)((float)((float)(25.0 / (float)v21) * (float)v22) / (float)(v18 * v19 * v20)));
  printf(
    "--- %s: pll_vco %f, fbdiv %#x refdiv %#x postdiv1 %#x postdiv2 %#x, pll_divider %d ,{pll_value %#x}",
    "get_pllparam_divider",
    v24,
    v22,
    v21,
    v20,
    v19,
    *a2,
    *a1);
  return 0;
}
