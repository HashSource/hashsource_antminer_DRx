int __fastcall sub_938C0(int *a1, int a2)
{
  int v2; // r4
  void *v5; // r0
  void (__fastcall *v6)(int *, _DWORD *, int, void *, int *, int, int, _DWORD); // lr
  unsigned __int16 *v7; // r6
  unsigned int v8; // r9
  int v9; // r1
  int v10; // r0
  unsigned int v11; // r1
  unsigned int v12; // r0
  int v13; // r9
  int v14; // r2
  int **v15; // r12
  unsigned __int8 *v16; // r8
  char *v17; // r4
  int v18; // r6
  int v19; // r9
  int v21; // r2
  int result; // r0
  int *v23; // [sp+0h] [bp-160Ch] BYREF
  int v24; // [sp+4h] [bp-1608h]
  int v25; // [sp+8h] [bp-1604h]
  const char *v26; // [sp+54h] [bp-15B8h]
  const char *v27; // [sp+58h] [bp-15B4h]
  const char *v28; // [sp+5Ch] [bp-15B0h]
  int v29; // [sp+60h] [bp-15ACh]
  int v30; // [sp+64h] [bp-15A8h]
  void *ptr; // [sp+68h] [bp-15A4h]
  int **v32; // [sp+6Ch] [bp-15A0h]
  int v33; // [sp+74h] [bp-1598h] BYREF
  _DWORD v34[4]; // [sp+78h] [bp-1594h] BYREF
  _DWORD v35[7]; // [sp+88h] [bp-1584h] BYREF
  int v36; // [sp+A4h] [bp-1568h]
  _BYTE v37[32]; // [sp+A8h] [bp-1564h] BYREF
  _DWORD v38[7]; // [sp+C8h] [bp-1544h] BYREF
  int v39; // [sp+E4h] [bp-1528h]
  _DWORD v40[8]; // [sp+E8h] [bp-1524h] BYREF
  _BYTE s[256]; // [sp+108h] [bp-1504h] BYREF
  char v42[1024]; // [sp+208h] [bp-1404h] BYREF
  char v43[4100]; // [sp+608h] [bp-1004h] BYREF

  v2 = 0;
  v33 = 0;
  memset(s, 0, sizeof(s));
  V_LOCK();
  logfmt_raw(v43, 0x1000u, 0, "%s chip_no %d", "ChipSetting_get_addr_KAS_2380", a2);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_addr_KAS_2380",
    29,
    107,
    20,
    v43);
  v30 = a2;
  v34[0] = 0;
  v34[2] = 1;
  v34[1] = 0;
  v34[3] = 0;
  v5 = calloc(12 * a2, 1u);
  v23 = &v33;
  v6 = (void (__fastcall *)(int *, _DWORD *, int, void *, int *, int, int, _DWORD))a1[75];
  ptr = v5;
  v6(a1, v34, a2, v5, &v33, v24, 3000, 0);
  V_LOCK();
  V_INT((int)v35, "chain", a1[65]);
  logfmt_raw(
    v43,
    0x1000u,
    0,
    v36,
    v35[0],
    v35[1],
    v35[2],
    v35[3],
    v35[4],
    v35[5],
    v35[6],
    v36,
    "%s detect %d chips",
    "ChipSetting_get_addr_KAS_2380",
    v33);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_get_addr_KAS_2380",
    29,
    117,
    60,
    v43);
  if ( v33 > 0 )
  {
    v26 = "ChipSetting_get_addr_KAS_2380";
    v29 = 0;
    v28 = "[GET ADDR] chip_type %04x/%04x chip %d reg %d addr %02x";
    v27 = "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c";
    v7 = (unsigned __int16 *)ptr;
    do
    {
      while ( 1 )
      {
        v8 = *v7;
        V_LOCK();
        v9 = *((unsigned __int8 *)v7 + 4);
        LOWORD(v8) = __rev16(v8);
        v10 = v7[3];
        v24 = a1[87];
        v25 = v2++;
        logfmt_raw(v43, 0x1000u, 0, v28, (unsigned __int16)v8, v24, v25, v10, v9);
        V_UNLOCK();
        zlog(g_zc, v27, 150, v26, 29, 121, 20, v43);
        if ( a1[87] == (unsigned __int16)v8 )
          break;
        v7 += 6;
        if ( v33 <= v2 )
          goto LABEL_7;
      }
      v7 += 6;
      v11 = a1[113];
      v12 = *((unsigned __int8 *)v7 - 8);
      ++v29;
      v13 = v12 / v11;
      ++s[v13];
      V_LOCK();
      v14 = a1[65];
      v32 = (int **)v37;
      V_INT((int)v37, "chain", v14);
      v15 = v32;
      v32 = &v23;
      logfmt_raw(
        v43,
        0x1000u,
        0,
        v15[7],
        *v15,
        v15[1],
        v15[2],
        v15[3],
        v15[4],
        v15[5],
        v15[6],
        v15[7],
        "chip_id:%d, %03d",
        v13,
        *((unsigned __int8 *)v7 - 8));
      V_UNLOCK();
      zlog(g_zc, v27, 150, v26, 29, 127, 20, v43);
    }
    while ( v33 > v2 );
LABEL_7:
    v2 = v29;
  }
  else
  {
    v29 = 0;
  }
  memset(v42, 0, sizeof(v42));
  v42[0] = 10;
  if ( v30 )
  {
    v26 = (const char *)v2;
    v16 = s;
    v17 = v42;
    v18 = 0;
    v19 = v30;
    do
    {
      while ( *v16++ )
      {
        if ( v19 == ++v18 )
          goto LABEL_13;
      }
      v21 = v18++;
      sprintf(v17, "%03d ", v21);
      v17 += 4;
    }
    while ( v19 != v18 );
LABEL_13:
    v2 = (int)v26;
  }
  if ( a1[89] > v29 )
  {
    V_LOCK();
    V_INT((int)v38, "chain", a1[65]);
    V_STR(v40, "error", "asic num error");
    logfmt_raw(
      v43,
      0x1000u,
      0,
      v39,
      v38[0],
      v38[1],
      v38[2],
      v38[3],
      v38[4],
      v38[5],
      v38[6],
      v39,
      v40[0],
      v40[1],
      v40[2],
      v40[3],
      v40[4],
      v40[5],
      v40[6],
      v40[7],
      "detected asic num less than design(%d<%d)",
      v29,
      a1[89]);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_addr_KAS_2380",
      29,
      152,
      100,
      v43);
    V_LOCK();
    logfmt_raw(v43, 0x1000u, 0, "bad asic: %s", v42);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/chip_setting.c",
      150,
      "ChipSetting_get_addr_KAS_2380",
      29,
      153,
      40,
      v43);
  }
  free(ptr);
  result = v33;
  a1[112] = v2;
  return result;
}
