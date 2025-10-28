ssize_t __fastcall sub_3D144(size_t a1)
{
  int v2; // r4
  _DWORD *v3; // r5
  char v4; // r1
  int v5; // r3
  ssize_t result; // r0
  int v7; // r2
  int v8; // r3
  size_t v9; // r0
  int v10; // r6
  __pid_t v11; // r0
  size_t v12; // r0
  int v13; // r0
  int v14; // r6
  char buf[8]; // [sp+Ch] [bp-120h] BYREF
  char v16[20]; // [sp+14h] [bp-118h] BYREF
  char s[260]; // [sp+28h] [bp-104h] BYREF

  v2 = *(_DWORD *)(a1 + 60);
  v3 = *(_DWORD **)(v2 + 28);
  v4 = *(_BYTE *)(v2 + 752);
  *(_BYTE *)(v2 + 752) = v4 & 0xFE;
  v5 = v3[3];
  result = *((_DWORD *)&unk_7CE04 + v5);
  if ( !result && (v4 & 4) == 0 )
    return sub_4FE78(3, "acts: no phones");
  switch ( v3[1] )
  {
    case 0:
      if ( (v4 & 2) == 0 )
        goto LABEL_12;
      snprintf(s, 0x80u, "/var/spool/locks/LCK..cua%d", *v3);
      v10 = open(s, 193, 420);
      if ( v10 < 0 )
      {
        result = sub_4FE78(3, "acts: port busy");
      }
      else
      {
        v11 = getpid();
        snprintf(buf, 8u, "%d\n", v11);
        v12 = strlen(buf);
        write(v10, buf, v12);
        close(v10);
LABEL_12:
        if ( *(_DWORD *)(v2 + 20) )
          goto LABEL_13;
        snprintf(v16, 0x14u, "/dev/acts%d", *v3);
        v13 = sub_27D18(v16, 0xDu, 164);
        v14 = v13;
        if ( !v13 )
          return sub_4FE78(3, "acts: open fails");
        *(_DWORD *)(v2 + 20) = v13;
        if ( sub_15FC4((int *)v2) )
        {
LABEL_13:
          if ( (*(_BYTE *)(v2 + 752) & 4) != 0 )
          {
            result = write(*(_DWORD *)(v2 + 20), "T", 1u);
            if ( result >= 0 )
            {
              v3[1] = 4;
              v3[2] = 20;
              return result;
            }
          }
          else
          {
            if ( dword_7CF4C )
              printf("acts: setup %s\n", "ATB1&C0&D2E0L1M1Q0V1\r");
            result = write(*(_DWORD *)(v2 + 20), "ATB1&C0&D2E0L1M1Q0V1\r", 0x15u);
            if ( result >= 0 )
            {
              v3[1] = 1;
              v3[2] = 3;
              return result;
            }
          }
          result = sub_4FE78(3, "acts: write %m");
        }
        else
        {
          sub_4FE78(3, "acts: addclock fails");
          result = close(v14);
          *(_DWORD *)(v2 + 20) = 0;
        }
      }
      break;
    case 1:
      sub_4FE78(3, "acts: no modem");
      return sub_3D0D8(a1);
    case 2:
      snprintf(s, 0x100u, "DIAL #%d %s", v5, *((const char **)&unk_7CE04 + v5));
      sub_1D3D8(139, a1, s);
      if ( dword_7CF4C )
        puts(s);
      v9 = strlen(*((const char **)&unk_7CE04 + v3[3]));
      write(*(_DWORD *)(v2 + 20), *((const void **)&unk_7CE04 + v3[3]), v9);
      result = write(*(_DWORD *)(v2 + 20), "\r", 1u);
      v3[1] = 3;
      v3[2] = 60;
      return result;
    case 3:
      sub_4FE78(3, "acts: no answer");
      return sub_3D0D8(a1);
    case 4:
      sub_4FE78(3, "acts: no messages");
      return sub_3D0D8(a1);
    case 6:
      if ( *(_DWORD *)(v2 + 20) )
      {
        sub_15FF4((int *)v2);
        result = close(*(_DWORD *)(v2 + 20));
        if ( (*(_BYTE *)(v2 + 752) & 2) != 0 )
        {
          snprintf(s, 0x80u, "/var/spool/locks/LCK..cua%d", *v3);
          result = unlink(s);
        }
        *(_DWORD *)(v2 + 20) = 0;
      }
      v7 = v3[4];
      v3[2] = 0;
      v3[7] = v2 + 40;
      v3[1] = 0;
      if ( v7 || (v8 = v3[3] + 1, v3[3] = v8, !*((_DWORD *)&unk_7CE04 + v8)) )
        v3[3] = 0;
      else
        v3[2] = 3;
      v3[4] = 0;
      return result;
    default:
      return sub_3D0D8(a1);
  }
  return result;
}
