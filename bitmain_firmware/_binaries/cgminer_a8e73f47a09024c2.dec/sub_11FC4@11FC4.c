int __fastcall sub_11FC4(int result)
{
  int v1; // r4
  _BYTE v2[8]; // [sp+0h] [bp-8h] BYREF

  v1 = result;
  if ( *(_DWORD *)(result + 368) )
  {
    sub_30050(v2);
    return sub_3022C(v2, v1 + 368);
  }
  return result;
}
