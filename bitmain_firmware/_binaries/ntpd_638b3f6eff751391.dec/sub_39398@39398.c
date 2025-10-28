int __fastcall sub_39398(int a1, int a2)
{
  int v3; // r5
  _BYTE *v5; // r0
  void *v6; // r7
  int *v7; // r4
  int v8; // r0
  int v9; // r0
  char s[20]; // [sp+4h] [bp-14h] BYREF

  sprintf(s, "/dev/wwvb%d", a1);
  v3 = sub_27D18(s, 0xDu, 1);
  if ( v3 )
  {
    v5 = (_BYTE *)sub_4F524(12);
    v6 = v5;
    if ( v5 )
    {
      *v5 = 0;
      v5[1] = 0;
      v5[2] = 0;
      v5[3] = 0;
      v5[4] = 0;
      v5[5] = 0;
      v5[6] = 0;
      v5[7] = 0;
      v5[8] = 0;
      v5[9] = 0;
      v5[10] = 0;
      v5[11] = 0;
      v7 = *(int **)(a2 + 60);
      v7[4] = 0;
      v7[7] = (int)v5;
      v7[3] = a2;
      v7[5] = v3;
      v7[1] = (int)sub_394B4;
      if ( sub_15FC4(v7) )
      {
        *(_BYTE *)(a2 + 71) = -10;
        v3 = 1;
        *(_DWORD *)(a2 + 116) = 5;
        v7[9] = (int)"Ultralink WWVB Receiver";
        v7[187] = *(_DWORD *)"WWVB";
      }
      else
      {
        v8 = v3;
        v3 = 0;
        close(v8);
        free(v6);
      }
    }
    else
    {
      v9 = v3;
      v3 = 0;
      close(v9);
    }
  }
  return v3;
}
