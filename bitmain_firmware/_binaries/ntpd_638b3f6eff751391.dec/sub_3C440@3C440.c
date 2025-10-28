int __fastcall sub_3C440(_DWORD *a1)
{
  int v1; // r2
  int v3; // r6
  int v4; // r7
  double *v5; // r4
  double v6; // d16
  int v7; // s13
  int v8; // r3
  unsigned int v9; // r3
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r0
  int v14; // r0
  int result; // r0
  int v16; // r1
  int v17; // r5
  double v18; // d16
  unsigned int v19; // r3
  unsigned int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  bool v24; // zf
  int v25; // r3
  double v26; // d8
  int v27; // r3
  double v28; // d16
  int v29; // s13
  unsigned int v30; // r3

  v1 = a1[22];
  v3 = a1[2];
  v4 = *(_DWORD *)(v3 + 60);
  v5 = *(double **)(v4 + 28);
  v6 = (double)v1 / 8000.0;
  if ( v6 < 0.0 )
  {
    v28 = -v6;
    v29 = (int)v28;
    v30 = (unsigned int)((v28 - (double)(unsigned int)(int)v28) * 4294967300.0);
    if ( !v30 )
    {
      v7 = -v29;
      goto LABEL_35;
    }
    v8 = -v30;
    v7 = ~v29;
  }
  else
  {
    v7 = (int)v6;
    v8 = (unsigned int)((v6 - (double)(unsigned int)(int)v6) * 4294967300.0);
  }
  if ( !v8 )
  {
LABEL_35:
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
  *(_DWORD *)v5 = result;
  *((_DWORD *)v5 + 1) = v16;
  if ( v1 > 0 )
  {
    v17 = 0;
    do
    {
      v26 = v5[(unsigned __int8)~*((_BYTE *)a1 + v17 + 92) + 8];
      if ( v26 > 6000.0 )
      {
        ++*((_DWORD *)v5 + 531);
      }
      else if ( v26 < -6000.0 )
      {
        ++*((_DWORD *)v5 + 531);
      }
      v18 = (v5[3] + dbl_CAB90) / 8000.0 + v5[2];
      v5[2] = v18;
      if ( v18 < 0.5 )
      {
        if ( v18 < -0.5 )
        {
          v5[2] = v18 + 1.0;
          sub_3B148(v3);
        }
        sub_3B148(v3);
      }
      else
      {
        v5[2] = v18 - 1.0;
      }
      v19 = *((_DWORD *)v5 + 1);
      ++v17;
      v20 = *((_DWORD *)v5 + 3);
      result = *((_DWORD *)v5 + 2);
      v21 = (unsigned __int16)v19 + (unsigned __int16)v20;
      v22 = HIWORD(v19) + HIWORD(v20);
      v23 = *(_DWORD *)v5;
      if ( (v21 & 0x10000) != 0 )
        ++v22;
      v24 = (v22 & 0x10000) == 0;
      *((_DWORD *)v5 + 1) = (unsigned __int16)v21 | (v22 << 16);
      v25 = result + v23;
      if ( !v24 )
        ++v25;
      *(_DWORD *)v5 = v25;
    }
    while ( a1[22] > v17 );
  }
  if ( (*(_BYTE *)(v4 + 752) & 2) != 0 )
    *((_DWORD *)v5 + 528) = 2;
  else
    *((_DWORD *)v5 + 528) = 1;
  v27 = *(_BYTE *)(v4 + 752) & 4;
  if ( (*(_BYTE *)(v4 + 752) & 4) != 0 )
    v27 = 127;
  *((_DWORD *)v5 + 530) = v27;
  return result;
}
