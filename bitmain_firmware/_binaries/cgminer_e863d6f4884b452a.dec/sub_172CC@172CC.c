time_t __fastcall sub_172CC(int a1)
{
  int v2; // r4
  time_t result; // r0

  *(_BYTE *)(a1 + 61) = 0;
  sub_2A69C(a1 + 44);
  *(_DWORD *)(*(_DWORD *)(a1 + 36) + 96) = 0;
  v2 = *(_DWORD *)(a1 + 36);
  result = time(0);
  *(_DWORD *)(v2 + 240) = result;
  return result;
}
