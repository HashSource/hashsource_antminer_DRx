int __fastcall sub_1C824(int a1, int a2, int a3, char a4)
{
  int *v8; // r0
  int *v9; // r12
  int v11; // r3
  int *v12; // r2
  unsigned int v13; // r11
  int v14; // r0
  int v15; // r2
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int *v20; // r8
  int v21; // r0
  int v22; // r1
  int v23; // r2

  v8 = sub_1BA48((unsigned __int16 *)a1, a2);
  v9 = v8;
  if ( v8 )
  {
    if ( a3 == 1 )
    {
      if ( (*((_BYTE *)v8 + 50) & 4) == 0 )
      {
        *((_BYTE *)v8 + 50) = 1;
        goto LABEL_6;
      }
    }
    else
    {
      if ( a3 != 2 )
      {
        if ( !a3 )
          *((_BYTE *)v8 + 50) = 5;
        goto LABEL_6;
      }
      if ( (*((_BYTE *)v8 + 50) & 4) == 0 )
      {
        *((_BYTE *)v8 + 50) = 3;
LABEL_6:
        v11 = dword_CB548;
        ++v8[11];
        v8[8] = v11;
        return 1;
      }
    }
    return 1;
  }
  v12 = (int *)&unk_CAADC;
  v13 = dword_CB548;
  v14 = dword_CAAD4;
  do
  {
    if ( (*((_BYTE *)v12 + 50) & 5) == 1 && v12[8] + 3600 > v13 )
    {
      --v14;
      *((_BYTE *)v12 + 50) = 0;
      v9 = v12;
      goto LABEL_24;
    }
    if ( (*((_BYTE *)v12 + 50) & 1) == 0 )
      goto LABEL_23;
    if ( (*((_BYTE *)v12 + 50) & 4) != 0 )
      goto LABEL_24;
    if ( !a3 )
    {
      if ( !v9 )
        goto LABEL_23;
      if ( (*((_BYTE *)v9 + 50) & 2) != 0 )
      {
        if ( (*((_BYTE *)v12 + 50) & 2) == 0 )
          goto LABEL_24;
      }
      else if ( (*((_BYTE *)v12 + 50) & 2) != 0 )
      {
        goto LABEL_23;
      }
LABEL_20:
      if ( v9[10] < (unsigned int)v12[10] )
        v9 = v12;
      goto LABEL_24;
    }
    if ( a3 == 1 && (*((_BYTE *)v12 + 50) & 2) != 0 )
    {
      if ( !v9 )
      {
LABEL_23:
        v9 = v12;
        goto LABEL_24;
      }
      if ( (*((_BYTE *)v9 + 50) & 1) != 0 )
        goto LABEL_20;
    }
LABEL_24:
    v12 += 13;
  }
  while ( v12 < &dword_CAB78 );
  dword_CAAD4 = v14;
  if ( !v9 )
    return 0;
  v15 = dword_CB548;
  v9[11] = 0;
  v9[10] = v15;
  v9[8] = v15;
  v9[9] = 0;
  *((_WORD *)v9 + 24) = 1;
  v16 = *(_DWORD *)a1;
  v17 = *(_DWORD *)(a1 + 4);
  v18 = *(_DWORD *)(a1 + 8);
  v19 = *(_DWORD *)(a1 + 12);
  v20 = (int *)(a1 + 16);
  *v9 = v16;
  v9[1] = v17;
  v9[2] = v18;
  v9[3] = v19;
  if ( !a3 )
    LOBYTE(v19) = 5;
  v21 = *v20;
  v22 = v20[1];
  v23 = v20[2];
  v9[7] = a2;
  *((_BYTE *)v9 + 51) = a4;
  if ( !a3 )
    *((_BYTE *)v9 + 50) = v19;
  v9[4] = v21;
  v9[5] = v22;
  v9[6] = v23;
  if ( a3 )
  {
    if ( a3 == 2 )
      *((_BYTE *)v9 + 50) = 3;
    else
      *((_BYTE *)v9 + 50) = 1;
  }
  ++dword_CAAD4;
  return 1;
}
