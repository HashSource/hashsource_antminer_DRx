int __fastcall set_baud_kas(int a1, int a2)
{
  int v5; // [sp+2Ch] [bp-1028h]
  _DWORD v6[7]; // [sp+30h] [bp-1024h] BYREF
  int v7; // [sp+4Ch] [bp-1008h]
  _DWORD v8[1025]; // [sp+50h] [bp-1004h] BYREF

  if ( (_UNKNOWN *)a2 == &loc_70800 )
    goto LABEL_20;
  if ( a2 <= (int)&loc_70800 )
  {
    if ( (char *)a2 == "c_mutex" )
      goto LABEL_26;
    if ( a2 <= (int)"c_mutex" )
    {
      if ( a2 != 9586 && a2 != 9600 )
        goto LABEL_8;
      LOWORD(v5) = 17665;
LABEL_15:
      BYTE2(v5) = 2;
      goto LABEL_16;
    }
    if ( (char *)a2 == "ic" )
    {
LABEL_26:
      LOWORD(v5) = 6656;
      goto LABEL_15;
    }
    if ( a2 != 446429 )
      goto LABEL_8;
LABEL_20:
    LOWORD(v5) = 1536;
    goto LABEL_15;
  }
  if ( a2 == 1500000 )
  {
LABEL_21:
    LOWORD(v5) = 256;
    goto LABEL_15;
  }
  if ( a2 > 1500000 )
  {
    if ( a2 == 3000000 || a2 == 3125000 )
    {
      LOWORD(v5) = 0;
      goto LABEL_15;
    }
    if ( (char *)a2 != byte_17D784 )
      goto LABEL_8;
    goto LABEL_21;
  }
  if ( a2 == 921600 || a2 == 1041666 )
  {
    LOWORD(v5) = 512;
    goto LABEL_15;
  }
LABEL_8:
  LOWORD(v5) = 6656;
  BYTE2(v5) = 2;
  if ( a2 <= 3125000 )
  {
LABEL_16:
    HIBYTE(v5) = 0;
    goto LABEL_17;
  }
  HIBYTE(v5) = 1;
LABEL_17:
  V_LOCK();
  V_INT((int)v6, "chain", *(int *)(a1 + 224));
  logfmt_raw((char *)v8, 0x1000u, 0, v7, v6[0], v6[1], v6[2], v6[3], v6[4], v6[5], v6[6], v7, "set baudrate to %d", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_kas_2380/backend_kas_2380.c",
    171,
    "set_baud_kas",
    12,
    1209,
    60,
    v8);
  v8[1] = 0;
  v8[2] = 6291457;
  v8[3] = 0;
  v8[0] = v5;
  return (*(int (__fastcall **)(int, _DWORD *))(a1 + 240))(a1, v8);
}
