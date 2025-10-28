int __fastcall set_voltage_MP2973_base(int a1, unsigned int a2, unsigned int a3)
{
  _DWORD *all_created_runtime; // r0
  unsigned int v6; // r3
  unsigned int v7; // r1
  _DWORD *v8; // r10
  __int64 v9; // kr00_8
  unsigned int v10; // r5
  int v11; // r8
  int v13; // [sp+0h] [bp-10A4h] BYREF
  int *v14; // [sp+30h] [bp-1074h]
  unsigned int v15; // [sp+34h] [bp-1070h]
  int v16; // [sp+38h] [bp-106Ch]
  int v17; // [sp+3Ch] [bp-1068h]
  unsigned int v18; // [sp+40h] [bp-1064h]
  unsigned int v19; // [sp+44h] [bp-1060h]
  char *s; // [sp+48h] [bp-105Ch]
  unsigned int v21; // [sp+4Ch] [bp-1058h]
  int v22; // [sp+50h] [bp-1054h]
  const char *v23; // [sp+54h] [bp-1050h]
  int v24; // [sp+5Ch] [bp-1048h] BYREF
  _DWORD v25[7]; // [sp+60h] [bp-1044h] BYREF
  int v26; // [sp+7Ch] [bp-1028h]
  _DWORD v27[7]; // [sp+80h] [bp-1024h] BYREF
  int v28; // [sp+9Ch] [bp-1008h]
  char v29[4100]; // [sp+A0h] [bp-1004h] BYREF

  v17 = a1;
  all_created_runtime = get_all_created_runtime(&v24);
  v6 = 2650;
  if ( a2 >= 0xA5A )
    v7 = 2650;
  else
    v7 = a2;
  v21 = v7;
  if ( a3 < 0xA5A )
    v6 = a3;
  v15 = v6;
  if ( v24 <= 0 )
    return 0;
  v8 = all_created_runtime;
  v19 = (unsigned __int16)v7;
  v18 = (unsigned __int16)v6;
  s = "chain";
  v23 = "set_chain_mps_voltage failed";
  v22 = 0;
  v9 = 0;
  do
  {
    v11 = 3;
    do
    {
      if ( !set_chain_mps_voltage(*(_DWORD *)(v8[(_DWORD)v9] + 260), v17, v19, v18) )
      {
        v16 = 0;
        v14 = (int *)v9;
        V_LOCK();
        V_INT((int)v27, s, v9);
        v10 = v21;
        logfmt_raw(
          v29,
          0x1000u,
          v16,
          v28,
          v27[0],
          v27[1],
          v27[2],
          v27[3],
          v27[4],
          v27[5],
          v27[6],
          v28,
          "set voltage to %d-%d successfully",
          v21,
          v15);
        V_UNLOCK();
        zlog(
          g_zc,
          "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-or"
          "igin_godminer-new/machine_runtime/machine_runtime_base.c",
          166,
          "set_voltage_MP2973_base",
          23,
          167,
          20,
          v29);
        printf("chain-%d set voltage to %d-%d successfully\n", (_DWORD)v9, v10, v15);
        goto LABEL_9;
      }
      V_LOCK();
      V_INT((int)v25, s, v9);
      v14 = &v13;
      logfmt_raw(v29, 0x1000u, 0, v26, v25[0], v25[1], v25[2], v25[3], v25[4], v25[5], v25[6], v26, v23);
      V_UNLOCK();
      zlog(
        g_zc,
        "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-orig"
        "in_godminer-new/machine_runtime/machine_runtime_base.c",
        166,
        "set_voltage_MP2973_base",
        23,
        164,
        100,
        v29);
      --v11;
    }
    while ( v11 );
    v14 = (int *)v9;
    v22 = 19;
LABEL_9:
    ++v9;
  }
  while ( v24 > (int)v14 + 1 );
  return v22;
}
