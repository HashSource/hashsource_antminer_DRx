int __fastcall lcd_uninit(int a1)
{
  int result; // r0
  int *v2; // r12
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r12
  _DWORD *v8; // r3
  int v9; // r1
  _DWORD v10[512]; // [sp+10h] [bp-1804h] BYREF
  char v11[4100]; // [sp+810h] [bp-1004h] BYREF

  if ( !dword_18CEC8 )
    return 0;
  result = close(a1);
  if ( result )
  {
    LOWORD(v2) = -5976;
    HIWORD(v2) = (unsigned int)&unk_1599D8 >> 16;
    v3 = *v2;
    v4 = v2[1];
    v5 = v2[2];
    v6 = v2[3];
    v7 = v2[4];
    v10[0] = v3;
    v10[1] = v4;
    v10[2] = v5;
    v10[3] = v6;
    v10[4] = v7;
    V_LOCK();
    logfmt_raw(v11, 0x1000u, 0, v10);
    V_UNLOCK();
    LOWORD(v8) = -12376;
    HIWORD(v8) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v9) = -6188;
    HIWORD(v9) = (unsigned int)&unk_159904 >> 16;
    zlog(*v8, v9, 171, "lcd_uninit", 10, 147, 100, v11);
    result = -1;
  }
  dword_18CEC8 = 0;
  return result;
}
