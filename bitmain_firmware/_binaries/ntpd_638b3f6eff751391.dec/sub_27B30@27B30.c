int __fastcall sub_27B30(int a1, speed_t a2, __int16 a3)
{
  tcflag_t v6; // r3
  tcflag_t v8; // r3
  struct termios *p_c_line; // r3
  int v10; // [sp+0h] [bp-40h] BYREF
  struct termios termios_p; // [sp+4h] [bp-3Ch] BYREF

  if ( tcgetattr(a1, &termios_p) < 0 )
  {
    sub_4FE78(3, "refclock_setup fd %d tcgetattr: %m", a1);
    return 0;
  }
  else
  {
    if ( a2 )
    {
      v10 = 0;
      termios_p.c_iflag = 261;
      termios_p.c_oflag = 0;
      if ( (a3 & 0x100) != 0 )
        v8 = 2976;
      else
        v8 = 2224;
      termios_p.c_cflag = v8;
      cfsetispeed(&termios_p, a2);
      cfsetospeed(&termios_p, a2);
      p_c_line = (struct termios *)&termios_p.c_line;
      do
      {
        BYTE1(p_c_line->c_iflag) = 0;
        p_c_line = (struct termios *)((char *)p_c_line + 1);
      }
      while ( p_c_line != (struct termios *)&termios_p.c_cc[31] );
      if ( ioctl(a1, 0x5415u, &v10) < 0 )
        sub_4FE78(3, "refclock_setup fd %d TIOCMGET: %m", a1);
      if ( dword_7CF4C )
        printf("refclock_setup fd %d modem status: 0x%x\n", a1, v10);
      if ( (v10 & 0x100) != 0 && (a3 & 0x80) != 0 )
        termios_p.c_cflag &= ~0x800u;
    }
    if ( (a3 & 0x20) != 0 )
      v6 = 0;
    else
      v6 = 2;
    termios_p.c_lflag = v6;
    if ( (a3 & 0x20) != 0 )
    {
      termios_p.c_iflag = v6;
      termios_p.c_cc[6] = 1;
    }
    if ( (a3 & 0x40) != 0 )
      termios_p.c_lflag |= 8u;
    if ( tcsetattr(a1, 0, &termios_p) < 0 )
    {
      sub_4FE78(3, "refclock_setup fd %d TCSANOW: %m", a1);
      return 0;
    }
    else
    {
      if ( tcflush(a1, 2) < 0 )
        sub_4FE78(3, "refclock_setup fd %d tcflush(): %m", a1);
      return 1;
    }
  }
}
