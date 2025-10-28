int **__fastcall sub_28030(int **result, int a2)
{
  unsigned int v3; // r4
  unsigned int v4; // r6
  int **v5; // r2
  int *v6; // r12
  int v7; // r7
  int v8; // r0
  int v9; // r1
  int v10; // r11
  int v11; // r7
  int v12; // r11
  unsigned int v13; // r3
  int v14; // r7
  int v15; // r1
  int v16; // r11
  int v17; // r7
  double *v18; // r12
  int v19; // r1
  double v20; // d16
  double v21; // d16
  unsigned int v22; // s13
  int (__fastcall *v23)(_DWORD, int, int **); // r3

  v3 = *(unsigned __int16 *)result;
  if ( v3 == 2 )
  {
    v4 = bswap32((unsigned int)result[1]);
    if ( HIWORD(v4) << 16 == 2139029504 )
    {
      result = sub_21500((unsigned __int16 *)result, 0, -1, 0);
      v5 = result;
      if ( result )
      {
        v6 = result[15];
        if ( v6 )
        {
          *(_BYTE *)a2 = 8;
          v7 = v6[43];
          v8 = v6[52];
          v9 = v6[53];
          *(_WORD *)(a2 + 2) = 63;
          v10 = v6[45];
          *(_DWORD *)(a2 + 8) = v7;
          v11 = v6[44];
          *(_DWORD *)(a2 + 16) = v10;
          v12 = v6[48];
          *(_DWORD *)(a2 + 12) = v11;
          v13 = *(unsigned __int8 *)(a2 + 1);
          *(_DWORD *)(a2 + 20) = v6[46];
          v14 = v6[47];
          *(_DWORD *)(a2 + 72) = v8;
          *(_DWORD *)(a2 + 76) = v9;
          result = (int **)v6[54];
          v15 = v6[55];
          *(_DWORD *)(a2 + 28) = v12;
          v16 = v6[49];
          *(_DWORD *)(a2 + 24) = v14;
          v17 = v6[50];
          *(_DWORD *)(a2 + 32) = v16;
          *(_DWORD *)(a2 + 36) = v17;
          *(_DWORD *)(a2 + 4) = -4;
          *(_DWORD *)(a2 + 80) = result;
          *(_DWORD *)(a2 + 84) = v15;
          if ( v13 > 2 )
          {
            v18 = (double *)(v6 + 62);
            v19 = a2;
            do
            {
              v20 = *v18++;
              if ( v20 >= 0.0 )
              {
                *(_DWORD *)(v19 + 88) = (int)v20;
                *(_DWORD *)(v19 + 92) = (unsigned int)((v20 - (double)(unsigned int)(int)v20) * 4294967300.0);
              }
              else
              {
                v21 = -v20;
                *(_DWORD *)(v19 + 88) = (int)v21;
                v22 = (unsigned int)((v21 - (double)(unsigned int)(int)v21) * 4294967300.0);
                result = (int **)v22;
                *(_DWORD *)(v19 + 92) = v22;
                if ( v22 )
                {
                  *(_DWORD *)(v19 + 92) = -v22;
                  *(_DWORD *)(v19 + 88) = ~(int)v21;
                }
                else
                {
                  *(_DWORD *)(v19 + 88) = -(int)v21;
                }
              }
              ++v3;
              v19 += 8;
            }
            while ( v13 > v3 );
          }
          v23 = (int (__fastcall *)(_DWORD, int, int **))*((_DWORD *)*(&off_65B1C + BYTE1(v4)) + 5);
          if ( v23 )
            return (int **)v23((unsigned __int8)v4, a2, v5);
        }
      }
    }
  }
  return result;
}
