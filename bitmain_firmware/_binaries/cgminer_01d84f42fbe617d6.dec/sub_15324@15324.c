int __fastcall sub_15324(int result, int a2, int a3)
{
  int v3; // r4
  int v4; // r3
  _BYTE v5[8]; // [sp+0h] [bp-8h] BYREF

  v3 = result;
  v4 = *(_DWORD *)(result + 368);
  if ( v4 )
  {
    sub_2B13C(v5, a2, a3, v4);
    return sub_2B314(v5, v3 + 368);
  }
  return result;
}
