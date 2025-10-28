int __fastcall sub_9C90(int a1)
{
  int v1; // r0
  int v2; // r4
  _DWORD optval[2]; // [sp+8h] [bp-8h] BYREF

  v1 = socket(1, a1 | 0x80000, 0);
  v2 = v1;
  if ( v1 < 0 )
    return -*_errno_location();
  sub_998C(v1, 0x800000u);
  sub_9B34(optval, 60000000);
  setsockopt(v2, 1, 21, optval, 8u);
  return v2;
}
