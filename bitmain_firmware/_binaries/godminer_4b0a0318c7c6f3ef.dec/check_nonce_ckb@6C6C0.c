int __fastcall check_nonce_ckb(int a1, int a2)
{
  _DWORD *v2; // r8
  int v3; // r12
  int v6; // r4
  unsigned int v7; // r7
  int *v8; // r12
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // t1
  int v21; // r3
  int v22; // r1
  int v23; // r2
  unsigned int v24; // r0
  unsigned int v25; // r8
  unsigned int v26; // r3
  unsigned __int8 *v27; // r3
  int v28; // r4
  int v29; // r2
  int v30; // r4
  unsigned int v31; // r0
  unsigned int v32; // t1
  unsigned int v33; // t1
  bool v34; // cc
  char *v36; // r1
  _DWORD *v37; // r3
  int v38; // r1
  char *v39; // r1
  _DWORD *v40; // r3
  int v41; // r1
  char *v42; // r1
  _DWORD *v43; // r3
  int v44; // r1
  _DWORD v45[7]; // [sp+30h] [bp-10B4h] BYREF
  int v46; // [sp+4Ch] [bp-1098h]
  _DWORD v47[7]; // [sp+50h] [bp-1094h] BYREF
  int v48; // [sp+6Ch] [bp-1078h]
  _DWORD v49[7]; // [sp+70h] [bp-1074h] BYREF
  int v50; // [sp+8Ch] [bp-1058h]
  _BYTE v51[32]; // [sp+90h] [bp-1054h] BYREF
  _DWORD v52[8]; // [sp+B0h] [bp-1034h] BYREF
  int v53; // [sp+D0h] [bp-1014h]
  int v54; // [sp+D4h] [bp-1010h]
  int v55; // [sp+D8h] [bp-100Ch]
  int v56; // [sp+DCh] [bp-1008h]
  char v57[4100]; // [sp+E0h] [bp-1004h] BYREF

  v2 = (_DWORD *)a2;
  v3 = *(unsigned __int8 *)(a2 + 65);
  v6 = *(_DWORD *)(a1 + 840);
  v7 = *(_DWORD *)(v6 + 4 * (v3 + 2816));
  v8 = (int *)(v6 + 48 * v3 + 5120);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v8 += 4;
  v52[0] = v9;
  v52[1] = v10;
  v52[2] = v11;
  v52[3] = v12;
  v13 = *v8;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  v8 += 4;
  v52[4] = v13;
  v52[5] = v14;
  v52[6] = v15;
  v52[7] = v16;
  v17 = v8[1];
  v18 = v8[2];
  v19 = v8[3];
  v53 = *v8;
  v54 = v17;
  v55 = v18;
  v56 = v19;
  v20 = v2[12];
  v2 += 12;
  v21 = v2[3];
  v22 = v2[1];
  v23 = v2[2];
  v53 = v20;
  v54 = v22;
  v55 = v23;
  v56 = v21;
  EaglesongHash((int)v51, (int)v52, 0x30u);
  v24 = target_to_diff_ckb((int)v51);
  v25 = v24;
  if ( v24 <= 0x26 )
  {
    V_LOCK();
    LOWORD(v42) = 27372;
    HIWORD(v42) = (unsigned int)"ity (accepted shares / min): %.2f/min" >> 16;
    V_INT((int)v45, v42, *(int *)(a1 + 256));
    logfmt_raw(
      v57,
      0x1000u,
      0,
      v46,
      v45[0],
      v45[1],
      v45[2],
      v45[3],
      v45[4],
      v45[5],
      v45[6],
      v46,
      "hw error calculate diff %d ans diff %d TICKET_MASK_CKB_2042 %d",
      v25,
      *(unsigned __int8 *)(a2 + 64),
      39);
    V_UNLOCK();
    LOWORD(v43) = 20532;
    HIWORD(v43) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v44) = -23644;
    HIWORD(v44) = (unsigned int)" reg %02x, but %02x, data %08x" >> 16;
    zlog(*v43, v44, 171, "check_nonce_ckb", 15, 560, 20, v57);
    return 2;
  }
  else
  {
    v26 = *(unsigned __int8 *)(a2 + 64);
    if ( v26 == v24 )
    {
      if ( v7 > v26 )
      {
LABEL_11:
        V_LOCK();
        LOWORD(v36) = 27372;
        HIWORD(v36) = (unsigned int)"ity (accepted shares / min): %.2f/min" >> 16;
        V_INT((int)v49, v36, *(int *)(a1 + 256));
        logfmt_raw(
          v57,
          0x1000u,
          0,
          v50,
          v49[0],
          v49[1],
          v49[2],
          v49[3],
          v49[4],
          v49[5],
          v49[6],
          v50,
          "hw diff (%d<%d) not reach pool",
          *(unsigned __int8 *)(a2 + 64),
          v7);
        V_UNLOCK();
        LOWORD(v37) = 20532;
        HIWORD(v37) = (unsigned int)&g_fan_zc >> 16;
        LOWORD(v38) = -23644;
        HIWORD(v38) = (unsigned int)" reg %02x, but %02x, data %08x" >> 16;
        zlog(*v37, v38, 171, "check_nonce_ckb", 15, 590, 20, v57);
        return 1;
      }
    }
    else if ( v7 > v24 )
    {
      V_LOCK();
      LOWORD(v39) = 27372;
      HIWORD(v39) = (unsigned int)"ity (accepted shares / min): %.2f/min" >> 16;
      V_INT((int)v47, v39, *(int *)(a1 + 256));
      logfmt_raw(
        v57,
        0x1000u,
        0,
        v48,
        v47[0],
        v47[1],
        v47[2],
        v47[3],
        v47[4],
        v47[5],
        v47[6],
        v48,
        "diff not match (%d!=%d) expected diff %d",
        v25,
        *(unsigned __int8 *)(a2 + 64),
        v7);
      V_UNLOCK();
      LOWORD(v40) = 20532;
      HIWORD(v40) = (unsigned int)&g_fan_zc >> 16;
      LOWORD(v41) = -23644;
      HIWORD(v41) = (unsigned int)" reg %02x, but %02x, data %08x" >> 16;
      zlog(*v40, v41, 171, "check_nonce_ckb", 15, 565, 20, v57);
      return 3;
    }
    v27 = v51;
    v28 = v6 + 32 * (*(unsigned __int8 *)(a2 + 65) + 368);
    v29 = v28 - 1;
    v30 = v28 + 31;
    do
    {
      v32 = *v27++;
      v31 = v32;
      v33 = *(unsigned __int8 *)++v29;
      v34 = v31 > v33;
      if ( v31 < v33 )
        break;
      if ( v34 )
        goto LABEL_11;
    }
    while ( v29 != v30 );
    return 0;
  }
}
