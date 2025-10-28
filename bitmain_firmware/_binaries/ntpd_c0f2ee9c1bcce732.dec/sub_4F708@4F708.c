int __fastcall sub_4F708(const char *a1, speed_t a2)
{
  int v3; // r0
  int v4; // r5
  int *v6; // r0
  int v7; // r6
  int *v8; // r4
  int v9; // r0
  struct termios termios_p; // [sp+4h] [bp-3Ch] BYREF

  v3 = open(a1, 2, 511);
  v4 = v3;
  if ( v3 < 0 )
    return -1;
  if ( tcgetattr(v3, &termios_p) < 0 )
    goto LABEL_6;
  termios_p.c_cflag = 2105;
  termios_p.c_cc[5] = 5;
  termios_p.c_iflag = 0;
  termios_p.c_oflag = 0;
  termios_p.c_lflag = 0;
  termios_p.c_cc[6] = 0;
  cfsetispeed(&termios_p, a2);
  cfsetospeed(&termios_p, a2);
  if ( tcsetattr(v4, 0, &termios_p) < 0 )
  {
LABEL_6:
    v6 = _errno_location();
    v7 = *v6;
    v8 = v6;
    v9 = v4;
    v4 = -1;
    close(v9);
    *v8 = v7;
  }
  return v4;
}
