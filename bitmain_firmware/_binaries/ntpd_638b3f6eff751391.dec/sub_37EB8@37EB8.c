int __fastcall sub_37EB8(int a1, int a2)
{
  int v4; // r4
  int v5; // r1
  int v6; // r12
  char v8[128]; // [sp+0h] [bp-80h] BYREF

  snprintf(v8, 0x80u, "/dev/pcfclocks/%d", a1);
  v4 = open(v8, 0);
  if ( v4 == -1 )
  {
    snprintf(v8, 0x80u, "/dev/pcfclock%d", a1);
    v4 = open(v8, 0);
  }
  if ( dword_7CF4C )
    printf("starting PCF with device %s\n", v8);
  if ( v4 == -1 )
    return 0;
  v6 = *(_DWORD *)(a2 + 60);
  v5 = 1;
  *(_DWORD *)(v6 + 12) = a2;
  *(_DWORD *)(v6 + 20) = v4;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 16) = 0;
  *(_BYTE *)(a2 + 71) = -1;
  *(_DWORD *)(v6 + 728) = -515396076;
  *(_DWORD *)(v6 + 732) = 1069945978;
  *(_DWORD *)(v6 + 36) = "Conrad parallel port radio clock";
  strcpy((char *)(v6 + 748), "PCF");
  return v5;
}
