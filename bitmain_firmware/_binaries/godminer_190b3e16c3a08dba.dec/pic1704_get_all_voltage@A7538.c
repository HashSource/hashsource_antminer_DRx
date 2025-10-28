int __fastcall pic1704_get_all_voltage(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  unsigned __int16 v8; // r3
  unsigned __int16 v9; // r12
  int v10; // [sp+10h] [bp-1818h] BYREF
  int v11; // [sp+14h] [bp-1814h]
  int v12; // [sp+18h] [bp-1810h]
  _DWORD v13[3]; // [sp+1Ch] [bp-180Ch] BYREF
  char s[2040]; // [sp+28h] [bp-1800h] BYREF
  char v15[4096]; // [sp+828h] [bp-1000h] BYREF

  HIBYTE(v11) = a1;
  BYTE2(v11) = 11;
  v12 = 0;
  LOWORD(v11) = 55;
  v13[0] = 255;
  v13[1] = 0;
  v10 = 0;
  *(_DWORD *)((char *)&v13[1] + 3) = 0;
  result = sub_A6724(v11, 0, (int)&v10, (unsigned __int8 *)v13);
  if ( result )
  {
    v8 = __rev16(*(unsigned __int16 *)((char *)&v13[1] + 1));
    v9 = __rev16(*(unsigned __int16 *)((char *)&v13[1] + 3));
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)((char *)v13 + 3));
    *a3 = v8;
    *a4 = v9;
    snprintf(s, 0x800u, "Received all voltage response: vol0 = %d, vol1 = %d, vol2 = %d.", *a2, *a3, v9);
    V_LOCK();
    logfmt_raw(v15, 0x1000u, 0, s);
    V_UNLOCK();
    zlog(
      g_zc,
      "/workspace/jenkins/jenkins/workspace/Antminer_DR7_release/build/rootfs/buildroot/tmp/release/build/godminer-origin"
      "_godminer-new/backend/device/hal/drv_pic/pic_1704.c",
      165,
      "pic1704_get_all_voltage",
      23,
      513,
      20,
      v15);
    return 1;
  }
  return result;
}
