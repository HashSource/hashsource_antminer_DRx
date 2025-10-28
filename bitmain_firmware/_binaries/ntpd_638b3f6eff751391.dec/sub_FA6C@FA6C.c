int __fastcall sub_FA6C(int a1)
{
  __int64 v1; // d0
  int result; // r0

  result = sub_10D64(24);
  *(_DWORD *)result = a1;
  *(_QWORD *)(result + 8) = v1;
  *(_DWORD *)(result + 16) = 286;
  return result;
}
