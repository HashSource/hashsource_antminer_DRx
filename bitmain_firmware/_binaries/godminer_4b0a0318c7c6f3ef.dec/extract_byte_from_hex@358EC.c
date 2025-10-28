int __fastcall extract_byte_from_hex(const char *a1, int a2)
{
  const __int32_t **v4; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r4
  int v8; // r4
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  int v13; // r3
  _DWORD *v14; // r3
  int v15; // r1
  int v16; // r3
  _DWORD *v17; // r3
  int v18; // r1
  int v19; // r3
  _DWORD *v20; // r3
  int v21; // r1
  char v22[4096]; // [sp+10h] [bp-1000h] BYREF

  if ( (strlen(a1) & 1) != 0 )
  {
    V_LOCK();
    LOWORD(v13) = -26844;
    HIWORD(v13) = (unsigned int)"control character 0x%x" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v13, a1);
    V_UNLOCK();
    LOWORD(v14) = 20532;
    HIWORD(v14) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v15) = -27004;
    HIWORD(v15) = (unsigned int)"%04X" >> 16;
    zlog(*v14, v15, 134, "extract_byte_from_hex", 21, 24, 100, v22);
  }
  v4 = _ctype_tolower_loc();
  v5 = LOBYTE((*v4)[(unsigned __int8)a1[a2]]);
  v6 = LOBYTE((*v4)[(unsigned __int8)a1[a2 + 1]]);
  if ( (unsigned int)(v5 - 97) > 5 && (unsigned int)(v5 - 48) > 9 )
  {
    V_LOCK();
    LOWORD(v19) = -26812;
    HIWORD(v19) = (unsigned int)"escape" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v19, v5);
    V_UNLOCK();
    LOWORD(v20) = 20532;
    HIWORD(v20) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v21) = -27004;
    HIWORD(v21) = (unsigned int)"%04X" >> 16;
    zlog(*v20, v21, 134, "extract_byte_from_hex", 21, 31, 100, v22);
  }
  if ( (unsigned int)(v6 - 97) > 5 && (unsigned int)(v6 - 48) > 9 )
  {
    V_LOCK();
    LOWORD(v16) = -26812;
    HIWORD(v16) = (unsigned int)"escape" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v16, v6);
    V_UNLOCK();
    LOWORD(v17) = 20532;
    HIWORD(v17) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v18) = -27004;
    HIWORD(v18) = (unsigned int)"%04X" >> 16;
    zlog(*v17, v18, 134, "extract_byte_from_hex", 21, 34, 100, v22);
  }
  v7 = 16 * sub_35778(v5);
  v8 = v7 + sub_35778(v6);
  if ( v8 > 255 )
  {
    V_LOCK();
    LOWORD(v9) = -26780;
    HIWORD(v9) = (unsigned int)"%.6s'" >> 16;
    logfmt_raw(v22, 0x1000u, 0, v9, a1, a2);
    V_UNLOCK();
    LOWORD(v10) = 20532;
    HIWORD(v10) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v11) = -27004;
    HIWORD(v11) = (unsigned int)"%04X" >> 16;
    zlog(*v10, v11, 134, "extract_byte_from_hex", 21, 41, 100, v22);
  }
  return (unsigned __int8)v8;
}
