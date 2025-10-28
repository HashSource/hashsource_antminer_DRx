int __fastcall i2c_select(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r4
  _DWORD *v6; // r7
  void (__fastcall *v7)(_DWORD *, _DWORD *, int); // r3
  int v8; // r2
  const char *v9; // r2
  _DWORD *v10; // r3
  int v11; // r1
  int *v13; // lr
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r3
  int v18; // lr
  _DWORD *v19; // r3
  int v20; // r1
  _DWORD v21[2]; // [sp+10h] [bp-180Ch] BYREF
  _DWORD s[4]; // [sp+18h] [bp-1804h] BYREF
  __int16 v23; // [sp+28h] [bp-17F4h]
  char v24; // [sp+2Ah] [bp-17F2h]
  char v25[4100]; // [sp+818h] [bp-1004h] BYREF

  LOWORD(v2) = -12632;
  HIWORD(v2) = (unsigned int)&unk_18C650 >> 16;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v2 + 8)) )
  {
    LOWORD(v13) = -17048;
    HIWORD(v13) = (unsigned int)"489" >> 16;
    v14 = *v13;
    v15 = v13[1];
    v16 = v13[2];
    v17 = v13[3];
    v18 = v13[4];
    s[0] = v14;
    s[1] = v15;
    s[2] = v16;
    s[3] = v17;
    v23 = v18;
    v24 = BYTE2(v18);
    V_LOCK();
    logfmt_raw(v25, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v19) = -12376;
    HIWORD(v19) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v20) = -6796;
    HIWORD(v20) = (unsigned int)&unk_1596A4 >> 16;
    zlog(*v19, v20, 171, "i2c_select", 10, 465, 100, v25);
    return -4;
  }
  else
  {
    v5 = new_iterator_c_map(*(_DWORD *)(v2 + 4));
    if ( ((int (*)(void))*v5)() )
    {
      while ( ***(_DWORD ***)(v5[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v5)(v5) )
          goto LABEL_7;
      }
      v6 = (_DWORD *)((int (*)(void))v5[2])();
      v7 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v5[1];
      v8 = v6[1];
      v21[0] = a2;
      v21[1] = v8;
      v7(v5, v21, 8);
      LOWORD(v9) = -6268;
      HIWORD(v9) = (unsigned int)&unk_1598B4 >> 16;
      snprintf((char *)s, 0x800u, v9, a2);
      V_LOCK();
      logfmt_raw(v25, 0x1000u, 0, s);
      V_UNLOCK();
      LOWORD(v10) = -12376;
      HIWORD(v10) = (unsigned int)&unk_18C750 >> 16;
      LOWORD(v11) = -6796;
      HIWORD(v11) = (unsigned int)&unk_1596A4 >> 16;
      zlog(*v10, v11, 171, "i2c_select", 10, 476, 20, v25);
      free(v6);
    }
LABEL_7:
    delete_iterator_c_map(v5);
    pthread_mutex_unlock(&stru_18CEB0);
    return 0;
  }
}
