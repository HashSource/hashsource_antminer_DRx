int __fastcall sub_5BDE4(int a1, __int64 *a2)
{
  __int64 v2; // r2
  const char *v4; // r1
  __int64 *v6; // r3
  _BYTE *v7; // r2
  int v8; // r0
  int v9; // lr
  int v10; // r12
  int v11; // r0
  char v12; // r12
  int v13; // r3
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  void (__fastcall *v18)(int, __int64 *); // r5
  int v19; // r1
  int v20; // r2
  int v21; // r3
  int v22; // r1
  _WORD v24[90]; // [sp+14h] [bp-11CCh] BYREF
  __int64 v25; // [sp+C8h] [bp-1118h] BYREF
  char dest[16]; // [sp+D0h] [bp-1110h] BYREF
  _BYTE v27[180]; // [sp+F0h] [bp-10F0h] BYREF
  int v28; // [sp+1A4h] [bp-103Ch]
  int v29; // [sp+1A8h] [bp-1038h]
  int v30; // [sp+1ACh] [bp-1034h]
  int v31; // [sp+1B0h] [bp-1030h]
  int v32; // [sp+1B4h] [bp-102Ch]
  int v33; // [sp+1B8h] [bp-1028h]
  int v34; // [sp+1BCh] [bp-1024h]
  int v35; // [sp+1C0h] [bp-1020h]
  int v36; // [sp+1C4h] [bp-101Ch]
  int v37; // [sp+1C8h] [bp-1018h]
  int v38; // [sp+1CCh] [bp-1014h]
  _DWORD v39[1024]; // [sp+1E0h] [bp-1000h] BYREF

  v2 = *a2;
  v4 = (const char *)*((_DWORD *)a2 + 281);
  v25 = v2;
  strcpy(dest, v4);
  v24[89] = 0;
  *(_DWORD *)&v24[87] = 0;
  V_LOCK();
  logfmt_raw((char *)v39, 0x1000u, 0, "start nonce: %08x", dword_197AE8);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/dhash_content/dcr/dcr_1727/dcr_1727_content.c",
    173,
    "push_work_dcr_1727",
    18,
    64,
    20,
    v39);
  memcpy(v24, a2 + 1, 0x8Cu);
  v6 = (__int64 *)((char *)a2 + 155);
  v7 = &v24[71];
  do
  {
    v8 = *(_DWORD *)v6;
    v6 += 2;
    v9 = *((_DWORD *)v6 - 3);
    v7 += 16;
    v10 = *((_DWORD *)v6 - 2);
    *((_DWORD *)v7 - 4) = v8;
    v11 = *((_DWORD *)v6 - 1);
    *((_DWORD *)v7 - 3) = v9;
    *((_DWORD *)v7 - 2) = v10;
    *((_DWORD *)v7 - 1) = v11;
  }
  while ( v6 != (__int64 *)((char *)a2 + 187) );
  v12 = *(_BYTE *)v6;
  v13 = dword_197AE8 | (*(_DWORD *)(a1 + 252) << 22);
  *v7 = v12;
  v39[0] = v13;
  v24[70] = v13;
  LOBYTE(v24[71]) = BYTE2(v13);
  memcpy(v27, v24, sizeof(v27));
  v14 = target_to_diff_dcr((int)(a2 + 129));
  v15 = *((_DWORD *)a2 + 259);
  v16 = *((_DWORD *)a2 + 260);
  v28 = v14;
  v17 = *((_DWORD *)a2 + 261);
  v18 = *(void (__fastcall **)(int, __int64 *))(a1 + 36);
  v29 = *((_DWORD *)a2 + 258);
  v30 = v15;
  v31 = v16;
  v32 = v17;
  v19 = *((_DWORD *)a2 + 263);
  v20 = *((_DWORD *)a2 + 264);
  v21 = *((_DWORD *)a2 + 265);
  v33 = *((_DWORD *)a2 + 262);
  v34 = v19;
  v35 = v20;
  v36 = v21;
  v22 = *((_DWORD *)a2 + 276);
  v37 = *((_DWORD *)a2 + 275);
  v38 = v22;
  v18(a1, &v25);
  return 0;
}
