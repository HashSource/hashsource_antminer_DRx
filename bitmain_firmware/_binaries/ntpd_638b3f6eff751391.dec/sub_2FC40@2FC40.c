int __fastcall sub_2FC40(int a1, int a2)
{
  int v4; // r7
  int v5; // r8
  int *v6; // r4
  int v7; // r3
  char s[20]; // [sp+Ch] [bp-14h] BYREF

  snprintf(s, 0x14u, "/dev/hopfclock%d", a1);
  v4 = sub_27D18(s, 0xDu, 1);
  if ( v4 <= 0 )
  {
    printf("hopfSerialClock(%d) start: open %s failed\n", a1, s);
    return 0;
  }
  else
  {
    sub_4FE78(5, "hopfSerialClock(%d) fd: %d dev: %s", a1, v4, s);
    v5 = sub_4F524(24);
    memset((void *)v5, 0, 0x18u);
    v6 = *(int **)(a2 + 60);
    v6[7] = v5;
    v6[3] = a2;
    v6[5] = v4;
    v6[1] = (int)sub_2FD80;
    v6[4] = 0;
    if ( sub_15FC4(v6) )
    {
      v7 = 1;
      v6[9] = (int)"hopf Elektronik serial clock";
      *(_BYTE *)(a2 + 71) = -10;
      *(_DWORD *)(a2 + 116) = 5;
      v6[187] = *(_DWORD *)"hopf";
      *(_BYTE *)(v5 + 16) = 0;
      *(_WORD *)(v5 + 8) = a1;
    }
    else
    {
      printf("hopfSerialClock(%d) io_addclock\n", a1);
      close(v4);
      v6[5] = -1;
      free((void *)v5);
      v6[7] = 0;
      return 0;
    }
  }
  return v7;
}
