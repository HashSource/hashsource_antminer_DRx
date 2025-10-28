int __fastcall i2c_ioctl(int a1, int a2, int a3)
{
  int v3; // r4
  _DWORD *v7; // r4
  int *v8; // r0
  int *v9; // r8
  int v10; // r2
  void (__fastcall *v11)(_DWORD *, _DWORD *, int); // r3
  const char *v12; // r2
  _DWORD *v13; // r3
  int v14; // r1
  int *v16; // lr
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // lr
  _DWORD *v22; // r3
  int v23; // r1
  _DWORD v24[2]; // [sp+10h] [bp-1808h] BYREF
  _DWORD s[4]; // [sp+18h] [bp-1800h] BYREF
  __int16 v26; // [sp+28h] [bp-17F0h]
  char v27; // [sp+2Ah] [bp-17EEh]
  char v28[4096]; // [sp+818h] [bp-1000h] BYREF

  LOWORD(v3) = -12632;
  HIWORD(v3) = (unsigned int)&unk_18C650 >> 16;
  if ( pthread_mutex_lock((pthread_mutex_t *)(v3 + 8)) )
  {
    LOWORD(v16) = -17048;
    HIWORD(v16) = (unsigned int)"489" >> 16;
    v17 = *v16;
    v18 = v16[1];
    v19 = v16[2];
    v20 = v16[3];
    v21 = v16[4];
    s[0] = v17;
    s[1] = v18;
    s[2] = v19;
    s[3] = v20;
    v26 = v21;
    v27 = BYTE2(v21);
    V_LOCK();
    logfmt_raw(v28, 0x1000u, 0, s);
    V_UNLOCK();
    LOWORD(v22) = -12376;
    HIWORD(v22) = (unsigned int)&unk_18C750 >> 16;
    LOWORD(v23) = -6796;
    HIWORD(v23) = (unsigned int)&unk_1596A4 >> 16;
    zlog(*v22, v23, 171, "i2c_ioctl", 9, 432, 100, v28);
    return -4;
  }
  else
  {
    v7 = new_iterator_c_map(*(_DWORD *)(v3 + 4));
    if ( ((int (*)(void))*v7)() )
    {
      while ( ***(_DWORD ***)(v7[5] + 16) != a1 )
      {
        if ( !((int (__fastcall *)(_DWORD *))*v7)(v7) )
          goto LABEL_8;
      }
      v8 = (int *)((int (*)(void))v7[2])();
      v9 = v8;
      if ( a2 == 1795 )
      {
        v10 = *v8;
        v11 = (void (__fastcall *)(_DWORD *, _DWORD *, int))v7[1];
        v24[1] = a3;
        v24[0] = v10;
        v11(v7, v24, 8);
        LOWORD(v12) = -6300;
        HIWORD(v12) = (unsigned int)&unk_159894 >> 16;
        snprintf((char *)s, 0x800u, v12, a3);
        V_LOCK();
        logfmt_raw(v28, 0x1000u, 0, s);
        V_UNLOCK();
        LOWORD(v13) = -12376;
        HIWORD(v13) = (unsigned int)&unk_18C750 >> 16;
        LOWORD(v14) = -6796;
        HIWORD(v14) = (unsigned int)&unk_1596A4 >> 16;
        zlog(*v13, v14, 171, "i2c_ioctl", 9, 446, 20, v28);
        free(v9);
      }
    }
LABEL_8:
    delete_iterator_c_map(v7);
    pthread_mutex_unlock(&stru_18CEB0);
    return 0;
  }
}
