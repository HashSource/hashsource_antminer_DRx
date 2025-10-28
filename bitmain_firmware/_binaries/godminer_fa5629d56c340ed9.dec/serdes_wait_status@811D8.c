int __fastcall serdes_wait_status(int a1, int a2, int a3, int a4, int a5)
{
  char *v8; // r8
  int v9; // r0
  char *v10; // r4
  int v11; // r6
  int v12; // r0
  int v13; // r2
  char *v15; // [sp+38h] [bp-105Ch]
  _DWORD v17[7]; // [sp+50h] [bp-1044h] BYREF
  int v18; // [sp+6Ch] [bp-1028h]
  _DWORD v19[7]; // [sp+70h] [bp-1024h] BYREF
  int v20; // [sp+8Ch] [bp-1008h]
  char v21[4080]; // [sp+90h] [bp-1004h] BYREF

  v8 = (char *)malloc(0x600u);
  sub_80904(a1, a3, 78, a4 | 0x310000);
  v9 = sub_80954(a1, a3, 79, v8);
  if ( !v9 )
  {
    free(v8);
    return 22;
  }
  if ( v9 <= 0 )
    goto LABEL_12;
  v15 = &v8[12 * v9];
  v10 = v8;
  v11 = 0;
  do
  {
    while ( a3 == 255 )
    {
      if ( a5 != bswap32(*(_DWORD *)v10) )
      {
        V_LOCK();
        ++v11;
        V_INT((int)v17, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v21,
          0x1000u,
          0,
          v18,
          v17[0],
          v17[1],
          v17[2],
          v17[3],
          v17[4],
          v17[5],
          v17[6],
          v18,
          "[PHY READ] chip %02x core %02x apb_addr %04x rata %08x not equal to %08x",
          (unsigned __int8)v10[4],
          (unsigned __int8)v10[8],
          a4,
          bswap32(*(_DWORD *)v10),
          a5);
        V_UNLOCK();
        v12 = g_zc;
        v13 = 120;
        goto LABEL_9;
      }
LABEL_5:
      v10 += 12;
      if ( v10 == v15 )
        goto LABEL_10;
    }
    if ( (unsigned __int8)v10[8] != a3 || a5 == bswap32(*(_DWORD *)v10) )
      goto LABEL_5;
    V_LOCK();
    ++v11;
    V_INT((int)v19, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v21,
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
      "[PHY READ] chip %02x core %02x apb_addr %04x rata %08x not equal to %08x",
      (unsigned __int8)v10[4],
      (unsigned __int8)v10[8],
      a4,
      bswap32(*(_DWORD *)v10),
      a5);
    V_UNLOCK();
    v12 = g_zc;
    v13 = 126;
LABEL_9:
    v10 += 12;
    zlog(
      v12,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_phy_set.c",
      174,
      "serdes_wait_status",
      18,
      v13,
      60,
      v21);
  }
  while ( v10 != v15 );
LABEL_10:
  if ( v11 )
    usleep(0xF4240u);
LABEL_12:
  free(v8);
  return 0;
}
