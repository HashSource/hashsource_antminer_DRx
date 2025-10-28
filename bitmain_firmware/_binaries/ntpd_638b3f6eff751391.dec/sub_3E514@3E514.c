int __fastcall sub_3E514(int a1, int a2)
{
  int v4; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r8
  _DWORD *v9; // r9
  unsigned int v10; // r1
  int v11; // r2
  char v12[20]; // [sp+0h] [bp-54h] BYREF
  struct termios termios_p; // [sp+14h] [bp-40h] BYREF

  sub_4FE78(5, "MSF_ARCRON %s: opening unit %d", "V1.3 2003/02/21", a1);
  if ( dword_7CF4C > 0 )
    printf("arc: %s: attempt to open unit %d.\n", "V1.3 2003/02/21", a1);
  snprintf(v12, 0x14u, "/dev/arc%d", a1);
  v4 = sub_27D18(v12, 7u, 1);
  if ( v4 <= 0 )
    return 0;
  if ( dword_7CF4C > 0 )
    printf("arc: unit %d using tty_open().\n", a1);
  v6 = open(v12, 258, 511);
  if ( v6 < 0 )
  {
    sub_4FE78(3, "MSF_ARCRON(%d): failed second open(%s, 0777): %m.\n", a1, v12);
    close(v4);
    return 0;
  }
  else
  {
    close(v4);
    fcntl(v6, 4, 0);
    if ( dword_7CF4C > 0 )
      printf("arc: opened RS232 port with file descriptor %d.\n", v6);
    if ( tcgetattr(v6, &termios_p) < 0 )
    {
      sub_4FE78(3, "MSF_ARCRON(%d): tcgetattr(%s): %m.\n", a1, v12);
      close(v6);
      return 0;
    }
    else
    {
      termios_p.c_oflag = 0;
      termios_p.c_lflag = 0;
      termios_p.c_cc[5] = 0;
      termios_p.c_iflag = 33;
      termios_p.c_cflag = 2295;
      termios_p.c_cc[6] = 1;
      if ( tcsetattr(v6, 0, &termios_p) < 0 )
      {
        sub_4FE78(3, "MSF_ARCRON(%d): tcsetattr(%s): %m.\n", a1, v12);
        close(v6);
        return 0;
      }
      else
      {
        v7 = sub_4F478(0, 40, 0, 1);
        v8 = *(_DWORD *)(a2 + 60);
        *(_DWORD *)(v8 + 12) = a2;
        *(_DWORD *)(v8 + 16) = 0;
        *(_DWORD *)(v8 + 20) = v6;
        *(_DWORD *)(v8 + 4) = sub_3EC20;
        v9 = (_DWORD *)v7;
        if ( sub_15FC4((int *)v8) )
        {
          *(_DWORD *)(v8 + 28) = v9;
          *(_BYTE *)(a2 + 71) = -4;
          *(_BYTE *)(a2 + 69) = 2;
          *(_DWORD *)(v8 + 36) = "ARCRON MSF/DCF/WWVB Receiver";
          v10 = *(unsigned __int8 *)(a2 + 59);
          if ( v10 > 3 )
          {
            sub_4FE78(5, "ARCRON: Invalid mode %d", *(unsigned __int8 *)(a2 + 59));
            return 0;
          }
          else
          {
            if ( dword_7CF4C )
            {
              printf("arc: mode = %d.\n", v10);
              v10 = *(unsigned __int8 *)(a2 + 59);
            }
            switch ( v10 )
            {
              case 2u:
                *(_DWORD *)(v8 + 748) = 4604740;
                break;
              case 3u:
                *(_DWORD *)(v8 + 748) = *(_DWORD *)"WWVB";
                break;
              case 1u:
                strcpy((char *)(v8 + 748), "MSF");
                break;
              default:
                *(_DWORD *)(v8 + 748) = *(_DWORD *)"MSFa";
                break;
            }
            v11 = dword_CB548;
            v9[3] = -1;
            v9[5] = v11 + 500 + 67 * a1 % 1009;
            *(_DWORD *)(a2 + 524) = v11 + 2;
            *(_DWORD *)(a2 + 528) = sub_3E86C;
            return 1;
          }
        }
        else
        {
          close(v6);
          *(_DWORD *)(v8 + 20) = -1;
          free(v9);
          return 0;
        }
      }
    }
  }
}
