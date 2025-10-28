int __fastcall stratum_socket_full(int a1, __time_t a2)
{
  size_t v4; // r0
  int v5; // r3
  _DWORD *v6; // r3
  int v7; // r1
  char v9[4096]; // [sp+10h] [bp-1000h] BYREF

  V_LOCK();
  v4 = strlen(*(const char **)(a1 + 44));
  LOWORD(v5) = 5372;
  HIWORD(v5) = (unsigned int)"tranonce_kas" >> 16;
  logfmt_raw(v9, 0x1000u, 0, v5, v4);
  V_UNLOCK();
  LOWORD(v6) = -12376;
  HIWORD(v6) = (unsigned int)&unk_18C750 >> 16;
  LOWORD(v7) = 5000;
  HIWORD(v7) = (unsigned int)"e nameroot failed!" >> 16;
  zlog(*v6, v7, 145, "stratum_socket_full", 19, 104, 20, v9);
  if ( **(_BYTE **)(a1 + 44) )
    return 1;
  else
    return socket_full(*(_DWORD *)(a1 + 36), a2);
}
