int __fastcall sub_36270(int a1, int a2)
{
  int v4; // r5
  _WORD *v5; // r8
  int v6; // r3
  int v7; // r6
  int v8; // r3
  _BYTE *v10; // r0
  _BYTE *v11; // r0
  __int16 v12; // [sp+8h] [bp-5Ch] BYREF
  void *ptr; // [sp+Ch] [bp-58h]
  char s[20]; // [sp+10h] [bp-54h] BYREF
  struct termios termios_p; // [sp+24h] [bp-40h] BYREF

  snprintf(s, 0x14u, "/dev/palisade%d", a1);
  v4 = sub_27D18(s, 0xDu, 32);
  if ( v4 <= 0 )
  {
    printf("Palisade(%d) start: open %s failed\n", a1, s);
    return 0;
  }
  else
  {
    sub_4FE78(5, "Palisade(%d) fd: %d dev: %s", a1, v4, s);
    if ( tcgetattr(v4, &termios_p) < 0 )
    {
      sub_4FE78(3, "Palisade(%d) tcgetattr(fd, &tio): %m", a1);
      printf("Palisade(%d) tcgetattr(fd, &tio)\n", a1);
      close(v4);
      return 0;
    }
    else
    {
      termios_p.c_cflag |= 0x300u;
      termios_p.c_iflag &= ~0x100u;
      v5 = (_WORD *)sub_4F524(144);
      memset(v5, 0, 0x90u);
      v6 = *(_BYTE *)(a2 + 59) & 0x7F;
      *((_DWORD *)v5 + 35) = v6;
      switch ( v6 )
      {
        case 0:
          break;
        case 1:
          sub_4FE78(5, "Palisade(%d) Praecis mode enabled\n", a1);
          break;
        case 2:
          sub_4FE78(5, "Palisade(%d) Thunderbolt mode enabled\n", a1);
          termios_p.c_cflag = 2224;
          break;
        case 3:
          sub_4FE78(5, "Palisade(%d) Acutime Gold mode enabled\n", a1);
          break;
        default:
          sub_4FE78(5, "Palisade(%d) mode unknown\n", a1);
          break;
      }
      if ( tcsetattr(v4, 0, &termios_p) == -1 )
      {
        sub_4FE78(3, "Palisade(%d) tcsetattr(fd, &tio): %m", a1);
        printf("Palisade(%d) tcsetattr(fd, &tio)\n", a1);
        close(v4);
        free(v5);
        return 0;
      }
      else
      {
        v7 = *(_DWORD *)(a2 + 60);
        *(_DWORD *)(v7 + 12) = a2;
        *(_DWORD *)(v7 + 20) = v4;
        *(_DWORD *)(v7 + 4) = sub_37794;
        *(_DWORD *)(v7 + 16) = 0;
        if ( sub_15FC4((int *)v7) )
        {
          *(_DWORD *)(v7 + 28) = v5;
          *(_DWORD *)(v7 + 36) = "Trimble Palisade GPS";
          *(_BYTE *)(a2 + 71) = -20;
          *(_BYTE *)(a2 + 66) = 4;
          *(_BYTE *)(a2 + 49) = 4;
          *(_BYTE *)(a2 + 50) = 5;
          strcpy((char *)(v7 + 748), "GPS");
          v8 = *((_DWORD *)v5 + 35);
          *((_BYTE *)v5 + 8) = 0;
          *v5 = a1;
          *((_BYTE *)v5 + 9) = 0;
          v5[5] = 0;
          if ( v8 == 2 )
          {
            v11 = malloc(0x64u);
            v12 = 4;
            v11[1] = -114;
            v11[2] = -94;
            v11[3] = 3;
            *v11 = 16;
            ptr = v11;
            sub_361F0(&v12, v4);
            *(_BYTE *)ptr = 16;
            *((_BYTE *)ptr + 1) = -113;
            *((_BYTE *)ptr + 2) = -91;
            *((_BYTE *)ptr + 3) = 0;
            *((_BYTE *)ptr + 4) = 5;
            v12 = 5;
            sub_361F0(&v12, v4);
            free(ptr);
            v8 = *((_DWORD *)v5 + 35);
          }
          if ( v8 == 3 )
          {
            v10 = malloc(0x64u);
            v10[1] = -114;
            v12 = 7;
            v10[3] = 2;
            *v10 = 16;
            v10[2] = -91;
            v10[4] = 0;
            v10[5] = 0;
            v10[6] = 0;
            ptr = v10;
            sub_361F0(&v12, v4);
            free(ptr);
          }
          return 1;
        }
        else
        {
          printf("Palisade(%d) io_addclock\n", a1);
          close(v4);
          *(_DWORD *)(v7 + 20) = -1;
          free(v5);
          return 0;
        }
      }
    }
  }
}
