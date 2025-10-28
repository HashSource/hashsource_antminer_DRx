int __fastcall sub_3C850(int a1, int a2)
{
  int v3; // r6
  int v4; // r3
  int v5; // r0
  int *v6; // r4
  void *v7; // r7
  char s[20]; // [sp+4h] [bp-14h] BYREF

  snprintf(s, 0x14u, "/dev/wwvb%d", a1);
  v3 = sub_27D18(s, 0xDu, 1);
  if ( v3 <= 0 )
    return 0;
  v5 = sub_4F478(0, 16, 0, 1);
  v6 = *(int **)(a2 + 60);
  v6[3] = a2;
  v6[5] = v3;
  v6[1] = (int)sub_3C930;
  v6[4] = 0;
  v7 = (void *)v5;
  if ( sub_15FC4(v6) )
  {
    v4 = 1;
    v6[7] = (int)v7;
    *(_BYTE *)(a2 + 71) = -13;
    v6[9] = (int)"Spectracom WWVB/GPS Receiver";
    v6[187] = *(_DWORD *)"WWVB";
  }
  else
  {
    close(v3);
    v6[5] = -1;
    free(v7);
    return 0;
  }
  return v4;
}
