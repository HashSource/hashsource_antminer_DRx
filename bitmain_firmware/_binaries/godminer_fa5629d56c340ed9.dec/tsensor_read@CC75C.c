int __fastcall tsensor_read(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, unsigned int a5)
{
  int v7; // r0
  int v8; // r8
  int v10; // r8
  int v11; // r2
  unsigned __int8 v12; // [sp+16h] [bp-1802h] BYREF
  unsigned __int8 v13; // [sp+17h] [bp-1801h] BYREF
  char s[2040]; // [sp+18h] [bp-1800h] BYREF
  char v15[4072]; // [sp+818h] [bp-1000h] BYREF

  v13 = a2;
  v12 = a3;
  if ( a1 > 0xF )
  {
    v8 = -2147482111;
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      172,
      "tsensor_read",
      12,
      155,
      100,
      v15);
    return v8;
  }
  v7 = sub_CC0C0(a1, v13);
  if ( v7 != -2147482112 )
    goto LABEL_3;
  v10 = tsensor_open(a1, &v13, 1u);
  if ( v10 < 0 )
  {
    snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v13);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    v11 = 164;
    goto LABEL_9;
  }
  v7 = sub_CC0C0(a1, v13);
  if ( v7 == -2147482112 )
  {
    snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v13);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    v11 = 171;
  }
  else
  {
LABEL_3:
    v8 = iic_read_reg(*(void **)&byte_1B5808[68 * a1 + 8 + 8 * v7], &v12, 2, a4, a5);
    if ( v8 == a5 )
      return v8;
    v10 = -2147482112;
    snprintf(s, 0x800u, "fail to read tsensor by iic, chain: %d, slave: %d, addr: %d", a1, v13, v12);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    v11 = 196;
  }
LABEL_9:
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
    172,
    "tsensor_read",
    12,
    v11,
    100,
    v15);
  return v10;
}
