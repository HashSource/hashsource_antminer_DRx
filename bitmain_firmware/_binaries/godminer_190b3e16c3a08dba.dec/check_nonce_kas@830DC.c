int __fastcall check_nonce_kas(int a1, int a2)
{
  int v2; // r11
  unsigned __int8 *v5; // r7
  char *v6; // r4
  unsigned int v7; // r10
  int v8; // t1
  unsigned int v9; // r0
  unsigned int v10; // r5
  unsigned int v11; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r2
  unsigned int v15; // r0
  unsigned int v16; // t1
  unsigned int v17; // t1
  bool v18; // cc
  _DWORD v20[7]; // [sp+30h] [bp-60h] BYREF
  int v21; // [sp+4Ch] [bp-44h]
  _DWORD v22[7]; // [sp+50h] [bp-40h] BYREF
  int v23; // [sp+6Ch] [bp-24h]
  _DWORD v24[7]; // [sp+70h] [bp-20h] BYREF
  int v25; // [sp+8Ch] [bp-4h] BYREF
  _BYTE v26[31]; // [sp+90h] [bp+0h] BYREF
  char v27; // [sp+AFh] [bp+1Fh] BYREF
  char v28[4100]; // [sp+B0h] [bp+20h] BYREF

  v2 = *(_DWORD *)(a1 + 784);
  v5 = v26;
  v6 = (char *)&v25 + 3;
  v7 = *(unsigned __int8 *)(v2 + *(unsigned __int8 *)(a2 + 16) + 10240);
  do
  {
    v8 = (unsigned __int8)*++v6;
    printf("%x", v8);
  }
  while ( v6 != &v27 );
  v9 = target_to_diff_kas((int)v26);
  v10 = v9;
  if ( v9 <= 8 )
  {
    V_LOCK();
    V_INT((int)v20, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v28,
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
      "hw error calculate diff %d ans diff %d TICKET_MASK_CKB_2042 %d",
      v10,
      *(unsigned __int8 *)(a2 + 17),
      9);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
      171,
      "check_nonce_kas",
      15,
      1301,
      20,
      v28);
    return 2;
  }
  else
  {
    v11 = *(unsigned __int8 *)(a2 + 17);
    if ( v11 == v9 )
    {
      if ( v7 > v11 )
      {
LABEL_11:
        V_LOCK();
        V_INT((int)v24, "chain", *(int *)(a1 + 224));
        logfmt_raw(
          v28,
          0x1000u,
          0,
          v25,
          v24[0],
          v24[1],
          v24[2],
          v24[3],
          v24[4],
          v24[5],
          v24[6],
          v25,
          "hw diff (%d<%d) not reach pool",
          *(unsigned __int8 *)(a2 + 17),
          v7);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
          171,
          "check_nonce_kas",
          15,
          1312,
          20,
          v28);
        return 1;
      }
      else
      {
        v12 = v2 + 8 * (*(unsigned __int8 *)(a2 + 16) + 384);
        v13 = v12 - 1;
        v14 = v12 + 31;
        do
        {
          v16 = *v5++;
          v15 = v16;
          v17 = *(unsigned __int8 *)++v13;
          v18 = v15 > v17;
          if ( v15 < v17 )
            break;
          if ( v18 )
            goto LABEL_11;
        }
        while ( v13 != v14 );
        return 0;
      }
    }
    else
    {
      V_LOCK();
      V_INT((int)v22, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v28,
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
        "diff not match (%d!=%d) expected diff %d",
        v10,
        *(unsigned __int8 *)(a2 + 17),
        v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_kas_2380/backend_kas_2380.c",
        171,
        "check_nonce_kas",
        15,
        1306,
        20,
        v28);
      return 3;
    }
  }
}
