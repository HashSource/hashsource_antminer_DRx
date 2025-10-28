time_t __fastcall sub_67CAC(int a1, int a2)
{
  int v4; // r2
  int v6; // r8
  __int64 v7; // r0
  _DWORD v8[7]; // [sp+30h] [bp-1040h] BYREF
  int v9; // [sp+4Ch] [bp-1024h]
  _DWORD v10[7]; // [sp+50h] [bp-1020h] BYREF
  int v11; // [sp+6Ch] [bp-1004h]
  char v12[4096]; // [sp+70h] [bp-1000h] BYREF

  if ( a2 == 700 )
  {
    v6 = 820;
LABEL_6:
    LODWORD(v7) = sub_12E424(*(_QWORD *)(a1 + 944), a2);
    *(_QWORD *)(a1 + 944) = v7 * (int)*(float *)(a1 + 924);
    *(float *)(a1 + 924) = (float)a2;
    *(_DWORD *)(a1 + 928) = v6;
    V_LOCK();
    V_INT((int)v10, "chain", *(int *)(a1 + 224));
    logfmt_raw(
      v12,
      0x1000u,
      0,
      v11,
      v10[0],
      v10[1],
      v10[2],
      v10[3],
      v10[4],
      v10[5],
      v10[6],
      v11,
      "overclock freq %d voltage %d",
      (int)*(float *)(a1 + 924),
      *(_DWORD *)(a1 + 928));
    V_UNLOCK();
    v4 = 989;
    return zlog(
             g_zc,
             "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer"
             "-origin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
             173,
             "overclock_update_dash",
             21,
             v4,
             40,
             v12);
  }
  if ( a2 == 750 )
  {
    v6 = 830;
    goto LABEL_6;
  }
  V_LOCK();
  V_INT((int)v8, "chain", *(int *)(a1 + 224));
  logfmt_raw(
    v12,
    0x1000u,
    0,
    v9,
    v8[0],
    v8[1],
    v8[2],
    v8[3],
    v8[4],
    v8[5],
    v8[6],
    v9,
    "cannot overclock with freq %d",
    a2);
  V_UNLOCK();
  v4 = 991;
  return zlog(
           g_zc,
           "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-o"
           "rigin_godminer-new/backend/backend_dash_1766/backend_dash_1766.c",
           173,
           "overclock_update_dash",
           21,
           v4,
           40,
           v12);
}
