int __fastcall global_idx_init_kas(int a1)
{
  char *v2; // r12
  char *v3; // r3
  const char *v4; // r0

  v2 = (char *)calloc(0x3081u, 1u);
  v3 = v2 - 8;
  *(_DWORD *)(a1 + 840) = v2;
  do
  {
    *((_QWORD *)v3 + 1) = -1;
    v3 += 8;
  }
  while ( v3 != v2 + 1016 );
  LOWORD(v4) = -23992;
  HIWORD(v4) = (unsigned int)"/backend_ckb_2042.c" >> 16;
  return printf(v4, v2);
}
