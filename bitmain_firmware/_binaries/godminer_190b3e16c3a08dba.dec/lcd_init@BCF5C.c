int __fastcall lcd_init(int a1)
{
  int result; // r0
  int *v2; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int *v6; // r3
  int v7; // r0
  int v8; // r1
  int *v9; // lr
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // lr
  int *v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // [sp+10h] [bp-1800h] BYREF
  int v19; // [sp+14h] [bp-17FCh]
  int v20; // [sp+18h] [bp-17F8h]
  int v21; // [sp+1Ch] [bp-17F4h]
  __int16 v22; // [sp+20h] [bp-17F0h]
  char v23; // [sp+22h] [bp-17EEh]
  char v24[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( dword_18CEC8 )
    return 0;
  if ( a1 )
  {
    result = open64(a1);
    dword_18CECC = result;
    if ( result < 0 )
    {
      LOWORD(v9) = -6016;
      HIWORD(v9) = (unsigned int)&unk_1599B0 >> 16;
      v10 = *v9;
      v11 = v9[1];
      v12 = v9[2];
      v13 = v9[3];
      v14 = v9[4];
      v18 = v10;
      v19 = v11;
      v20 = v12;
      v21 = v13;
      v22 = v14;
      v23 = BYTE2(v14);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, &v18);
      V_UNLOCK();
      LOWORD(v15) = -12376;
      HIWORD(v15) = (unsigned int)&unk_18C750 >> 16;
      v16 = *v15;
      LOWORD(v15) = -6236;
      LOWORD(v17) = -6188;
      HIWORD(v15) = (unsigned int)&unk_1598D4 >> 16;
      HIWORD(v17) = (unsigned int)&unk_159904 >> 16;
      zlog(v16, v17, 171, v15, 8, 41, 100, v24);
      return -1;
    }
    else
    {
      dword_18CEC8 = 1;
    }
  }
  else
  {
    LOWORD(v2) = 4676;
    HIWORD(v2) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v18 = v3;
    v19 = v4;
    LOWORD(v20) = v5;
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, &v18);
    V_UNLOCK();
    LOWORD(v6) = -12376;
    HIWORD(v6) = (unsigned int)&unk_18C750 >> 16;
    v7 = *v6;
    LOWORD(v6) = -6236;
    LOWORD(v8) = -6188;
    HIWORD(v6) = (unsigned int)&unk_1598D4 >> 16;
    HIWORD(v8) = (unsigned int)&unk_159904 >> 16;
    zlog(v7, v8, 171, v6, 8, 35, 100, v24);
    return -3;
  }
  return result;
}
