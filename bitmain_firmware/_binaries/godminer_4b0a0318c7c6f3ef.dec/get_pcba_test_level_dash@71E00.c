int __fastcall get_pcba_test_level_dash(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int (**v6)(); // r0
  int v7; // r0
  unsigned __int16 *v8; // r1
  int v9; // r2
  int v10; // r12
  int v11; // lr
  unsigned __int16 *i; // r3
  int v13; // r3
  int j; // r2
  int v15; // r3
  char *v16; // r1
  int v17; // r2
  char *v18; // r5
  _DWORD *v19; // r3
  int v20; // r1
  char *v21; // r1
  const char *v22; // r2
  char *v23; // r1
  _DWORD *v24; // r3
  int v25; // r1
  int v26; // [sp+48h] [bp-1068h] BYREF
  __int16 v27; // [sp+4Ch] [bp-1064h]
  _DWORD v28[7]; // [sp+50h] [bp-1060h] BYREF
  int v29; // [sp+6Ch] [bp-1044h]
  _DWORD v30[8]; // [sp+70h] [bp-1040h] BYREF
  _DWORD v31[7]; // [sp+90h] [bp-1020h] BYREF
  int v32; // [sp+ACh] [bp-1004h]
  char v33[4096]; // [sp+B0h] [bp-1000h] BYREF

  v2 = a1[251];
  v27 = 0;
  v26 = 0;
  if ( v2 )
  {
LABEL_2:
    *a2 = v2;
    return 0;
  }
  v6 = dev_ctrl((int)a1);
  v7 = ((int (__fastcall *)(_DWORD, int, int, int *))v6[26])(a1[62], 52, 393216, &v26);
  if ( !v7 )
  {
    v8 = (unsigned __int16 *)&unk_16AFD8;
    v9 = 700;
    v10 = (unsigned __int16)v26;
    v11 = HIWORD(v26);
    for ( i = (unsigned __int16 *)&unk_16AFD8; ; v9 = i[2] )
    {
      if ( (unsigned __int16)v26 == v9
        && i[3] == HIWORD(v26)
        && *((unsigned __int8 *)i + 8) == (unsigned __int8)v27
        && *((unsigned __int8 *)i + 9) == HIBYTE(v27) )
      {
        v13 = *(_DWORD *)&aGlobalIdxInitD_1[10 * v7 + 940];
        a1[251] = v13;
        goto LABEL_13;
      }
      ++v7;
      i += 5;
      if ( v7 == 5 )
        break;
    }
    v13 = a1[251];
LABEL_13:
    if ( !v13 )
    {
      for ( j = 700; v10 != j || v8[3] != v11; j = v8[2] )
      {
        ++v13;
        v8 += 5;
        if ( v13 == 5 )
          goto LABEL_20;
      }
      v15 = *(_DWORD *)&aGlobalIdxInitD_1[10 * v13 + 940];
      a1[251] = v15;
      if ( v15 )
        goto LABEL_21;
LABEL_20:
      a1[251] = 5;
    }
LABEL_21:
    V_LOCK();
    LOWORD(v16) = 27372;
    HIWORD(v16) = (unsigned int)":" >> 16;
    V_INT((int)v31, v16, (int)a1[64]);
    LOWORD(v17) = -19568;
    HIWORD(v17) = (unsigned int)"fulltest_dcr" >> 16;
    v18 = &aGlobalIdxInitD_1[10 * a1[251] - 10];
    logfmt_raw(
      v33,
      0x1000u,
      0,
      v32,
      v31[0],
      v31[1],
      v31[2],
      v31[3],
      v31[4],
      v31[5],
      v31[6],
      v32,
      v17,
      (unsigned __int16)v26,
      HIWORD(v26),
      (unsigned __int8)v18[948],
      (unsigned __int8)v18[949]);
    V_UNLOCK();
    LOWORD(v19) = 20532;
    HIWORD(v19) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v20) = -19880;
    HIWORD(v20) = (unsigned int)"_1727" >> 16;
    zlog(*v19, v20, 173, "get_pcba_test_level_dash", 24, 1049, 40, v33);
    v2 = a1[251];
    goto LABEL_2;
  }
  *a2 = -1;
  V_LOCK();
  LOWORD(v21) = 27372;
  HIWORD(v21) = (unsigned int)":" >> 16;
  V_INT((int)v28, v21, (int)a1[64]);
  LOWORD(v22) = -19600;
  LOWORD(v23) = 31204;
  HIWORD(v22) = (unsigned int)"io_cfg_DCR_1727" >> 16;
  HIWORD(v23) = (unsigned int)"iner is forbidden to start again as it is already started, will exit immediately." >> 16;
  V_STR(v30, v23, v22);
  logfmt_raw(
    v33,
    0x1000u,
    0,
    v29,
    v28[0],
    v28[1],
    v28[2],
    v28[3],
    v28[4],
    v28[5],
    v28[6],
    v29,
    v30[0],
    v30[1],
    v30[2],
    v30[3],
    v30[4],
    v30[5],
    v30[6],
    v30[7],
    "pic info lost");
  V_UNLOCK();
  LOWORD(v24) = 20532;
  HIWORD(v24) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v25) = -19880;
  HIWORD(v25) = (unsigned int)"_1727" >> 16;
  zlog(*v24, v25, 173, "get_pcba_test_level_dash", 24, 1027, 120, v33);
  return 15;
}
