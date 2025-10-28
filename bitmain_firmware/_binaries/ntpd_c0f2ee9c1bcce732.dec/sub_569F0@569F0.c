int __fastcall sub_569F0(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3

  memset(a1, 0, 0x18u);
  *a1 = 10;
  result = in6addr_any;
  v3 = unk_7CDD4;
  v4 = unk_7CDD8;
  v5 = unk_7CDDC;
  a1[1] = in6addr_any;
  a1[2] = v3;
  a1[3] = v4;
  a1[4] = v5;
  return result;
}
