int __fastcall sub_39C98(int a1, int a2)
{
  int v3; // r4
  char *v4; // r0
  char *v5; // r8
  int *v6; // r10
  double *v7; // r0
  double *v8; // lr
  int v9; // r1
  double v10; // d17
  double v11; // d16
  int v12; // r4
  int v13; // r2
  int v14; // r0
  int v16; // r1

  v3 = sub_4D29C("/dev/audio", 320, a1);
  if ( v3 < 0 )
    return 0;
  if ( dword_7CF4C )
    sub_4DBE8();
  v4 = (char *)sub_4F524(4344);
  v5 = v4;
  if ( v4 )
  {
    memset(v4, 0, 0x10F8u);
    v6 = *(int **)(a2 + 60);
    v6[7] = (int)v5;
    v6[3] = a2;
    v6[5] = v3;
    v6[1] = (int)sub_3C440;
    v6[4] = 0;
    if ( sub_15FC4(v6) )
    {
      *(_BYTE *)(a2 + 71) = -10;
      v6[9] = (int)"WWV/H Audio Demodulator/Decoder";
      *((_QWORD *)v5 + 136) = 0;
      v7 = (double *)(v5 + 96);
      *((_QWORD *)v5 + 8) = 0;
      v8 = (double *)(v5 + 1120);
      *((_QWORD *)v5 + 9) = 0x3FF0000000000000LL;
      *((_QWORD *)v5 + 137) = 0xBFF0000000000000LL;
      v9 = 3;
      *((_QWORD *)v5 + 10) = 0x4008000000000000LL;
      *((_QWORD *)v5 + 138) = 0xC008000000000000LL;
      *((_QWORD *)v5 + 11) = 0x4014000000000000LL;
      v10 = 2.0;
      *((_QWORD *)v5 + 139) = 0xC014000000000000LL;
      while ( ++v9 != 128 )
      {
        v11 = v10 + *(v7 - 1);
        if ( (v9 & 0xF) == 0 )
          v10 = v10 + v10;
        *v7++ = v11;
        *v8++ = -v11;
      }
      v12 = dword_7CF4C;
      *((_DWORD *)v5 + 1048) = 10;
      v13 = (int)&buf[12170];
      *((_DWORD *)v5 + 824) = 10;
      *((_DWORD *)v5 + 3) = &buf[12170];
      *((_DWORD *)v5 + 880) = 10;
      *((_DWORD *)v5 + 936) = 10;
      if ( v12 > 1 )
        v13 = 2;
      *((_DWORD *)v5 + 964) = 10;
      if ( v12 <= 1 )
        v13 = 0;
      *((_DWORD *)v5 + 1020) = 10;
      *((_DWORD *)v5 + 2) = 0;
      *((_DWORD *)v5 + 852) = 6;
      *((_DWORD *)v5 + 908) = 3;
      *((_DWORD *)v5 + 992) = 4;
      if ( *(_BYTE *)(a2 + 59) )
      {
        if ( (*(_BYTE *)(a2 + 59) & 0x80) != 0 )
          v16 = 9;
        else
          v16 = 13;
        v14 = sub_4F708("/dev/icom", v16, v13);
        *((_DWORD *)v5 + 12) = v14;
      }
      else
      {
        v14 = *((_DWORD *)v5 + 12);
      }
      if ( v14 > 0 )
      {
        if ( sub_3998C(a2, 3) )
        {
          sub_4FE78(5, "icom: radio not found");
          close(*((_DWORD *)v5 + 12));
          *((_DWORD *)v5 + 12) = 0;
        }
        else
        {
          sub_4FE78(5, "icom: autotune enabled");
        }
      }
      sub_39B80(a2);
      return 1;
    }
    else
    {
      close(v3);
      free(v5);
      return 0;
    }
  }
  else
  {
    close(v3);
    return 0;
  }
}
