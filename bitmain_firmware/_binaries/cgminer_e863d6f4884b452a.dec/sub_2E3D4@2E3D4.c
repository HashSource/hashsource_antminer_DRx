int __fastcall sub_2E3D4(char *a1, size_t n, _BYTE *a3)
{
  _DWORD *v3; // r3
  char *v5; // r2
  int v6; // t1
  _DWORD v8[34]; // [sp+0h] [bp-A8h] BYREF
  char v9; // [sp+88h] [bp-20h] BYREF

  v3 = &unk_6CD70;
  v5 = &v9;
  do
  {
    v6 = v3[1];
    ++v3;
    *(_DWORD *)v5 = v6;
    v5 += 4;
  }
  while ( v3 != (_DWORD *)&unk_6CD90 );
  v8[0] = 0;
  v8[1] = 0;
  sub_2E2B0((unsigned __int8 *)v8, a1, n);
  return sub_2E320(v8, a3);
}
