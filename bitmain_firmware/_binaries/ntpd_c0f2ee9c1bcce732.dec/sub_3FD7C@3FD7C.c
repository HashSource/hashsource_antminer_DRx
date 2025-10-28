int __fastcall sub_3FD7C(int a1, int a2)
{
  int v3; // r5
  void *v5; // r7
  int *v6; // r4
  int v7; // r0
  char s[20]; // [sp+4h] [bp-14h] BYREF

  snprintf(s, 0x14u, "/dev/chronolog%d", a1);
  if ( dword_7CF4C )
    printf("starting Chronolog with device %s\n", s);
  v3 = sub_27D18(s, 0xBu, 0);
  if ( v3 )
  {
    v5 = (void *)sub_4F524(28);
    memset(v5, 0, 0x1Cu);
    v6 = *(int **)(a2 + 60);
    v6[7] = (int)v5;
    v6[3] = a2;
    v6[5] = v3;
    v6[1] = (int)sub_3FE88;
    v6[4] = 0;
    if ( sub_15FC4(v6) )
    {
      v3 = 1;
      *(_BYTE *)(a2 + 71) = -13;
      v6[9] = (int)"Chrono-log K";
      v6[187] = *(_DWORD *)"chronolog";
    }
    else
    {
      v7 = v3;
      v3 = 0;
      close(v7);
      v6[5] = -1;
      free(v5);
      v6[7] = 0;
    }
  }
  return v3;
}
