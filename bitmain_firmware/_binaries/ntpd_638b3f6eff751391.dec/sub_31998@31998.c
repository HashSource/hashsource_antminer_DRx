int __fastcall sub_31998(_DWORD *a1)
{
  int v1; // r3
  int v3; // r8
  int v4; // r11
  int v5; // r4
  double v6; // d16
  int v7; // s13
  int v8; // r2
  unsigned int v9; // r2
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r0
  int result; // r0
  int v16; // r1
  double *v17; // r6
  int v18; // r5
  unsigned int v19; // r1
  double v20; // d8
  unsigned int v21; // r2
  double v22; // d16
  int v23; // r3
  int v24; // r1
  int v25; // r0
  int v26; // r2
  __int64 v27; // r2
  int v28; // r3
  int v29; // r3
  double v30; // d16
  int v31; // r0
  double v32; // d8
  double v33; // d16
  int v34; // r3
  double v35; // d16
  int v36; // s13
  unsigned int v37; // r2

  v1 = a1[22];
  v3 = a1[2];
  v4 = *(_DWORD *)(v3 + 60);
  v5 = *(_DWORD *)(v4 + 28);
  v6 = (double)v1 / 8000.0;
  if ( v6 < 0.0 )
  {
    v35 = -v6;
    v36 = (int)v35;
    v37 = (unsigned int)((v35 - (double)(unsigned int)(int)v35) * 4294967300.0);
    if ( !v37 )
    {
      v7 = -v36;
      goto LABEL_45;
    }
    v8 = -v37;
    v7 = ~v36;
  }
  else
  {
    v7 = (int)v6;
    v8 = (unsigned int)((v6 - (double)(unsigned int)(int)v6) * 4294967300.0);
  }
  if ( !v8 )
  {
LABEL_45:
    a1[19] -= v7;
    goto LABEL_9;
  }
  v9 = -v8;
  v10 = a1[20];
  v11 = (unsigned __int16)v10 + (unsigned __int16)v9;
  v12 = HIWORD(v10) + HIWORD(v9);
  v13 = a1[19];
  if ( (v11 & 0x10000) != 0 )
    ++v12;
  a1[20] = (unsigned __int16)v11 | (v12 << 16);
  v14 = ~v7 + v13;
  if ( (v12 & 0x10000) != 0 )
    ++v14;
  a1[19] = v14;
LABEL_9:
  result = a1[19];
  v16 = a1[20];
  *(_DWORD *)(v5 + 24) = result;
  *(_DWORD *)(v5 + 28) = v16;
  if ( v1 > 0 )
  {
    v17 = (double *)(v5 + 2824);
    v18 = 0;
    while ( 1 )
    {
      v32 = *(double *)(v5 + 8 * (unsigned __int8)~*((_BYTE *)a1 + v18 + 92) + 776);
      v33 = (*(double *)(v5 + 712) + dbl_CAB90) / 8000.0 + *(double *)(v5 + 704) + *(double *)(v4 + 736) / 1000000.0;
      *(double *)(v5 + 704) = v33;
      if ( v33 >= 0.5 )
      {
        *(double *)(v5 + 704) = v33 - 1.0;
      }
      else
      {
        if ( v33 < -0.5 )
        {
          *(double *)(v5 + 704) = v33 + 1.0;
          sub_31724(v3);
        }
        sub_31724(v3);
      }
      v19 = *(_DWORD *)(v5 + 28);
      v20 = fabs(v32);
      v21 = *(_DWORD *)(v5 + 36);
      v22 = *v17;
      v23 = (unsigned __int16)v19 + (unsigned __int16)v21;
      v24 = HIWORD(v19) + HIWORD(v21);
      if ( (v23 & 0x10000) != 0 )
        ++v24;
      v25 = *(_DWORD *)(v5 + 32) + *(_DWORD *)(v5 + 24);
      if ( (v24 & 0x10000) != 0 )
        ++v25;
      if ( v20 > *v17 )
        v22 = v20;
      v26 = *(_DWORD *)(v5 + 2844) + 1;
      *(_DWORD *)(v5 + 24) = v25;
      result = (unsigned __int64)(274877907LL * v26) >> 32;
      *(_DWORD *)(v5 + 28) = (unsigned __int16)v23 | (v24 << 16);
      *(_DWORD *)(v5 + 2844) = v26 % 8000;
      *v17 = (v20 - v22) / 1000.0 + v22;
      if ( v26 != 8000 * (v26 / 8000) )
        goto LABEL_26;
      if ( *(double *)(v5 + 752) <= *(double *)(v5 + 760) )
      {
        v27 = 0x3F7930BE0DED288DLL;
        *(_DWORD *)(v5 + 3160) = 10;
      }
      else
      {
        v27 = 0x3F6E646F15619114LL;
        *(_DWORD *)(v5 + 3160) = 1;
      }
      *(_QWORD *)(v5 + 3152) = v27;
      v28 = *(_DWORD *)(v3 + 60);
      *(_QWORD *)(v5 + 760) = 0;
      *(_QWORD *)(v5 + 752) = 0;
      v29 = *(_DWORD *)(v28 + 28);
      v30 = *(double *)(v29 + 3000);
      if ( v30 >= 2000.0 )
        break;
      v31 = *(_DWORD *)(v29 + 2836) + 4;
      if ( v31 <= 255 )
        goto LABEL_24;
      *(_DWORD *)(v29 + 2836) = 255;
LABEL_25:
      result = sub_4D950();
LABEL_26:
      if ( a1[22] <= ++v18 )
        goto LABEL_37;
    }
    if ( v30 <= 3000.0 )
      goto LABEL_25;
    v31 = *(_DWORD *)(v29 + 2836) - 4;
    if ( v31 < 0 )
      v31 = 0;
LABEL_24:
    *(_DWORD *)(v29 + 2836) = v31;
    goto LABEL_25;
  }
LABEL_37:
  if ( (*(_BYTE *)(v4 + 752) & 2) != 0 )
    *(_DWORD *)(v5 + 2832) = 2;
  else
    *(_DWORD *)(v5 + 2832) = 1;
  v34 = *(_BYTE *)(v4 + 752) & 4;
  if ( (*(_BYTE *)(v4 + 752) & 4) != 0 )
    v34 = 127;
  *(_DWORD *)(v5 + 2840) = v34;
  return result;
}
