int __fastcall membist1(int a1)
{
  int v2; // r8
  unsigned int *v3; // r4
  int i; // r5
  int v5; // r6
  unsigned int *v6; // r4
  int j; // r5
  __int64 v8; // r4
  _DWORD *v9; // r3
  unsigned int v10; // t1
  int v11; // r0
  int (**v12)(); // r0
  void *ptr; // [sp+34h] [bp-134h]
  int v15; // [sp+3Ch] [bp-12Ch]
  _DWORD v16[7]; // [sp+48h] [bp-120h] BYREF
  int v17; // [sp+64h] [bp-104h]
  _DWORD v18[7]; // [sp+68h] [bp-100h] BYREF
  int v19; // [sp+84h] [bp-E4h]
  _DWORD v20[7]; // [sp+88h] [bp-E0h] BYREF
  int v21; // [sp+A4h] [bp-C4h]
  _DWORD v22[7]; // [sp+A8h] [bp-C0h] BYREF
  int v23; // [sp+C4h] [bp-A4h]
  _DWORD v24[7]; // [sp+C8h] [bp-A0h] BYREF
  int v25; // [sp+E4h] [bp-84h]
  _DWORD v26[7]; // [sp+E8h] [bp-80h] BYREF
  int v27; // [sp+104h] [bp-64h]
  _DWORD v28[7]; // [sp+108h] [bp-60h] BYREF
  int v29; // [sp+124h] [bp-44h]
  _DWORD v30[8]; // [sp+128h] [bp-40h] BYREF
  _DWORD s[8]; // [sp+148h] [bp-20h] BYREF
  char v32[4100]; // [sp+168h] [bp+0h] BYREF

  V_LOCK();
  V_INT((int)v16, "chain", *(int *)(a1 + 224));
  v15 = 0;
  logfmt_raw(v32, 0x1000u, 0, v17, v16[0], v16[1], v16[2], v16[3], v16[4], v16[5], v16[6], v17, "%s...", "membist1");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "membist1",
    8,
    619,
    60,
    v32);
  memset(s, 0, sizeof(s));
  memset(v30, 0, sizeof(v30));
  ptr = malloc(0x600u);
  do
  {
    sub_6E768(a1, v15, 12, 1);
    usleep(0x61A80u);
    sub_6E768(a1, v15, 160, -2147483647);
    usleep(0xC3500u);
    memset(ptr, 0, 0x600u);
    v2 = sub_6EA08(a1, (unsigned __int16)v15, 161, ptr);
    if ( v2 == 8
      || (V_LOCK(),
          V_INT((int)v18, "chain", *(int *)(a1 + 224)),
          logfmt_raw(
            v32,
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
            "get membist err cnt failed!"),
          V_UNLOCK(),
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "membist1",
            8,
            639,
            100,
            v32),
          v2 > 0) )
    {
      v3 = (unsigned int *)ptr;
      for ( i = 0; i < v2; ++i )
      {
        while ( (*v3 & 0x80) == 0 )
        {
          V_LOCK();
          ++i;
          v3 += 3;
          V_INT((int)v22, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v32,
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
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v3 - 8),
            *((unsigned __int8 *)v3 - 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "membist1",
            8,
            655,
            100,
            v32);
          if ( v2 <= i )
            goto LABEL_10;
        }
        if ( (*v3 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v20, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v32,
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
            "chip %02x core %02x membist err cnt: %08x",
            *((unsigned __int8 *)v3 + 4),
            *((unsigned __int8 *)v3 + 8),
            bswap32(*v3));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "membist1",
            8,
            648,
            100,
            v32);
          s[*((unsigned __int8 *)v3 + 4)] += bswap32(*v3) & 0x7FFFFF;
        }
        v3 += 3;
      }
    }
LABEL_10:
    memset(ptr, 0, 0x600u);
    v5 = sub_6EA08(a1, (unsigned __int16)v15, 162, ptr);
    if ( v5 == 8
      || (V_LOCK(),
          V_INT((int)v24, "chain", *(int *)(a1 + 224)),
          logfmt_raw(
            v32,
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
            "get membist lost cnt failed!"),
          V_UNLOCK(),
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "membist1",
            8,
            663,
            100,
            v32),
          v5 > 0) )
    {
      v6 = (unsigned int *)ptr;
      for ( j = 0; j < v5; ++j )
      {
        while ( (*v6 & 0x80) == 0 )
        {
          V_LOCK();
          ++j;
          v6 += 3;
          V_INT((int)v28, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v32,
            0x1000u,
            0,
            v29,
            v28[0],
            v28[1],
            v28[2],
            v28[3],
            v28[4],
            v28[5],
            v28[6],
            v29,
            "chip %02x core %02x membist not done!",
            *((unsigned __int8 *)v6 - 8),
            *((unsigned __int8 *)v6 - 4));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "membist1",
            8,
            679,
            100,
            v32);
          if ( v5 <= j )
            goto LABEL_18;
        }
        if ( (*v6 & 0xFFFFFF00) != 0 )
        {
          V_LOCK();
          V_INT((int)v26, "chain", *(int *)(a1 + 224));
          logfmt_raw(
            v32,
            0x1000u,
            0,
            v27,
            v26[0],
            v26[1],
            v26[2],
            v26[3],
            v26[4],
            v26[5],
            v26[6],
            v27,
            "chip %02x core %02x membist lost cnt: %08x",
            *((unsigned __int8 *)v6 + 4),
            *((unsigned __int8 *)v6 + 8),
            bswap32(*v6));
          V_UNLOCK();
          zlog(
            g_zc,
            "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-"
            "origin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
            171,
            "membist1",
            8,
            672,
            100,
            v32);
          v30[*((unsigned __int8 *)v6 + 4)] += bswap32(*v6) & 0x7FFFFF;
        }
        v6 += 3;
      }
    }
LABEL_18:
    ++v15;
  }
  while ( v15 != 16 );
  v8 = 0;
  free(ptr);
  memset(v32, 0, 0x40u);
  v9 = &v30[7];
  do
  {
    v10 = v9[1];
    ++v9;
    v8 += v10;
  }
  while ( &s[7] != v9 );
  v11 = sprintf(v32, "<mbist1> %lld", v8);
  v12 = dev_ctrl(v11);
  ((void (__fastcall *)(_DWORD))v12[20])(*(_DWORD *)(a1 + 220));
  unk_18BF30 = s[0];
  unk_18BF34 = s[1];
  unk_18BF38 = s[2];
  unk_18BF3C = s[3];
  unk_18BF40 = s[4];
  unk_18BF44 = s[5];
  unk_18BF48 = s[6];
  unk_18BF4C = s[7];
  return 0;
}
