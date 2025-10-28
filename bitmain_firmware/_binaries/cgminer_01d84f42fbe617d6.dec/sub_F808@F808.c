time_t __fastcall sub_F808(int a1, int a2, int a3)
{
  int v4; // r4
  time_t result; // r0

  *(_BYTE *)(a1 + 61) = 1;
  sub_2B13C(a1 + 44, a2, a3, 1);
  *(_DWORD *)(*(_DWORD *)(a1 + 36) + 96) = 0;
  v4 = *(_DWORD *)(a1 + 36);
  result = time(0);
  *(_DWORD *)(v4 + 240) = result;
  return result;
}
