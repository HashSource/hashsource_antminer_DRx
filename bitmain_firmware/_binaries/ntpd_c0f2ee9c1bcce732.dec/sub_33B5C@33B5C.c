int __fastcall sub_33B5C(int a1, int a2)
{
  char *v4; // r10
  tcflag_t v5; // r5
  int v6; // r7
  int *v7; // r6
  char v9[20]; // [sp+0h] [bp-54h] BYREF
  struct termios termios_p; // [sp+14h] [bp-40h] BYREF

  if ( a1 > 0 )
  {
    sub_4FE78(3, "leitch_start: unit %d invalid", a1);
    return 0;
  }
  else
  {
    v4 = (char *)&unk_800BC + a1;
    v5 = *((unsigned __int8 *)&unk_800BC + a1 + 104);
    if ( *((_BYTE *)&unk_800BC + a1 + 104) )
    {
      sub_4FE78(3, "leitch_start: unit %d in use", a1);
      return 0;
    }
    else
    {
      snprintf(v9, 0x14u, "/dev/leitch%d", a1);
      v6 = open(v9, 2, 511);
      if ( v6 == -1 )
      {
        sub_4FE78(3, "leitch_start: open of %s: %m", v9);
        return v5;
      }
      else
      {
        v7 = (int *)((char *)&unk_800BC + 104 * a1);
        memset(v7, v5, 0x68u);
        if ( tcgetattr(v6, &termios_p) < 0 )
        {
          sub_4FE78(3, "leitch_start: tcgetattr(%s): %m", v9);
        }
        else
        {
          termios_p.c_oflag = v5;
          termios_p.c_cc[3] = v5;
          termios_p.c_cc[2] = v5;
          termios_p.c_iflag = 261;
          termios_p.c_cflag = 2231;
          termios_p.c_lflag = 2;
          if ( tcsetattr(v6, v5, &termios_p) < 0 )
          {
            sub_4FE78(3, "leitch_start: tcsetattr(%s): %m", v9);
          }
          else if ( tcflush(v6, 2) < 0 )
          {
            sub_4FE78(3, "leitch_start: tcflush(%s): %m", v9);
          }
          else
          {
            *((_WORD *)v7 + 25) = 15;
            *v7 = a2;
            *((_BYTE *)v7 + 32) = a1;
            *((_WORD *)v7 + 24) = v5;
            v7[4] = (int)v7;
            v7[5] = v5;
            v7[6] = v6;
            v7[2] = (int)sub_33434;
            if ( sub_15FC4(v7 + 1) )
            {
              *(_BYTE *)(a2 + 71) = -20;
              *(_BYTE *)(a2 + 69) = v4[112];
              *(_DWORD *)(a2 + 88) = *((_DWORD *)&unk_800BC + a1 + 27);
              v4[104] = 1;
              return 1;
            }
            v7[6] = -1;
          }
        }
        close(v6);
        return 0;
      }
    }
  }
}
