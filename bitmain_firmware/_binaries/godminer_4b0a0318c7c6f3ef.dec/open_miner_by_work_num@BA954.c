int __fastcall open_miner_by_work_num(int a1)
{
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r1
  const void *v5; // r1
  _DWORD *v6; // r0
  _DWORD *v7; // r5
  char *v8; // r9
  void *v9; // r11
  char *v10; // r6
  char v11; // r4
  int v12; // r1
  void *v14; // [sp+14h] [bp-1448h]
  _BYTE v15[140]; // [sp+1Ch] [bp-1440h] BYREF
  char dest[5040]; // [sp+A8h] [bp-13B4h] BYREF
  int v17; // [sp+1458h] [bp-4h] BYREF

  V_LOCK();
  LOWORD(v2) = -14172;
  HIWORD(v2) = (unsigned int)": %d" >> 16;
  logfmt_raw(dest, 0x1000u, 0, v2, "open_miner_by_work_num");
  V_UNLOCK();
  LOWORD(v3) = 20532;
  HIWORD(v3) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v4) = 18512;
  HIWORD(v4) = (unsigned int)"pace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_godminer-new/backend/device/hal/drv_pic/mps2973.c" >> 16;
  zlog(*v3, v4, 171, "open_miner_by_work_num", 22, 663, 20, dest);
  LOWORD(v5) = 13380;
  HIWORD(v5) = (unsigned int)&unk_173804 >> 16;
  memcpy(dest, v5, sizeof(dest));
  v6 = calloc(1u, 0xD8u);
  v14 = v6 + 10;
  v7 = v6;
  v8 = dest;
  v9 = v6 + 46;
  v10 = (char *)v6 + 7;
  v11 = 0;
  do
  {
    v12 = (int)v8;
    v8 += 280;
    str2hex((int)v15, v12, 280);
    memset(v7, 0, 0xB4u);
    memcpy(v14, v15, 0x8Cu);
    *++v10 = v11;
    v7[45] = 22;
    *(_DWORD *)(a1 + 508) = 1;
    memset(v9, 255, 0x20u);
    push_work_base(a1, (int)v7);
    usleep((__useconds_t)&loc_30D40);
    v11 += 2;
  }
  while ( v8 != (char *)&v17 );
  free(v7);
  return 0;
}
