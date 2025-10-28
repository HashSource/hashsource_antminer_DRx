int __fastcall sub_3D53C(int a1, int a2)
{
  _DWORD *v4; // r5
  _DWORD *v5; // r3

  v4 = (_DWORD *)sub_4F524(32);
  memset(v4, 0, 0x20u);
  v5 = *(_DWORD **)(a2 + 60);
  *v4 = a1;
  v5[1] = sub_3D5C0;
  v5[7] = v4;
  v5[4] = 0;
  v5[3] = a2;
  *(_BYTE *)(a2 + 71) = -10;
  v5[187] = *(_DWORD *)"NONE";
  v5[9] = "Automated Computer Time Service";
  *(_BYTE *)(a2 + 66) = 9;
  v4[7] = v5 + 10;
  return 1;
}
