int __fastcall sub_2F998(int a1, int a2)
{
  int v3; // r7
  int *v5; // r5
  int v6; // r0
  char s[20]; // [sp+4h] [bp-14h] BYREF

  snprintf(s, 0x14u, "/dev/heath%d", a1);
  v3 = sub_27D18(s, dword_65E0C[*(_BYTE *)(a2 + 59) & 3], 128);
  if ( v3 )
  {
    v5 = *(int **)(a2 + 60);
    v5[3] = a2;
    v5[5] = v3;
    v5[1] = (int)sub_2FA64;
    v5[4] = 0;
    if ( sub_15FC4(v5) )
    {
      *(_BYTE *)(a2 + 71) = -4;
      v3 = 1;
      *(_DWORD *)(a2 + 116) = 5;
      v5[187] = 5658455;
      v5[9] = (int)"Heath GC-1000 Most Accurate Clock";
    }
    else
    {
      v6 = v3;
      v3 = 0;
      close(v6);
      v5[5] = -1;
    }
  }
  return v3;
}
