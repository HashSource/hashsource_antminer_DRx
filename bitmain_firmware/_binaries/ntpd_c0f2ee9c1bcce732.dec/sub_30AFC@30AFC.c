int __fastcall sub_30AFC(int a1, int a2)
{
  int v3; // r4
  int v4; // r6
  int *v5; // r7
  double *v6; // r7
  int v7; // r0
  double v8; // d17
  double *i; // r1
  double v10; // d16

  v3 = sub_4D29C("/dev/audio", 320, a1);
  if ( v3 < 0 )
    return 0;
  if ( dword_7CF4C )
    sub_4DBE8();
  v4 = sub_4F524(3232);
  memset((void *)v4, 0, 0xCA0u);
  v5 = *(int **)(a2 + 60);
  v5[7] = v4;
  v5[3] = a2;
  v5[5] = v3;
  v5[1] = (int)sub_31998;
  v5[4] = 0;
  if ( sub_15FC4(v5) )
  {
    *(_BYTE *)(a2 + 71) = -17;
    v5[9] = (int)"Generic IRIG Audio Driver";
    v5[187] = *(_DWORD *)"IRIG";
    *(_QWORD *)(v4 + 1800) = 0;
    *(_DWORD *)(v4 + 776) = 0;
    *(_DWORD *)(v4 + 780) = 0;
    *(_DWORD *)(v4 + 784) = 0;
    *(_DWORD *)(v4 + 788) = 1072693248;
    *(_DWORD *)(v4 + 3180) = 2;
    *(_DWORD *)(v4 + 3160) = 1;
    *(_QWORD *)(v4 + 1808) = 0xBFF0000000000000LL;
    *(_DWORD *)(v4 + 792) = 0;
    *(_DWORD *)(v4 + 796) = 1074266112;
    *(_DWORD *)(v4 + 2836) = 127;
    *(_QWORD *)(v4 + 1816) = 0xC008000000000000LL;
    *(_DWORD *)(v4 + 800) = 0;
    *(_DWORD *)(v4 + 804) = 1075052544;
    v6 = (double *)(v4 + 808);
    v7 = 3;
    v8 = 2.0;
    *(_QWORD *)(v4 + 1824) = 0xC014000000000000LL;
    for ( i = (double *)(v4 + 1832); ++v7 != 128; ++i )
    {
      v10 = v8 + *(v6 - 1);
      if ( (v7 & 0xF) == 0 )
        v8 = v8 + v8;
      *v6++ = v10;
      *i = -v10;
    }
    *(_DWORD *)(v4 + 32) = 0;
    *(_DWORD *)(v4 + 36) = &buf[12170];
    return 1;
  }
  else
  {
    close(v3);
    v5[5] = -1;
    free((void *)v4);
    v5[7] = 0;
    return 0;
  }
}
