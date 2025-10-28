int __fastcall sub_4FD90(int a1, int a2)
{
  int v3; // r5
  int result; // r0
  int v5; // r6
  int v6; // r5
  int *v7; // r2
  int v8; // r1
  int v9; // lr
  int v10; // t1
  char *v11; // r1
  int v12; // r3
  int v13; // r7
  bool v14; // zf
  int v15; // [sp+10h] [bp+0h] BYREF
  int v16; // [sp+14h] [bp+4h]
  int v17; // [sp+18h] [bp+8h]
  int v18; // [sp+1Ch] [bp+Ch]
  int v19; // [sp+20h] [bp+10h]
  int v20; // [sp+24h] [bp+14h]
  int v21; // [sp+28h] [bp+18h]
  int v22; // [sp+2Ch] [bp+1Ch]
  int v23; // [sp+30h] [bp+20h]
  int v24; // [sp+34h] [bp+24h]
  int v25; // [sp+38h] [bp+28h]
  int v26; // [sp+3Ch] [bp+2Ch]
  int v27; // [sp+40h] [bp+30h]
  int v28; // [sp+44h] [bp+34h]
  char v29[4100]; // [sp+48h] [bp+38h] BYREF

  v15 = 20;
  v16 = 15;
  v17 = 10;
  v18 = 5;
  v19 = -1;
  v20 = -6;
  v21 = -11;
  v22 = 10;
  v23 = 30;
  v24 = 50;
  v25 = 70;
  v26 = 100;
  v27 = 120;
  v28 = 140;
  if ( dword_194480 <= a2 )
  {
    if ( dword_194480 == a2 )
      return dword_197848;
    v5 = 25;
    v6 = 5;
  }
  else
  {
    v5 = 20;
    v6 = 0;
  }
  v7 = &v15;
  v8 = 0;
  v9 = a2 - *(_DWORD *)(a1 + 88);
  while ( 1 )
  {
    v10 = v7[1];
    ++v7;
    if ( v6 + v10 < v9 && v6 + *(v7 - 1) >= v9 )
      break;
    ++v8;
  }
  v11 = &v29[4 * v8];
  v12 = *((_DWORD *)v11 - 7);
  if ( v5 < v9 )
    goto LABEL_12;
  if ( v6 - 11 < v9 )
  {
    if ( v12 <= 0 )
    {
LABEL_12:
      v3 = 0;
      goto LABEL_13;
    }
    if ( v12 >= 140 )
      v3 = 140;
    else
      v3 = *((_DWORD *)v11 - 7);
  }
  else
  {
    v3 = 140;
  }
LABEL_13:
  v13 = a2;
  V_LOCK();
  logfmt_raw(
    v29,
    0x1000u,
    0,
    "prev_temp:%d, temp:%d, prev_voltage_compensate:%d, voltage_compensate:%d",
    dword_194480,
    v13,
    dword_197848,
    v3,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/machine_runtime/hns_2130/machine_runtime_hns_2130.c",
    179,
    "calc_voltage_compensate_hns_2130",
    32,
    37,
    20,
    v29);
  if ( dword_197848 > v3 )
  {
    v14 = dword_194480 == v13;
    if ( dword_194480 < v13 )
    {
      if ( v3 >= dword_197848 )
        v3 = dword_197848;
      goto LABEL_16;
    }
    goto LABEL_15;
  }
  if ( dword_197848 < v3 )
  {
    v14 = v13 == dword_194480;
    if ( v13 < dword_194480 )
      goto LABEL_16;
LABEL_15:
    v3 = dword_197848;
    if ( !v14 )
    {
LABEL_16:
      dword_194480 = v13;
      goto LABEL_17;
    }
    return v3;
  }
  if ( v13 != dword_194480 )
    goto LABEL_16;
LABEL_17:
  result = v3;
  if ( dword_197848 != v3 )
    dword_197848 = v3;
  return result;
}
