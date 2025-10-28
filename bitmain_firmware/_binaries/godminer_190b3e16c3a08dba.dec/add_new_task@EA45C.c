int __fastcall add_new_task(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r3
  int result; // r0

  v3 = a1 + 4096;
  v4 = *(_DWORD *)(a1 + 6144);
  *(_DWORD *)(a1 + 4 * v4) = a2;
  *(_DWORD *)(a1 + 4 * v4 + 1024) = a3;
  result = clock_gettime(1, (struct timespec *)(a1 + 16 * (v4 + 128)));
  ++*(_DWORD *)(v3 + 2048);
  return result;
}
