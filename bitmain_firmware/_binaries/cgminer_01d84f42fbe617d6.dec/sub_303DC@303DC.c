_DWORD *__fastcall sub_303DC(const void *a1, size_t n, int a3)
{
  _DWORD *v3; // r3
  char *v4; // r12
  int v6; // t1
  int v8[33]; // [sp+0h] [bp-A8h] BYREF
  char v9; // [sp+84h] [bp-24h] BYREF

  v3 = &unk_60378;
  v4 = &v9;
  do
  {
    v6 = v3[1];
    ++v3;
    *((_DWORD *)v4 + 1) = v6;
    v4 += 4;
  }
  while ( v3 != (_DWORD *)&unk_60398 );
  v8[0] = 0;
  v8[1] = 0;
  sub_30244(v8, a1, n);
  return sub_302E4(v8, a3);
}
