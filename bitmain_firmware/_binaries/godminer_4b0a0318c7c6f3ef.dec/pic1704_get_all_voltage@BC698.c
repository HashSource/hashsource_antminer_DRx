int __fastcall pic1704_get_all_voltage(char a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  const char *v8; // r2
  unsigned __int16 v9; // r3
  unsigned __int16 v10; // r12
  _DWORD *v11; // r3
  int v12; // r1
  int v13; // [sp+10h] [bp-1818h] BYREF
  int v14; // [sp+14h] [bp-1814h]
  int v15; // [sp+18h] [bp-1810h]
  _DWORD v16[3]; // [sp+1Ch] [bp-180Ch] BYREF
  char s[2040]; // [sp+28h] [bp-1800h] BYREF
  char v18[4096]; // [sp+828h] [bp-1000h] BYREF

  HIBYTE(v14) = a1;
  BYTE2(v14) = 11;
  v15 = 0;
  LOWORD(v14) = 55;
  v16[0] = 255;
  v16[1] = 0;
  v13 = 0;
  *(_DWORD *)((char *)&v16[1] + 3) = 0;
  result = sub_BB8DC(v14, 0, (int)&v13, (unsigned __int8 *)v16);
  if ( result )
  {
    LOWORD(v8) = 20832;
    HIWORD(v8) = (unsigned int)"NTROL is 0x%x" >> 16;
    v9 = __rev16(*(unsigned __int16 *)((char *)&v16[1] + 1));
    v10 = __rev16(*(unsigned __int16 *)((char *)&v16[1] + 3));
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)((char *)v16 + 3));
    *a3 = v9;
    *a4 = v10;
    snprintf(s, 0x800u, v8, *a2, *a3, v10);
    V_LOCK();
    logfmt_raw(v18, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v11) = 20532;
    HIWORD(v11) = (unsigned int)&g_fan_zc >> 16;
    LOWORD(v12) = 20140;
    HIWORD(v12) = (unsigned int)"set_hardware_type" >> 16;
    zlog(*v11, v12, 165, "pic1704_get_all_voltage", 23, 542, 20, v18);
    return 1;
  }
  return result;
}
