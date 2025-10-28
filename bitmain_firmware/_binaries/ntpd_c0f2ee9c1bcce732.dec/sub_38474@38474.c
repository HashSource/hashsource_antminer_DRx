int __fastcall sub_38474(int a1, int a2)
{
  int v2; // r4
  int *v5; // r6
  int result; // r0
  int v7; // r3

  v2 = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(v2 + 12) = a2;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = -1;
  v5 = (int *)sub_4F524(24);
  memset(v5, 0, 0x18u);
  *(_DWORD *)(v2 + 28) = v5;
  *v5 = sub_383D8(a1);
  strcpy((char *)(v2 + 748), "SHM");
  result = *v5;
  if ( *v5 )
  {
    *(_DWORD *)(result + 28) = -1;
    *(_BYTE *)(a2 + 71) = -1;
    v7 = *v5;
    *(_DWORD *)(v7 + 36) = 0;
    *(_DWORD *)(v7 + 32) = 3;
    *(_DWORD *)(v2 + 36) = "SHM/Shared memory interface";
    return 1;
  }
  return result;
}
