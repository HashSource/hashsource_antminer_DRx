int __fastcall sub_29F78(int a1, char *a2)
{
  int v3; // t1
  int v5; // r7
  int v6; // r6
  int v7; // r1
  _DWORD v8[6]; // [sp+4h] [bp-20h] BYREF
  char v9; // [sp+1Ch] [bp-8h]

  memset(v8, 0, sizeof(v8));
  v9 = 0;
  sub_29EF0(v8, a2);
  *(_BYTE *)(a1 + 2) = 20;
  v3 = *(_DWORD *)((char *)v8 + 1);
  *(_BYTE *)a1 = 118;
  *(_BYTE *)(a1 + 1) = -87;
  *(_DWORD *)(a1 + 3) = v3;
  v5 = *(_DWORD *)((char *)&v8[2] + 1);
  v6 = *(_DWORD *)((char *)&v8[3] + 1);
  *(_DWORD *)(a1 + 7) = *(_DWORD *)((char *)&v8[1] + 1);
  v7 = *(_DWORD *)((char *)&v8[4] + 1);
  *(_DWORD *)(a1 + 11) = v5;
  *(_DWORD *)(a1 + 15) = v6;
  *(_DWORD *)(a1 + 19) = v7;
  *(_BYTE *)(a1 + 23) = -120;
  *(_BYTE *)(a1 + 24) = -84;
  return 172;
}
