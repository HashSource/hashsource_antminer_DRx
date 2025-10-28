int __fastcall sub_380B8(int a1, int a2)
{
  int v3; // r6
  _BYTE *v5; // r7
  int v6; // r4
  int v7; // r0
  char s[20]; // [sp+4h] [bp-14h] BYREF

  snprintf(s, 0x14u, "/dev/wwv%d", a1);
  v3 = sub_27D18(s, 0xDu, 1);
  if ( v3 )
  {
    v5 = (_BYTE *)sub_4F524(8);
    *v5 = 0;
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = 0;
    v5[4] = 0;
    v5[5] = 0;
    v5[6] = 0;
    v5[7] = 0;
    v6 = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 12) = a2;
    *(_DWORD *)(v6 + 20) = v3;
    *(_DWORD *)(v6 + 4) = sub_381BC;
    if ( sub_15FC4((int *)v6) )
    {
      *(_DWORD *)(v6 + 28) = v5;
      v3 = 1;
      *(_BYTE *)(a2 + 71) = -10;
      *(_DWORD *)(v6 + 36) = "PSTI/Traconex WWV/WWVH Receiver";
      strcpy((char *)(v6 + 748), "WWV");
      *(_DWORD *)(a2 + 116) = 60;
    }
    else
    {
      v7 = v3;
      v3 = 0;
      close(v7);
      *(_DWORD *)(v6 + 20) = -1;
      free(v5);
    }
  }
  return v3;
}
