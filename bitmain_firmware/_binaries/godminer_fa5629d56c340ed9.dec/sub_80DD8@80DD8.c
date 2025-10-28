int __fastcall sub_80DD8(int a1, unsigned __int8 a2, __int16 a3)
{
  _DWORD *v5; // r11
  int v6; // r10
  int v7; // r7
  _DWORD *v8; // r4
  int v10; // [sp+54h] [bp-1038h] BYREF
  _DWORD v11[2]; // [sp+58h] [bp-1034h] BYREF
  __int16 v12; // [sp+60h] [bp-102Ch]
  __int16 v13; // [sp+62h] [bp-102Ah]
  int v14; // [sp+64h] [bp-1028h]
  _DWORD v15[7]; // [sp+68h] [bp-1024h] BYREF
  int v16; // [sp+84h] [bp-1008h]
  char v17[4100]; // [sp+88h] [bp-1004h] BYREF

  v12 = 1;
  v11[1] = 0;
  v10 = 0;
  v11[0] = 0;
  v13 = a3;
  v5 = calloc(0x60u, 1u);
  v14 = a2;
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *))(a1 + 320))(a1, v11, 8, v5, &v10);
  V_LOCK();
  logfmt_raw(v17, 0x1000u, 0, "%s response_num %d", "ChipSetting_get_single_core_status_ETH", v10);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_single_core_status_ETH",
    38,
    2080,
    0x28u,
    v17);
  v6 = v10;
  if ( v10 > 0 )
  {
    v7 = 0;
    v8 = v5;
    do
    {
      V_LOCK();
      ++v7;
      v8 += 3;
      V_INT((int)v15, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v17,
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
        "[Core State] asic %02x core %04x reg %02x state %08x",
        *((unsigned __int8 *)v8 - 8),
        *((unsigned __int8 *)v8 - 4),
        (unsigned __int16)__rev16(*((unsigned __int16 *)v8 - 3)),
        bswap32(*(v8 - 3)));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_single_core_status_ETH",
        38,
        2083,
        40,
        v17);
      v6 = v10;
    }
    while ( v10 > v7 );
  }
  free(v5);
  return v6;
}
