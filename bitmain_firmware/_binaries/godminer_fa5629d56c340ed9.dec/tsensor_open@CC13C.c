int __fastcall tsensor_open(unsigned int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v4; // r11
  unsigned __int8 *v5; // r5
  _BYTE *v6; // r10
  int v7; // r0
  unsigned __int8 *v8; // r4
  int v9; // r2
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r8
  int v13; // r2
  char v14; // r1
  int v15; // r2
  int v16; // r8
  int v18; // r2
  unsigned int v19; // [sp+14h] [bp-1810h]
  unsigned int v20; // [sp+18h] [bp-180Ch] BYREF
  __int16 v21; // [sp+1Ch] [bp-1808h]
  char v22; // [sp+1Eh] [bp-1806h]
  char v23; // [sp+1Fh] [bp-1805h]
  char s[2048]; // [sp+20h] [bp-1804h] BYREF
  char v25[4100]; // [sp+820h] [bp-1004h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, s);
    V_UNLOCK();
    v18 = 55;
LABEL_13:
    v16 = -2147482111;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      172,
      "tsensor_open",
      12,
      v18,
      100,
      v25);
    return v16;
  }
  if ( a3 > 7 )
  {
    snprintf(s, 0x800u, " Bad T-sensor param, input num is %d", a3);
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, s);
    V_UNLOCK();
    v18 = 56;
    goto LABEL_13;
  }
  if ( !a3 )
    return 0;
  v19 = 68 * a1;
  v4 = a2;
  v5 = &a2[(unsigned __int8)(a3 - 1) + 1];
  v6 = (_BYTE *)(68 * a1 + 1792008);
  while ( 1 )
  {
    while ( 1 )
    {
      v7 = sub_CC0C0(a1, *v4);
      v8 = v4++;
      if ( v7 == -2147482112 )
        break;
      if ( v4 == v5 )
        return 0;
    }
    v9 = *(v4 - 1);
    v20 = a1;
    v10 = v9 + a1;
    v21 = 0;
    v22 = (v10 >> 3) & 0xF;
    v23 = v10 & 7;
    v11 = iic_init((int)&v20);
    v12 = v11;
    if ( v11 < 0 )
      break;
    v13 = (unsigned __int8)*v6;
    *v6 = v13 + 1;
    v14 = *(v4 - 1);
    v15 = v19 + 8 * v13 + 1792008;
    *(_DWORD *)(v15 + 8) = v11;
    *(_BYTE *)(v15 + 4) = v14;
    if ( v4 == v5 )
      return 0;
  }
  snprintf(s, 0x800u, " open T-sensor error, chain is %d,slave addr is %d", a1, *v8);
  V_LOCK();
  logfmt_raw(v25, 0x1000u, 0, s);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
    172,
    "tsensor_open",
    12,
    75,
    100,
    v25);
  return v12;
}
