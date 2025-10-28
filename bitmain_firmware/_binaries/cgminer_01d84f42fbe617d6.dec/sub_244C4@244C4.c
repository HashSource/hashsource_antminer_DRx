int __fastcall sub_244C4(int a1, int a2, int a3)
{
  _DWORD *v5; // r5
  time_t v6; // r8
  int v7; // r4
  time_t v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r8
  int v13; // r3
  double v14; // d17
  double v15; // d16
  int result; // r0
  int v17; // r3
  int v18; // r3
  int v19; // r3
  char v20[2052]; // [sp+0h] [bp-804h] BYREF

  v5 = *(_DWORD **)(a1 + 36);
  sub_F808(a1, a2, a3);
  if ( byte_630C1 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    strcpy(v20, "Popping work from get queue to get work");
    sub_38438(7, v20, 0);
  }
  v6 = time(0);
  do
  {
    while ( 1 )
    {
      v7 = sub_17A14(1);
      if ( !sub_2282C(v7, 0) )
        break;
      sub_154EC(v7);
      sub_17ED8();
    }
  }
  while ( !v7 );
  v8 = time(0);
  v11 = (unsigned __int8)byte_630C1;
  v12 = v8 - v6;
  if ( v12 > 0 )
  {
    if ( byte_630C1 )
    {
      if ( byte_632F0 || byte_630C0 || dword_60964 > 6 )
      {
        snprintf(v20, 0x800u, "Get work blocked for %d seconds", v12);
        sub_38438(7, v20, 0);
        v11 = (unsigned __int8)byte_630C1;
      }
      else
      {
        v11 = 1;
      }
    }
    v10 = v5[58];
    v5[58] = v10 + v12;
  }
  if ( v11 && (byte_632F0 || byte_630C0 || dword_60964 > 6) )
  {
    snprintf(v20, 0x800u, "Got work from get queue to get work for thread %d", a2);
    sub_38438(7, v20, 0);
  }
  *(_DWORD *)(v7 + 256) = a2;
  v13 = (unsigned __int8)byte_615C9;
  if ( byte_615C9 )
  {
    v18 = v5[95] + v5[96];
    v5[95] = v18;
    if ( v18 > 0 )
    {
      if ( v18 > 15 )
      {
        v19 = v5[94] + 1;
        v5[96] = -1;
        if ( v19 > 15 )
          v19 = 0;
        v5[94] = v19;
        memcpy((void *)v7, (char *)&unk_615D8 + 160 * v19, 0xA0u);
        goto LABEL_17;
      }
    }
    else
    {
      v5[96] = 1;
    }
    memcpy((void *)v7, (char *)&unk_61FD8 + 160 * v18, 0xA0u);
  }
LABEL_17:
  sub_F7D4(a1, v9, v10, v13);
  v14 = *(double *)(v7 + 376);
  *(_BYTE *)(v7 + 272) = 1;
  v15 = *(double *)(v5[1] + 104);
  result = v7;
  if ( v15 > v14 )
    v15 = v14;
  *(double *)(v7 + 224) = v15;
  v17 = v5[1];
  if ( v15 < *(double *)(v17 + 120) )
    v15 = *(double *)(v17 + 120);
  *(double *)(v7 + 224) = v15;
  return result;
}
