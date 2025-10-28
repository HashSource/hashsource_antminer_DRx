int __fastcall open_miner_by_work_num(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  char *v4; // r9
  void *v5; // r11
  char *v6; // r6
  char v7; // r4
  int v8; // r1
  void *v10; // [sp+14h] [bp-1448h]
  _BYTE v11[140]; // [sp+1Ch] [bp-1440h] BYREF
  char dest[5040]; // [sp+A8h] [bp-13B4h] BYREF
  int v13; // [sp+1458h] [bp-4h] BYREF

  V_LOCK();
  logfmt_raw(dest, 0x1000u, 0, "%s...", "open_miner_by_work_num");
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_zec_1746/backend_zec_1746.c",
    171,
    "open_miner_by_work_num",
    22,
    662,
    20,
    dest);
  memcpy(dest, &unk_159274, sizeof(dest));
  v2 = calloc(1u, 0xD8u);
  v10 = v2 + 10;
  v3 = v2;
  v4 = dest;
  v5 = v2 + 46;
  v6 = (char *)v2 + 7;
  v7 = 0;
  do
  {
    v8 = (int)v4;
    v4 += 280;
    str2hex((int)v11, v8, 280);
    memset(v3, 0, 0xB4u);
    memcpy(v10, v11, 0x8Cu);
    *++v6 = v7;
    v3[45] = 22;
    *(_DWORD *)(a1 + 460) = 1;
    memset(v5, 255, 0x20u);
    push_work_base(a1, (int)v3);
    usleep((__useconds_t)&loc_30D40);
    v7 += 2;
  }
  while ( v4 != (char *)&v13 );
  free(v3);
  return 0;
}
