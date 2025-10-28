int __fastcall global_idx_init_kas(int a1)
{
  void *v2; // r1
  const char *v3; // r0

  v2 = calloc(0x2881u, 1u);
  LOWORD(v3) = 5820;
  *(_DWORD *)(a1 + 784) = v2;
  HIWORD(v3) = (unsigned int)&unk_159FF8 >> 16;
  return printf(v3);
}
