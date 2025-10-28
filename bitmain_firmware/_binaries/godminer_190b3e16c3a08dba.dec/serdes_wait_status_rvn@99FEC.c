int __fastcall serdes_wait_status_rvn(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r0
  char *v8; // r4
  int v9; // r8
  char *v10; // r6
  int v11; // r2
  char *ptr; // [sp+3Ch] [bp-1060h]
  int v14; // [sp+44h] [bp-1058h]
  int v16; // [sp+4Ch] [bp-1050h]
  int v17; // [sp+50h] [bp-104Ch]
  _DWORD v18[7]; // [sp+58h] [bp-1044h] BYREF
  int v19; // [sp+74h] [bp-1028h]
  _DWORD v20[7]; // [sp+78h] [bp-1024h] BYREF
  int v21; // [sp+94h] [bp-1008h]
  char v22[4100]; // [sp+98h] [bp-1004h] BYREF

  v17 = (unsigned __int16)a3;
  v16 = a4 | 0x310000;
  ptr = (char *)malloc(0x300u);
  LOBYTE(v14) = 5;
  while ( 1 )
  {
    sub_99948(a1, a3, 78, v16);
    v7 = sub_9999C(a1, v17, 79, ptr);
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
          V_INT((int)v18, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v22,
            0x1000u,
            0,
            v19,
            v18[0],
            v18[1],
            v18[2],
            v18[3],
            v18[4],
            v18[5],
            v18[6],
            v19,
            "[PHY READ] core %02x apb_addr %04x rata %08x not equal to %08x",
            (unsigned __int8)v8[8],
            a4,
            *(_DWORD *)v8,
            a5);
          V_UNLOCK();
          v11 = 119;
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
      V_INT((int)v20, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v22,
        0x1000u,
        0,
        v21,
        v20[0],
        v20[1],
        v20[2],
        v20[3],
        v20[4],
        v20[5],
        v20[6],
        v21,
        "[PHY READ] core %02x apb_addr %04x rata %08x not equal to %08x",
        (unsigned __int8)v8[8],
        a4,
        *(_DWORD *)v8,
        a5);
      V_UNLOCK();
      v11 = 125;
LABEL_10:
      v8 += 12;
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2020/backend_rvn_phy_set.c",
        174,
        "serdes_wait_status_rvn",
        22,
        v11,
        60,
        v22);
    }
    while ( v10 != v8 );
LABEL_11:
    if ( v9 )
    {
      usleep(0xF4240u);
      v14 = (unsigned __int8)(v14 - 1);
      if ( v14 )
        continue;
    }
LABEL_13:
    free(ptr);
    return 0;
  }
  free(ptr);
  return 22;
}
