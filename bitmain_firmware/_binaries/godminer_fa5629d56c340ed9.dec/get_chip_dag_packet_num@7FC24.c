int __fastcall get_chip_dag_packet_num(int a1)
{
  int v2; // r4
  unsigned int v3; // r7
  int v4; // r7
  signed int v5; // r10
  char *v7; // lr
  int v8; // r8
  unsigned __int8 *v9; // r4
  _DWORD *v10; // r7
  unsigned int v11; // r3
  unsigned __int64 v12; // r10
  char *v13; // r9
  int v14; // [sp+28h] [bp-1104h]
  int v15; // [sp+28h] [bp-1104h]
  unsigned __int64 s; // [sp+38h] [bp-10F4h]
  unsigned __int8 *ptr; // [sp+40h] [bp-10ECh]
  _DWORD *v18; // [sp+44h] [bp-10E8h]
  signed int v19; // [sp+60h] [bp-10CCh]
  int v20; // [sp+64h] [bp-10C8h]
  _DWORD v21[7]; // [sp+68h] [bp-10C4h] BYREF
  int v22; // [sp+84h] [bp-10A8h]
  _DWORD v23[7]; // [sp+88h] [bp-10A4h] BYREF
  int v24; // [sp+A4h] [bp-1088h]
  _DWORD v25[7]; // [sp+A8h] [bp-1084h] BYREF
  int v26; // [sp+C4h] [bp-1068h]
  _DWORD v27[7]; // [sp+C8h] [bp-1064h] BYREF
  int v28; // [sp+E4h] [bp-1048h]
  _DWORD v29[7]; // [sp+E8h] [bp-1044h] BYREF
  int v30; // [sp+104h] [bp-1028h]
  _DWORD v31[7]; // [sp+108h] [bp-1024h] BYREF
  int v32; // [sp+124h] [bp-1008h]
  char v33[4100]; // [sp+128h] [bp-1004h] BYREF

  v2 = 0;
  ptr = (unsigned __int8 *)malloc(0x60u);
  v18 = malloc(0x60u);
  while ( 1 )
  {
    v3 = sub_7A758(a1, 86, ptr);
    if ( v3 == 8 )
      break;
    V_LOCK();
    V_INT((int)v21, "chain", *(int *)(a1 + 260));
    v14 = v2++;
    logfmt_raw(
      v33,
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
      "get chip dag packet num failed, resp_num: %d, retry_time: %d",
      v3,
      v14);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "get_chip_dag_packet_num",
      23,
      1733,
      100,
      v33);
    if ( v2 == 5 )
    {
      v20 = 12;
      goto LABEL_6;
    }
    usleep(0x2710u);
  }
  v20 = 0;
LABEL_6:
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_7A758(a1, 83, v18);
    if ( v5 == 8 )
      goto LABEL_14;
    V_LOCK();
    V_INT((int)v23, "chain", *(int *)(a1 + 260));
    v15 = v4++;
    logfmt_raw(
      v33,
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
      "get chip dag crc status failed, resp_num: %d, retry_time: %d",
      v5,
      v15);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "get_chip_dag_packet_num",
      23,
      1747,
      100,
      v33);
    if ( v4 == 5 )
      break;
    usleep(0x2710u);
  }
  if ( !v5 )
  {
LABEL_11:
    v20 = 12;
    goto LABEL_12;
  }
  V_LOCK();
  v20 = 12;
  V_INT((int)v25, "chain", *(int *)(a1 + 260));
  logfmt_raw(
    v33,
    0x1000u,
    0,
    v26,
    v25[0],
    v25[1],
    v25[2],
    v25[3],
    v25[4],
    v25[5],
    v25[6],
    v26,
    "CORE VOL ABNORMAL CNT-%d",
    8 - v5);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_eth_2280/backend_eth_2280.c",
    171,
    "get_chip_dag_packet_num",
    23,
    1760,
    100,
    v33);
LABEL_14:
  s = (unsigned __int64)(bswap32(*(_DWORD *)ptr) & 0x7FFFFFFF) << 6;
  if ( s )
  {
    V_LOCK();
    V_INT((int)v29, "chain", *(int *)(a1 + 260));
    v7 = "no";
    if ( *v18 )
      v7 = "yes";
    logfmt_raw(
      v33,
      0x1000u,
      0,
      v30,
      v29[0],
      v29[1],
      v29[2],
      v29[3],
      v29[4],
      v29[5],
      v29[6],
      v30,
      "chip[%d] received dag size: 0x%llx, crc error: %s",
      ptr[4],
      s,
      v7);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "get_chip_dag_packet_num",
      23,
      1772,
      60,
      v33);
    if ( v5 > 1 )
    {
      v8 = 1;
      v9 = ptr;
      v10 = v18;
      v19 = v5;
      do
      {
        v11 = *((_DWORD *)v9 + 3);
        ++v8;
        v10 += 3;
        v9 += 12;
        v12 = (unsigned __int64)(bswap32(v11) & 0x7FFFFFFF) << 6;
        V_LOCK();
        V_INT((int)v31, "chain", *(int *)(a1 + 260));
        v13 = "no";
        if ( *v10 )
          v13 = "yes";
        logfmt_raw(
          v33,
          0x1000u,
          0,
          v32,
          v31[0],
          v31[1],
          v31[2],
          v31[3],
          v31[4],
          v31[5],
          v31[6],
          v32,
          "chip[%d] received dag size: 0x%llx, crc error: %s",
          v9[4],
          v12,
          v13);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
          171,
          "get_chip_dag_packet_num",
          23,
          1778,
          60,
          v33);
        if ( s != v12 )
          goto LABEL_11;
      }
      while ( v8 != v19 );
    }
  }
  else
  {
    V_LOCK();
    v20 = 12;
    V_INT((int)v27, "chain", *(int *)(a1 + 260));
    logfmt_raw(
      v33,
      0x1000u,
      0,
      v28,
      v27[0],
      v27[1],
      v27[2],
      v27[3],
      v27[4],
      v27[5],
      v27[6],
      v28,
      "chip[0] received dag size error!");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_eth_2280/backend_eth_2280.c",
      171,
      "get_chip_dag_packet_num",
      23,
      1768,
      100,
      v33);
  }
LABEL_12:
  free(ptr);
  free(v18);
  return v20;
}
