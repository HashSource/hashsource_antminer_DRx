int __fastcall sub_41020(int a1, int a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r10
  int v7; // r4
  int *v8; // r5
  double *v9; // r5
  double *v10; // r7
  int v11; // r12
  double v12; // d17
  double v13; // d16
  int v14; // r2
  int v15; // r0
  int v17; // r1
  char s[24]; // [sp+4h] [bp-18h] BYREF

  v4 = sub_4D29C("/dev/audio", 240, a1);
  v5 = v4;
  if ( v4 <= 0 )
  {
    snprintf(s, 0x14u, "/dev/chu%d", a1);
    v6 = sub_27D18(s, 7u, 32);
    if ( v6 <= 0 )
      return 0;
  }
  else
  {
    if ( dword_7CF4C )
      sub_4DBE8(v4);
    v6 = v5;
  }
  v7 = sub_4F524(4672);
  memset((void *)v7, 0, 0x1240u);
  v8 = *(int **)(a2 + 60);
  v8[7] = v7;
  v8[3] = a2;
  v8[5] = v6;
  v8[1] = (int)sub_412C4;
  v8[4] = 0;
  if ( sub_15FC4(v8) )
  {
    *(_BYTE *)(a2 + 71) = -10;
    v8[9] = (int)"CHU Audio/Modem Receiver";
    *(_DWORD *)(v7 + 924) = 5589059;
    v8[187] = *(_DWORD *)(v7 + 924);
    *(_QWORD *)(v7 + 2192) = 0;
    *(_QWORD *)(v7 + 1168) = 0;
    *(_DWORD *)(v7 + 904) = 0;
    *(_DWORD *)(v7 + 1164) = v5;
    *(_DWORD *)(v7 + 908) = 157482134;
    *(double *)(v7 + 1176) = 1.0;
    v9 = (double *)(v7 + 1200);
    *(_DWORD *)(v7 + 1144) = 127;
    v10 = (double *)(v7 + 2224);
    v11 = 3;
    *(double *)(v7 + 2200) = -1.0;
    *(double *)(v7 + 1184) = 3.0;
    v12 = 2.0;
    *(_QWORD *)(v7 + 2208) = 0xC008000000000000LL;
    *(_QWORD *)(v7 + 1192) = 0x4014000000000000LL;
    *(_QWORD *)(v7 + 2216) = 0xC014000000000000LL;
    while ( ++v11 != 128 )
    {
      v13 = v12 + *(v9 - 1);
      if ( (v11 & 0xF) == 0 )
        v12 = v12 + v12;
      *v9++ = v13;
      *v10++ = -v13;
    }
    *(_DWORD *)(v7 + 3232) = 0;
    *(_DWORD *)(v7 + 3236) = &buf[12170];
    if ( dword_7CF4C <= 1 )
      v14 = 0;
    else
      v14 = 2;
    if ( *(_BYTE *)(a2 + 59) )
    {
      if ( (*(_BYTE *)(a2 + 59) & 0x80) != 0 )
        v17 = 9;
      else
        v17 = 13;
      v15 = sub_4F708("/dev/icom", v17, v14);
      *(_DWORD *)(v7 + 932) = v15;
    }
    else
    {
      v15 = *(_DWORD *)(v7 + 932);
    }
    if ( v15 > 0 )
    {
      if ( sub_409D0(a2) )
      {
        sub_4FE78(5, "icom: radio not found");
        close(*(_DWORD *)(v7 + 932));
        *(_DWORD *)(v7 + 932) = 0;
      }
      else
      {
        sub_4FE78(5, "icom: autotune enabled");
      }
      return 1;
    }
    else
    {
      return 1;
    }
  }
  else
  {
    close(v6);
    v8[5] = -1;
    free((void *)v7);
    v8[7] = 0;
    return 0;
  }
}
