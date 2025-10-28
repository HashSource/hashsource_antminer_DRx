int __fastcall extract_byte_from_hex(const char *a1, int a2)
{
  const __int32_t **v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r4
  int v8; // r4
  char v10[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( (strlen(a1) & 1) != 0 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, 1252956, a1);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/util.c",
      134,
      "extract_byte_from_hex",
      21,
      28,
      100,
      v10);
  }
  v4 = _ctype_tolower_loc();
  v5 = LOBYTE((*v4)[(unsigned __int8)a1[a2]]);
  v6 = LOBYTE((*v4)[(unsigned __int8)a1[a2 + 1]]);
  if ( (unsigned int)(v5 - 97) > 5 && (unsigned int)(v5 - 48) > 9 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, 1252988, v5);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/util.c",
      134,
      "extract_byte_from_hex",
      21,
      35,
      100,
      v10);
  }
  if ( (unsigned int)(v6 - 97) > 5 && (unsigned int)(v6 - 48) > 9 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, 1252988, v6);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/util.c",
      134,
      "extract_byte_from_hex",
      21,
      38,
      100,
      v10);
  }
  v7 = 16 * sub_33698(v5);
  v8 = v7 + sub_33698(v6);
  if ( v8 > 255 )
  {
    V_LOCK();
    logfmt_raw(v10, 0x1000u, 0, 1253020, a1, a2);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/util.c",
      134,
      "extract_byte_from_hex",
      21,
      45,
      100,
      v10);
  }
  return (unsigned __int8)v8;
}
