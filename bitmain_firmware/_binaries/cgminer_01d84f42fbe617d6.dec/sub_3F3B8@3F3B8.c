void __fastcall sub_3F3B8(int a1, int a2)
{
  int v4; // r6
  int v5; // r4
  int v6; // r5
  int v7; // r0
  speed_t v8; // r3
  int *v9; // r10
  int v10; // t1
  bool v11; // zf
  int v12; // r10
  speed_t speed; // [sp+Ch] [bp-1848h]
  struct termios termios_p; // [sp+14h] [bp-1840h] BYREF
  char s[2048]; // [sp+50h] [bp-1804h] BYREF
  char file[4100]; // [sp+850h] [bp-1004h] BYREF

  memset(file, 0, 4096);
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    snprintf(s, 0x800u, "in %s", "tty_init");
    sub_38438(5, s, 0);
  }
  v4 = 0;
  v5 = 0;
  v6 = a1;
  do
  {
    if ( *(_BYTE *)(v6 + 157) == 1 )
    {
      sprintf(file, "/dev/ttyO%d", dword_55AA0[v5]);
      v7 = open(file, 258);
      *(_DWORD *)(a1 + 4 * (v5 + 40) + 1) = v7;
      tcgetattr(v7, &termios_p);
      v8 = sub_3B268(a2);
      if ( !v8 )
      {
        if ( byte_632F0 || byte_630C0 || dword_60964 > 3 )
        {
          snprintf(s, 0x800u, "Unrecognized baud rate: %d,set default baud", a2);
          sub_38438(4, s, 0);
          v8 = 4098;
        }
        else
        {
          v8 = 4098;
        }
      }
      speed = v8;
      cfsetispeed(&termios_p, v8);
      v9 = (int *)(a1 + 4 * (v5 + 40));
      cfsetospeed(&termios_p, speed);
      termios_p.c_cc[5] = 0;
      v10 = *(int *)((char *)v9 + 1);
      v9 = (int *)((char *)v9 + 1);
      termios_p.c_iflag &= 0xFFFFFA14;
      termios_p.c_lflag &= 0xFFFF7FB4;
      termios_p.c_cflag = termios_p.c_cflag & 0xFFFFF64F | 0x8B0;
      termios_p.c_oflag &= ~1u;
      termios_p.c_cc[6] = 7;
      tcsetattr(v10, 0, &termios_p);
      tcflush(*v9, 2);
      v11 = byte_632F0 == 0;
      *(_DWORD *)&byte_65E4C[v4 + 4] = v5;
      *(_BYTE *)(a1 + 156) = v5;
      byte_65E4C[v4] = *v9;
      if ( !v11 || byte_630C0 || dword_60964 > 4 )
      {
        snprintf(s, 0x800u, "%s %d", "tty_init", *(_DWORD *)&byte_65E4C[v4 + 4]);
        sub_38438(5, s, 0);
      }
      if ( pthread_create((pthread_t *)(a1 + 4 * v5 + 727), 0, (void *(*)(void *))sub_3D2F4, &byte_65E4C[8 * v5])
        && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
      {
        snprintf(s, 0x800u, "create rx read thread for %s failed", file);
        sub_38438(3, s, 0);
      }
      if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
      {
        snprintf(s, 0x800u, "Will Create Pthread @ ChainId[%d]\r", *(unsigned __int8 *)(a1 + 156));
        sub_38438(7, s, 0);
      }
      v12 = pthread_create((pthread_t *)(a1 + 4 * v5 + 711), 0, (void *(*)(void *))sub_3BC80, (void *)a1);
      sub_2B21C();
      if ( v12 && (byte_632F0 || byte_630C0 || dword_60964 > 2) )
      {
        snprintf(s, 0x800u, "create tx read thread for %s failed", file);
        sub_38438(3, s, 0);
      }
    }
    ++v5;
    ++v6;
    v4 += 8;
  }
  while ( v5 != 4 );
  if ( byte_632F0 || byte_630C0 || dword_60964 > 4 )
  {
    strcpy(s, "open device over");
    sub_38438(5, s, 0);
  }
  dword_C4BD4 = *(_DWORD *)(a1 + 161);
  dword_C4BD8 = *(_DWORD *)(a1 + 165);
  dword_C4BDC = *(_DWORD *)(a1 + 169);
  dword_C4BE0 = *(_DWORD *)(a1 + 173);
}
