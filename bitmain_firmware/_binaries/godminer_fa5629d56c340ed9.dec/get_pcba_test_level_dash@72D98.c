int __fastcall get_pcba_test_level_dash(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int (**v6)(); // r0
  int v7; // r0
  unsigned __int16 *v8; // r1
  int v9; // r2
  int v10; // r12
  int v11; // lr
  unsigned __int16 *i; // r3
  int v13; // r3
  int j; // r2
  int v15; // r3
  char *v16; // r5
  int v17; // [sp+48h] [bp-1068h] BYREF
  __int16 v18; // [sp+4Ch] [bp-1064h]
  _DWORD v19[7]; // [sp+50h] [bp-1060h] BYREF
  int v20; // [sp+6Ch] [bp-1044h]
  _DWORD v21[8]; // [sp+70h] [bp-1040h] BYREF
  _DWORD v22[7]; // [sp+90h] [bp-1020h] BYREF
  int v23; // [sp+ACh] [bp-1004h]
  char v24[4096]; // [sp+B0h] [bp-1000h] BYREF

  v2 = a1[253];
  v18 = 0;
  v17 = 0;
  if ( v2 )
  {
LABEL_2:
    *a2 = v2;
    return 0;
  }
  v6 = dev_ctrl((int)a1);
  v7 = ((int (__fastcall *)(_DWORD, int, int, int *))v6[26])(a1[63], 52, 393216, &v17);
  if ( !v7 )
  {
    v8 = (unsigned __int16 *)&unk_16C798;
    v9 = 700;
    v10 = (unsigned __int16)v17;
    v11 = HIWORD(v17);
    for ( i = (unsigned __int16 *)&unk_16C798; ; v9 = i[2] )
    {
      if ( (unsigned __int16)v17 == v9
        && i[3] == HIWORD(v17)
        && *((unsigned __int8 *)i + 8) == (unsigned __int8)v18
        && *((unsigned __int8 *)i + 9) == HIBYTE(v18) )
      {
        v13 = *(_DWORD *)&aGlobalIdxInitD_1[10 * v7 + 940];
        a1[253] = v13;
        goto LABEL_13;
      }
      ++v7;
      i += 5;
      if ( v7 == 5 )
        break;
    }
    v13 = a1[253];
LABEL_13:
    if ( !v13 )
    {
      for ( j = 700; v10 != j || v8[3] != v11; j = v8[2] )
      {
        ++v13;
        v8 += 5;
        if ( v13 == 5 )
          goto LABEL_20;
      }
      v15 = *(_DWORD *)&aGlobalIdxInitD_1[10 * v13 + 940];
      a1[253] = v15;
      if ( v15 )
        goto LABEL_21;
LABEL_20:
      a1[253] = 5;
    }
LABEL_21:
    V_LOCK();
    V_INT((int)v22, "chain", (int)a1[65]);
    v16 = &aGlobalIdxInitD_1[10 * a1[253] - 10];
    logfmt_raw(
      v24,
      0x1000u,
      0,
      v23,
      v22[0],
      v22[1],
      v22[2],
      v22[3],
      v22[4],
      v22[5],
      v22[6],
      v23,
      "pic freq %d voltage %d rate%d.%d",
      (unsigned __int16)v17,
      HIWORD(v17),
      (unsigned __int8)v16[948],
      (unsigned __int8)v16[949]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
      173,
      "get_pcba_test_level_dash",
      24,
      1049,
      40,
      v24);
    v2 = a1[253];
    goto LABEL_2;
  }
  *a2 = -1;
  V_LOCK();
  V_INT((int)v19, "chain", (int)a1[65]);
  V_STR(v21, "error", "pic info error");
  logfmt_raw(
    v24,
    0x1000u,
    0,
    v20,
    v19[0],
    v19[1],
    v19[2],
    v19[3],
    v19[4],
    v19[5],
    v19[6],
    v20,
    v21[0],
    v21[1],
    v21[2],
    v21[3],
    v21[4],
    v21[5],
    v21[6],
    v21[7],
    "pic info lost");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "get_pcba_test_level_dash",
    24,
    1027,
    120,
    v24);
  return 15;
}
