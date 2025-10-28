int __fastcall global_idx_init_ks5(int a1)
{
  char *v2; // r12
  char *v3; // r3

  v2 = (char *)calloc(0x3081u, 1u);
  v3 = v2 - 8;
  *(_DWORD *)(a1 + 840) = v2;
  do
  {
    *((_QWORD *)v3 + 1) = -1;
    v3 += 8;
  }
  while ( v3 != v2 + 1016 );
  return printf("__custom_data init %p\n", v2);
}
