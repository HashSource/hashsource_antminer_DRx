bool __fastcall sub_8ED30(int a1, int a2, char **a3)
{
  char v3; // r3
  _DWORD *v5; // r8
  int v6; // r6
  _DWORD *v7; // r5
  int v8; // r3
  int v9; // r10
  void *v10; // r0
  char *v11; // r8
  int v12; // r5
  int v13; // r6
  _DWORD *v14; // r5
  const char *v15; // r5
  int v17; // [sp+4h] [bp-10E8h]
  char *s; // [sp+40h] [bp-10ACh]
  char *v20; // [sp+44h] [bp-10A8h]
  _DWORD *ptr; // [sp+4Ch] [bp-10A0h]
  int v22; // [sp+54h] [bp-1098h] BYREF
  int v23; // [sp+58h] [bp-1094h] BYREF
  int v24; // [sp+5Ch] [bp-1090h]
  int v25; // [sp+60h] [bp-108Ch]
  int v26; // [sp+64h] [bp-1088h]
  _DWORD v27[7]; // [sp+68h] [bp-1084h] BYREF
  int v28; // [sp+84h] [bp-1068h]
  _DWORD v29[7]; // [sp+88h] [bp-1064h] BYREF
  int v30; // [sp+A4h] [bp-1048h]
  _DWORD v31[7]; // [sp+A8h] [bp-1044h] BYREF
  int v32; // [sp+C4h] [bp-1028h]
  _DWORD v33[7]; // [sp+C8h] [bp-1024h] BYREF
  int v34; // [sp+E4h] [bp-1008h]
  char v35[4100]; // [sp+E8h] [bp-1004h] BYREF

  v3 = 0;
  v22 = 0;
  if ( a2 != -1 && *(_DWORD *)(a1 + 356) >= a2 )
    v3 = *(_BYTE *)(*(_DWORD *)(a1 + 512) + a2);
  v25 = 3932160;
  v24 = 0;
  v23 = 0;
  v26 = 0;
  BYTE1(v25) = v3;
  v5 = calloc(0xCu, 1u);
  (*(void (__fastcall **)(int, int *, int, _DWORD *, int *))(a1 + 300))(a1, &v23, 1, v5, &v22);
  if ( v22 <= 0 )
  {
    v20 = 0;
  }
  else
  {
    v20 = 0;
    v6 = 0;
    v7 = v5;
    do
    {
      while ( 1 )
      {
        ++v6;
        if ( *((_WORD *)v7 + 3) == 60 )
          break;
        v7 += 3;
        if ( v22 <= v6 )
          goto LABEL_9;
      }
      v8 = *v5;
      v7 += 3;
      HIBYTE(v33[0]) = *v5;
      BYTE2(v33[0]) = BYTE1(v8);
      BYTE1(v33[0]) = BYTE2(v8);
      LOBYTE(v33[0]) = HIBYTE(v8);
      v9 = v33[0];
      V_LOCK();
      v20 += v9;
      V_INT((int)v27, "chain", *(int *)(a1 + 260));
      logfmt_raw(
        v35,
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
        "[Top Nonce Cnt] asic %02x, reg %02x cnt %08x",
        *((unsigned __int8 *)v7 - 8),
        *((unsigned __int16 *)v7 - 3),
        v9);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/backend/chip_setting.c",
        150,
        "ChipSetting_nonce_counter_HNS_2130",
        34,
        484,
        20,
        v35);
    }
    while ( v22 > v6 );
  }
LABEL_9:
  v10 = v5;
  v11 = 0;
  free(v10);
  *a3 = v20;
  v12 = *(_DWORD *)(a1 + 360);
  v25 = 655360;
  v26 = 255;
  v23 = 1;
  v24 = 0;
  ptr = calloc(12 * v12, 1u);
  (*(void (__fastcall **)(int, int *, int, _DWORD *, int *, int, int, _DWORD))(a1 + 320))(
    a1,
    &v23,
    v12,
    ptr,
    &v22,
    v17,
    2000,
    0);
  if ( v22 > 0 )
  {
    v13 = 0;
    v14 = ptr;
    s = 0;
    do
    {
      if ( *((_WORD *)v14 + 3) == 10 )
      {
        s += *v14;
        V_LOCK();
        V_INT((int)v29, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v35,
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
          "%s chip %02x, core %02x, reg %02x, core_nonce_cnt %08x",
          "ChipSetting_nonce_counter_HNS_2130",
          *((unsigned __int8 *)v14 + 4),
          *((unsigned __int8 *)v14 + 8),
          *((unsigned __int16 *)v14 + 3),
          *v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_nonce_counter_HNS_2130",
          34,
          507,
          20,
          v35);
      }
      else
      {
        V_LOCK();
        V_INT((int)v31, "chain", *(int *)(a1 + 260));
        logfmt_raw(
          v35,
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
          "%s chip %02x, expected reg %02x, but %02x, core_nonce_cnt %08x",
          "ChipSetting_nonce_counter_HNS_2130",
          *((unsigned __int8 *)v14 + 4),
          5,
          *((unsigned __int16 *)v14 + 3),
          *v14);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/backend/chip_setting.c",
          150,
          "ChipSetting_nonce_counter_HNS_2130",
          34,
          510,
          100,
          v35);
      }
      ++v13;
      v14 += 3;
    }
    while ( v22 > v13 );
    v11 = s;
  }
  free(ptr);
  V_LOCK();
  V_INT((int)v33, "chain", *(int *)(a1 + 260));
  v15 = "Failed";
  if ( v20 == v11 )
    v15 = "Pass";
  logfmt_raw(
    v35,
    0x1000u,
    0,
    v34,
    v33[0],
    v33[1],
    v33[2],
    v33[3],
    v33[4],
    v33[5],
    v33[6],
    v34,
    "check nonce counter, top_nonce_cnt %d, core_nocne_cnt %d (%s)",
    v20,
    v11,
    v15);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/chip_setting.c",
    150,
    "ChipSetting_nonce_counter_HNS_2130",
    34,
    516,
    40,
    v35);
  return v20 != v11;
}
