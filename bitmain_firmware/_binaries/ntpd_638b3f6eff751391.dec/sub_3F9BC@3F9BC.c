int __fastcall sub_3F9BC(int a1, int a2)
{
  int v3; // r6
  _DWORD *v5; // r7
  int v6; // r4
  int v7; // r0
  char s[24]; // [sp+4h] [bp-18h] BYREF

  snprintf(s, 0x14u, "/dev/gps%d", a1);
  v3 = sub_27D18(s, 0xDu, 1);
  if ( v3 )
  {
    v5 = (_DWORD *)sub_4F524(212);
    memset(v5, 0, 0xD4u);
    v6 = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(v6 + 12) = a2;
    *(_DWORD *)(v6 + 20) = v3;
    *(_DWORD *)(v6 + 4) = sub_3FAB0;
    *(_DWORD *)(v6 + 16) = 0;
    if ( sub_15FC4((int *)v6) )
    {
      *(_DWORD *)(v6 + 28) = v5;
      v3 = 1;
      *(_BYTE *)(a2 + 71) = -20;
      *(_DWORD *)(a2 + 116) = 5;
      strcpy((char *)(v6 + 748), "GPS");
      *(_DWORD *)(v6 + 36) = "Austron 2201A GPS Receiver";
      v5[52] = 0;
      *v5 = v5 + 1;
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
