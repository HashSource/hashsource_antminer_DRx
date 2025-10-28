int __fastcall sub_99BBC(int a1, char a2, int a3, __int16 a4, void *a5)
{
  bool v5; // zf
  int v6; // r6
  unsigned __int8 v7; // r9
  int v8; // r2
  int v9; // r10
  _DWORD *v12; // r11
  int v13; // r10
  _DWORD *v14; // r4
  int v16; // [sp+4h] [bp-1088h]
  size_t nmemb; // [sp+48h] [bp-1044h]
  int v19; // [sp+54h] [bp-1038h] BYREF
  _DWORD v20[2]; // [sp+58h] [bp-1034h] BYREF
  char v21; // [sp+60h] [bp-102Ch]
  char v22; // [sp+61h] [bp-102Bh]
  __int16 v23; // [sp+62h] [bp-102Ah]
  int v24; // [sp+64h] [bp-1028h]
  _DWORD v25[7]; // [sp+68h] [bp-1024h] BYREF
  int v26; // [sp+84h] [bp-1008h]
  char v27[4088]; // [sp+88h] [bp-1004h] BYREF

  v5 = a3 == 255;
  v6 = 0;
  v7 = a3;
  if ( a3 == 255 )
    v8 = 96;
  else
    v8 = 12;
  if ( v5 )
    v9 = 8;
  else
    v9 = 1;
  nmemb = v8;
  v19 = 0;
  V_LOCK();
  logfmt_raw(v27, 0x1000u, 0, "%s core_no %d", "ChipSetting_get_single_chip_core_status_RVN", v9);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_single_chip_core_status_RVN",
    43,
    1306,
    20,
    v27);
  v20[0] = 0;
  v21 = 0;
  v20[1] = 0;
  v22 = a2;
  v12 = calloc(nmemb, 1u);
  v23 = a4;
  v24 = v7;
  (*(void (__fastcall **)(int, _DWORD *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 268))(
    a1,
    v20,
    v9,
    v12,
    &v19,
    v16,
    2000,
    0);
  v13 = v19;
  if ( v19 > 0 )
  {
    v14 = v12;
    do
    {
      V_LOCK();
      ++v6;
      v14 += 3;
      V_INT((int)v25, "chain", *(int *)(a1 + 224));
      logfmt_raw(
        v27,
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
        "[Core State] asic %02x core %02x reg %04x state %08x",
        *((unsigned __int8 *)v14 - 8),
        *((unsigned __int8 *)v14 - 4),
        *((unsigned __int16 *)v14 - 3),
        *(v14 - 3));
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_get_single_chip_core_status_RVN",
        43,
        1318,
        20,
        v27);
      v13 = v19;
    }
    while ( v19 > v6 );
  }
  if ( a5 )
    memcpy(a5, v12, nmemb);
  free(v12);
  return v13;
}
