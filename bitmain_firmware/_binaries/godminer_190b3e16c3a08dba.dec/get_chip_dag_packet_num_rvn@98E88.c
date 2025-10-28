int __fastcall get_chip_dag_packet_num_rvn(int a1)
{
  int v2; // r8
  signed int v3; // r9
  unsigned __int64 v4; // kr00_8
  int v5; // lr
  char *v6; // r6
  int v7; // r12
  char *v9; // [sp+40h] [bp-1084h]
  char *ptr; // [sp+44h] [bp-1080h]
  signed int v11; // [sp+48h] [bp-107Ch]
  int v12; // [sp+5Ch] [bp-1068h]
  _DWORD v13[7]; // [sp+60h] [bp-1064h] BYREF
  int v14; // [sp+7Ch] [bp-1048h]
  _DWORD v15[7]; // [sp+80h] [bp-1044h] BYREF
  int v16; // [sp+9Ch] [bp-1028h]
  _DWORD v17[7]; // [sp+A0h] [bp-1024h] BYREF
  int v18; // [sp+BCh] [bp-1008h]
  char v19[4100]; // [sp+C0h] [bp-1004h] BYREF

  ptr = (char *)malloc(0x60u);
  v9 = (char *)malloc(0x60u);
  if ( sub_93378(a1, 115, ptr) == 8 )
  {
    v12 = 0;
  }
  else
  {
    V_LOCK();
    V_INT((int)v13, "chain", *(int *)(a1 + 224));
    v12 = 12;
    logfmt_raw(
      v19,
      0x1000u,
      0,
      v14,
      v13[0],
      v13[1],
      v13[2],
      v13[3],
      v13[4],
      v13[5],
      v13[6],
      v14,
      "get chip dag packet num failed");
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
      171,
      "get_chip_dag_packet_num_rvn",
      27,
      1855,
      100,
      v19);
  }
  v11 = sub_93378(a1, 116, v9);
  if ( v11 == 8
    || (V_LOCK(),
        V_INT((int)v15, "chain", *(int *)(a1 + 224)),
        logfmt_raw(
          v19,
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
          "get chip dag crc status failed"),
        V_UNLOCK(),
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
          171,
          "get_chip_dag_packet_num_rvn",
          27,
          1862,
          100,
          v19),
        v12 = 12,
        v11 > 0) )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = (unsigned __int64)(bswap32(*(_DWORD *)&ptr[v2]) & 0x7FFFFFFF) << 6;
      V_LOCK();
      V_INT((int)v17, "chain", *(int *)(a1 + 224));
      v5 = (unsigned __int8)ptr[v2 + 4];
      v6 = "yes";
      v7 = *(_DWORD *)&v9[v2];
      v2 += 12;
      if ( !v7 )
        v6 = "no";
      logfmt_raw(
        v19,
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
        "chip[%d] received dag size: %lld, crc error: %s",
        v5,
        v4,
        v6);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/backend_rvn_2020/backend_rvn_2020.c",
        171,
        "get_chip_dag_packet_num_rvn",
        27,
        1871,
        60,
        v19);
    }
    while ( v11 > v3 );
  }
  free(ptr);
  free(v9);
  return v12;
}
