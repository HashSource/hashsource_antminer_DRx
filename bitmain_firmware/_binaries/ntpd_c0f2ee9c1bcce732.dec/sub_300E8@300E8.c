int __fastcall sub_300E8(__int16 a1, int a2)
{
  _BYTE *v4; // r6
  int v5; // r0
  _DWORD *v6; // r4

  v4 = (_BYTE *)sub_4F524(4);
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v5 = open("/dev/hopf6039", 2);
  v6 = *(_DWORD **)(a2 + 60);
  v6[1] = 0;
  v6[5] = -1;
  v6[3] = a2;
  v6[4] = 0;
  v6[7] = v4;
  dword_CB590 = v5;
  sub_4CBA8(v6 + 54);
  v6[187] = *(_DWORD *)"hopf";
  *(_BYTE *)(a2 + 71) = -10;
  v6[9] = "hopf Elektronik PCI radio board";
  v4[2] = 0;
  *(_WORD *)v4 = a1;
  return 1;
}
