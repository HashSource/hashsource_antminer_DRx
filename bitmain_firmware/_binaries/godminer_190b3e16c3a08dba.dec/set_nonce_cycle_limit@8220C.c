int __fastcall set_nonce_cycle_limit(int a1)
{
  unsigned int v2; // r5
  _DWORD v4[7]; // [sp+28h] [bp-1024h] BYREF
  int v5; // [sp+44h] [bp-1008h]
  char v6[4100]; // [sp+48h] [bp-1004h] BYREF

  v2 = (unsigned int)(float)((float)(67109000.0 / *(float *)(a1 + 924)) * 12.0);
  sub_7DA88(a1, 14, HIWORD(v2));
  sub_7DA88(a1, 15, (unsigned __int16)v2);
  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v6,
    0x1000u,
    0,
    v5,
    v4[0],
    v4[1],
    v4[2],
    v4[3],
    v4[4],
    v4[5],
    v4[6],
    v5,
    "set nonce cycle limit value %08x",
    v2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_hns_2130/backend_hns_2130.c",
    171,
    "set_nonce_cycle_limit",
    21,
    524,
    40,
    v6);
  return 0;
}
