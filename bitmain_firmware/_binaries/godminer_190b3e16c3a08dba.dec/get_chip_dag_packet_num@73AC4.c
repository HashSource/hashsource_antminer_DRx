int __fastcall get_chip_dag_packet_num(int a1)
{
  _DWORD *v2; // r9
  char *v3; // lr
  unsigned __int8 *v4; // r6
  unsigned int v5; // r3
  unsigned __int64 v6; // r10
  char *v7; // r4
  unsigned __int64 v9; // [sp+38h] [bp-10B4h]
  int v10; // [sp+40h] [bp-10ACh]
  signed int v11; // [sp+44h] [bp-10A8h]
  unsigned __int8 *ptr; // [sp+5Ch] [bp-1090h]
  int v13; // [sp+60h] [bp-108Ch]
  _DWORD *v14; // [sp+64h] [bp-1088h]
  _DWORD v15[7]; // [sp+68h] [bp-1084h] BYREF
  int v16; // [sp+84h] [bp-1068h]
  _DWORD v17[7]; // [sp+88h] [bp-1064h] BYREF
  int v18; // [sp+A4h] [bp-1048h]
  _DWORD v19[7]; // [sp+A8h] [bp-1044h] BYREF
  int v20; // [sp+C4h] [bp-1028h]
  _DWORD v21[7]; // [sp+C8h] [bp-1024h] BYREF
  int v22; // [sp+E4h] [bp-1008h]
  char v23[4100]; // [sp+E8h] [bp-1004h] BYREF

  ptr = (unsigned __int8 *)malloc(0x60u);
  v14 = malloc(0x60u);
  if ( sub_6EC44(a1, 86, ptr) == 8 )
  {
    v13 = 0;
  }
  else
  {
    V_LOCK();
    V_INT((int)v15, "chain", *(int *)(a1 + 224));
    v13 = 12;
    logfmt_raw(
      v23,
      0x1000u,
      0,
      v16,
      v15[0],
      v15[1],
      v15[2],
      v15[3],
      v15[4],
      v15[5],
      v15[6],
      v16,
      "get chip dag packet num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "get_chip_dag_packet_num",
      23,
      1486,
      100,
      v23);
  }
  v11 = sub_6EC44(a1, 83, v14);
  if ( v11 != 8 )
  {
    V_LOCK();
    v13 = 12;
    V_INT((int)v17, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v23,
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
      "get chip dag crc status failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "get_chip_dag_packet_num",
      23,
      1493,
      100,
      v23);
  }
  v9 = (unsigned __int64)(bswap32(*(_DWORD *)ptr) & 0x7FFFFFFF) << 6;
  if ( !v9 )
    return 12;
  V_LOCK();
  V_INT((int)v19, "chain", *(int *)(a1 + 224));
  v2 = v14;
  v3 = "no";
  if ( *v14 )
    v3 = "yes";
  logfmt_raw(
    v23,
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
    "chip[%d] received dag size: %lld, crc error: %s",
    ptr[4],
    v9,
    v3);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "get_chip_dag_packet_num",
    23,
    1503,
    60,
    v23);
  if ( v11 > 1 )
  {
    v4 = ptr;
    v10 = 1;
    do
    {
      v5 = *((_DWORD *)v4 + 3);
      v2 += 3;
      v4 += 12;
      v6 = (unsigned __int64)(bswap32(v5) & 0x7FFFFFFF) << 6;
      ++v10;
      V_LOCK();
      V_INT((int)v21, "chain", *(int *)(a1 + 224));
      v7 = "yes";
      if ( !*v2 )
        v7 = "no";
      logfmt_raw(
        v23,
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
        "chip[%d] received dag size: %lld, crc error: %s",
        v4[4],
        v6,
        v7);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
        171,
        "get_chip_dag_packet_num",
        23,
        1509,
        60,
        v23);
      if ( v9 != v6 )
        return 12;
    }
    while ( v11 != v10 );
  }
  free(ptr);
  free(v14);
  return v13;
}
