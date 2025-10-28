int __fastcall sub_3DDEC(int a1, int a2)
{
  int v3; // r6
  void *v5; // r8
  int *v6; // r4
  unsigned int v7; // r2
  const char *v8; // r1
  char s[24]; // [sp+4h] [bp-18h] BYREF

  snprintf(s, 0x14u, "/dev/gps%d", a1);
  v3 = sub_27D18(s, 0xDu, 1);
  if ( !v3 )
    return 0;
  v5 = (void *)sub_4F524(136);
  memset(v5, 0, 0x88u);
  v6 = *(int **)(a2 + 60);
  v6[3] = a2;
  v6[5] = v3;
  v6[1] = (int)sub_3DF58;
  v6[4] = 0;
  if ( sub_15FC4(v6) )
  {
    v6[7] = (int)v5;
    *(_BYTE *)(a2 + 71) = -20;
    v6[9] = (int)"Arbiter 1088A/B GPS Receiver";
    v6[187] = *(_DWORD *)"GPS ";
    v7 = *(unsigned __int8 *)(a2 + 59);
    if ( v7 > 1 )
    {
      sub_4FE78(5, "ARBITER: Invalid mode %d", v7);
      close(v3);
      v6[5] = -1;
      free(v5);
      return 0;
    }
    else
    {
      if ( dword_7CF4C )
      {
        printf("arbiter: mode = %d.\n", *(unsigned __int8 *)(a2 + 59));
        LOBYTE(v7) = *(_BYTE *)(a2 + 59);
      }
      v8 = "B0";
      if ( (v7 & 1) != 0 )
        v8 = "O0";
      write(v6[5], v8, 2u);
      return 1;
    }
  }
  else
  {
    close(v3);
    v6[5] = -1;
    free(v5);
    return 0;
  }
}
