int __fastcall chip_setting_reset_bist_ltc(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r11
  int v8; // r8
  _DWORD *v9; // r12
  int v10; // r3
  _DWORD *v11; // r7
  int v12; // r1
  int v13; // r3
  bool v14; // zf
  int v15; // r2
  int v16; // r5
  int v17; // r10
  int v18; // r3
  int v19; // r2
  int v20; // r0
  int v21; // r1
  char v23; // r2
  int v24; // r1
  char v25; // r3
  int v26; // r3
  char v27; // r3
  int v28; // r3
  int *v31; // [sp+1Ch] [bp-1018h]
  int v32; // [sp+20h] [bp-1014h] BYREF
  int v33; // [sp+24h] [bp-1010h]
  int v34; // [sp+28h] [bp-100Ch]
  int v35; // [sp+2Ch] [bp-1008h]
  char var1004[4112]; // [sp+30h] [bp-1004h] BYREF

  v7 = a5;
  v8 = a2;
  V_LOCK();
  LOWORD(v9) = 20532;
  LOWORD(v10) = -27680;
  HIWORD(v9) = (unsigned int)&g_fan_zc >> 16;
  HIWORD(v10) = (unsigned int)"space" >> 16;
  v11 = v9;
  v31 = v9;
  logfmt_raw(var1004, 0x1000u, 0, v10, "chip_setting_reset_bist_ltc");
  V_UNLOCK();
  LOWORD(v12) = 4072;
  HIWORD(v12) = (unsigned int)"VN" >> 16;
  zlog(*v11, v12, 176, "chip_setting_reset_bist_ltc", 27, 242, 40, var1004);
  if ( !a4 )
  {
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    if ( !a2 )
      v8 = a5;
    LOBYTE(v34) = a2;
    LOBYTE(v13) = *(_BYTE *)(a1 + 356);
    if ( a2 )
    {
      BYTE1(v35) = *(_BYTE *)(a1 + 356);
      v8 = a5;
      goto LABEL_4;
    }
    goto LABEL_13;
  }
  v13 = *(_DWORD *)(a1 + 356);
  v14 = v8 == 0;
  v15 = v8;
  v8 = 0;
  v32 = 0;
  v7 = v13 - 1;
  v33 = 0;
  v35 = 0;
  v34 = (unsigned __int8)v15;
  if ( v14 )
  {
    v8 = v15;
LABEL_13:
    v23 = *(_BYTE *)(*(_DWORD *)(a1 + 504) + a3);
    BYTE1(v35) = v13;
    BYTE1(v34) = v23;
    if ( v7 >= v8 )
      goto LABEL_4;
    usleep(0x2710u);
    v24 = *(_DWORD *)(a1 + 504);
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v25 = *(_BYTE *)(v24 + a3);
    BYTE1(v35) = *(_DWORD *)(a1 + 356);
    BYTE1(v34) = v25;
    goto LABEL_15;
  }
  BYTE1(v34) = 0;
  BYTE1(v35) = v13;
  if ( v7 >= 0 )
  {
LABEL_4:
    v16 = v8;
    while ( 1 )
    {
      v32 = 1024;
      HIWORD(v34) = 0;
      LOBYTE(v35) = v16;
      HIWORD(v35) = 0;
      v17 = (*(int (__fastcall **)(int, int *))(a1 + 280))(a1, &v32);
      if ( v17 )
        break;
      ++v16;
      usleep(0x3E8u);
      if ( v16 > v7 )
      {
        usleep(0x2710u);
        v32 = 0;
        v33 = 0;
        v35 = 0;
        v34 = (unsigned __int8)a2;
        if ( a2 )
        {
          BYTE1(v35) = *(_DWORD *)(a1 + 356);
          goto LABEL_21;
        }
        v27 = *(_BYTE *)(*(_DWORD *)(a1 + 504) + a3);
        BYTE1(v35) = *(_DWORD *)(a1 + 356);
        BYTE1(v34) = v27;
        if ( v8 > v7 )
          goto LABEL_15;
LABEL_21:
        while ( 1 )
        {
          v32 = 37888;
          HIWORD(v34) = 0;
          LOBYTE(v35) = v8;
          HIWORD(v35) = 0;
          v17 = (*(int (__fastcall **)(int, int *))(a1 + 280))(a1, &v32);
          if ( v17 )
            break;
          ++v8;
          usleep(0x3E8u);
          if ( v8 > v7 )
            goto LABEL_15;
        }
        V_LOCK();
        LOWORD(v26) = 3716;
        HIWORD(v26) = (unsigned int)"" >> 16;
        logfmt_raw(var1004, 0x1000u, 0, v26, "chip_setting_reset_bist_ltc", HIWORD(v34), v8);
        V_UNLOCK();
        v19 = 290;
        v20 = *v31;
LABEL_8:
        LOWORD(v21) = 4072;
        HIWORD(v21) = (unsigned int)"VN" >> 16;
        zlog(v20, v21, 176, "chip_setting_reset_bist_ltc", 27, v19, 100, var1004);
        return v17;
      }
    }
    V_LOCK();
    LOWORD(v18) = 3716;
    HIWORD(v18) = (unsigned int)"" >> 16;
    logfmt_raw(var1004, 0x1000u, 0, v18, "chip_setting_reset_bist_ltc", HIWORD(v34), v16);
    V_UNLOCK();
    v19 = 267;
    v20 = *v31;
    goto LABEL_8;
  }
  usleep(0x2710u);
  v28 = *(_DWORD *)(a1 + 356);
  v32 = 0;
  v33 = 0;
  v34 = 1;
  v35 = 0;
  BYTE1(v35) = v28;
LABEL_15:
  usleep(0x2710u);
  return 0;
}
