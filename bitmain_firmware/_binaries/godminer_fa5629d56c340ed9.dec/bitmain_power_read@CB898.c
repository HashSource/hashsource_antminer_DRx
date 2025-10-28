int __fastcall bitmain_power_read(__int16 a1, int a2, int a3)
{
  int v5; // r4
  int v6; // r7
  int v7; // r0
  const char *v8; // r9
  int v9; // r8
  _DWORD *v10; // r7
  const char *v11; // r10
  int v12; // r9
  int v13; // r6
  unsigned __int8 *v14; // r8
  int v15; // r4
  int v16; // t1
  const char *v18; // r2
  _DWORD *v19; // r3
  int v20; // r2
  int v21; // r1
  int *v22; // lr
  int v23; // r0
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r1
  int v28; // r2
  int v30; // [sp+14h] [bp-1848h]
  int v31; // [sp+1Ch] [bp-1840h] BYREF
  char v32; // [sp+20h] [bp-183Ch]
  char v33; // [sp+21h] [bp-183Bh]
  __int16 v34; // [sp+22h] [bp-183Ah]
  unsigned __int8 v35[52]; // [sp+24h] [bp-1838h] BYREF
  _DWORD s[6]; // [sp+58h] [bp-1804h] BYREF
  __int16 v37; // [sp+70h] [bp-17ECh]
  char v38; // [sp+72h] [bp-17EAh]
  char v39[4100]; // [sp+858h] [bp-1004h] BYREF

  LOWORD(v5) = 22296;
  HIWORD(v5) = (unsigned int)&unk_1B4600 >> 16;
  memset(v35, 0, 0x32u);
  v6 = *(_DWORD *)(v5 + 4);
  v32 = a1;
  v34 = a1 + 12 + a3;
  v33 = a3;
  v31 = 101100117;
  if ( v6 )
  {
    v30 = 0;
  }
  else
  {
    v30 = sub_CA67C();
    if ( v30 < 0 )
    {
      LOWORD(v18) = -28548;
      HIWORD(v18) = (unsigned int)"/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/r"
                                  "elease/build/godminer-origin_godminer-new/backend/device/hal/platform/7007/7007_uart.c" >> 16;
      snprintf((char *)s, 0x800u, v18, "bitmain_power_read");
      V_LOCK();
      logfmt_raw(v39, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v19) = 24916;
      HIWORD(v19) = (unsigned int)&unk_1B503C >> 16;
      v20 = 896;
LABEL_12:
      LOWORD(v21) = -28900;
      HIWORD(v21) = (unsigned int)"" >> 16;
      zlog(*v19, v21, 173, "bitmain_power_read", 18, v20, 100, v39);
      return v30;
    }
  }
  v7 = sub_C9CF0(*(void **)v5, (unsigned __int8 *)&v31, 8u, v35, a3 + 7);
  LOBYTE(v5) = v7;
  if ( v7 )
  {
    LOWORD(v22) = -28608;
    HIWORD(v22) = (unsigned int)"rt_rx_fifo" >> 16;
    v23 = *v22;
    v24 = v22[1];
    v25 = v22[2];
    v26 = v22[3];
    v22 += 4;
    v30 = -2147482880;
    s[0] = v23;
    s[1] = v24;
    s[2] = v25;
    s[3] = v26;
    v27 = v22[1];
    v28 = v22[2];
    s[4] = *v22;
    s[5] = v27;
    v37 = v28;
    v38 = BYTE2(v28);
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v19) = 24916;
    HIWORD(v19) = (unsigned int)&unk_1B503C >> 16;
    v20 = 906;
    goto LABEL_12;
  }
  LOWORD(v10) = 24916;
  LOWORD(v8) = -28204;
  LOWORD(v9) = -28900;
  HIWORD(v10) = (unsigned int)&unk_1B503C >> 16;
  do
  {
    HIWORD(v8) = (unsigned int)"h send fifo space, break" >> 16;
    v5 = (unsigned __int8)(v5 + 1);
    snprintf((char *)s, 0x800u, v8);
    V_LOCK();
    logfmt_raw(v39, 0x1000u, 0, s);
    V_UNLOCK();
    HIWORD(v9) = (unsigned int)"" >> 16;
    zlog(*v10, v9, 173, "bitmain_power_read", 18, 914, 100, v39);
  }
  while ( v5 <= a3 + 6 );
  if ( a3 )
  {
    LOWORD(v11) = -28176;
    LOWORD(v12) = -28900;
    v13 = a2 + (unsigned __int8)(a3 - 1);
    v14 = &v35[4];
    v15 = a2 - 1;
    do
    {
      v16 = *++v14;
      HIWORD(v11) = (unsigned int)"get_read_address_info error, chain_id = %d" >> 16;
      *(_BYTE *)++v15 = v16;
      snprintf((char *)s, 0x800u, v11, v15 - a2, v16);
      V_LOCK();
      logfmt_raw(v39, 0x1000u, 0, s);
      V_UNLOCK();
      HIWORD(v12) = (unsigned int)"" >> 16;
      zlog(*v10, v12, 173, "bitmain_power_read", 18, 919, 100, v39);
    }
    while ( v15 != v13 );
  }
  return v30;
}
