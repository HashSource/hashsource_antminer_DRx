int __fastcall get_chain_mps_voltage2(int a1, char a2, _WORD *a3)
{
  int v6; // r3
  int v7; // r1
  bool v8; // cc
  unsigned int v10; // r2
  int v11; // r3
  _BYTE v12[8]; // [sp+10h] [bp-100Ch] BYREF
  char src[4100]; // [sp+18h] [bp-1004h] BYREF

  *a3 = -1;
  if ( !sub_BC3A0(a1, a2, 2, -1) )
    goto LABEL_10;
  v7 = (unsigned __int8)(a2 - 1);
  src[2] = 2;
  v8 = (unsigned __int8)v7 > 3u;
  if ( (unsigned __int8)v7 > 3u )
    v7 = 114;
  else
    v6 = 25492;
  if ( !v8 )
    HIWORD(v6) = 23;
  src[1] = 13;
  if ( !v8 )
    LOBYTE(v7) = *(_BYTE *)(v6 + v7 + 44);
  src[0] = v7;
  if ( !sub_BBFE0(a1, 60, src, 3u, v12, 2u) )
  {
    v10 = v12[0] | (v12[1] << 8);
    v11 = 10 * ((v10 >> 5) & 0x1FF) + 490;
    *a3 = v11;
    printf("chain-%d graw data: %u get_chain_mps_voltage2: %u\n", a1, v10, v11);
    return 0;
  }
  else
  {
LABEL_10:
    V_LOCK();
    logfmt_raw(src, 0x1000u, 0, "get_chain_mps_voltage2 error, fd %d", a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/mps2973.c",
      164,
      "get_chain_mps_voltage2",
      22,
      268,
      100,
      src);
    return 1;
  }
}
