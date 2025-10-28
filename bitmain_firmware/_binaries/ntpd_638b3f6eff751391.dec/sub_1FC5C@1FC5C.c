int __fastcall sub_1FC5C(int a1)
{
  double v1; // d0
  double v3; // d8
  int v4; // r7
  double v5; // d16
  double v6; // d16
  double *v7; // r2
  double v8; // d17
  double v9; // d16
  double v10; // d16
  unsigned int v11; // r3
  unsigned int v12; // r2
  unsigned int v13; // r9
  bool v14; // cf
  double v15; // d9
  double v16; // d10
  int v17; // r0
  int v18; // r0
  double v19; // d16
  double v20; // d16
  double v21; // d19
  double v22; // d17
  bool v23; // cc
  double v24; // d19
  double v25; // d16
  double v26; // d16
  double v27; // d18
  int v28; // r1
  int v29; // r2
  int v30; // r0
  unsigned int v31; // r2
  unsigned int v33; // r2
  double v34; // d16
  unsigned int v35; // r2
  int v36; // r3
  int v37; // r0
  int status; // r2
  int freq; // s15
  double v40; // d16
  double v41; // d17
  char s[84]; // [sp+30h] [bp-54h] BYREF

  v3 = v1;
  v4 = dword_7A19C;
  if ( !dword_7A19C )
  {
    sub_2DCC8((unsigned __int8)byte_CABC8);
    return v4;
  }
  v5 = fabs(v1);
  if ( v5 > dbl_7A1A0 && dbl_7A1A0 > 0.0 && !dword_7D5E8 )
  {
    v4 = -1;
    snprintf(s, 0x50u, "%+.0f s; set clock manually within %.0f s.", v1, dbl_7A1A0);
    sub_1D3D8(7, 0, s);
    return v4;
  }
  if ( dword_7D5EC )
  {
    if ( v5 <= dbl_7A1A8 || dbl_7A1A8 <= 0.0 )
    {
      sub_4CCE4();
      sub_4FE78(5, "ntpd: time slew %+.6f s", v1);
      printf("ntpd: time slew %+.6fs\n", v1);
    }
    else
    {
      ((void (*)(void))sub_4CDE0)();
      sub_4FE78(5, "ntpd: time set %+.6f s", v1);
      printf("ntpd: time set %+.6fs\n", v1);
    }
    sub_2DCC8((unsigned __int8)byte_CABC8);
    exit(0);
  }
  if ( dword_7D5F0 )
  {
    v6 = *(double *)(a1 + 416);
    v7 = (double *)(dword_7D5F0 + 8 * dword_7D5F4);
    v8 = dbl_7D5F8;
    if ( v6 < *v7 )
    {
      *v7 = v6;
      v6 = *(double *)(a1 + 416);
    }
    if ( v8 > v6 )
    {
      v8 = v6;
      dbl_7D5F8 = v6;
    }
    v9 = v6 - v8;
    if ( v1 <= 0.0 )
      v10 = v9 * 0.5;
    else
      v10 = -(v9 * 0.5);
    v3 = v1 + v10;
    if ( dword_7CF4C )
      printf("local_clock: size %d mindly %.6f huffpuff %.6f\n", dword_7D600, v8, v10);
    v5 = fabs(v3);
  }
  v11 = *(unsigned __int8 *)(a1 + 49);
  v12 = *(unsigned __int8 *)(a1 + 50);
  v13 = (unsigned __int8)byte_CABC8;
  v14 = (unsigned __int8)byte_CABC8 >= v11;
  if ( (unsigned __int8)byte_CABC8 < v11 )
    byte_CABC8 = *(_BYTE *)(a1 + 49);
  v15 = dbl_CABA8;
  if ( v14 )
    v11 = v13;
  if ( v12 < v11 )
    byte_CABC8 = v12;
  v16 = (double)(unsigned int)(dword_CB548 - dword_7D3D0);
  if ( dbl_7A1A8 >= v5 || dbl_7A1A8 <= 0.0 )
  {
    v20 = v3 - dbl_CABD0;
    v21 = fabs(v3 - dbl_CABD0);
    if ( byte_CB478 < 0 )
      v22 = 1.0 / (double)(1 << -byte_CB478);
    else
      v22 = (double)(1 << byte_CB478);
    v23 = v21 <= v22;
    if ( v21 > v22 )
      v24 = v3 - dbl_CABD0;
    else
      v24 = v22;
    if ( v23 )
      v20 = v22;
    dbl_CABB0 = sqrt(dbl_CABB0 * dbl_CABB0 + (v24 * v20 - dbl_CABB0 * dbl_CABB0) * 0.125);
    v4 = dword_CABB8;
    if ( dword_CABB8 == 2 )
    {
      sub_1F8F0(5);
      v4 = 1;
      goto LABEL_49;
    }
    if ( dword_CABB8 != 4 )
    {
      if ( dword_CABB8 == 1 )
      {
        sub_1F8F0(4);
      }
      else
      {
        dword_7D5E8 = 0;
        if ( (unsigned __int8)byte_CABC8 >= (unsigned int)(unsigned __int8)byte_7A1B8 )
        {
          v25 = (double)(1 << byte_CABC8);
          if ( v16 < v25 )
            v41 = (double)(1 << byte_CABC8);
          else
            v41 = (double)(unsigned int)(dword_CB548 - dword_7D3D0);
          v15 = dbl_CABA8 + (v3 - dbl_7D3D8) / v41 * 0.25;
        }
        else
        {
          v25 = (double)(1 << byte_CABC8);
        }
        v4 = 1;
        v26 = v25 * 64.0;
        if ( v16 > (double)(1 << byte_7A1B8) )
          v16 = (double)(1 << byte_7A1B8);
        v15 = v15 + v3 * v16 / (v26 * v26);
        sub_1F8F0(5);
      }
      goto LABEL_49;
    }
    if ( v16 >= dbl_7A1B0 )
    {
      v4 = 1;
      sub_1FAE8();
      v15 = v3;
      sub_1F8F0(5);
      goto LABEL_49;
    }
    return 0;
  }
  if ( dword_CABB8 == 4 )
  {
    if ( v16 >= dbl_7A1B0 )
    {
      sub_1FAE8();
      v15 = v3;
      goto LABEL_82;
    }
    return 0;
  }
  if ( dword_CABB8 == 5 )
  {
    v4 = 0;
    snprintf(s, 0x50u, "%+.6f s", v3);
    sub_1D3D8(3, 0, s);
    dword_CABB8 = 3;
    return v4;
  }
  if ( dword_CABB8 != 3 )
    goto LABEL_26;
LABEL_82:
  if ( v16 < dbl_7A1B0 )
    return 0;
LABEL_26:
  snprintf(s, 0x50u, "%+.6f s", v3);
  v17 = sub_1D3D8(12, 0, s);
  v18 = sub_4CDE0(v17);
  sub_2D284(v18);
  dword_CABBC = 0;
  if ( byte_CB478 < 0 )
    v19 = 1.0 / (double)(1 << -byte_CB478);
  else
    v19 = (double)(1 << byte_CB478);
  dbl_CABB0 = v19;
  if ( dword_CABB8 == 1 || (double)(unsigned int)(dword_CB548 - dword_7D604) < dbl_7A1B0 + dbl_7A1B0 )
  {
    sub_1F8F0(4);
    return 2;
  }
  dword_7D604 = dword_CB548;
  v4 = 2;
  sub_1F8F0(5);
LABEL_49:
  if ( dword_CABD8 && dword_7A198 )
  {
    memset(&tntx, 0, sizeof(tntx));
    if ( dword_CAB98 )
    {
      tntx.modes = 16;
    }
    else
    {
      v34 = 0.5;
      v35 = 1;
      tntx.modes = 8253;
      tntx.constant = (unsigned __int8)byte_CABC8;
      tntx.status = 1;
      if ( dbl_7D3D8 < 0.0 )
        v34 = -0.5;
      tntx.offset = (int)(v34 + dbl_7D3D8 * 1000000000.0);
      tntx.maxerror = (unsigned int)((dbl_CB498 + dbl_CB4B8 * 0.5) * 1000000.0);
      tntx.esterror = (unsigned int)(dbl_CABB0 * 1000000.0);
      if ( dword_CABC4 )
      {
        if ( (dword_CABC0 & 4) != 0 )
        {
          v36 = 7;
        }
        else
        {
          sub_1D3D8(13, 0, "PPS enabled");
          v36 = tntx.status | 6;
        }
        tntx.status = v36;
      }
      else
      {
        if ( (dword_CABC0 & 4) != 0 )
        {
          sub_1D3D8(13, 0, "PPS disabled");
          v35 = tntx.status & 0xFFFFFFF9;
        }
        tntx.status = v35;
      }
      if ( byte_CB4B0 == 1 )
      {
        tntx.status |= 0x10u;
      }
      else if ( byte_CB4B0 == 2 )
      {
        tntx.status |= 0x20u;
      }
    }
    v37 = ntp_adjtime(&tntx);
    status = tntx.status;
    if ( v37 == 5 && (tntx.status & 0x100) == 0 )
    {
      sub_1D3D8(13, 0, "PPS no signal");
      status = tntx.status;
    }
    freq = tntx.freq;
    v40 = 1000000000.0;
    dword_CABC0 = status;
    if ( (status & 4) != 0 )
      freq = tntx.jitter;
    v15 = (double)tntx.freq / 6.5536e10;
    if ( (status & 4) != 0 )
      v40 = (double)freq / 1000000000.0;
    dbl_7D3D8 = (double)tntx.offset / 1000000000.0;
    if ( (status & 4) != 0 )
      dbl_CABB0 = v40;
    if ( dword_7D608 != dword_CABCC )
    {
      dword_7D608 = dword_CABCC;
      tntx.constant = dword_CABCC;
      tntx.modes = 128;
      ntp_adjtime(&tntx);
    }
  }
  if ( fabs(v15) > 0.0005 )
    sub_4FE78(5, "frequency error %.0f PPM exceeds tolerance %.0f PPM", v15 * 1000000.0, 500.0);
  v27 = (v15 - dbl_CABA8) * (v15 - dbl_CABA8);
  if ( v15 <= 0.0005 )
  {
    if ( v15 < -0.0005 )
      v15 = -0.0005;
    dbl_CABA8 = v15;
  }
  else
  {
    dbl_CABA8 = 0.0005;
  }
  dbl_CABA0 = sqrt(dbl_CABA0 * dbl_CABA0 + (v27 - dbl_CABA0 * dbl_CABA0) * 0.125);
  dword_CB58C = 1;
  v28 = (unsigned __int8)byte_CABC8;
  if ( fabs(dbl_7D3D8) >= dbl_CABB0 * 4.0 )
  {
    v29 = dword_CABBC - 2 * (unsigned __int8)byte_CABC8;
    v30 = (unsigned __int8)byte_CABC8;
    if ( v29 < -30 )
    {
      v33 = *(unsigned __int8 *)(a1 + 49);
      dword_CABBC = -30;
      if ( v33 >= (unsigned __int8)byte_CABC8 )
        goto LABEL_64;
      LOBYTE(v28) = byte_CABC8 - 1;
      goto LABEL_63;
    }
LABEL_72:
    dword_CABBC = v29;
    goto LABEL_64;
  }
  v29 = (unsigned __int8)byte_CABC8 + dword_CABBC;
  v30 = (unsigned __int8)byte_CABC8;
  if ( v29 <= 30 )
    goto LABEL_72;
  v31 = *(unsigned __int8 *)(a1 + 50);
  dword_CABBC = 30;
  if ( v31 <= (unsigned __int8)byte_CABC8 )
    goto LABEL_64;
  LOBYTE(v28) = byte_CABC8 + 1;
LABEL_63:
  v28 = (unsigned __int8)v28;
  byte_CABC8 = v28;
  v30 = (unsigned __int8)v28;
  dword_CABBC = 0;
LABEL_64:
  if ( v13 != v28 )
  {
    sub_22F68(a1);
    v30 = (unsigned __int8)byte_CABC8;
  }
  sub_2DCC8(v30);
  if ( dword_7CF4C )
    printf(
      "local_clock: offset %.9f jit %.9f freq %.3f stab %.3f poll %d\n",
      dbl_7D3D8,
      dbl_CABB0,
      dbl_CABA8 * 1000000.0,
      dbl_CABA0 * 1000000.0,
      (unsigned __int8)byte_CABC8);
  return v4;
}
