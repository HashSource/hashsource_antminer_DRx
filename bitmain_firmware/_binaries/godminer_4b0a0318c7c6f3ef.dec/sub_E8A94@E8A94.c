void *__fastcall sub_E8A94(int a1)
{
  void *result; // r0

  *(_QWORD *)(a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  memset((void *)(a1 + 36), 0, 0x20u);
  memset((void *)(a1 + 68), 0, 0x20u);
  memset((void *)(a1 + 100), 0, 0x20u);
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 152) = 0;
  memset((void *)(a1 + 156), 0, 0x20u);
  memset((void *)(a1 + 188), 0, 0x20u);
  result = memset((void *)(a1 + 220), 0, 0x20u);
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  return result;
}
