int __fastcall get_response(int a1)
{
  char *v2; // r0
  int v3; // r3
  const char *v4; // r2
  char *v5; // r4
  int v6; // r0
  int v7; // r3
  _DWORD *v8; // r8
  int v9; // r6
  int v10; // r3
  int v11; // r1
  int v12; // r7
  unsigned int v13; // r10
  unsigned int v14; // r6
  int v15; // r7
  void *v16; // r0
  int (**v17)(); // r0
  int v18; // r0
  size_t v19; // r4
  __useconds_t v20; // r0
  int v22; // r1
  int v23; // r3
  int v24; // r1
  int v25; // [sp+0h] [bp-1124h]
  unsigned int v26; // [sp+4h] [bp-1120h]
  int v27; // [sp+18h] [bp-110Ch]
  int v28; // [sp+1Ch] [bp-1108h]
  char s[256]; // [sp+20h] [bp-1104h] BYREF
  char v30[4100]; // [sp+120h] [bp-1004h] BYREF

  v2 = (char *)calloc(1u, 0x40u);
  LOWORD(v3) = 31592;
  LOWORD(v4) = -31532;
  HIWORD(v3) = (unsigned int)"_dag_base_2282" >> 16;
  HIWORD(v4) = (unsigned int)"" >> 16;
  v5 = v2;
  snprintf(v2, 0x40u, v4, v3, *(_DWORD *)(a1 + 248));
  V_LOCK();
  v6 = syscall(224);
  LOWORD(v7) = -31520;
  HIWORD(v7) = (unsigned int)"URL -- '%s'" >> 16;
  LOWORD(v8) = 20532;
  logfmt_raw(v30, 0x1000u, 0, v7, v5, v6);
  HIWORD(v8) = (unsigned int)&g_fan_zc >> 16;
  LOWORD(v9) = 31924;
  V_UNLOCK();
  LOWORD(v10) = 31592;
  LOWORD(v11) = 31772;
  HIWORD(v10) = (unsigned int)"_dag_base_2282" >> 16;
  HIWORD(v11) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
  LOWORD(v12) = 31592;
  zlog(*v8, v11, 150, v10, 12, 346, 40, v30);
  HIWORD(v12) = (unsigned int)"_dag_base_2282" >> 16;
  HIWORD(v9) = (unsigned int)"backend/chip_reg_io_base.c" >> 16;
  v28 = v9;
  v13 = 1;
  v14 = 64;
  v27 = v12;
  prctl(15, v5);
  v15 = 0;
  v16 = memset(s, 0, sizeof(s));
  while ( 1 )
  {
    v17 = dev_ctrl((int)v16);
    v18 = ((int (__fastcall *)(_DWORD, char *, int))v17[19])(*(_DWORD *)(a1 + 248), s, 256);
    v19 = v18;
    if ( *(_BYTE *)(a1 + 913) )
      break;
    if ( v18 <= 0 )
    {
      v20 = v14;
      v14 *= 2;
      v16 = (void *)usleep(v20);
      if ( v14 >= 0x3E8 )
        v14 = 1000;
    }
    else
    {
      v14 = 64;
      if ( !queue_enqueue(*(_DWORD *)(a1 + 872), s, v18) && v13 <= ++v15 )
      {
        V_LOCK();
        logfmt_raw(v30, 0x1000u, 0, v28, *(_DWORD *)(a1 + 256));
        V_UNLOCK();
        LOWORD(v22) = 31772;
        HIWORD(v22) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
        zlog(*v8, v22, 150, v27, 12, 366, 40, v30);
        V_LOCK();
        LOWORD(v23) = 31984;
        v25 = v15;
        v26 = v13;
        HIWORD(v23) = (unsigned int)"length %02x, reg_value %08x, chip_addr %02x, reg_addr %02x" >> 16;
        v15 = 0;
        v13 *= 10;
        logfmt_raw(v30, 0x1000u, 0, v23, v25, v26);
        V_UNLOCK();
        LOWORD(v24) = 31772;
        HIWORD(v24) = (unsigned int)"x%02x chip_addr:%02x" >> 16;
        zlog(*v8, v24, 150, v27, 12, 367, 40, v30);
        if ( v13 >= 0x989680 )
          v13 = 10000000;
      }
      v16 = memset(s, 0, v19);
    }
  }
  *(_BYTE *)(a1 + 913) = 0;
  return 0;
}
