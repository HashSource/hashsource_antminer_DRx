int uart_init()
{
  _DWORD *v0; // r3
  int *v2; // lr
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  _DWORD v12[7]; // [sp+10h] [bp-1804h] BYREF
  char v13; // [sp+2Ch] [bp-17E8h]
  char v14[4100]; // [sp+810h] [bp-1004h] BYREF

  LOWORD(v0) = 20804;
  HIWORD(v0) = (unsigned int)&unk_1B402C >> 16;
  if ( *v0 )
    return 0;
  LOWORD(v2) = 28288;
  HIWORD(v2) = (unsigned int)&unk_175950 >> 16;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = v2[3];
  v2 += 4;
  v12[0] = v3;
  v12[1] = v4;
  v12[2] = v5;
  v12[3] = v6;
  v7 = v2[1];
  v8 = v2[2];
  v9 = v2[3];
  v12[4] = *v2;
  v12[5] = v7;
  v12[6] = v8;
  v13 = v9;
  V_LOCK();
  logfmt_raw(v14, 0x1000u, 0, v12);
  V_UNLOCK();
  LOWORD(v10) = 24916;
  HIWORD(v10) = (unsigned int)&unk_1B503C >> 16;
  LOWORD(v11) = 31508;
  HIWORD(v11) = (unsigned int)" range(%d-%d)" >> 16;
  zlog(*v10, v11, 172, "uart_init", 9, 344, 100, v14);
  return -1;
}
