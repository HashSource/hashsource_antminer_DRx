int __fastcall eeprom_decode_fixture_info_0(unsigned __int8 *a1, _WORD *a2)
{
  int v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r6
  bool v7; // zf
  int v8; // r7
  const char *v10; // r2
  _DWORD *v11; // r3
  int v12; // r2
  int v13; // r1
  const char *v14; // r2
  unsigned int s[64]; // [sp+10h] [bp-1904h] BYREF
  char v16[2048]; // [sp+110h] [bp-1804h] BYREF
  char v17[4100]; // [sp+910h] [bp-1004h] BYREF

  memset(s, 0, sizeof(s));
  v4 = a1[1];
  v5 = *a1;
  v6 = v4 - 2;
  if ( (unsigned __int8)(v4 - 2) > 0xFDu )
  {
    LOWORD(v14) = -13892;
    HIWORD(v14) = (unsigned int)"read_sensor_temp_remote_on_pic_RVN" >> 16;
    snprintf(v16, 0x800u, v14, a1[1], v6, a1[1]);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, v16);
    V_UNLOCK();
    LOWORD(v11) = -12376;
    HIWORD(v11) = (unsigned int)&unk_18C750 >> 16;
    v12 = 279;
    goto LABEL_11;
  }
  v7 = v5 >> 4 == 1;
  if ( v5 >> 4 == 1 )
    v7 = (v5 & 0xF) == 1;
  v8 = !v7;
  if ( !v7 )
  {
    LOWORD(v10) = -13804;
    HIWORD(v10) = (unsigned int)"t_rvn" >> 16;
    snprintf(v16, 0x800u, v10);
    V_LOCK();
    logfmt_raw(v17, 0x1000u, 0, v16);
    V_UNLOCK();
    LOWORD(v11) = -12376;
    HIWORD(v11) = (unsigned int)&unk_18C750 >> 16;
    v12 = 285;
LABEL_11:
    LOWORD(v13) = -14132;
    HIWORD(v13) = (unsigned int)"_rvn" >> 16;
    zlog(*v11, v13, 170, "decode_eeprom_fixture_info", 26, v12, 100, v17);
    return -1;
  }
  memcpy(s, a1 + 2, v4 - 2);
  data_dec(s, v6, 1, 1);
  *a2 = *(_WORD *)a1;
  memcpy(a2 + 1, s, v6);
  return v8;
}
