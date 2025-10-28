unsigned __int16 *__fastcall sub_2A5E0(unsigned __int16 *a1, int a2, int a3)
{
  int *v4; // r6
  int v5; // r12
  int v6; // r4
  int *v7; // r9
  int v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int **v12; // r0
  _BOOL4 v13; // r0
  int v14; // r3
  int v15; // r3
  int v16; // r7
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int **i; // r11
  int v22; // r3
  int v25; // [sp+14h] [bp-20h] BYREF
  int v26; // [sp+18h] [bp-1Ch]
  int v27; // [sp+1Ch] [bp-18h]
  int v28; // [sp+20h] [bp-14h]
  int v29; // [sp+24h] [bp-10h]
  int v30; // [sp+28h] [bp-Ch]
  int v31; // [sp+2Ch] [bp-8h]

  v4 = (int *)(a3 + 8);
  v5 = ((*(unsigned __int16 *)(a3 + 4) << 8) | HIBYTE(*(unsigned __int16 *)(a3 + 4))) & 0xFFF;
  v6 = v5 - 1;
  if ( v5 )
  {
    v7 = (int *)(a3 + 8);
    while ( 1 )
    {
      v25 = 0;
      v26 = 0;
      v27 = 0;
      v28 = 0;
      v29 = 0;
      v30 = 0;
      v31 = 0;
      if ( dword_7FF54 && v7[1] )
      {
        v8 = v7[2];
        v9 = v7[3];
        v10 = v7[4];
        v11 = v7[5];
        LOWORD(v25) = 10;
        v27 = v8;
        v28 = v9;
        v29 = v10;
        v30 = v11;
      }
      else
      {
        v14 = *v7;
        LOWORD(v25) = 2;
        v26 = v14;
      }
      v12 = sub_21500((unsigned __int16 *)&v25, 0, -1, 0);
      --v6;
      v7 = (int *)((char *)v7 + (((unsigned __int16)(*(_WORD *)(a3 + 6) << 8) | HIBYTE(*(_WORD *)(a3 + 6))) & 0xFFF));
      v13 = v12 == 0;
      if ( v6 == -1 )
        break;
      if ( v13 )
        return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    }
    if ( v13 )
      return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 4);
    v15 = (*(unsigned __int16 *)(a3 + 4) << 8) | HIBYTE(*(unsigned __int16 *)(a3 + 4));
    v16 = (v15 & 0xFFF) - 1;
    if ( (v15 & 0xFFF) != 0 )
    {
      do
      {
        v26 = 0;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        v31 = 0;
        if ( dword_7FF54 && v4[1] )
        {
          LOWORD(v25) = 10;
          v17 = v4[3];
          v18 = v4[4];
          v19 = v4[5];
          v27 = v4[2];
          v28 = v17;
          v29 = v18;
          v30 = v19;
        }
        else
        {
          v22 = *v4;
          LOWORD(v25) = 2;
          v26 = v22;
        }
        HIWORD(v25) = 31488;
        for ( i = sub_21500((unsigned __int16 *)&v25, 0, -1, 0);
              i;
              i = sub_21500((unsigned __int16 *)&v25, (int ***)i, -1, 0) )
        {
          sub_22450(i);
        }
        --v16;
        v4 = (int *)((char *)v4 + (((unsigned __int16)(*(_WORD *)(a3 + 6) << 8) | HIBYTE(*(_WORD *)(a3 + 6))) & 0xFFF));
      }
      while ( v16 + 1 > 0 );
    }
  }
  return sub_286DC(a1, a2, *(_BYTE *)(a3 + 2), *(_BYTE *)(a3 + 3), 0);
}
