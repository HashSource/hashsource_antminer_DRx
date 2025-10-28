time_t __fastcall sub_F7D4(int a1, int a2, int a3, int a4)
{
  int v5; // r4
  time_t result; // r0

  *(_BYTE *)(a1 + 61) = 0;
  sub_2B13C(a1 + 44, a2, a3, a4);
  *(_DWORD *)(*(_DWORD *)(a1 + 36) + 96) = 0;
  v5 = *(_DWORD *)(a1 + 36);
  result = time(0);
  *(_DWORD *)(v5 + 240) = result;
  return result;
}
