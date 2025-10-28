int __fastcall lcd_clear(int a1)
{
  int v1; // r6
  int v2; // r1
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  _DWORD *v8; // r3
  int v9; // r1
  int *v10; // lr
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // lr
  _DWORD *v16; // r3
  int v17; // r1
  int v18; // [sp+10h] [bp-1800h] BYREF
  int v19; // [sp+14h] [bp-17FCh]
  int v20; // [sp+18h] [bp-17F8h]
  int v21; // [sp+1Ch] [bp-17F4h]
  __int16 v22; // [sp+20h] [bp-17F0h]
  char v23; // [sp+22h] [bp-17EEh]
  char v24[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( !dword_18CEC8 )
    return -2;
  if ( dword_18CECC == a1 )
  {
    if ( pthread_mutex_lock(&stru_18CED0) )
    {
      LOWORD(v10) = -5996;
      HIWORD(v10) = (unsigned int)&unk_1599C4 >> 16;
      v11 = *v10;
      v12 = v10[1];
      v13 = v10[2];
      v14 = v10[3];
      v15 = v10[4];
      v18 = v11;
      v19 = v12;
      v20 = v13;
      v21 = v14;
      v22 = v15;
      v23 = BYTE2(v15);
      V_LOCK();
      logfmt_raw(v24, 0x1000u, 0, &v18);
      V_UNLOCK();
      LOWORD(v16) = -12376;
      HIWORD(v16) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v17) = -6188;
      HIWORD(v17) = (unsigned int)&unk_159904 >> 16;
      zlog(*v16, v17, 171, "lcd_clear", 9, 123, 100, v24);
      return -4;
    }
    else
    {
      memset(&unk_18CEE8, 0x20, 0x40u);
      v1 = dword_18CECC;
      lseek64(dword_18CECC, v2, 0, 0, 0);
      write(v1, &unk_18CEE8, 0x40u);
      pthread_mutex_unlock(&stru_18CED0);
      return 0;
    }
  }
  else
  {
    LOWORD(v4) = 4676;
    HIWORD(v4) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    v5 = *v4;
    v6 = v4[1];
    v7 = v4[2];
    v18 = v5;
    v19 = v6;
    LOWORD(v20) = v7;
    V_LOCK();
    logfmt_raw(v24, 0x1000u, 0, &v18);
    V_UNLOCK();
    LOWORD(v8) = -12376;
    HIWORD(v8) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v9) = -6188;
    HIWORD(v9) = (unsigned int)&unk_159904 >> 16;
    zlog(*v8, v9, 171, "lcd_clear", 9, 117, 80, v24);
    return -3;
  }
}
