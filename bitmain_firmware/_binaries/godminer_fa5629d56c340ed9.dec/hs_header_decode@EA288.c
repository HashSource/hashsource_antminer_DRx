int __fastcall hs_header_decode(const void *a1, int a2, _DWORD *a3)
{
  int v4; // [sp+0h] [bp-Ch] BYREF
  const void *v5; // [sp+4h] [bp-8h] BYREF

  v5 = a1;
  v4 = a2;
  return hs_header_read(&v5, &v4, a3);
}
