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
  _DWORD v36[7]; // [sp+30h] [bp-10B4h] BYREF
  int v37; // [sp+4Ch] [bp-1098h]
  _DWORD v38[7]; // [sp+50h] [bp-1094h] BYREF
  int v39; // [sp+6Ch] [bp-1078h]
  _DWORD v40[7]; // [sp+70h] [bp-1074h] BYREF
  int v41; // [sp+8Ch] [bp-1058h]
  _BYTE v42[32]; // [sp+90h] [bp-1054h] BYREF
  _DWORD v43[8]; // [sp+B0h] [bp-1034h] BYREF
  int v44; // [sp+D0h] [bp-1014h]
  int v45; // [sp+D4h] [bp-1010h]
  int v46; // [sp+D8h] [bp-100Ch]
  int v47; // [sp+DCh] [bp-1008h]
  char v48[4100]; // [sp+E0h] [bp-1004h] BYREF

  v2 = (_DWORD *)a2;
  v3 = *(unsigned __int8 *)(a2 + 65);
  v6 = *(_DWORD *)(a1 + 848);
  v7 = *(_DWORD *)(v6 + 4 * (v3 + 2816));
  v8 = (int *)(v6 + 48 * v3 + 5120);
  v9 = *v8;
  v10 = v8[1];
  v11 = v8[2];
  v12 = v8[3];
  v8 += 4;
  v43[0] = v9;
  v43[1] = v10;
  v43[2] = v11;
  v43[3] = v12;
  v13 = *v8;
  v14 = v8[1];
  v15 = v8[2];
  v16 = v8[3];
  v8 += 4;
  v43[4] = v13;
  v43[5] = v14;
  v43[6] = v15;
  v43[7] = v16;
  v17 = v8[1];
  v18 = v8[2];
  v19 = v8[3];
  v44 = *v8;
  v45 = v17;
  v46 = v18;
  v47 = v19;
  v20 = v2[12];
  v2 += 12;
  v21 = v2[3];
  v22 = v2[1];
  v23 = v2[2];
  v44 = v20;
  v45 = v22;
  v46 = v23;
  v47 = v21;
  EaglesongHash((int)v42, (int)v43, 0x30u);
  v24 = target_to_diff_ckb((int)v42);
  v25 = v24;
  if ( v24 <= 0x26 )
  {
    V_LOCK();
    V_INT((int)v36, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v48,
      0x1000u,
      0,
      v37,
      v36[0],
      v36[1],
      v36[2],
      v36[3],
      v36[4],
      v36[5],
      v36[6],
      v37,
      "hw error calculate diff %d ans diff %d TICKET_MASK_CKB_2042 %d",
      v25,
      *(unsigned __int8 *)(a2 + 64),
      39);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
      171,
      "check_nonce_ckb",
      15,
      560,
      20,
      v48);
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
        V_INT((int)v40, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v48,
          0x1000u,
          0,
          v41,
          v40[0],
          v40[1],
          v40[2],
          v40[3],
          v40[4],
          v40[5],
          v40[6],
          v41,
          "hw diff (%d<%d) not reach pool",
          *(unsigned __int8 *)(a2 + 64),
          v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
          171,
          "check_nonce_ckb",
          15,
          590,
          20,
          v48);
        return 1;
      }
    }
    else if ( v7 > v24 )
    {
      V_LOCK();
      V_INT((int)v38, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v48,
        0x1000u,
        0,
        v39,
        v38[0],
        v38[1],
        v38[2],
        v38[3],
        v38[4],
        v38[5],
        v38[6],
        v39,
        "diff not match (%d!=%d) expected diff %d",
        v25,
        *(unsigned __int8 *)(a2 + 64),
        v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
        171,
        "check_nonce_ckb",
        15,
        565,
        20,
        v48);
      return 3;
    }
    v27 = v42;
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
