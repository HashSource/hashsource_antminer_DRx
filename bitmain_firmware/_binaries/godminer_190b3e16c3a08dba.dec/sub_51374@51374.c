int __fastcall sub_51374(int a1, int a2, int a3)
{
  _DWORD *v3; // r5
  int v6; // r1
  _DWORD *v7; // r3
  _DWORD *v8; // r2
  int v9; // r6
  int v10; // r4
  int v11; // lr
  int v12; // r12
  int v13; // r4
  int v14; // lr
  int v15; // r12
  int v16; // t1
  int v17; // r12
  int v18; // r0
  int v19; // r2
  int v20; // r0
  int v21; // r12
  int v22; // r2

  v3 = *(_DWORD **)(a1 + 1132);
  if ( v3 )
  {
    if ( !strncasecmp((const char *)(a3 + 66), *(const char **)(a1 + 1132), 0x20u) )
    {
      v6 = *(_DWORD *)(a3 + 30);
      v7 = (_DWORD *)a3;
      *(_DWORD *)(a1 + 1072) = *(_DWORD *)(a3 + 26);
      *(_DWORD *)(a1 + 1076) = v6;
      v8 = (_DWORD *)(a3 + 98);
      v9 = *(_DWORD *)(a3 + 98);
      v10 = *(_DWORD *)(a3 + 102);
      v11 = v8[2];
      v12 = v8[3];
      v3[8] = v9;
      v3[9] = v10;
      v3[10] = v11;
      v3[11] = v12;
      v13 = v8[5];
      v14 = v8[6];
      v15 = v8[7];
      v3[12] = v8[4];
      v3[13] = v13;
      v3[14] = v14;
      v3[15] = v15;
      v16 = *(_DWORD *)((char *)v7 + 34);
      v7 = (_DWORD *)((char *)v7 + 34);
      v17 = v7[1];
      v18 = v7[2];
      v19 = v7[3];
      v3[16] = v16;
      v3[17] = v17;
      v3[18] = v18;
      v3[19] = v19;
      v20 = v7[6];
      v21 = v7[5];
      v22 = v7[7];
      v3[20] = v7[4];
      v3[22] = v20;
      v3[21] = v21;
      v3[23] = v22;
      return 0;
    }
    else
    {
      return sub_512F4();
    }
  }
  else
  {
    printf("invalid pointer(%s)!\n", "work->private");
    return 0;
  }
}
