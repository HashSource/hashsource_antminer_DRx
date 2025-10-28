int __fastcall lcd_write(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r7
  unsigned int v5; // r4
  bool v6; // cc
  int v7; // r5
  int v9; // r11
  unsigned __int8 v10; // r5
  size_t v11; // r6
  const void *v12; // r1
  int *v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r2
  _DWORD *v19; // r3
  int v20; // r1
  int *v21; // lr
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r3
  int v26; // lr
  _DWORD *v27; // r3
  int v28; // r1
  int v29; // [sp+10h] [bp-1804h] BYREF
  int v30; // [sp+14h] [bp-1800h]
  int v31; // [sp+18h] [bp-17FCh]
  int v32; // [sp+1Ch] [bp-17F8h]
  __int16 v33; // [sp+20h] [bp-17F4h]
  char v34; // [sp+22h] [bp-17F2h]
  char v35[4100]; // [sp+810h] [bp-1004h] BYREF

  v4 = a2;
  if ( !dword_18CEC8 )
    return -2;
  v5 = a4;
  if ( dword_18CECC != a1 )
    goto LABEL_18;
  v6 = a4 > 0x40;
  if ( a4 <= 0x40 )
    v6 = (unsigned __int8)a2 > 3u;
  v7 = v6;
  if ( v6 )
  {
LABEL_18:
    LOWORD(v15) = 4676;
    HIWORD(v15) = (unsigned int)"/tmp/release/build/godminer-origin_godminer-new/frontend/frontend_hns/frontend_hns.c" >> 16;
    v16 = *v15;
    v17 = v15[1];
    v18 = v15[2];
    v29 = v16;
    v30 = v17;
    LOWORD(v31) = v18;
    V_LOCK();
    logfmt_raw(v35, 0x1000u, 0, &v29);
    V_UNLOCK();
    LOWORD(v19) = -12376;
    HIWORD(v19) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v20) = -6188;
    HIWORD(v20) = (unsigned int)&unk_159904 >> 16;
    zlog(*v19, v20, 171, "lcd_write", 9, 69, 80, v35);
    return -3;
  }
  else
  {
    v9 = pthread_mutex_lock(&stru_18CED0);
    if ( v9 )
    {
      LOWORD(v21) = -5996;
      HIWORD(v21) = (unsigned int)&unk_1599C4 >> 16;
      v22 = *v21;
      v23 = v21[1];
      v24 = v21[2];
      v25 = v21[3];
      v26 = v21[4];
      v29 = v22;
      v30 = v23;
      v31 = v24;
      v32 = v25;
      v33 = v26;
      v34 = BYTE2(v26);
      V_LOCK();
      logfmt_raw(v35, 0x1000u, v7, &v29);
      V_UNLOCK();
      LOWORD(v27) = -12376;
      HIWORD(v27) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v28) = -6188;
      HIWORD(v28) = (unsigned int)&unk_159904 >> 16;
      zlog(*v27, v28, 171, "lcd_write", 9, 75, 100, v35);
      return -4;
    }
    else
    {
      do
      {
        v10 = v4 + 1;
        if ( v5 >= 0x10 )
          v11 = 16;
        else
          v11 = v5;
        v12 = (const void *)(a3 + v9);
        v9 += v11;
        memcpy((char *)&unk_18CEE8 + 16 * v4, v12, v11);
        v5 -= v11;
        v4 = (char)v10;
      }
      while ( v10 <= 3u && v5 != 0 );
      write(dword_18CECC, &unk_18CEE8, 0x40u);
      pthread_mutex_unlock(&stru_18CED0);
      return 0;
    }
  }
}
