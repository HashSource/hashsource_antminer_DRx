int __fastcall tsensor_write(unsigned int a1, unsigned __int8 a2, unsigned __int8 a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r8
  unsigned __int8 *v10; // r6
  int v11; // r0
  int v12; // r3
  int v13; // r6
  int v14; // r2
  int v16; // r2
  unsigned __int8 v17[8]; // [sp+17h] [bp-1809h] BYREF
  unsigned __int8 v18; // [sp+1Fh] [bp-1801h] BYREF
  char s[2048]; // [sp+20h] [bp-1800h] BYREF
  char v20[4096]; // [sp+820h] [bp-1000h] BYREF

  v17[0] = a2;
  if ( a1 > 0xF )
  {
    LOWORD(v13) = 1537;
    snprintf(s, 0x800u, " Bad T-sensor param, input chain is %d", a1);
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, s);
    V_UNLOCK();
    v14 = 112;
LABEL_8:
    HIWORD(v13) = 0x8000;
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      172,
      "tsensor_write",
      13,
      v14,
      100,
      v20);
    return v13;
  }
  v8 = sub_CAC20(a1, v17[0]);
  if ( v8 == -2147482112 )
  {
    v13 = tsensor_open(a1, v17, 1u);
    if ( v13 < 0 )
    {
      snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v17[0]);
      V_LOCK();
      logfmt_raw(v20, 0x1000u, 0, s);
      V_UNLOCK();
      v16 = 121;
    }
    else
    {
      v8 = sub_CAC20(a1, v17[0]);
      if ( v8 != -2147482112 )
        goto LABEL_3;
      snprintf(s, 0x800u, " auto exec tsensor_open, but chain %d,slave_addr %d open failed", a1, v17[0]);
      V_LOCK();
      logfmt_raw(v20, 0x1000u, 0, s);
      V_UNLOCK();
      v16 = 128;
    }
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/tsensor/bitmain_tsensor.c",
      172,
      "tsensor_write",
      13,
      v16,
      100,
      v20);
    return v13;
  }
LABEL_3:
  if ( a5 )
  {
    v9 = a4 + a5;
    v10 = &byte_1B46E8[68 * a1 + 8 * v8];
    while ( 1 )
    {
      v11 = *((_DWORD *)v10 + 2);
      v12 = a4;
      v18 = a3;
      ++a4;
      ++a3;
      if ( iic_write_reg(v11, &v18, 1, v12, 1) != 1 )
        break;
      if ( a4 == v9 )
        return a5;
    }
    LOWORD(v13) = 1536;
    snprintf(s, 0x800u, "fail to write tsensor by iic, chain:%d, slave: %d, addr: %d", a1, v17[0], v18);
    V_LOCK();
    logfmt_raw(v20, 0x1000u, 0, s);
    V_UNLOCK();
    v14 = 140;
    goto LABEL_8;
  }
  return a5;
}
