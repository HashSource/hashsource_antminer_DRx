int __fastcall sub_58E34(_DWORD *a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v5; // r1
  int v6; // r12
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r3
  __int64 *v14; // r12
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  void (__fastcall *v19)(_DWORD *, __int64 *); // r5
  int v20; // r0
  int v21; // r1
  _BYTE v23[256]; // [sp+10h] [bp-1274h] BYREF
  __int64 v24; // [sp+110h] [bp-1174h] BYREF
  char dest[32]; // [sp+118h] [bp-116Ch] BYREF
  _BYTE v26[256]; // [sp+138h] [bp-114Ch] BYREF
  int v27; // [sp+238h] [bp-104Ch]
  int v28; // [sp+23Ch] [bp-1048h]
  int v29; // [sp+240h] [bp-1044h]
  int v30; // [sp+244h] [bp-1040h]
  int v31; // [sp+248h] [bp-103Ch]
  int v32; // [sp+24Ch] [bp-1038h]
  int v33; // [sp+250h] [bp-1034h]
  int v34; // [sp+254h] [bp-1030h]
  int v35; // [sp+258h] [bp-102Ch]
  int v36; // [sp+25Ch] [bp-1028h]
  int v37; // [sp+260h] [bp-1024h]
  int v38; // [sp+264h] [bp-1020h]
  int v39; // [sp+268h] [bp-101Ch]
  int v40; // [sp+26Ch] [bp-1018h]
  int v41; // [sp+270h] [bp-1014h]
  char v42[4100]; // [sp+280h] [bp-1004h] BYREF

  v2 = *a2;
  v5 = (const char *)*((_DWORD *)a2 + 281);
  v24 = v2;
  strcpy(dest, v5);
  memcpy(v23, a2 + 1, sizeof(v23));
  v6 = a1[63];
  v23[120] = dword_1978F8;
  v23[121] = BYTE1(dword_1978F8) | ((_BYTE)v6 << 6);
  memcpy(v26, v23, sizeof(v26));
  v7 = target_to_diff_byte_hns((int)(a2 + 129));
  v8 = *((_DWORD *)a2 + 259);
  v9 = *((_DWORD *)a2 + 260);
  v10 = *((_DWORD *)a2 + 261);
  v27 = v7;
  v28 = *((_DWORD *)a2 + 258);
  v29 = v8;
  v30 = v9;
  v31 = v10;
  v11 = *((_DWORD *)a2 + 263);
  v12 = *((_DWORD *)a2 + 264);
  v13 = *((_DWORD *)a2 + 265);
  v32 = *((_DWORD *)a2 + 262);
  v33 = v11;
  v34 = v12;
  v35 = v13;
  V_LOCK();
  logfmt_raw(v42, 0x1000u, 0, "start nonce: %08x target_diff: %d", dword_1978F8, v27);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/hns/hns_2130/hns_2130_content.c",
    173,
    "push_work_hns_2130",
    18,
    46,
    20,
    v42);
  v14 = a2 + 136;
  v15 = *((_DWORD *)a2 + 275);
  v16 = *((_DWORD *)a2 + 276);
  v17 = *((_DWORD *)a2 + 277);
  v18 = *((_DWORD *)a2 + 278);
  v19 = (void (__fastcall *)(_DWORD *, __int64 *))a1[9];
  v36 = v15;
  v37 = v16;
  v38 = v17;
  v39 = v18;
  v20 = *((_DWORD *)v14 + 7);
  v21 = *((_DWORD *)v14 + 8);
  a1[129] = 0;
  v40 = v20;
  v41 = v21;
  v19(a1, &v24);
  return 0;
}
