int __fastcall dhash_start_ckb(int a1)
{
  int v2; // r3
  int result; // r0
  _DWORD v4[7]; // [sp+28h] [bp-1020h] BYREF
  int v5; // [sp+44h] [bp-1004h]
  char v6[4096]; // [sp+48h] [bp-1000h] BYREF

  V_LOCK();
  V_INT((int)v4, "chain", *(int *)(a1 + 260));
  logfmt_raw(v6, 0x1000u, 0, v5, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6], v5, "dhash_start_ckb");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_ckb_2042/backend_ckb_2042.c",
    171,
    "dhash_start_ckb",
    15,
    474,
    40,
    v6);
  sub_6F3B0(a1);
  v2 = *(unsigned __int8 *)(a1 + 484);
  result = 0;
  *(_BYTE *)(a1 + 266) = 1;
  if ( !v2 )
    *(_DWORD *)(a1 + 488) = (int)*(float *)(a1 + 1004);
  return result;
}
