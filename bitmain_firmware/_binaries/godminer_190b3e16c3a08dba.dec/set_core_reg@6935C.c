int __fastcall set_core_reg(int a1, char a2, int a3, int a4)
{
  int v9; // [sp+Ch] [bp-1018h]
  int v10; // [sp+10h] [bp-1014h] BYREF
  __int16 v11; // [sp+18h] [bp-100Ch]
  __int16 v12; // [sp+1Ah] [bp-100Ah]
  char v13; // [sp+1Ch] [bp-1008h]
  char v14; // [sp+1Dh] [bp-1007h]
  char v15[4100]; // [sp+20h] [bp-1004h] BYREF

  V_LOCK();
  logfmt_raw(v15, 0x1000u, 0, "%s: regaddr %02x data %d", "set_core_reg", a3, a4, v9, 0, 0, 0, 0);
  V_UNLOCK();
  zlog(
    g_zc,
    "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin_g"
    "odminer-new/backend/backend_dash_1766/backend_dash_1766.c",
    173,
    "set_core_reg",
    0xCu,
    344,
    20,
    v15);
  v13 = a2;
  v11 = 1;
  v12 = a3;
  v10 = a4;
  v14 = 0xCu;
  return (*(int (__fastcall **)(int, int *))(a1 + 244))(a1, &v10);
}
