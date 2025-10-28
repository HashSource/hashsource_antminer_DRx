int __fastcall sub_A5A30(int a1, int a2, __int16 a3, void *a4)
{
  int v4; // r8
  unsigned __int8 v6; // r10
  int v8; // r5
  _DWORD *v9; // r11
  int v10; // r10
  _DWORD *v11; // r9
  int v13; // [sp+4h] [bp-10A8h]
  int v15; // [sp+54h] [bp-1058h] BYREF
  _DWORD v16[2]; // [sp+58h] [bp-1054h] BYREF
  __int16 v17; // [sp+60h] [bp-104Ch]
  __int16 v18; // [sp+62h] [bp-104Ah]
  int v19; // [sp+64h] [bp-1048h]
  _DWORD v20[7]; // [sp+68h] [bp-1044h] BYREF
  int v21; // [sp+84h] [bp-1028h]
  _DWORD v22[7]; // [sp+88h] [bp-1024h] BYREF
  int v23; // [sp+A4h] [bp-1008h]
  char v24[4100]; // [sp+A8h] [bp-1004h] BYREF

  v4 = *(_DWORD *)(a1 + 448);
  v6 = a2;
  if ( a2 == 255 )
    v4 <<= 6;
  v15 = 0;
  V_LOCK();
  V_INT((int)v20, "chain", *(int *)(a1 + 260));
  v8 = 0;
  logfmt_raw(
    v24,
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
    "%s core_num %d",
    "ChipSetting_get_core_status_RVN",
    v4);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_core_status_RVN",
    31,
    1919,
    20,
    v24);
  v17 = 1;
  v16[1] = 0;
  v16[0] = 0;
  v18 = a3;
  v19 = v6;
  v9 = calloc(12 * v4, 1u);
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 320))(
    a1,
    v16,
    v4,
    v9,
    &v15,
    v13,
    2000,
    0);
  v10 = v15;
  if ( v15 > 0 )
  {
    v11 = v9;
    do
    {
      V_LOCK();
      ++v8;
      v11 += 3;
      V_INT((int)v22, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v24,
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
        "[Core State] asic %02x core %02x reg %04x state %08x",
        *((unsigned __int8 *)v11 - 8),
        *((unsigned __int8 *)v11 - 4),
        *((unsigned __int16 *)v11 - 3),
        *(v11 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_core_status_RVN",
        31,
        1931,
        20,
        v24);
      v10 = v15;
    }
    while ( v15 > v8 );
  }
  if ( a4 )
    memcpy(a4, v9, 12 * v4);
  free(v9);
  return v10;
}
