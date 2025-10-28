int __fastcall high_speed_tx_check_eth(int a1)
{
  char *v2; // r1
  _DWORD *v3; // r11
  int v4; // r4
  int v5; // r4
  int v6; // r1
  int i; // r4
  unsigned __int8 v8; // r1
  _DWORD *v9; // r9
  int v10; // r11
  char *v11; // r5
  int v12; // r8
  int v13; // r7
  char *v14; // r6
  char *v15; // r5
  int v16; // t1
  const char *v17; // r1
  unsigned int v18; // r3
  char *v19; // r0
  int v20; // r2
  bool v21; // cc
  int v22; // r3
  int v23; // r1
  int v24; // r3
  int v25; // r1
  int v27; // [sp+4h] [bp-1148h]
  int v28; // [sp+20h] [bp-112Ch]
  unsigned int v29; // [sp+28h] [bp-1124h]
  int v30; // [sp+30h] [bp-111Ch]
  int *v32; // [sp+38h] [bp-1114h]
  int v33; // [sp+44h] [bp-1108h] BYREF
  _DWORD v34[6]; // [sp+48h] [bp-1104h] BYREF
  _DWORD v35[7]; // [sp+60h] [bp-10ECh] BYREF
  int v36; // [sp+7Ch] [bp-10D0h]
  char v37; // [sp+83h] [bp-10C9h] BYREF
  _BYTE dest[196]; // [sp+84h] [bp-10C8h] BYREF
  _DWORD v39[2]; // [sp+148h] [bp-1004h] BYREF
  int v40; // [sp+150h] [bp-FFCh]
  int v41; // [sp+154h] [bp-FF8h]

  LOWORD(v3) = 20532;
  V_LOCK();
  LOWORD(v2) = 27372;
  HIWORD(v2) = (unsigned int)":" >> 16;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  V_INT((int)v35, v2, *(int *)(a1 + 256));
  LOWORD(v4) = -14172;
  HIWORD(v4) = (unsigned int)": %d" >> 16;
  v28 = v4;
  v5 = 0;
  logfmt_raw(
    (char *)v39,
    0x1000u,
    0,
    v36,
    v35[0],
    v35[1],
    v35[2],
    v35[3],
    v35[4],
    v35[5],
    v35[6],
    v36,
    v28,
    "high_speed_tx_check_eth");
  V_UNLOCK();
  LOWORD(v6) = -14448;
  HIWORD(v6) = (unsigned int)" lost cnt: %08x" >> 16;
  zlog(*v3, v6, 171, "high_speed_tx_check_eth", 23, 329, 60, v39);
  do
  {
    sub_78F08(a1, v5, 19, v5);
    ++v5;
    usleep(0x2710u);
  }
  while ( v5 != 16 );
  for ( i = 0; i != 16; ++i )
  {
    v8 = i;
    sub_78F08(a1, v8, 12, 3);
  }
  v32 = v34;
  memset(&dest[64], 0, 0x81u);
  v9 = v3;
  v34[0] = 0;
  v34[1] = 4;
  v34[2] = 7000000;
  v34[3] = 7000004;
  v34[4] = 14090220;
  v34[5] = 14090224;
  do
  {
    v10 = 0;
    v30 = *v32++;
    do
    {
      v33 = 0;
      v39[1] = v30;
      v40 = 1;
      v39[0] = 0;
      v41 = 0;
      BYTE1(v40) = v10;
      v11 = (char *)calloc(0x8Cu, 1u);
      (*(void (__fastcall **)(int, _DWORD *, int, char *, int *, int, int, _DWORD))(a1 + 304))(
        a1,
        v39,
        1,
        v11,
        &v33,
        v27,
        2000,
        0);
      memcpy(dest, v11 + 10, 0x80u);
      free(v11);
      if ( v33 )
      {
        LOWORD(v12) = -14164;
        LOWORD(v13) = -14448;
        v14 = &v37;
        v15 = &dest[64];
        v29 = 0;
        do
        {
          V_LOCK();
          v16 = (unsigned __int8)*++v14;
          HIWORD(v12) = (unsigned int)"chip %02x core %02x membist err cnt: %08x" >> 16;
          logfmt_raw((char *)v39, 0x1000u, 0, v12, v10, v16);
          V_UNLOCK();
          HIWORD(v13) = (unsigned int)" lost cnt: %08x" >> 16;
          zlog(*v9, v13, 171, "high_speed_tx_check_eth", 23, 387, 20, v39);
          LOWORD(v17) = 19284;
          v18 = (unsigned __int8)(v16 - 1);
          v19 = v15;
          v20 = v16;
          v21 = v18 > 0xFD;
          if ( v18 > 0xFD )
            v18 = v29;
          v15 += 2;
          if ( v21 )
            v29 = ++v18;
          HIWORD(v17) = (unsigned int)"ner-origin_godminer-new/backend/device/hal/drv_pic/pic_1704.c" >> 16;
          sprintf(v19, v17, v20, v18);
        }
        while ( v14 != &dest[63] );
        V_LOCK();
        LOWORD(v22) = -14136;
        HIWORD(v22) = (unsigned int)"err cnt: %08x" >> 16;
        logfmt_raw((char *)v39, 0x1000u, 0, v22, v30, v10, &dest[64]);
        V_UNLOCK();
        LOWORD(v23) = -14448;
        HIWORD(v23) = (unsigned int)" lost cnt: %08x" >> 16;
        zlog(*v9, v23, 171, "high_speed_tx_check_eth", 23, 394, 60, v39);
        if ( v29 == 64 )
        {
          V_LOCK();
          LOWORD(v24) = -14092;
          HIWORD(v24) = (unsigned int)"not done!" >> 16;
          logfmt_raw((char *)v39, 0x1000u, 0, v24);
          V_UNLOCK();
          LOWORD(v25) = -14448;
          HIWORD(v25) = (unsigned int)" lost cnt: %08x" >> 16;
          zlog(*v9, v25, 171, "high_speed_tx_check_eth", 23, 397, 60, v39);
          while ( 1 )
            ;
        }
      }
      ++v10;
    }
    while ( v10 != 8 );
  }
  while ( v32 != v35 );
  return 0;
}
