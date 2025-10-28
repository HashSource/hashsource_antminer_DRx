int __fastcall serdes_wait_status(int a1, int a2, int a3, int a4, int a5)
{
  char *v8; // r8
  int v9; // r0
  int v10; // r11
  int *v11; // r9
  char *v12; // r4
  int v13; // r6
  int v14; // r0
  int v15; // r2
  int v16; // r1
  char *v18; // [sp+38h] [bp-105Ch]
  _DWORD v20[7]; // [sp+50h] [bp-1044h] BYREF
  int v21; // [sp+6Ch] [bp-1028h]
  _DWORD v22[7]; // [sp+70h] [bp-1024h] BYREF
  int v23; // [sp+8Ch] [bp-1008h]
  char v24[4080]; // [sp+90h] [bp-1004h] BYREF

  v8 = (char *)malloc(0x600u);
  sub_7F86C(a1, a3, 78, a4 | 0x310000);
  v9 = sub_7F8BC(a1, a3, 79, v8);
  if ( !v9 )
  {
    free(v8);
    return 22;
  }
  if ( v9 <= 0 )
    goto LABEL_12;
  LOWORD(v10) = -11256;
  HIWORD(v10) = (unsigned int)"Perform refb_clk_div2_en override" >> 16;
  LOWORD(v11) = 20532;
  v18 = &v8[12 * v9];
  HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
  v12 = v8;
  v13 = 0;
  do
  {
    while ( a3 == 255 )
    {
      if ( a5 != bswap32(*(_DWORD *)v12) )
      {
        V_LOCK();
        ++v13;
        V_INT((int)v20, "chain", *(int *)(a1 + 256));
        logfmt_raw(
          v24,
          0x1000u,
          0,
          v21,
          v20[0],
          v20[1],
          v20[2],
          v20[3],
          v20[4],
          v20[5],
          v20[6],
          v21,
          v10,
          (unsigned __int8)v12[4],
          (unsigned __int8)v12[8],
          a4,
          bswap32(*(_DWORD *)v12),
          a5);
        V_UNLOCK();
        v14 = *v11;
        v15 = 120;
        goto LABEL_9;
      }
LABEL_5:
      v12 += 12;
      if ( v12 == v18 )
        goto LABEL_10;
    }
    if ( (unsigned __int8)v12[8] != a3 || a5 == bswap32(*(_DWORD *)v12) )
      goto LABEL_5;
    V_LOCK();
    ++v13;
    V_INT((int)v22, "chain", *(int *)(a1 + 256));
    logfmt_raw(
      v24,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      v10,
      (unsigned __int8)v12[4],
      (unsigned __int8)v12[8],
      a4,
      bswap32(*(_DWORD *)v12),
      a5);
    V_UNLOCK();
    v14 = *v11;
    v15 = 126;
LABEL_9:
    LOWORD(v16) = -11432;
    HIWORD(v16) = (unsigned int)" tx_recal_force_en_r, tx_recal_skip_en_r" >> 16;
    v12 += 12;
    zlog(v14, v16, 174, "serdes_wait_status", 18, v15, 60, v24);
  }
  while ( v12 != v18 );
LABEL_10:
  if ( v13 )
    usleep(0xF4240u);
LABEL_12:
  free(v8);
  return 0;
}
