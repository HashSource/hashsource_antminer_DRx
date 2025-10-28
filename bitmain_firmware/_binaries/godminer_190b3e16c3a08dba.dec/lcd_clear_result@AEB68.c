int lcd_clear_result()
{
  int *v1; // lr
  int v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // lr
  _DWORD *v7; // r3
  int v8; // r1
  _DWORD v9[4]; // [sp+10h] [bp-1800h] BYREF
  __int16 v10; // [sp+20h] [bp-17F0h]
  char v11; // [sp+22h] [bp-17EEh]
  char v12[4096]; // [sp+810h] [bp-1000h] BYREF

  if ( pthread_mutex_lock(&stru_18C4D0) )
  {
    LOWORD(v1) = -18196;
    HIWORD(v1) = (unsigned int)"DA_2110" >> 16;
    v2 = *v1;
    v3 = v1[1];
    v4 = v1[2];
    v5 = v1[3];
    v6 = v1[4];
    v9[0] = v2;
    v9[1] = v3;
    v9[2] = v4;
    v9[3] = v5;
    v10 = v6;
    v11 = BYTE2(v6);
    V_LOCK();
    logfmt_raw(v12, 0x1000u, 0, v9);
    V_UNLOCK();
    LOWORD(v7) = -12376;
    HIWORD(v7) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v8) = -15584;
    HIWORD(v8) = (unsigned int)") in" >> 16;
    return zlog(*v7, v8, 170, "lcd_clear_result", 16, 501, 100, v12);
  }
  else
  {
    if ( dword_178AF4 > 0 )
      lcd_clear(dword_178AF4);
    return pthread_mutex_unlock(&stru_18C4D0);
  }
}
