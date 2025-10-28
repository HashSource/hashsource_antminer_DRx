int __fastcall sub_38DA4(int a1, ssize_t a2)
{
  int v3; // r6
  _DWORD *v5; // r0
  _DWORD *v6; // r7
  int *v7; // r4
  const char *v8; // r2
  char v9[44]; // [sp+0h] [bp-2Ch] BYREF

  snprintf(v9, 0x28u, "/dev/true%d", a1);
  v3 = sub_27D18(v9, 0xDu, 1);
  if ( !v3 )
    return 0;
  v5 = (_DWORD *)sub_4F524(28);
  v6 = v5;
  if ( v5 )
  {
    memset(v5, 0, 0x1Cu);
    v7 = *(int **)(a2 + 60);
    v7[3] = a2;
    v7[5] = v3;
    v7[1] = (int)sub_38EBC;
    v7[4] = 0;
    if ( sub_15FC4(v7) )
    {
      v7[7] = (int)v6;
      *(_BYTE *)(a2 + 71) = -10;
      v7[9] = (int)"Kinemetrics/TrueTime Receiver";
      v7[187] = *(_DWORD *)"TRUE";
      *v6 = 2;
      v6[4] = 0;
      v6[3] = 0;
      sub_388AC(a2, (char *)&byte_68650);
      sub_38920(a2, 0, v8);
      return 1;
    }
    else
    {
      close(v3);
      free(v6);
      return 0;
    }
  }
  else
  {
    close(v3);
    return 0;
  }
}
