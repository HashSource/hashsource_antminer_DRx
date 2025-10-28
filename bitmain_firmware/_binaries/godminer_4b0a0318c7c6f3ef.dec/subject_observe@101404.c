int __fastcall subject_observe(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(result + 1024);
  *(_DWORD *)(result + 4 * v2) = a2;
  *(_DWORD *)(result + 1024) = v2 + 1;
  return result;
}
