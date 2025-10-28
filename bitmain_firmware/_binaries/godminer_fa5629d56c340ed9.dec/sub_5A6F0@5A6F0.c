unsigned int __fastcall sub_5A6F0(unsigned int *a1)
{
  unsigned int v2; // lr
  int v3; // r3
  unsigned int v4; // r12
  int v5; // r0
  unsigned int v6; // r3
  int v7; // r1
  int v8; // r3

  v2 = a1[1];
  v3 = a1[2];
  v4 = HIWORD(*a1) + 36969 * (unsigned __int16)*a1;
  *a1 = v4;
  v5 = HIWORD(v2) + 18000 * (unsigned __int16)v2;
  v6 = v3 ^ (v3 << 17) ^ ((v3 ^ (unsigned int)(v3 << 17)) >> 13);
  v7 = (int)&loc_12D684 + ((_DWORD)&elf_hash_bucket[772] + 1) * a1[3] + 3;
  a1[1] = v5;
  v8 = v6 ^ (32 * v6);
  a1[3] = v7;
  a1[2] = v8;
  return ((v5 + (v4 << 16)) ^ v7) + v8;
}
