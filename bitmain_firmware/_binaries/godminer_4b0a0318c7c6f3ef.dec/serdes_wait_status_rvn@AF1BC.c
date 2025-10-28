int __fastcall serdes_wait_status_rvn(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r0
  char *v8; // r4
  int v9; // r8
  char *v10; // r6
  _DWORD *v11; // r3
  int v12; // r2
  int v13; // r1
  int v15; // r11
  char *ptr; // [sp+3Ch] [bp-1060h]
  int v17; // [sp+44h] [bp-1058h]
  int v19; // [sp+4Ch] [bp-1050h]
  int v20; // [sp+50h] [bp-104Ch]
  _DWORD v21[7]; // [sp+58h] [bp-1044h] BYREF
  int v22; // [sp+74h] [bp-1028h]
  _DWORD v23[7]; // [sp+78h] [bp-1024h] BYREF
  int v24; // [sp+94h] [bp-1008h]
  char v25[4100]; // [sp+98h] [bp-1004h] BYREF

  v20 = (unsigned __int16)a3;
  v19 = a4 | 0x310000;
  ptr = (char *)malloc(0x1800u);
  LOBYTE(v17) = 5;
  while ( 1 )
  {
    sub_AEAEC(a1, a3, 78, v19);
    v7 = sub_AEB3C(a1, v20, 79, ptr);
    if ( !v7 )
      break;
    if ( v7 <= 0 )
      goto LABEL_13;
    v8 = ptr;
    v9 = 0;
    v10 = &ptr[12 * v7];
    do
    {
      while ( a3 == 255 )
      {
        if ( *(_DWORD *)v8 != a5 )
        {
          V_LOCK();
          ++v9;
          V_INT((int)v21, "chain", *(int *)(a1 + 256));
          logfmt_raw(
            v25,
            0x1000u,
            0,
            v22,
            v21[0],
            v21[1],
            v21[2],
            v21[3],
            v21[4],
            v21[5],
            v21[6],
            v22,
            "[PHY READ] core %02x apb_addr %04x rata %08x not equal to %08x",
            (unsigned __int8)v8[8],
            a4,
            *(_DWORD *)v8,
            a5);
          V_UNLOCK();
          LOWORD(v11) = 20532;
          HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
          v12 = 119;
          goto LABEL_10;
        }
LABEL_6:
        v8 += 12;
        if ( v10 == v8 )
          goto LABEL_11;
      }
      if ( (unsigned __int8)v8[8] != a3 || *(_DWORD *)v8 == a5 )
        goto LABEL_6;
      V_LOCK();
      ++v9;
      V_INT((int)v23, "chain", *(int *)(a1 + 256));
      LOWORD(v15) = 11496;
      HIWORD(v15) = (unsigned int)&unk_1730A8 >> 16;
      logfmt_raw(
        v25,
        0x1000u,
        0,
        v24,
        v23[0],
        v23[1],
        v23[2],
        v23[3],
        v23[4],
        v23[5],
        v23[6],
        v24,
        v15,
        (unsigned __int8)v8[8],
        a4,
        *(_DWORD *)v8,
        a5);
      V_UNLOCK();
      LOWORD(v11) = 20532;
      HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
      v12 = 125;
LABEL_10:
      LOWORD(v13) = 11320;
      HIWORD(v13) = (unsigned int)&unk_172FF8 >> 16;
      v8 += 12;
      zlog(*v11, v13, 174, "serdes_wait_status_rvn", 22, v12, 60, v25);
    }
    while ( v10 != v8 );
LABEL_11:
    if ( v9 )
    {
      usleep(0xF4240u);
      v17 = (unsigned __int8)(v17 - 1);
      if ( v17 )
        continue;
    }
LABEL_13:
    free(ptr);
    return 0;
  }
  free(ptr);
  return 22;
}
