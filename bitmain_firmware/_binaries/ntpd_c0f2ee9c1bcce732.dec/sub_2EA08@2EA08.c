int __fastcall sub_2EA08(int a1, int a2)
{
  int v4; // r5
  void *v5; // r0
  size_t v6; // r10
  int v7; // r6
  int v8; // r0
  int v9; // r12
  int v10; // r3
  int v11; // r6
  int v12; // r0
  int v13; // r3
  int result; // r0
  struct termios s; // [sp+4h] [bp-40h] BYREF

  v4 = open("/dev/datum", 2);
  if ( v4 < 0 )
  {
    sub_4FE78(3, "Datum_PTS: open(\"%s\", O_RDWR) failed: %m", "/dev/datum");
    return 0;
  }
  else
  {
    v5 = (void *)sub_4F524(4 * (dword_800B8 + 1));
    v6 = 4 * dword_800B8;
    v7 = (int)v5;
    if ( dword_800B8 > 0 )
      memcpy(v5, (const void *)dword_800B4, v6);
    free((void *)dword_800B4);
    dword_800B4 = v7;
    v8 = sub_4F524(120);
    v9 = dword_800B8;
    v10 = dword_800B4;
    *(_DWORD *)(v7 + v6) = v8;
    v11 = *(_DWORD *)(v10 + 4 * v9);
    *(_QWORD *)(v11 + 104) = 0;
    *(_DWORD *)(v11 + 60) = 0;
    *(_DWORD *)(v11 + 36) = a1;
    *(_DWORD *)(v11 + 32) = v4;
    fcntl(v4, 4, 0);
    memset(&s, 0, sizeof(s));
    s.c_cc[5] = 30;
    v12 = *(_DWORD *)(v11 + 32);
    s.c_cflag = 2493;
    s.c_iflag = 1;
    tcsetattr(v12, 0, &s);
    v13 = *(_DWORD *)(v11 + 32);
    *(_DWORD *)(v11 + 20) = 0;
    *(_DWORD *)v11 = a2;
    *(_DWORD *)(v11 + 16) = v11;
    *(_DWORD *)(v11 + 8) = sub_2EB7C;
    *(_DWORD *)(v11 + 24) = v13;
    if ( sub_15FC4((int *)(v11 + 4)) )
    {
      result = 1;
      ++dword_800B8;
    }
    else
    {
      sub_4FE78(3, "Datum_PTS: Problem adding clock");
      close(*(_DWORD *)(v11 + 32));
      return 0;
    }
  }
  return result;
}
