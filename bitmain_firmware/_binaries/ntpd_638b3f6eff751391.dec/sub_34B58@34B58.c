int __fastcall sub_34B58(int a1, int a2)
{
  int v3; // r0
  char *v5; // r0
  char *v6; // r11
  int *v7; // r6
  int v8; // r7
  int v9; // r11
  unsigned int v10; // r5
  int v11; // r8
  int v12; // r4
  int v13; // r6
  int v14; // r9
  bool v15; // zf
  char *v16; // r3
  char *v17; // r11
  char *v18; // r0
  __int16 v19; // r6
  char *v20; // r5
  size_t v21; // r7
  int v22; // r3
  void *v23; // r0
  int v24; // r0
  char *v25; // r0
  char *v26; // r2
  void *v27; // r0
  int v28; // r4
  unsigned int v29; // [sp+4h] [bp-180h]
  int *v30; // [sp+8h] [bp-17Ch]
  int v31; // [sp+Ch] [bp-178h]
  char *dest; // [sp+10h] [bp-174h]
  int fd; // [sp+14h] [bp-170h]
  unsigned int v35; // [sp+1Ch] [bp-168h]
  char *v36; // [sp+20h] [bp-164h]
  unsigned __int8 buf; // [sp+2Bh] [bp-159h] BYREF
  int v38; // [sp+2Ch] [bp-158h] BYREF
  char s[20]; // [sp+30h] [bp-154h] BYREF
  struct termios termios_p; // [sp+44h] [bp-140h] BYREF
  char src[260]; // [sp+80h] [bp-104h] BYREF

  snprintf(s, 0x13u, "/dev/neoclock4x-%d", a1);
  v3 = sub_27D18(s, 0xBu, 0);
  fd = v3;
  if ( v3 <= 0 )
    return 0;
  if ( tcgetattr(v3, &termios_p) < 0 )
  {
    sub_4FE78(2, "NeoClock4X(%d): (tcgetattr) can't query serial port settings: %m", a1);
    close(fd);
    return 0;
  }
  termios_p.c_oflag = 0;
  termios_p.c_iflag = 261;
  termios_p.c_cflag = 2288;
  cfsetispeed(&termios_p, 0xBu);
  cfsetospeed(&termios_p, 0xBu);
  if ( tcsetattr(fd, 0, &termios_p) < 0 )
  {
    sub_4FE78(2, "NeoClock4X(%d): (tcsetattr) can't set serial port 2400 8N2: %m", a1);
    close(fd);
    return 0;
  }
  if ( ioctl(fd, 0x5415u, &v38) == -1 )
  {
    sub_4FE78(2, "NeoClock4X(%d): can't query RTS/DTR state: %m", a1);
    close(fd);
    return 0;
  }
  v38 |= 6u;
  if ( ioctl(fd, 0x5418u, &v38) == -1 )
  {
    sub_4FE78(2, "NeoClock4X(%d): can't set RTS/DTR to power neoclock4x: %m", a1);
    close(fd);
    return 0;
  }
  v5 = (char *)sub_4F524(156);
  v6 = v5;
  if ( !v5 )
  {
    sub_4FE78(3, "NeoClock4X(%d): can't allocate memory for: %m", a1);
    close(fd);
    return 0;
  }
  memset(v5, 0, 0x9Cu);
  v7 = *(int **)(a2 + 60);
  dest = v6 + 24;
  v7[182] = 458129845;
  v7[183] = 1069921512;
  v7[7] = (int)v6;
  v7[3] = a2;
  v7[5] = fd;
  v7[4] = 0;
  v7[9] = (int)"NeoClock4X";
  v7[1] = (int)sub_34508;
  *(_BYTE *)(a2 + 71) = -10;
  v30 = v7;
  *(_DWORD *)(a2 + 116) = 5;
  v7[187] = *(_DWORD *)"neol";
  v31 = 0;
  v6[16] = 0;
  *((_WORD *)v6 + 4) = a1;
  *((_DWORD *)v6 + 32) = 0;
  *((_DWORD *)v6 + 33) = 0;
  *((_DWORD *)v6 + 34) = 0;
  *((_DWORD *)v6 + 35) = 0;
  *((_DWORD *)v6 + 36) = 0;
  *((_DWORD *)v6 + 37) = 0;
  *((_DWORD *)v6 + 38) = 0;
  *((_WORD *)v6 + 12) = 63;
  *(_WORD *)(v6 + 105) = 63;
  *((_WORD *)v6 + 56) = 63;
  v6[104] = 63;
  v6[116] = 63;
  v6[117] = 63;
  v6[118] = 63;
  *((_DWORD *)v6 + 30) = -1;
  *((_DWORD *)v6 + 31) = -1;
  v36 = v6;
  while ( 1 )
  {
    if ( (dword_7BE6C & 0x100) != 0 )
      sub_4FE78(6, "NeoClock4X(%d): checking NeoClock4X firmware version (%d/5)", a1, v31);
    sleep(3u);
    v8 = v30[5];
    v9 = *((__int16 *)v36 + 4);
    sleep(1u);
    if ( write(v8, "V", 1u) != -1 )
      break;
    sub_4FE78(3, "NeoClock4X(%d): can't query firmware version", v9);
    strcpy(src, "unknown error");
LABEL_26:
    ++v31;
    strncpy(dest, src, 0x50u);
    dest[80] = 0;
    if ( v31 == 5 )
    {
      v17 = v36;
      goto LABEL_28;
    }
  }
  v10 = 0;
  sleep(1u);
  memset(src, 0, 0x100u);
  v11 = 0;
  v35 = 0;
  v12 = 0;
  v29 = 0;
  v13 = 0;
  v14 = 1;
  while ( 1 )
  {
    if ( read(v8, &buf, 1u) == -1 )
    {
      v24 = *_errno_location();
      if ( v24 == 11 )
      {
        sleep(1u);
      }
      else
      {
        v25 = strerror(v24);
        ++v13;
        sub_4FE78(7, "NeoClock4x(%d): read: %s", v9, v25);
        if ( v13 > 5 )
        {
          sub_4FE78(3, "NeoClock4X(%d): can't read firmware version (timeout)", v9);
          strcpy(src, "unknown due to timeout");
          goto LABEL_26;
        }
      }
      goto LABEL_15;
    }
    ++v12;
    if ( !v14 )
      break;
    if ( buf == 169 )
    {
      v14 = 0;
      v10 = 3;
      strcpy(src, "(c)");
    }
LABEL_15:
    if ( v12 > 500 )
    {
      sub_4FE78(3, "NeoClock4X(%d): can't read firmware version (garbage)", v9);
      strcpy(src, "unknown due to garbage input");
      goto LABEL_26;
    }
  }
  v15 = buf == 10;
  if ( buf != 10 )
    v15 = buf == 13;
  if ( !v15 )
  {
    v11 = 0;
    if ( buf )
    {
      v26 = &src[v10++ + 256];
      *(v26 - 256) = buf;
    }
LABEL_25:
    src[v10] = 0;
    if ( v10 > 0xFB )
      goto LABEL_26;
    goto LABEL_15;
  }
  if ( !v11 )
  {
    v11 = 1;
    goto LABEL_25;
  }
  if ( !strstr(&src[v29], "S/N") )
  {
    v16 = &src[v10 + 256];
    v35 = v10;
    v11 = 1;
    v10 += 3;
    v29 = v10;
    *(v16 - 256) = 32;
    *(v16 - 254) = 32;
    *(v16 - 255) = 47;
    goto LABEL_25;
  }
  v28 = v9;
  v17 = v36;
  src[v35] = 0;
  strncpy(dest, src, 0x50u);
  v36[104] = 0;
  if ( (dword_7BE6C & 0x100) != 0 )
    sub_4FE78(6, "NeoClock4X(%d): firmware version: %s", v28, dest);
  if ( strstr(dest, "/R2") )
    sub_4FE78(
      6,
      "NeoClock4X(%d): Your NeoClock4X uses the new R2 firmware release. Please note the changed LED behaviour.",
      v28);
LABEL_28:
  v17[104] = 63;
  v18 = strstr(dest, "NDF:");
  v19 = *((_WORD *)v17 + 4);
  v20 = v18;
  if ( !v18 || (v21 = strlen(dest), v21 - strlen(v20) <= 6) || v20[5] != 58 || v20[6] != 42 )
  {
    v22 = 63;
LABEL_32:
    sub_4FE78(2, "NeoClock4X(%d): firmware version \"%c\" not supported with this driver version!", v19, v22);
    close(fd);
    v23 = (void *)v30[7];
    v30[5] = -1;
    free(v23);
    v30[7] = 0;
    return 0;
  }
  v22 = (unsigned __int8)v20[4];
  v17[104] = v22;
  if ( v22 != 65 )
    goto LABEL_32;
  if ( sub_15FC4(v30) )
  {
    if ( (dword_7BE6C & 0x100) != 0 )
      sub_4FE78(6, "NeoClock4X(%d): receiver setup successful done", a1);
    return 1;
  }
  else
  {
    sub_4FE78(3, "NeoClock4X(%d): error add peer to ntpd: %m", a1);
    close(fd);
    v27 = (void *)v30[7];
    v30[5] = -1;
    free(v27);
    v30[7] = 0;
    return 0;
  }
}
