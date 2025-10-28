int __fastcall sub_30230(int a1, int a2)
{
  int v3; // r8
  _DWORD *v4; // r6
  int v5; // r4
  int v6; // r0
  char s[24]; // [sp+4h] [bp-18h] BYREF

  snprintf(s, 0x14u, "/dev/hpgps%d", a1);
  if ( *(_BYTE *)(a2 + 59) != 1 )
  {
    v3 = sub_27D18(s, 0xDu, 1);
    if ( v3 )
      goto LABEL_3;
    return 0;
  }
  v3 = sub_27D18(s, 0xEu, 257);
  if ( !v3 )
    return 0;
LABEL_3:
  v4 = (_DWORD *)sub_4F524(1864);
  memset(v4, 0, 0x748u);
  v5 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(v5 + 12) = a2;
  *(_DWORD *)(v5 + 20) = v3;
  *(_DWORD *)(v5 + 4) = sub_30380;
  *(_DWORD *)(v5 + 16) = 0;
  if ( sub_15FC4((int *)v5) )
  {
    *(_DWORD *)(v5 + 28) = v4;
    *(_BYTE *)(a2 + 71) = -10;
    *(_DWORD *)(v5 + 36) = "HP 58503A GPS Time and Frequency Reference Receiver";
    strcpy((char *)(v5 + 748), "GPS");
    *((_BYTE *)v4 + 20) = 0;
    v4[1] = 0;
    v6 = *(_DWORD *)(v5 + 20);
    v4[2] = 0;
    *v4 = 2;
    v4[4] = v4 + 5;
    v4[3] = 1;
    if ( write(v6, "*IDN?\r:PTIME:TZONE?\r", 0x14u) != 20 )
      sub_27040(a2, 3);
    return 1;
  }
  else
  {
    close(v3);
    *(_DWORD *)(v5 + 20) = -1;
    free(v4);
    return 0;
  }
}
